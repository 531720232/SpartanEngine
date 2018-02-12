/*
Copyright(c) 2016-2018 Panos Karabelas

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and / or sell
copies of the Software, and to permit persons to whom the Software is furnished
to do so, subject to the following conditions :

The above copyright notice and this permission notice shall be included in
all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.IN NO EVENT SHALL THE AUTHORS OR
COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*/

#pragma once

//= INCLUDES ==================
#include "../Core/EngineDefs.h"
#include <memory>
#include <string>
//=============================

namespace Directus
{
	class Context;
	class Stopwatch;
	class Scene;
	class Timer;
	class ResourceManager;

	class ENGINE_CLASS PerformanceProfiler
	{
	public:
		static void Initialize(Context* context);

		static void RenderingStarted();
		static void RenderingMesh();
		static void RenderingFinished();
		static void UpdateMetrics();
		static const std::string& GetMetrics() { return m_metrics; }
		
	private:
		// Converts float to string with specificed precision
		static std::string to_string_precision(float value, int decimals);

		// Metrics
		static float m_renderTimeMs;
		static int m_renderedMeshesCount;
		static int m_renderedMeshesPerFrame;

		// Settings
		static float m_updateFrequencyMs;
		static float m_timeSinceLastUpdate;

		// Misc
		static std::unique_ptr<Stopwatch> m_renderTimer;
		static std::string m_metrics;

		// Dependencies
		static Scene* m_scene;
		static Timer* m_timer;
		static ResourceManager* m_resourceManager;
	};
}