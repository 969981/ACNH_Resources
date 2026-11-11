
void FUN_005d2910(undefined8 *param_1,long param_2,long param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  
  *param_1 = &PTR_LAB_048df790;
  param_1[1] = 0xffffffff;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  param_1[6] = param_3;
  lVar6 = *(long *)(param_2 + 0x18);
  uVar3 = FUN_00515110(lVar6,*(ulong *)(param_3 + 0x18) & 0xfffffffffffffffe);
  puVar2 = PTR_DAT_048607b8;
  lVar5 = param_1[6];
  if (0 < *(int *)(lVar5 + 0x28)) {
    lVar8 = 0;
    do {
      plVar7 = *(long **)(*(long *)(lVar6 + 0x50) +
                         (long)*(int *)(*(long *)(lVar5 + 0x20) + lVar8 * 4) * 8);
      lVar5 = (**(code **)(*plVar7 + 0x68))(plVar7,param_2,uVar3);
      if (lVar5 != 0) {
        uVar4 = *(uint *)(param_1 + 5);
        if (uVar4 == (*(uint *)((long)param_1 + 0x2c) & 0x3fffffff)) {
          FUN_00426990(puVar2,param_1 + 4,0x10);
          uVar4 = *(uint *)(param_1 + 5);
        }
        *(uint *)(param_1 + 5) = uVar4 + 1;
        puVar1 = (undefined4 *)(param_1[4] + (long)(int)uVar4 * 0x10);
        *puVar1 = (int)plVar7[4];
        *(long *)(puVar1 + 2) = lVar5;
      }
      lVar5 = param_1[6];
      lVar8 = lVar8 + 1;
    } while (lVar8 < *(int *)(lVar5 + 0x28));
  }
  return;
}

