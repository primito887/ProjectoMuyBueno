<?php
session_start();

$token=mysqli_connect("localhost","root","","login");
$instrucion="select * from usuarios where correo='$_POST[email]' and clave='$_POST[password]'";
$tabla=mysqli_query($token,$instrucion);
$datos=mysqli_num_rows($tabla);
if($datos>1){
   while($fila=mysqli_fetch_array($tabla)){
      $_SESSION['usuario']=$fila['correo'];
      $_SESSION['clave']=$fila['clave'];
   }
header("Location:registros.html");
}else{
  header("Location:index.html");
}



?>