
void FUN_02b3ce70(undefined8 param_1,int param_2)

{
  int *piVar1;
  undefined8 *puVar2;
  bool bVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  uint uVar7;
  int iVar8;
  undefined **local_78;
  undefined8 uStack_70;
  int *local_68;
  uint local_58 [10];
  int local_14;
  
  local_78 = &PTR_FUN_04aa2b00;
  local_68 = &local_14;
  uVar6 = 0;
  do {
    piVar1 = &DAT_0516b108 + uVar6;
    local_58[0] = (uint)uVar6;
    if (0x38 < local_58[0]) {
      piVar1 = &DAT_0516b108;
    }
    if (*piVar1 == param_2) goto LAB_02b3cedc;
    uVar7 = 0x39;
    if ((int)local_58[0] < 0x39) {
      uVar7 = local_58[0] + 1;
    }
    uVar6 = (ulong)uVar7;
  } while (uVar7 != 0x39);
  local_58[0] = 0;
LAB_02b3cedc:
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
    uStack_70 = param_1;
    local_14 = param_2;
    plVar5 = (long *)(*(code *)**(undefined8 **)(puVar2[1] + 0x10))();
    iVar4 = (**(code **)(*plVar5 + 0x18))();
    if (0 < iVar4) {
      iVar8 = 0;
      do {
        FUN_01360490(local_58,puVar2[1],iVar8);
        uVar6 = (*(code *)*local_78)(&local_78,local_58,iVar8);
        if ((uVar6 & 1) == 0) {
          return;
        }
        bVar3 = iVar4 + -1 != iVar8;
        iVar8 = iVar8 + 1;
      } while (bVar3);
    }
  }
  return;
}

