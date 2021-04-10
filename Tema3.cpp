#include "Tema3.h"

#include <vector>
#include <string>
#include <iostream>

#include <Core/Engine.h>

using namespace std;

Tema3::Tema3()
{
}

Tema3::~Tema3()
{
}



void Tema3::Init()
{
	const string textureLoc = "Source/Laboratoare/Tema3/Textures/";
	{
		Texture2D* texture;
		texture = new Texture2D();
		texture->Load2D((textureLoc + "item_a.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["item_a"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "item_b.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["item_b"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "item_c.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["item_c"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "empty.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["empty"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "mario_a.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["mario_a"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "mario_b.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["mario_b"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "mario_c.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["mario_c"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "mario_e.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["mario_e"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "mario_f.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["mario_f"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "dead.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["dead"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "mario_jump.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["mario_jump"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "tube.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["tube"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "block.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["block"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "bush.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["bush"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "concrete.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["concrete"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "skybox.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["skybox"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "brick.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["brick"] = texture;


		texture = new Texture2D();
		texture->Load2D((textureLoc + "coin_a.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["coin_a"] = texture;
		texture = new Texture2D();
		texture->Load2D((textureLoc + "coin_b.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["coin_b"] = texture;
		texture = new Texture2D();
		texture->Load2D((textureLoc + "coin_c.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["coin_c"] = texture;


		texture = new Texture2D();
		texture->Load2D((textureLoc + "flower_a.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["flower_a"] = texture;
		texture = new Texture2D();
		texture->Load2D((textureLoc + "flower_b.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["flower_b"] = texture;
		texture = new Texture2D();
		texture->Load2D((textureLoc + "flower_c.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["flower_c"] = texture;
		texture = new Texture2D();
		texture->Load2D((textureLoc + "flower_d.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["flower_d"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "plant_a.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["plant_a"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "plant_b.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["plant_b"] = texture;

		texture = new Texture2D();
		texture->Load2D((textureLoc + "trees.png").c_str(), GL_REPEAT);
		texture->SetFiltering(GL_NEAREST, GL_NEAREST);
		mapTextures["trees"] = texture;


		//mapTextures["random"] = CreateRandomTexture(128, 128);
	}
	{
		vector<glm::vec3> vertices
		{
			glm::vec3(1,   1, 0.0f),	// Top Right
			glm::vec3(1,  -1, 0.0f),	// Bottom Right
			glm::vec3(-1, -1, 0.0f),	// Bottom Left
			glm::vec3(-1,  1, 0.0f),	// Top Left
		};

		vector<glm::vec3> normals
		{
			glm::vec3(0, 1, 1),
			glm::vec3(1, 0, 1),
			glm::vec3(1, 0, 0),
			glm::vec3(0, 1, 0)
		};

		// TODO : Complete texture coordinates for the square
		vector<glm::vec2> textureCoords
		{
			glm::vec2(0.0f, 0.0f),
			glm::vec2(0.0f, 1.0f),
			glm::vec2(1.0f, 1.0f),
			glm::vec2(1.0f, 0.0f),
		};

		vector<unsigned short> indices =
		{
			0, 1, 3,
			1, 2, 3
		};

		Mesh* mesh = new Mesh("square");
		mesh->InitFromData(vertices, normals, textureCoords, indices);
		meshes[mesh->GetMeshID()] = mesh;


	}
	{
		vector<glm::vec3> vertices
		{
			//bottom of the pipe
			glm::vec3(0, 0, 1),
			glm::vec3(0.7, 0, 0.7),
			glm::vec3(1, 0, 0),
			glm::vec3(0.7, 0, -0.7),

			glm::vec3(0, 0, -1),
			glm::vec3(-0.7, 0, -0.7),
			glm::vec3(-1, 0, 0),
			glm::vec3(-0.7, 0, 0.7),

			// top of the pipe
			// 8
			glm::vec3(0, 2, 1),
			glm::vec3(0.7, 2, 0.7),
			glm::vec3(1, 2, 0),
			glm::vec3(0.7, 2, -0.7),

			glm::vec3(0, 2, -1),
			glm::vec3(-0.7, 2, -0.7),
			glm::vec3(-1, 2, 0),
			glm::vec3(-0.7, 2, 0.7),

			//the top
			// 16
			glm::vec3(0, 2, 1.2),
			glm::vec3(0.85, 2, 0.85),
			glm::vec3(1.2, 2, 0),
			glm::vec3(0.85, 2, -0.85),
			glm::vec3(0, 2, -1.2),
			glm::vec3(-0.85, 2, -0.85),
			glm::vec3(-1.2, 2, 0),
			glm::vec3(-0.85, 2, 0.85),

			//the top top
			// 24
			glm::vec3(0, 3, 1.2),
			glm::vec3(0.85, 3, 0.85),
			glm::vec3(1.2, 3, 0),
			glm::vec3(0.85, 3, -0.85),
			glm::vec3(0, 3, -1.2),
			glm::vec3(-0.85, 3, -0.85),
			glm::vec3(-1.2, 3, 0),
			glm::vec3(-0.85, 3, 0.85),

			// 32
			glm::vec3(0, 0, 1),
			glm::vec3(0, 2, 1),
			glm::vec3(0, 2, 1.2),
			glm::vec3(0, 3, 1.2),

			// 36 top
			glm::vec3(0, 3, 1.2),
			glm::vec3(0.85, 3, 0.85),
			glm::vec3(1.2, 3, 0),
			glm::vec3(0.85, 3, -0.85),
			glm::vec3(0, 3, -1.2),
			glm::vec3(-0.85, 3, -0.85),
			glm::vec3(-1.2, 3, 0),
			glm::vec3(-0.85, 3, 0.85),

		};

		vector<glm::vec3> normals
		{
			glm::vec3(0, 0, 1),
			glm::vec3(1, 0, 1),
			glm::vec3(1, 0, 0),
			glm::vec3(1, 0, -1),
			glm::vec3(0, 0, -1),
			glm::vec3(-1, 0, -1),
			glm::vec3(-1, 0, 0),
			glm::vec3(-1, 1, 0),

			glm::vec3(0, 0, 1),
			glm::vec3(1, 0, 1),
			glm::vec3(1, 0, 0),
			glm::vec3(1, 0, -1),
			glm::vec3(0, 0, -1),
			glm::vec3(-1, 0, -1),
			glm::vec3(-1, 0, 0),
			glm::vec3(-1, 1, 0),

			glm::vec3(0, 0, 1),
			glm::vec3(1, 0, 1),
			glm::vec3(1, 0, 0),
			glm::vec3(1, 0, -1),
			glm::vec3(0, 0, -1),
			glm::vec3(-1, 0, -1),
			glm::vec3(-1, 0, 0),
			glm::vec3(-1, 1, 0),

			glm::vec3(0, 0, 1),
			glm::vec3(1, 0, 1),
			glm::vec3(1, 0, 0),
			glm::vec3(1, 0, -1),
			glm::vec3(0, 0, -1),
			glm::vec3(-1, 0, -1),
			glm::vec3(-1, 0, 0),
			glm::vec3(-1, 1, 0),

			glm::vec3(0, 0, 1),
			glm::vec3(0, 0, 1),
			glm::vec3(0, 0, 1),
			glm::vec3(0, 0, 1),

			glm::vec3(0, 1, 0),
			glm::vec3(0, 1, 0),
			glm::vec3(0, 1, 0),
			glm::vec3(0, 1, 0),
			glm::vec3(0, 1, 0),
			glm::vec3(0, 1, 0),
			glm::vec3(0, 1, 0),
			glm::vec3(0, 1, 0),



			//glm::vec3(1, 0, 1),
			//glm::vec3(1, 0, 0),
			//glm::vec3(0, 1, 0)
		};

		// TODO : Complete texture coordinates for the square
		vector<glm::vec2> textureCoords
		{
			glm::vec2(0.0f, 1), // 0
			glm::vec2(0.0625, 1), // 1
			glm::vec2(0.125, 1), // 2
			glm::vec2(0.1875, 1), // 3
			glm::vec2(0.25, 1), // 4
			glm::vec2(0.3125, 1), // 5
			glm::vec2(0.375, 1), // 6
			glm::vec2(0.4375, 1), // 7

			glm::vec2(0.0f, 0.33), // 0
			glm::vec2(0.0625, 0.33), // 1
			glm::vec2(0.125, 0.33), // 2
			glm::vec2(0.1875, 0.33), // 3
			glm::vec2(0.25, 0.33), // 4
			glm::vec2(0.3125, 0.33), // 5
			glm::vec2(0.375, 0.33), // 6
			glm::vec2(0.4375, 0.33), // 7

			glm::vec2(0.0f, 0.33), // 0
			glm::vec2(0.0625, 0.33), // 1
			glm::vec2(0.125, 0.33), // 2
			glm::vec2(0.1875, 0.33), // 3
			glm::vec2(0.25, 0.33), // 4
			glm::vec2(0.3125, 0.33), // 5
			glm::vec2(0.375, 0.33), // 6
			glm::vec2(0.4375, 0.33), // 7

			glm::vec2(0.0f, 0), // 0
			glm::vec2(0.0625, 0), // 1
			glm::vec2(0.125, 0), // 2
			glm::vec2(0.1875, 0), // 3
			glm::vec2(0.25, 0), // 4
			glm::vec2(0.3125, 0), // 5
			glm::vec2(0.375, 0), // 6
			glm::vec2(0.4375, 0), // 7

			glm::vec2(0.5, 1), // 7
			glm::vec2(0.5, 0.33), // 7
			glm::vec2(0.5, 0.33), // 7
			glm::vec2(0.5, 0), // 7

			glm::vec2(0.75, 1), // 7
			glm::vec2(0.93, 0.85), // 7
			glm::vec2(1, 0.5), // 7
			glm::vec2(0.93, 0.15), // 7
			glm::vec2(0.75, 0), // 7
			glm::vec2(0.57, 0.15), // 7
			glm::vec2(0.5, 0.5), // 7
			glm::vec2(0.57, 0.85), // 7


		};

		vector<unsigned short> indices =
		{
			0, 9, 8,
			0, 1, 9,

			1, 10, 9,
			1, 2, 10,

			2, 11, 10,
			2, 3, 11,

			3, 12, 11,
			3, 4, 12,

			4, 13, 12,
			4, 5, 13,

			5, 14, 13,
			5, 6, 14,

			6, 15, 14,
			6, 7, 15,

			7, 33, 15,
			7, 32, 33,


			16, 25, 24,
			16, 17, 25,

			17, 26, 25,
			17, 18, 26,

			18, 27, 26,
			18, 19, 27,

			19, 28, 27,
			19, 20, 28,

			20, 29, 28,
			20, 21, 29,

			21, 30, 29,
			21, 22, 30,

			22, 31, 30,
			22, 23, 31,

			23, 35, 31,
			23, 34, 35,


			36, 37, 38,
			36, 38, 39,
			36, 39, 40,
			36, 40, 41,
			36, 41, 42,
			36, 42, 43,


		};

		Mesh* mesh = new Mesh("tube");
		//mesh->SetDrawMode(GL_LINE_LOOP);
		mesh->InitFromData(vertices, normals, textureCoords, indices);
		meshes[mesh->GetMeshID()] = mesh;

	}
	{
	vector<glm::vec3> vertices
	{
		glm::vec3(1, -1, 1),
		glm::vec3(1, -1, -1),
		glm::vec3(-1, -1, -1),
		glm::vec3(-1, -1, 1),


		glm::vec3(1, 1, 1),
		glm::vec3(1, 1, -1),
		glm::vec3(-1, 1, -1),
		glm::vec3(-1, 1, 1),

		glm::vec3(1, -1, 1),
		glm::vec3(1, -1, -1),
		glm::vec3(-1, -1, -1),
		glm::vec3(-1, -1, 1),


		glm::vec3(1, 1, 1),
		glm::vec3(1, 1, -1),
		glm::vec3(-1, 1, -1),
		glm::vec3(-1, 1, 1),

		//16
		glm::vec3(1, -1, 1),
		glm::vec3(1, 1, 1),



	};

	vector<glm::vec3> normals
	{
		glm::vec3(1, 0, 1),
		glm::vec3(1, 0, -1),
		glm::vec3(-1, 0, -1),
		glm::vec3(-1, 0, 1),


		glm::vec3(1, 0, 1),
		glm::vec3(1, 0, -1),
		glm::vec3(-1, 0, -1),
		glm::vec3(-1, 0, 1),

		// 8
		glm::vec3(0, -1, 0),
		glm::vec3(0, -1, 0),
		glm::vec3(0, -1, 0),
		glm::vec3(0, -1, 0),

		// 12
		glm::vec3(0, 1, 0),
		glm::vec3(0, 1, 0),
		glm::vec3(0, 1, 0),
		glm::vec3(0, 1, 0),

		glm::vec3(1, 0, 1),
		glm::vec3(1, 0, 1),


	};

	vector<glm::vec2> textureCoords
	{
		glm::vec2(0, 1), // 0
		glm::vec2(1, 1), // 0
		glm::vec2(2, 1), // 0
		glm::vec2(3, 1), // 0

		glm::vec2(0, 0), // 0
		glm::vec2(1, 0), // 0
		glm::vec2(2, 0), // 0
		glm::vec2(3, 0), // 0

		glm::vec2(0, 0), // 0
		glm::vec2(0, 1), // 0
		glm::vec2(1, 1), // 0
		glm::vec2(1, 0), // 0

		glm::vec2(0, 0), // 0
		glm::vec2(0, 1), // 0
		glm::vec2(1, 1), // 0
		glm::vec2(1, 0), // 0

		glm::vec2(4, 1), // 0
		glm::vec2(4, 0), // 0




	};

	vector<unsigned short> indices =
	{
		0, 5, 4,
		0, 1, 5,

		1, 6, 5,
		1, 2, 6,

		2, 7, 6,
		2, 3, 7,

		3, 17, 7,
		3, 16, 17,

		8, 10, 9,
		8, 11, 10,

		12, 13, 14,
		12, 14, 15,

	};

	Mesh* mesh = new Mesh("cube");
	//mesh->SetDrawMode(GL_LINE_LOOP);
	mesh->InitFromData(vertices, normals, textureCoords, indices);
	meshes[mesh->GetMeshID()] = mesh;

	}
	{
		vector<glm::vec3> vertices
		{
			glm::vec3(1, -1, 1),
			glm::vec3(1, -1, -1),
			glm::vec3(-1, -1, -1),
			glm::vec3(-1, -1, 1),


			glm::vec3(1, 1, 1),
			glm::vec3(1, 1, -1),
			glm::vec3(-1, 1, -1),
			glm::vec3(-1, 1, 1),

			glm::vec3(1, -1, 1),
			glm::vec3(1, -1, -1),
			glm::vec3(-1, -1, -1),
			glm::vec3(-1, -1, 1),


			glm::vec3(1, 1, 1),
			glm::vec3(1, 1, -1),
			glm::vec3(-1, 1, -1),
			glm::vec3(-1, 1, 1),

			//16
			glm::vec3(1, -1, 1),
			glm::vec3(1, 1, 1),



		};

		vector<glm::vec3> normals
		{
			glm::vec3(1, 0, 1),
			glm::vec3(1, 0, -1),
			glm::vec3(-1, 0, -1),
			glm::vec3(-1, 0, 1),


			glm::vec3(1, 0, 1),
			glm::vec3(1, 0, -1),
			glm::vec3(-1, 0, -1),
			glm::vec3(-1, 0, 1),

			// 8
			glm::vec3(0, -1, 0),
			glm::vec3(0, -1, 0),
			glm::vec3(0, -1, 0),
			glm::vec3(0, -1, 0),

			// 12
			glm::vec3(0, 1, 0),
			glm::vec3(0, 1, 0),
			glm::vec3(0, 1, 0),
			glm::vec3(0, 1, 0),

			glm::vec3(1, 0, 1),
			glm::vec3(1, 0, 1),


		};

		float twothirds = (float)2 / 3;
		float onethird = (float)1 / 3;
		vector<glm::vec2> textureCoords
		{
			glm::vec2(0, twothirds), // 0
			glm::vec2(0.25, twothirds), // 0
			glm::vec2(0.5, twothirds), // 0
			glm::vec2(0.75, twothirds), // 0

			glm::vec2(0, onethird), // 0
			glm::vec2(0.25, onethird), // 0
			glm::vec2(0.5, onethird), // 0
			glm::vec2(0.75, onethird), // 0

			glm::vec2(0.25, twothirds), // 0
			glm::vec2(0.25, 1), // 0
			glm::vec2(0.5, 1), // 0
			glm::vec2(0.5, twothirds), // 0


			glm::vec2(0.25, 0), // 0
			glm::vec2(0.25, onethird), // 0
			glm::vec2(0.5, onethird), // 0
			glm::vec2(0.5, 0), // 0


			glm::vec2(1, twothirds), // 0
			glm::vec2(1, onethird), // 0




		};

		vector<unsigned short> indices =
		{
			0, 4, 5,
			0, 5, 1,

			1, 5, 6,
			1, 6, 2,

			2, 6, 7,
			2, 7, 3,

			3, 7, 17,
			3, 17, 16,

			8, 9, 10,
			8, 10, 11,

			12, 14, 13,
			12, 15, 14,

		};

		Mesh* mesh = new Mesh("skybox");
		mesh->InitFromData(vertices, normals, textureCoords, indices);
		meshes[mesh->GetMeshID()] = mesh;

	}
	{
	vector<glm::vec3> vertices
	{
		glm::vec3(3, -1, 6),
		glm::vec3(3, -1, -6),
		glm::vec3(-3, -1, -6),
		glm::vec3(-3, -1, 6),


		glm::vec3(3, 1, 6),
		glm::vec3(3, 1, -6),
		glm::vec3(-3, 1, -6),
		glm::vec3(-3, 1, 6),

		glm::vec3(3, -1, 6),
		glm::vec3(3, -1, -6),
		glm::vec3(-3, -1, -6),
		glm::vec3(-3, -1, 6),


		glm::vec3(3, 1, 6),
		glm::vec3(3, 1, -6),
		glm::vec3(-3, 1, -6),
		glm::vec3(-3, 1, 6),

		//16
		glm::vec3(3, -1, 6),
		glm::vec3(3, 1, 6),



	};

	vector<glm::vec3> normals
	{
		glm::vec3(1, 0, 1),
		glm::vec3(1, 0, -1),
		glm::vec3(-1, 0, -1),
		glm::vec3(-1, 0, 1),


		glm::vec3(1, 0, 1),
		glm::vec3(1, 0, -1),
		glm::vec3(-1, 0, -1),
		glm::vec3(-1, 0, 1),

		// 8
		glm::vec3(0, -1, 0),
		glm::vec3(0, -1, 0),
		glm::vec3(0, -1, 0),
		glm::vec3(0, -1, 0),

		// 12
		glm::vec3(0, 1, 0),
		glm::vec3(0, 1, 0),
		glm::vec3(0, 1, 0),
		glm::vec3(0, 1, 0),

		glm::vec3(1, 0, 1),
		glm::vec3(1, 0, 1),


	};

	vector<glm::vec2> textureCoords
	{
		glm::vec2(0, 1), // 0
		glm::vec2(6, 1), // 0
		glm::vec2(3, 1), // 0
		glm::vec2(9, 1), // 0

		glm::vec2(0, 0), // 0
		glm::vec2(6, 0), // 0
		glm::vec2(3, 0), // 0
		glm::vec2(9, 0), // 0

		glm::vec2(0, 0), // 0
		glm::vec2(0, 6), // 0
		glm::vec2(3, 6), // 0
		glm::vec2(3, 0), // 0

		glm::vec2(0, 0), // 0
		glm::vec2(0, 6), // 0
		glm::vec2(3, 6), // 0
		glm::vec2(3, 0), // 0

		glm::vec2(6, 1), // 0
		glm::vec2(6, 0), // 0




	};

	vector<unsigned short> indices =
	{
		0, 5, 4,
		0, 1, 5,

		1, 6, 5,
		1, 2, 6,

		2, 7, 6,
		2, 3, 7,

		3, 17, 7,
		3, 16, 17,

		8, 10, 9,
		8, 11, 10,

		12, 13, 14,
		12, 14, 15,

	};

	Mesh* mesh = new Mesh("platform");
	//mesh->SetDrawMode(GL_LINE_LOOP);
	mesh->InitFromData(vertices, normals, textureCoords, indices);
	meshes[mesh->GetMeshID()] = mesh;

	}
	{
	vector<glm::vec3> vertices
	{
		glm::vec3(9, -1, 6),
		glm::vec3(9, -1, -6),
		glm::vec3(-9, -1, -6),
		glm::vec3(-9, -1, 6),


		glm::vec3(9, 1, 6),
		glm::vec3(9, 1, -6),
		glm::vec3(-9, 1, -6),
		glm::vec3(-9, 1, 6),

		glm::vec3(9, -1, 6),
		glm::vec3(9, -1, -6),
		glm::vec3(-9, -1, -6),
		glm::vec3(-9, -1, 6),


		glm::vec3(9, 1, 6),
		glm::vec3(9, 1, -6),
		glm::vec3(-9, 1, -6),
		glm::vec3(-9, 1, 6),

		//16
		glm::vec3(9, -1, 6),
		glm::vec3(9, 1, 6),



	};

	vector<glm::vec3> normals
	{
		glm::vec3(1, 0, 1),
		glm::vec3(1, 0, -1),
		glm::vec3(-1, 0, -1),
		glm::vec3(-1, 0, 1),


		glm::vec3(1, 0, 1),
		glm::vec3(1, 0, -1),
		glm::vec3(-1, 0, -1),
		glm::vec3(-1, 0, 1),

		// 8
		glm::vec3(0, -1, 0),
		glm::vec3(0, -1, 0),
		glm::vec3(0, -1, 0),
		glm::vec3(0, -1, 0),

		// 12
		glm::vec3(0, 1, 0),
		glm::vec3(0, 1, 0),
		glm::vec3(0, 1, 0),
		glm::vec3(0, 1, 0),

		glm::vec3(1, 0, 1),
		glm::vec3(1, 0, 1),


	};

	vector<glm::vec2> textureCoords
	{
		glm::vec2(0, 1), // 0
		glm::vec2(6, 1), // 0
		glm::vec2(15, 1), // 0
		glm::vec2(21, 1), // 0

		glm::vec2(0, 0), // 0
		glm::vec2(6, 0), // 0
		glm::vec2(15, 0), // 0
		glm::vec2(21, 0), // 0

		glm::vec2(6, 0), // 0
		glm::vec2(0, 0), // 0
		glm::vec2(0, 9), // 0
		glm::vec2(6, 9), // 0


		glm::vec2(0, 6), // 0
		glm::vec2(0, 0), // 0
		glm::vec2(9, 0), // 0
		glm::vec2(9, 6), // 0

		glm::vec2(30, 1), // 0
		glm::vec2(30, 0), // 0




	};

	vector<unsigned short> indices =
	{
		0, 5, 4,
		0, 1, 5,

		1, 6, 5,
		1, 2, 6,

		2, 7, 6,
		2, 3, 7,

		3, 17, 7,
		3, 16, 17,

		8, 10, 9,
		8, 11, 10,

		12, 13, 14,
		12, 14, 15,

	};

	Mesh* mesh = new Mesh("platform_wide");
	//mesh->SetDrawMode(GL_LINE_LOOP);
	mesh->InitFromData(vertices, normals, textureCoords, indices);
	meshes[mesh->GetMeshID()] = mesh;

	}
	// Create a shader program for drawing face polygon with the color of the normal
	{
		Shader *shader = new Shader("VertexLitGeneric");
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/VertexShader.glsl", GL_VERTEX_SHADER);
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/FragmentShader.glsl", GL_FRAGMENT_SHADER);
		shader->CreateAndLink();
		shaders[shader->GetName()] = shader;
	}

	{
		Shader* shader = new Shader("UnlitGeneric");
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/UnlitGeneric.glsl", GL_VERTEX_SHADER);
		shader->AddShader("Source/Laboratoare/Tema3/Shaders/UnlitGenericFragment.glsl", GL_FRAGMENT_SHADER);
		shader->CreateAndLink();
		shaders[shader->GetName()] = shader;
	}

	{
		lightPosition = glm::vec3(0, 4, 0);
		materialShininess = 10;
		materialKd = 0.5;
		materialKs = 0.5;
	}
	GetSceneCamera()->SetPosition(camPosition);
	platform_pos.insert(platform_pos.begin(), glm::vec3(0, -2, -10));
	platform_type.insert(platform_type.begin(), 0);
	platform_pos.insert(platform_pos.begin(), glm::vec3(0, -2, -22));
	platform_type.insert(platform_type.begin(), 0);
	platform_pos.insert(platform_pos.begin(), glm::vec3(0, -2, -34));
	platform_type.insert(platform_type.begin(), 1);

	nextdeco = Engine::GetElapsedTime() + basedeco + ((float)(rand() % 1000) / 1000) * nextrange;


	glEnable(GL_CULL_FACE);
	srand(time(NULL));
}

void Tema3::FrameStart()
{
	// clears the color buffer (using the previously set color) and depth buffer
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glm::ivec2 resolution = window->GetResolution();
	// sets the screen area where to draw
	glViewport(0, 0, resolution.x, resolution.y);	
}

bool Tema3::ColSphereSphere(glm::vec3 point, glm::vec3 point2, float radius, float radius2) {
	static int count = 0;
	float dxp = (point.x - point2.x) * (point.x - point2.x);
	float dyp = (point.y - point2.y) * (point.y - point2.y);
	float dyz = (point.z - point2.z) * (point.z - point2.z);
	if (radius * radius + radius2 * radius2 > dxp + dyp + dyz) {
		printf("!!BONK!! %d\n", count++);
		return true;
	}
	return false;
}

void Tema3::Update(float deltaTimeSeconds)
{
	// lerp between two lanes
	if (pDead) {
		mario_speed = 0;
	}
	offset_cur = offset_cur + ((double)offset - offset_cur) * deltaTimeSeconds * offset_speed;
	glm::vec3 cam_pos = camPosition + glm::vec3(offset_cur, 0, 0);
	GetSceneCamera()->SetPosition(cam_pos);
	lightPosition = glm::vec3(offset_cur, 4, 0);

	//glm::vec3 cam_pos = GetSceneCamera()->transform->GetWorldPosition();
	
	if (pInAir) {
		jump_power -= jump_gravity * deltaTimeSeconds;
		jump_height += jump_power * deltaTimeSeconds;
	}
	{
		if (!pDead  && nextdeco < Engine::GetElapsedTime()) {
			nextdeco = Engine::GetElapsedTime() + basedeco + ((float)(rand() % 1000) / 1000) * nextrange;
			float deco = (((float)(rand() % 1000) / 1000) - 0.5) * 15;
			int type = rand() % 3;
			if (type == 0) {
				deco_pos.insert(deco_pos.begin(), glm::vec3(deco, 0, -34));
			}
			else if (type == 1) {
				deco_pos.insert(deco_pos.begin(), glm::vec3(deco, 1, -34));
			}
			else if (type == 2) {
				deco_pos.insert(deco_pos.begin(), glm::vec3(deco, 1, -34));
			}
			deco_type.insert(deco_type.begin(), type);
		}
	}
	{
		glm::vec3 grass_pos = glm::vec3(offset_cur, jump_height, 0);
		glm::mat4 modelMatrix = glm::mat4(1);
		modelMatrix = glm::translate(modelMatrix, grass_pos);
		//modelMatrix = glm::scale(modelMatrix, glm::vec3(0.5f));
		modelMatrix = glm::rotate(modelMatrix, atan2(grass_pos.x - cam_pos.x, grass_pos.z - cam_pos.z), glm::vec3(0, 1, 0));

		int frame = (int)(Engine::GetElapsedTime() * mario_speed) % 4;
		if (pDead) {
			RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["dead"]);
		} else if (pInAir) {
			RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["mario_jump"]);
		} else if (frame == 0 || frame == 2) {
			RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["mario_a"]);
		}
		else if (frame == 1) {
			if (pDucking) 
				RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["mario_e"]);
			else
				RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["mario_b"]);
		}
		else if (frame == 3) {
			if (pDucking)
				RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["mario_f"]);
			else
				RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["mario_c"]);
		}
	}

	{
		glm::mat4 modelMatrix = glm::mat4(1);
		modelMatrix = glm::translate(modelMatrix, cam_pos);
		modelMatrix = glm::scale(modelMatrix, glm::vec3(100.0f));
		RenderSimpleMesh(meshes["skybox"], shaders["UnlitGeneric"], modelMatrix, mapTextures["skybox"]);
	}
	{
		std::list<glm::vec3>::iterator object = object_pos.begin();
		std::list<int>::iterator type = object_type.begin();
		while (object != object_pos.end()) {
			// 0 block 1 tube 2 item 102 empty 3 brick
			object->z += mario_speed * deltaTimeSeconds;
			glm::mat4 modelMatrix = glm::mat4(1);
			modelMatrix = glm::translate(modelMatrix, *object);
			if (object->z > 12) {
				object_type.erase(type++);
				object_pos.erase(object++);
			} else if (*type == 0) {
				if (ColSphereSphere(*object, glm::vec3(offset_cur, jump_height, 0), 1, 1)) {
					pDead = true;
				}
				RenderSimpleMesh(meshes["cube"], shaders["VertexLitGeneric"], modelMatrix, mapTextures["block"]);
				object++;
				type++;
			}
			else if (*type == 1) {
				if (ColSphereSphere(*object, glm::vec3(offset_cur, jump_height, 0), 2, 1) ||
					ColSphereSphere(glm::vec3(object->x, object->y + 3, object->z), glm::vec3(offset_cur, jump_height, 0), 2, 1)) {
					pDead = true;
				}
				modelMatrix = glm::scale(modelMatrix, glm::vec3(2.0f));
				RenderSimpleMesh(meshes["tube"], shaders["VertexLitGeneric"], modelMatrix, mapTextures["tube"]);
				object++;
				type++;
			}
			else if (*type == 2) {
				if (ColSphereSphere(*object, glm::vec3(offset_cur, jump_height, 0), 1, 1) && jump_power >= 0) {
					jump_power = -abs(jump_power) / 2;
					*type = 102;
					score+=3;
				}
				int speed = 4;
				int frame = (int)(Engine::GetElapsedTime() * speed) % 5;
				if (frame == 0 || frame == 3)
					RenderSimpleMesh(meshes["cube"], shaders["UnlitGeneric"], modelMatrix, mapTextures["item_b"]);
				else if (frame == 1 || frame == 2)
					RenderSimpleMesh(meshes["cube"], shaders["UnlitGeneric"], modelMatrix, mapTextures["item_a"]);
				else if (frame == 4)
					RenderSimpleMesh(meshes["cube"], shaders["UnlitGeneric"], modelMatrix, mapTextures["item_c"]);
				object++;
				type++;
			}
			else if (*type == 102) {
				if (ColSphereSphere(*object, glm::vec3(offset_cur, jump_height, 0), 1, 1) && jump_power >= 0) {
					jump_power = -abs(jump_power) / 2;
				}
				RenderSimpleMesh(meshes["cube"], shaders["VertexLitGeneric"], modelMatrix, mapTextures["empty"]);
				object++;
				type++;
			}
			else if (*type == 3) {
				if (ColSphereSphere(*object, glm::vec3(offset_cur, jump_height, 0), 1, 1) && jump_power >= 0) {
					jump_power = -abs(jump_power) / 2;
					object_type.erase(type++);
					object_pos.erase(object++);
				}
				else {
					RenderSimpleMesh(meshes["cube"], shaders["VertexLitGeneric"], modelMatrix, mapTextures["brick"]);
					object++;
					type++;
				}
			} else if (*type == 4) {
				if (ColSphereSphere(*object, glm::vec3(offset_cur, jump_height, 0), 1, 1)) {
					object_type.erase(type++);
					object_pos.erase(object++);
					score++;
				}
				else {
					int speed = 4;
					int frame = (int)(Engine::GetElapsedTime() * speed) % 5;
					modelMatrix = glm::rotate(modelMatrix, atan2(object->x - cam_pos.x, object->z - cam_pos.z), glm::vec3(0, 1, 0));
					if (frame == 0 || frame == 3)
						RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["coin_b"]);
					else if (frame == 1 || frame == 2)
						RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["coin_a"]);
					else if (frame == 4)
						RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["coin_c"]);
					object++;
					type++;
				}
			} else if (*type == 5) {
				if (ColSphereSphere(*object, glm::vec3(offset_cur, jump_height, 0), 1, 1)) {
					object_type.erase(type++);
					object_pos.erase(object++);
					pDead = true;
				}
				else {
					int speed = 4;
					int frame = (int)(Engine::GetElapsedTime() * speed) % 2;
					modelMatrix = glm::rotate(modelMatrix, atan2(object->x - cam_pos.x, object->z - cam_pos.z), glm::vec3(0, 1, 0));
					if (frame == 0)
						RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["plant_a"]);
					else
						RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["plant_b"]);
					object++;
					type++;
				}
			}
		}
	}
	{
		std::list<glm::vec3>::iterator platform = platform_pos.begin();
		std::list<int>::iterator type = platform_type.begin();
		pInAir = true;
		while (platform != platform_pos.end()) {
			platform->z += mario_speed * deltaTimeSeconds;
			glm::mat4 modelMatrix = glm::mat4(1);
			modelMatrix = glm::translate(modelMatrix, *platform);
			if (*type == 0) {
				RenderSimpleMesh(meshes["platform"], shaders["VertexLitGeneric"], modelMatrix, mapTextures["concrete"]);
				if (abs(platform->x - offset_cur) < 3 && abs(platform->x - offset_cur) < 3 && abs(platform->z) < 6 && jump_height <= 0) {
					jump_height = 0;
					jump_power = 0;
					pInAir = false;
				}
			}
			else {
				RenderSimpleMesh(meshes["platform_wide"], shaders["VertexLitGeneric"], modelMatrix, mapTextures["block"]);
				if (abs(platform->z) < 6 && jump_height <= 0) {
					jump_height = 0;
					jump_power = 0;
					pInAir = false;
				}
			}
			if (platform->z > 12) {
				platform_pos.erase(platform++);
				platform_type.erase(type++);
				int type = rand() % 6;
				if (type == 0) {
					platform_pos.insert(platform_pos.begin(), glm::vec3(0, -2, -24));
					platform_type.insert(platform_type.begin(), 1);
				}
				else {
					int t = rand() % 6;
					int pos = ((rand() % 7) - 3) * 2;
					platform_pos.insert(platform_pos.begin(), glm::vec3(pos, -2, -24));
					platform_type.insert(platform_type.begin(), 0);
					if (t == 0) {
						glm::vec3 obj = glm::vec3(pos + (rand() % 3 - 1) * 2, 0, rand() % 6 - 3 - 24);
						object_pos.insert(object_pos.begin(), obj);
						object_type.insert(object_type.begin(), 0);
					}
					else if (t == 1) {
						glm::vec3 obj = glm::vec3(pos + ((double)(rand() % 2) - 0.5) * 2, -1, (double)(rand() % 5) - 2.5 - 24);
						object_pos.insert(object_pos.begin(), obj);
						object_type.insert(object_type.begin(), 1);
					}
					else if (t == 2) {
						glm::vec3 obj = glm::vec3(pos + (rand() % 3 - 1) * 2, 4, rand() % 6 - 3 - 24);
						object_pos.insert(object_pos.begin(), obj);
						object_type.insert(object_type.begin(), 2);
					}
					else if (t == 3) {
						glm::vec3 obj = glm::vec3(pos + (rand() % 3 - 1) * 2, 4, rand() % 6 - 3 - 24);
						object_pos.insert(object_pos.begin(), obj);
						object_type.insert(object_type.begin(), 3);
					}
					else if (t == 4) {
						glm::vec3 obj = glm::vec3(pos + (rand() % 3 - 1) * 2, 0, rand() % 6 - 3 - 24);
						object_pos.insert(object_pos.begin(), obj);
						object_type.insert(object_type.begin(), 4);
					}
					else if (t == 5) {
						glm::vec3 obj = glm::vec3(pos + (rand() % 3 - 1) * 2, 0, rand() % 6 - 3 - 24);
						object_pos.insert(object_pos.begin(), obj);
						object_type.insert(object_type.begin(), 5);
					}
				}
			}
			else {
				type++;
				platform++;
			}
		}
		{
		std::list<glm::vec3>::iterator deco = deco_pos.begin();
		std::list<int>::iterator type = deco_type.begin();
		while (deco != deco_pos.end()) {
			deco->z += mario_speed * deltaTimeSeconds;
			glm::mat4 modelMatrix = glm::mat4(1);
			modelMatrix = glm::translate(modelMatrix, *deco);
			if (deco->z > 12) {
				deco_pos.erase(deco++);
				deco_type.erase(type++);
			}
			else if (*type == 0) {
				int speed = 4;
				int frame = (int)(Engine::GetElapsedTime() * speed) % 4;
				modelMatrix = glm::rotate(modelMatrix, atan2(deco->x - cam_pos.x, deco->z - cam_pos.z), glm::vec3(0, 1, 0));
				if (frame == 0)
					RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["flower_a"]);
				else if (frame == 1)
					RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["flower_b"]);
				else if (frame == 2)
					RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["flower_c"]);
				else if (frame == 3)
					RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["flower_d"]);
				deco++;
				type++;
			}
			else if (*type == 1) {
				modelMatrix = glm::rotate(modelMatrix, atan2(deco->x - cam_pos.x, deco->z - cam_pos.z), glm::vec3(0, 1, 0));
				modelMatrix = glm::scale(modelMatrix, glm::vec3(2.0f));
				RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["bush"]);
				deco++;
				type++;
			}
			else if (*type == 2) {
				modelMatrix = glm::rotate(modelMatrix, atan2(deco->x - cam_pos.x, deco->z - cam_pos.z), glm::vec3(0, 1, 0));
				modelMatrix = glm::scale(modelMatrix, glm::vec3(2.0f));
				RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["trees"]);
				deco++;
				type++;
			}
			else {
				deco++;
				type++;
			}
		}
		}

		if (pInAir) pDucking = false;
	}
	{
		for (int l = 0; l < score; l++) {
			glm::mat4 modelMatrix = glm::mat4(1);
			float lifes_distance = 0.9;
			glm::vec3 pos = glm::vec3(cam_pos.x + l * lifes_distance - ((score - 1) * lifes_distance / 2) + 10, 10, -10);
			modelMatrix = glm::translate(modelMatrix, pos);
			modelMatrix = glm::rotate(modelMatrix, atan2(pos.x - cam_pos.x, pos.z - cam_pos.z), glm::vec3(0, 1, 0));
			RenderSimpleMesh(meshes["square"], shaders["UnlitGeneric"], modelMatrix, mapTextures["coin_a"]);
		}
}
	{
		if (jump_height < -0.5) {
			pDead = true;
		}
	}
}

void Tema3::FrameEnd()
{
	//DrawCoordinatSystem();
}

void Tema3::RenderSimpleMesh(Mesh *mesh, Shader *shader, const glm::mat4 & modelMatrix, Texture2D* texture1, Texture2D* texture2)
{
	if (!mesh || !shader || !shader->GetProgramID())
		return;

	// render an object using the specified shader and the specified position
	glUseProgram(shader->program);

	// Bind model matrix
	GLint loc_model_matrix = glGetUniformLocation(shader->program, "Model");
	glUniformMatrix4fv(loc_model_matrix, 1, GL_FALSE, glm::value_ptr(modelMatrix));

	// Bind view matrix
	glm::mat4 viewMatrix = GetSceneCamera()->GetViewMatrix();
	int loc_view_matrix = glGetUniformLocation(shader->program, "View");
	glUniformMatrix4fv(loc_view_matrix, 1, GL_FALSE, glm::value_ptr(viewMatrix));

	// Bind projection matrix
	glm::mat4 projectionMatrix = GetSceneCamera()->GetProjectionMatrix();
	int loc_projection_matrix = glGetUniformLocation(shader->program, "Projection");
	glUniformMatrix4fv(loc_projection_matrix, 1, GL_FALSE, glm::value_ptr(projectionMatrix));

	glUniform1f(glGetUniformLocation(shader->program, "time"), Engine::GetElapsedTime());

		glUniform3fv(glGetUniformLocation(shader->program, "light_position"), 1, glm::value_ptr(lightPosition));
		glm::vec3 eyePosition = GetSceneCamera()->transform->GetWorldPosition();
		glUniform3fv(glGetUniformLocation(shader->program, "eye_position"), 1, glm::value_ptr(eyePosition));
		glUniform1f(glGetUniformLocation(shader->program, "material_kd"), materialKd);
		glUniform1f(glGetUniformLocation(shader->program, "material_ks"), materialKs);
		glUniform1i(glGetUniformLocation(shader->program, "material_shininess"), materialShininess);

		glUniform1i(glGetUniformLocation(shader->program, "objectid"), objectid);

	if (texture1) {
		//TODO : activate texture location 0
		//TODO : Bind the texture1 ID
		//TODO : Send texture uniform value
		glActiveTexture(GL_TEXTURE0);
		glBindTexture(GL_TEXTURE_2D, texture1->GetTextureID());
		glUniform1i(glGetUniformLocation(shader->program, "texture_1"), 0);
	}

	if (texture2) {
		//TODO : activate texture location 1
		//TODO : Bind the texture2 ID
		//TODO : Send texture uniform value
		glActiveTexture(GL_TEXTURE1);
		glBindTexture(GL_TEXTURE_2D, texture2->GetTextureID());
		glUniform1i(glGetUniformLocation(shader->program, "texture_2"), 1);
	}

	// Draw the object
	glBindVertexArray(mesh->GetBuffers()->VAO);
	glDrawElements(mesh->GetDrawMode(), static_cast<int>(mesh->indices.size()), GL_UNSIGNED_SHORT, 0);
}

Texture2D* Tema3::CreateRandomTexture(unsigned int width, unsigned int height)
{
	GLuint textureID = 0;
	unsigned int channels = 3;
	unsigned int size = width * height * channels;
	unsigned char* data = new unsigned char[size];

	// TODO: generate random texture data

	for (int i = 0; i < size; i += channels) {
		data[i] = data[i + 1] = data[i + 2] = rand() % 256;
	}
	// Generate and bind the new texture ID
	glGenTextures(0, &textureID);
	// TODO: Set the texture parameters (MIN_FILTER, MAG_FILTER and WRAPPING MODE) using glTexParameteri
	glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR_MIPMAP_LINEAR);
	

	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAX_ANISOTROPY_EXT, 4);

	glPixelStorei(GL_PACK_ALIGNMENT, 1);
	CheckOpenGLError();

	// TODO: Use glTextImage2D to set the texture data
	glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB8, width, height, 0, GL_RGB, GL_UNSIGNED_BYTE, data);

	// TODO: Generate texture mip-maps
	glGenerateMipmap(GL_TEXTURE_2D);

	CheckOpenGLError();
	// Save the texture into a wrapper Texture2D class for using easier later during rendering phase
	Texture2D* texture = new Texture2D();
	texture->Init(textureID, width, height, channels);

	SAFE_FREE_ARRAY(data);
	return texture;
}


// Documentation for the input functions can be found in: "/Source/Core/Window/InputController.h" or
// https://github.com/UPB-Graphics/Framework-EGC/blob/master/Source/Core/Window/InputController.h

void Tema3::OnInputUpdate(float deltaTime, int mods)
{
	float speed = 2;

	if (!window->MouseHold(GLFW_MOUSE_BUTTON_RIGHT))
	{
		
		glm::vec3 up = glm::vec3(0, 1, 0);
		glm::vec3 right = GetSceneCamera()->transform->GetLocalOXVector();
		glm::vec3 forward = GetSceneCamera()->transform->GetLocalOZVector();
		forward = glm::normalize(glm::vec3(forward.x, 0, forward.z));


		if (window->KeyHold(GLFW_KEY_UP)) lightPosition -= forward * deltaTime * speed;
		if (window->KeyHold(GLFW_KEY_LEFT)) lightPosition -= right * deltaTime * speed;
		if (window->KeyHold(GLFW_KEY_DOWN)) lightPosition += forward * deltaTime * speed;
		if (window->KeyHold(GLFW_KEY_RIGHT)) lightPosition += right * deltaTime * speed;
		if (window->KeyHold(GLFW_KEY_E)) lightPosition += up * deltaTime * speed;
		if (window->KeyHold(GLFW_KEY_Q)) lightPosition -= up * deltaTime * speed;
	}
}

void Tema3::OnKeyPress(int key, int mods)
{
	if (pDead) return;
	if (!pInAir && key == GLFW_KEY_SPACE) {
		jump_start_time = Engine::GetElapsedTime();
		pDucking = true;
	}
	if (key == GLFW_KEY_A) {
		if (abs(offset - offset_step) <= offset_max) offset -= offset_step;
	}
	else if (key == GLFW_KEY_D) {
		if (abs(offset + offset_step) <= offset_max) offset += offset_step;
	}
	// add key press event
}

void Tema3::OnKeyRelease(int key, int mods)
{
	if (pDead) return;
	if (pDucking && key == GLFW_KEY_SPACE) {
		jump_power = jump_add_power + jump_max_power * ((min(jump_max_hold, Engine::GetElapsedTime() - jump_start_time) / jump_max_hold));
		pDucking = false;
		pInAir = true;
	}
}

void Tema3::OnMouseMove(int mouseX, int mouseY, int deltaX, int deltaY)
{
	// add mouse move event
}

void Tema3::OnMouseBtnPress(int mouseX, int mouseY, int button, int mods)
{
	// add mouse button press event
}

void Tema3::OnMouseBtnRelease(int mouseX, int mouseY, int button, int mods)
{
	// add mouse button release event
}

void Tema3::OnMouseScroll(int mouseX, int mouseY, int offsetX, int offsetY)
{
}

void Tema3::OnWindowResize(int width, int height)
{
}
