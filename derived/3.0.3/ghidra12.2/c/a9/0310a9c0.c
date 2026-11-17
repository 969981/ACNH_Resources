
void FUN_0310a9c0(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  
  if (param_2 != 0) {
    if ((-1 < *(int *)(param_2 + 0x46c)) && (uVar3 = *(uint *)(param_2 + 0x468), 0 < (int)uVar3)) {
      uVar5 = 0;
      do {
        lVar4 = (long)(int)uVar5;
        if (*(int *)(param_2 + 0x46c) == 0 || uVar3 <= uVar5) {
          lVar4 = 0;
        }
        uVar2 = (**(code **)(*(long *)(*(long *)(param_2 + 0x470) + lVar4 * 0x20) + 0x10))();
        if ((uVar2 & 1) == 0) {
          lVar4 = (long)(int)uVar5;
          if (*(int *)(param_2 + 0x46c) == 0 || *(uint *)(param_2 + 0x468) <= uVar5) {
            lVar4 = 0;
          }
          puVar1 = (undefined8 *)(*(long *)(param_2 + 0x470) + lVar4 * 0x20);
          puVar1[2] = &LAB_0310ab48;
          puVar1[3] = 0;
          *puVar1 = &PTR_LAB_04b00b30;
          puVar1[1] = param_1;
          break;
        }
        uVar3 = *(uint *)(param_2 + 0x468);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar3);
    }
    if ((3 < *(int *)(param_2 + 0x46c)) && (uVar3 = *(uint *)(param_2 + 0x468), 0 < (int)uVar3)) {
      uVar5 = 0;
      do {
        lVar4 = (long)(int)(uVar5 + uVar3 * 4);
        if (*(uint *)(param_2 + 0x46c) < 5 || uVar3 <= uVar5) {
          lVar4 = 0;
        }
        uVar2 = (**(code **)(*(long *)(*(long *)(param_2 + 0x470) + lVar4 * 0x20) + 0x10))();
        if ((uVar2 & 1) == 0) {
          lVar4 = (long)(int)(uVar5 + *(uint *)(param_2 + 0x468) * 4);
          if (*(uint *)(param_2 + 0x46c) < 5 || *(uint *)(param_2 + 0x468) <= uVar5) {
            lVar4 = 0;
          }
          puVar1 = (undefined8 *)(*(long *)(param_2 + 0x470) + lVar4 * 0x20);
          puVar1[2] = &LAB_0310ab74;
          puVar1[3] = 0;
          *puVar1 = &PTR_LAB_04b00b30;
          puVar1[1] = param_1;
          return;
        }
        uVar3 = *(uint *)(param_2 + 0x468);
        uVar5 = uVar5 + 1;
      } while ((int)uVar5 < (int)uVar3);
    }
  }
  return;
}

