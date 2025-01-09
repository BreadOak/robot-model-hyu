# Robot-models-HYU

* A repository of robot models built with Pinocchio and CasADi.
* To build CasADi function of own robot model, please refer to "urdf2modelcasadi" (https://github.com/alejandroastudillo/urdf2modelcasadi)

Inspired by Robot-models-meco, Meco team, KU Leuven (https://gitlab.kuleuven.be/meco-software/robot-models-meco)


## Installation
* clone 
```
git clone https://github.com/SHKim-HYU/robot-model-hyu.git
```
* Execute 
```
pip install .
```

## Available robots
| Robot | Degrees of freedom | Alias |
|-------|-------------|-------|
| UR10      	|     6   	|  	`ur10`     |
| KUKA KR5    	|     6   	|  	`kr5`     |
| KUKA KR60 	|     6   	|  	`kr60`     |
| Kinova Gen3	|     7   	|  	`kinova`     |
| KUKA iiwa7 	|     7   	|  	`iiwa7`     |
| KUKA iiwa14 	|     7   	|  	`iiwa14`     |
| Franka Panda (without gripper) |     7   |  `franka_panda`     |
| Franka Panda	|     9   	|  	`franka_panda_with_gripper`     |
| ABB Yumi   	|     18  	|  	`yumi`     |
| Atlas      	|     32  	|  	`atlas`     |
| MMO-500	|	9	|	`mmo_500`	|
| SoftArm	|	11	|	`softarm`	|
| xArm6	|	6	|	`xarm6`	|
| M0609	|	6	|	`m0609`	|
| Indy7	|	6	|	`indy7`	|
| Indy-RP2	|	7	|	`indy_rp2`	|

For every robot in the table, this repository includes functions for:
- Forward dynamics(q, qdot, tau)
- Inverse dynamics(q, qdot, qddot)
	- Mass matrix(q)
	- Mass inverse matrix(q)
	- Coriollis(q, qdot)
	- Gravity(q)
- Forward kinematics(q)[0:ndof]
	- Space Jacobian(q)
	- Body Jacobian(q)
- Analytical derivatives of forward dynamics
- Analytical derivatives of inverse dynamics

To add model information to the CMakeLists.txt file in the `~/urdf2modelcasadi/urdf2model/examples` directory and build the project.

Run the generated file in `~/urdf2modelcasadi/build/examples`.

