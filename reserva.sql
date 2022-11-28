-- phpMyAdmin SQL Dump
-- version 5.2.0
-- https://www.phpmyadmin.net/
--
-- Servidor: 127.0.0.1
-- Tiempo de generación: 28-11-2022 a las 23:10:57
-- Versión del servidor: 10.4.24-MariaDB
-- Versión de PHP: 8.1.6

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de datos: `reserva`
--

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `animal`
--

CREATE TABLE `animal` (
  `id` int(11) NOT NULL,
  `nombre` varchar(150) NOT NULL,
  `especie_id` int(11) NOT NULL,
  `habitat_id` int(11) NOT NULL,
  `fecha_alta` date NOT NULL,
  `estado_animal` varchar(250) NOT NULL,
  `estado` int(11) NOT NULL DEFAULT 1
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `animal`
--

INSERT INTO `animal` (`id`, `nombre`, `especie_id`, `habitat_id`, `fecha_alta`, `estado_animal`, `estado`) VALUES
(1, 'Pedro', 1, 1, '0000-00-00', 'Bien', 1),
(2, 'Nemo', 1, 1, '0000-00-00', 'Medio', 1),
(3, 'Arturo', 6, 7, '0000-00-00', 'Bien', 1);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `area`
--

CREATE TABLE `area` (
  `id` int(11) NOT NULL,
  `nombre` varchar(100) NOT NULL,
  `estado` int(11) NOT NULL DEFAULT 1
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `area`
--

INSERT INTO `area` (`id`, `nombre`, `estado`) VALUES
(1, 'Mantenimiento', 0),
(2, 'Atencion Medica', 0),
(3, 'Cuidadores', 0),
(4, 'Aves', 1),
(5, 'Acuario', 1),
(6, 'Selva', 1),
(7, 'Sabana', 1);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `comida`
--

CREATE TABLE `comida` (
  `id` int(11) NOT NULL,
  `nombre` varchar(150) NOT NULL,
  `estado` int(11) NOT NULL DEFAULT 1
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `comida`
--

INSERT INTO `comida` (`id`, `nombre`, `estado`) VALUES
(1, 'Carne', 1),
(2, 'Alpiste', 0),
(3, 'Alpiste', 0),
(4, 'Alpiste', 0),
(5, 'Alpiste', 1),
(6, 'Pasto', 1),
(7, 'Pescado', 1),
(8, 'Insecto', 1);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `especie`
--

CREATE TABLE `especie` (
  `id` int(11) NOT NULL,
  `tipo` varchar(150) NOT NULL,
  `estado` int(11) NOT NULL DEFAULT 1
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `especie`
--

INSERT INTO `especie` (`id`, `tipo`, `estado`) VALUES
(1, 'Leon', 1),
(2, 'Gato', 0),
(3, 'Pez Payaso', 1),
(4, 'Tiburon', 1),
(5, 'Tigre', 1),
(6, 'Camello', 1),
(7, 'Camaleon', 1),
(8, 'Conejo', 1);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `habitat`
--

CREATE TABLE `habitat` (
  `id` int(11) NOT NULL,
  `nombre` varchar(100) NOT NULL,
  `estado` int(11) NOT NULL DEFAULT 1
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `habitat`
--

INSERT INTO `habitat` (`id`, `nombre`, `estado`) VALUES
(1, 'Felinos', 1),
(2, 'Peces Agua Caliente', 1),
(3, 'Peces Agua Fria', 1),
(4, 'a', 0),
(5, 'Aves', 1),
(6, 'Pingüinos', 1),
(7, 'Mamiferos', 1);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `horario_alimentacion`
--

CREATE TABLE `horario_alimentacion` (
  `id` int(11) NOT NULL,
  `animal_id` int(11) NOT NULL,
  `usuario_id` int(11) NOT NULL,
  `horario` time NOT NULL,
  `comida_id` int(11) NOT NULL,
  `estado` int(11) NOT NULL DEFAULT 1
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `horario_alimentacion`
--

INSERT INTO `horario_alimentacion` (`id`, `animal_id`, `usuario_id`, `horario`, `comida_id`, `estado`) VALUES
(1, 2, 2, '04:00:00', 7, 1),
(2, 1, 1, '12:31:23', 1, 1),
(3, 1, 1, '00:00:00', 1, 1),
(4, 1, 1, '838:59:59', 1, 1);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `licencia`
--

CREATE TABLE `licencia` (
  `id` int(11) NOT NULL,
  `usuario_id` int(11) NOT NULL,
  `descripcion` varchar(250) NOT NULL,
  `fecha_inicio` varchar(250) NOT NULL,
  `fecha_fin` varchar(250) NOT NULL,
  `estado` int(11) NOT NULL DEFAULT 1
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `licencia`
--

INSERT INTO `licencia` (`id`, `usuario_id`, `descripcion`, `fecha_inicio`, `fecha_fin`, `estado`) VALUES
(1, 2, 'Dolor dedo del pie', '27/11/2022', '27/12/2022', 1);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `mantenimiento`
--

CREATE TABLE `mantenimiento` (
  `id` int(11) NOT NULL,
  `descripcion` varchar(500) NOT NULL,
  `habitat_id` int(11) NOT NULL,
  `area_id` int(11) NOT NULL,
  `usuario_id` int(11) NOT NULL,
  `estado` int(11) NOT NULL DEFAULT 1
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `mantenimiento`
--

INSERT INTO `mantenimiento` (`id`, `descripcion`, `habitat_id`, `area_id`, `usuario_id`, `estado`) VALUES
(1, 'Pinchadura', 5, 2, 2, 1),
(2, 'Jaula Rota', 4, 5, 2, 1);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `revision`
--

CREATE TABLE `revision` (
  `id` int(11) NOT NULL,
  `animal_id` int(11) NOT NULL,
  `motivo` varchar(250) NOT NULL,
  `usuario_id` int(11) NOT NULL,
  `estado` int(11) NOT NULL DEFAULT 1
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `revision`
--

INSERT INTO `revision` (`id`, `animal_id`, `motivo`, `usuario_id`, `estado`) VALUES
(1, 2, 'sChica', 2, 1),
(2, 1, '123', 1, 1);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `rol`
--

CREATE TABLE `rol` (
  `id` int(11) NOT NULL,
  `nombre` varchar(100) NOT NULL,
  `estado` int(11) NOT NULL DEFAULT 1
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `rol`
--

INSERT INTO `rol` (`id`, `nombre`, `estado`) VALUES
(1, 'Admin', 0),
(2, 'Cuidador/a', 1),
(3, 'Veterinario/a', 1),
(4, 'Mantenimiento/a', 1),
(5, 'Mantenimientoss', 0);

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `usuario`
--

CREATE TABLE `usuario` (
  `id` int(11) NOT NULL,
  `nombre` varchar(100) NOT NULL,
  `apellido` varchar(100) NOT NULL,
  `dni` int(10) NOT NULL,
  `nacimiento` varchar(250) NOT NULL,
  `direccion` varchar(100) NOT NULL,
  `fecha_alta` date NOT NULL,
  `fecha_baja` int(11) DEFAULT NULL,
  `estado` int(11) NOT NULL DEFAULT 1,
  `matricula` varchar(100) NOT NULL,
  `area_id` int(11) NOT NULL,
  `contraseña` varchar(150) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Volcado de datos para la tabla `usuario`
--

INSERT INTO `usuario` (`id`, `nombre`, `apellido`, `dni`, `nacimiento`, `direccion`, `fecha_alta`, `fecha_baja`, `estado`, `matricula`, `area_id`, `contraseña`) VALUES
(1, 'Admin', 'Admin', 123123123, '04/02/19995', 'San Salvador 7020', '2022-11-01', NULL, 1, '123', 4, 'a'),
(2, 'Agustina', 'Valiente', 42526390, '14/01/2001', 'Magallanes 4252', '0000-00-00', NULL, 1, '6598', 1, ''),
(3, '12', '123', 123123, '123', '23', '0000-00-00', NULL, 0, '123', 1, '');

-- --------------------------------------------------------

--
-- Estructura de tabla para la tabla `usuario_rol`
--

CREATE TABLE `usuario_rol` (
  `id` int(11) NOT NULL,
  `usuario_id` int(11) NOT NULL,
  `rol_id` int(11) NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Índices para tablas volcadas
--

--
-- Indices de la tabla `animal`
--
ALTER TABLE `animal`
  ADD PRIMARY KEY (`id`);

--
-- Indices de la tabla `area`
--
ALTER TABLE `area`
  ADD PRIMARY KEY (`id`);

--
-- Indices de la tabla `comida`
--
ALTER TABLE `comida`
  ADD PRIMARY KEY (`id`);

--
-- Indices de la tabla `especie`
--
ALTER TABLE `especie`
  ADD PRIMARY KEY (`id`);

--
-- Indices de la tabla `habitat`
--
ALTER TABLE `habitat`
  ADD PRIMARY KEY (`id`);

--
-- Indices de la tabla `horario_alimentacion`
--
ALTER TABLE `horario_alimentacion`
  ADD PRIMARY KEY (`id`);

--
-- Indices de la tabla `licencia`
--
ALTER TABLE `licencia`
  ADD PRIMARY KEY (`id`);

--
-- Indices de la tabla `mantenimiento`
--
ALTER TABLE `mantenimiento`
  ADD PRIMARY KEY (`id`);

--
-- Indices de la tabla `revision`
--
ALTER TABLE `revision`
  ADD PRIMARY KEY (`id`);

--
-- Indices de la tabla `rol`
--
ALTER TABLE `rol`
  ADD PRIMARY KEY (`id`);

--
-- Indices de la tabla `usuario`
--
ALTER TABLE `usuario`
  ADD PRIMARY KEY (`id`);

--
-- Indices de la tabla `usuario_rol`
--
ALTER TABLE `usuario_rol`
  ADD PRIMARY KEY (`id`);

--
-- AUTO_INCREMENT de las tablas volcadas
--

--
-- AUTO_INCREMENT de la tabla `animal`
--
ALTER TABLE `animal`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT de la tabla `area`
--
ALTER TABLE `area`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- AUTO_INCREMENT de la tabla `comida`
--
ALTER TABLE `comida`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;

--
-- AUTO_INCREMENT de la tabla `especie`
--
ALTER TABLE `especie`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=9;

--
-- AUTO_INCREMENT de la tabla `habitat`
--
ALTER TABLE `habitat`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=8;

--
-- AUTO_INCREMENT de la tabla `horario_alimentacion`
--
ALTER TABLE `horario_alimentacion`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=5;

--
-- AUTO_INCREMENT de la tabla `licencia`
--
ALTER TABLE `licencia`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=2;

--
-- AUTO_INCREMENT de la tabla `mantenimiento`
--
ALTER TABLE `mantenimiento`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT de la tabla `revision`
--
ALTER TABLE `revision`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=3;

--
-- AUTO_INCREMENT de la tabla `rol`
--
ALTER TABLE `rol`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=6;

--
-- AUTO_INCREMENT de la tabla `usuario`
--
ALTER TABLE `usuario`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT, AUTO_INCREMENT=4;

--
-- AUTO_INCREMENT de la tabla `usuario_rol`
--
ALTER TABLE `usuario_rol`
  MODIFY `id` int(11) NOT NULL AUTO_INCREMENT;
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
