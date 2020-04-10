# ECS model psuedo code

INVALID_ENTITY = 0
MAX_ENTITIES = 1000000

class EntityManager:

    def __init__(self):
        self.m_entities = {}
        self.m_freeEntts = []
        self.m_lastEntt = 0

    def Create(self):
        if len(m_freeEntts) != 0:
            return m_freeEntts.pop()
        elif len(m_entities) < MAX_ENTITIES:
            m_lastEntt += 1
            m_entities[m_lastEntt] = []
            return m_lastEntt
        else:
            return INVALID_ENTITY;

    def Remove(self, entity):
        if entity in m_entities:
            m_freeEntts.append(entity)
            m_entities[entity].clear()
            return True
        elif:
            return False

    def AddComponent(entity, component):
        if entity in m_entities:
            m_entities[entity].append(component)
            return True
        else: return False

    def RemoveComponent(entity, component):
        if entity in m_entities:
            if component in m_entities[entity]:
                m_entities[entity].remove(component)
                return True

        return False
