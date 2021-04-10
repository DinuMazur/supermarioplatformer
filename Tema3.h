#pragma once
#include <Component/SimpleScene.h>
#include <Component/Transform/Transform.h>
#include <Core/GPU/Mesh.h>

class Tema3 : public SimpleScene
{
	public:
		Tema3();
		~Tema3();

		void Init() override;

	private:
		void FrameStart() override;
		void Update(float deltaTimeSeconds) override;
		void FrameEnd() override;

		void RenderSimpleMesh(Mesh *mesh, Shader *shader, const glm::mat4 &modelMatrix, Texture2D* texture1 = NULL, Texture2D* texture2 = NULL);
		Texture2D* CreateRandomTexture(unsigned int width, unsigned int height);
		bool ColSphereSphere(glm::vec3 point, glm::vec3 point2, float radius, float radius2);
		void OnInputUpdate(float deltaTime, int mods) override;
		void OnKeyPress(int key, int mods) override;
		void OnKeyRelease(int key, int mods) override;
		void OnMouseMove(int mouseX, int mouseY, int deltaX, int deltaY) override;
		void OnMouseBtnPress(int mouseX, int mouseY, int button, int mods) override;
		void OnMouseBtnRelease(int mouseX, int mouseY, int button, int mods) override;
		void OnMouseScroll(int mouseX, int mouseY, int offsetX, int offsetY) override;
		void OnWindowResize(int width, int height) override;

		std::unordered_map<std::string, Texture2D*> mapTextures;
		GLuint randomTextureID;

		glm::vec3 lightPosition;
		glm::vec3 camPosition = glm::vec3(0,7, 10);
		double mario_speed = 12;
		unsigned int materialShininess;
		float materialKd;
		float materialKs;

		int spotlightc = 0;
		int lightc = 0;
		int objectid = 0;

		// jump is time based not frame based
		double jump_start_time = 0;
		double jump_height = 0;
		double jump_max_power = 12;
		double jump_add_power = 12;
		double jump_max_hold = 0.3; // secs
		double jump_power = 0;
		double jump_gravity = 40; // gravity or smth
		
		//player states
		bool pInAir = false;
		bool pDead = false;
		bool pUnconcious = false;
		bool pDucking = false;

		float nextdeco = 0;
		float basedeco = 1;
		float nextrange = 1;

		// number of lanes to move around
		int offset_max = 8;
		int offset_step = 2;
		int offset = 0;
		double offset_cur = offset;
		double offset_speed = 10;

		int score = 0;

		std::list<glm::vec3> platform_pos;
		std::list<int> platform_type;
		std::list<glm::vec3> object_pos;
		std::list<int> object_type;


		std::list<glm::vec3> deco_pos;
		std::list<int> deco_type;

};
