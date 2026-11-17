
void FUN_02b3d0e0(undefined8 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 *puVar7;
  uint uVar8;
  int iVar9;
  undefined **local_78;
  undefined8 uStack_70;
  undefined4 *local_68;
  int *piStack_60;
  uint local_58 [10];
  int local_18;
  undefined4 local_14;
  
  uVar6 = 0;
  do {
    local_58[0] = (uint)uVar6;
    piVar1 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar6 * 4);
    if (0x38 < local_58[0]) {
      piVar1 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar1 == param_3) goto LAB_02b3d13c;
    uVar8 = 0x39;
    if ((int)local_58[0] < 0x39) {
      uVar8 = local_58[0] + 1;
    }
    uVar6 = (ulong)uVar8;
  } while (uVar8 != 0x39);
  local_58[0] = 0;
LAB_02b3d13c:
  if (local_58[0] == 0) {
    plVar5 = (long *)(DAT_0519d040 + 0x1f8);
  }
  else {
    plVar5 = (long *)(DAT_0519d040 + 0x30) + local_58[0];
    if (0x38 < local_58[0]) {
      plVar5 = (long *)(DAT_0519d040 + 0x30);
    }
  }
  puVar2 = &DAT_05636dd8;
  if (*plVar5 != 0) {
    puVar2 = (undefined8 *)(*plVar5 + 0x148);
  }
  if (puVar2[1] != 0) {
    local_68 = &local_14;
    piStack_60 = &local_18;
    local_78 = &PTR_FUN_04aa2b28;
    if (puVar2[1] != 0) {
      puVar7 = (undefined8 *)(puVar2[1] + 0x10);
      uStack_70 = param_1;
      local_18 = param_3;
      local_14 = param_2;
      plVar5 = (long *)(**(code **)*puVar7)(puVar7);
      iVar4 = (**(code **)(*plVar5 + 0x18))();
      if (0 < iVar4) {
        iVar9 = 0;
        do {
          FUN_01360490(local_58,puVar2[1],iVar9);
          uVar6 = (*(code *)*local_78)(&local_78,local_58,iVar9);
          if ((uVar6 & 1) == 0) {
            return;
          }
          bVar3 = iVar4 + -1 != iVar9;
          iVar9 = iVar9 + 1;
        } while (bVar3);
      }
    }
  }
  return;
}

