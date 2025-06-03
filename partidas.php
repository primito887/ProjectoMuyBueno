<?php
// Conexión básica (ajusta los datos)
$conexion = mysql_connect("localhost", "root", "") or die("No se pudo conectar");
mysql_select_db("partidas_nacimiento", $conexion);

// Recibe los datos del formulario
$padres = $_POST['padres'];
$nombre = $_POST['nombre'];
$apellido = $_POST['apellido'];
$sexo = $_POST['sexo'];
$telefono = $_POST['telefono'];
$nacionalidad = $_POST['Nacionalidad'];
$lugar = $_POST['grado'];
$hora = $_POST['hora'];

// Inserta en la tabla (ajusta el nombre de la tabla y campos)
$sql = "INSERT INTO partidas_nacimiento (padres, nombre, apellido, sexo, telefono, nacionalidad, lugar, hora)
        VALUES ('$padres', '$nombre', '$apellido', '$sexo', '$telefono', '$nacionalidad', '$lugar', '$hora')";

$resultado = mysql_query($sql, $conexion);

if($resultado){
    echo "Registro guardado correctamente.";
} else {
    echo "Error al guardar.";
}

mysql_close($conexion);
?>