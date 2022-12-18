#pragma once
#include "RenderEngine.h"
#include <glm/glm.hpp>
#include <glm/gtc/matrix_transform.hpp>
#include <glm/gtc/type_ptr.hpp>
#include <glm/gtx/vector_angle.hpp>
#include <SOIL/SOIL.h>

class Demo :
	public RenderEngine
{
public:
	Demo();
	~Demo();
private:
	GLuint shaderProgram, VBO, VAO, EBO, VBO2, VAO2, EBO2, texture, texture2, textureLeaf, textureBark, textureMetal, textureBack,textureFront,textureLeft,textureRight,textureTop,textureStop ;
	float viewCamX, viewCamY, viewCamZ, upCamX, upCamY, upCamZ, posCamX, posCamY, posCamZ, CAMERA_SPEED, fovy;
	virtual void Init();
	virtual void DeInit();
	virtual void Update(double deltaTime);
	virtual void Render();
	virtual void ProcessInput(GLFWwindow *window);
	void BuildColoredCube();
	void BuildColoredPlane();
	void BuildTextures();
	void DrawColoredCube();
	void DrawColoredPlane();
	void DrawLightingPoles();
	void DrawLightingPoles2();
	void DrawTrees1();
	void DrawTrees2();
	void DrawSkyBox();
	void DrawStop();
	void MoveCamera(float speed);
	void StrafeCamera(float speed);
	void RotateCamera(float speed);
	void InitCamera();
	void BuildTemplateCube();
	void DrawTree();
};

