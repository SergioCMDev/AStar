//----------------------------------------------------------------------------
//                                                        _   ________  __
//  Copyright VIU 2018                                   | | / /  _/ / / /
//  Author: Ivan Fuertes <ivan.fuertes@campusviu.es>     | |/ // // /_/ /
//                                                       |___/___/\____/
//----------------------------------------------------------------------------

#ifndef __AGENT_H__
#define __AGENT_H__ 1

#include <body.h>
#include <mind.h>

#include <cstdint>

class World;

class Agent {
  public:
    Agent() {};
    ~Agent() {};

    void init(World* world, const Body::Color color, const Body::Type type);
    void update(const uint32_t dt);
    void render() const;
    void shutdown();

	void setSteering(Body::SteeringMode steering) { body_.setSteering(steering); }
	void setSteering(Body::SteeringMode steering, Agent* agent) { body_.setSteering(steering); }
    const KinematicStatus* getKinematic() const { return body_.getKinematic(); }
    KinematicStatus* getKinematic() { return body_.getKinematic(); }
    World * world_;
    Body body_;
    Mind mind_;
	bool leader;
private:
};

#endif