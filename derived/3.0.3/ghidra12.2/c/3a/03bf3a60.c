
void FUN_03bf3a60(long param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long lVar7;
  
  if ((*(byte *)(param_1 + 0xd8) >> 1 & 1) == 0) {
    plVar2 = (long *)(**(code **)(**(long **)(*(long *)(param_1 + 0x30) + 0x18) + 0x20))();
    plVar2 = (long *)(**(code **)(*plVar2 + 0x38))();
    (**(code **)(*plVar2 + 0x10))();
    puVar1 = (undefined8 *)(param_1 + 8);
    if (*(undefined8 **)(param_1 + 0x10) != puVar1) {
      lVar6 = (long)*(int *)(param_1 + 0x1c);
      lVar7 = (long)*(undefined8 **)(param_1 + 0x10) - lVar6;
      do {
        *(uint *)(lVar7 + 8) = *(uint *)(lVar7 + 8) | 0x10;
        if ((*(long *)(lVar7 + 0x28) != 0) && (*(long *)(lVar7 + 0x58) != 0)) {
          plVar3 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(lVar7 + 0x28) + 0x30) + 0x18
                                                   ) + 0x20))();
          plVar3 = (long *)(**(code **)(*plVar3 + 0x38))();
          (**(code **)(*plVar3 + 0x10))();
          (**(code **)(**(long **)(lVar7 + 0x58) + 0x30))();
          (**(code **)(*plVar3 + 0x18))(plVar3);
        }
        lVar7 = *(long *)(lVar7 + lVar6 + 8) - lVar6;
      } while (lVar7 != (long)puVar1 - lVar6);
    }
    (**(code **)(**(long **)(*(long *)(param_1 + 0x30) + 0x18) + 0x20))();
    puVar4 = *(undefined8 **)(param_1 + 0x10);
    if (puVar4 != puVar1) {
      lVar6 = (long)*(int *)(param_1 + 0x1c);
      lVar7 = (long)puVar4 - lVar6;
      do {
        FUN_03be68a0(lVar7);
        lVar7 = *(long *)(lVar7 + lVar6 + 8) - lVar6;
      } while (lVar7 != (long)puVar1 - lVar6);
      puVar4 = *(undefined8 **)(param_1 + 0x10);
    }
    while (puVar4 != puVar1) {
      puVar5 = (undefined8 *)puVar4[1];
      *puVar4 = 0;
      puVar4[1] = 0;
      puVar4 = puVar5;
    }
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(long *)(param_1 + 8) = param_1 + 8;
    *(undefined8 **)(param_1 + 0x10) = puVar1;
    (**(code **)(*plVar2 + 0x18))(plVar2);
    *(byte *)(param_1 + 0xd8) = *(byte *)(param_1 + 0xd8) | 2;
  }
  return;
}

