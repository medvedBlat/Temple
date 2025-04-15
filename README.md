В проекте созданы классы AInteractableActor, AInteractaedActor и их дочерние.  AInteractableActor - это акторы с которыми персонаж может взаимодействовать по кнопке "E". 
AInteractaedActor связаны с AInteractableActor и выполняют логику через интерфейс после взаимодействия тгрока со вторыми. Классы наследуют соответствующие интерфейсы. Примерами AInteractableActor являются артефакты и рычаги. 
AInteractaedActor - двери и платформы. Родительские классы находятся в Temple\Source\Temple\Interactables, интерфейсы в Temple\Source\Temple\Interfaces. Дочерние классы: Temple\Content\ThirdPerson\Blueprints\Interactables.
Анимационный BP для npc: Temple\Content\Animations. Сам npc с его BT: Temple\Content\ThirdPerson\Blueprints\NPC. Материалы: Temple\Content\Materials
