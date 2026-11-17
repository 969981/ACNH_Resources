
void FUN_02b3d230(undefined8 param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  undefined **local_78;
  undefined8 uStack_70;
  int *local_68;
  uint local_58 [10];
  int local_14;
  
  uVar9 = 0;
  do {
    uVar8 = (uint)uVar9;
    piVar1 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar9 * 4);
    if (0x38 < uVar8) {
      piVar1 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar1 == param_2) goto LAB_02b3d290;
    uVar6 = 0x39;
    if ((int)uVar8 < 0x39) {
      uVar6 = uVar8 + 1;
    }
    uVar9 = (ulong)uVar6;
  } while (uVar6 != 0x39);
  uVar8 = 0;
LAB_02b3d290:
  local_14 = param_2;
  FUN_02b3d3a0(param_1,param_2);
  FUN_02b3c5f8(param_1,param_2);
  FUN_02b3c7fc(param_1,param_2);
  if (uVar8 == 0) {
    plVar5 = (long *)(DAT_0519d040 + 0x1f8);
  }
  else {
    plVar5 = (long *)(DAT_0519d040 + 0x30) + uVar8;
    if (0x38 < uVar8) {
      plVar5 = (long *)(DAT_0519d040 + 0x30);
    }
  }
  puVar2 = &DAT_05636dd8;
  if (*plVar5 != 0) {
    puVar2 = (undefined8 *)(*plVar5 + 0x148);
  }
  if (puVar2[1] != 0) {
    local_78 = &PTR_FUN_04aa2b50;
    local_68 = &local_14;
    if (puVar2[1] != 0) {
      uStack_70 = param_1;
      local_58[0] = uVar8;
      plVar5 = (long *)(*(code *)**(undefined8 **)(puVar2[1] + 0x10))();
      iVar4 = (**(code **)(*plVar5 + 0x18))();
      if (0 < iVar4) {
        iVar7 = 0;
        do {
          FUN_01360490(local_58,puVar2[1],iVar7);
          uVar9 = (*(code *)*local_78)(&local_78,local_58,iVar7);
          if ((uVar9 & 1) == 0) {
            return;
          }
          bVar3 = iVar4 + -1 != iVar7;
          iVar7 = iVar7 + 1;
        } while (bVar3);
      }
    }
  }
  return;
}

