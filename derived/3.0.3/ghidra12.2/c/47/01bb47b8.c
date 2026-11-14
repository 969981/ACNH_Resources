
undefined8 FUN_01bb47b8(long *param_1,long *param_2,long param_3,long param_4,undefined8 param_5)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  int *piVar4;
  undefined8 uVar5;
  uint uVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  byte unaff_w25;
  uint local_98;
  uint local_94 [3];
  long local_88 [3];
  byte *local_70;
  long local_68;
  byte *local_60;
  byte *pbStack_58;
  byte *local_38;
  
  local_60 = *(byte **)(param_3 + 0x18);
  pbStack_58 = local_60 + *(ushort *)(param_3 + 0x10);
  if ((ulong)*(ushort *)(param_3 + 0x10) == 0) {
    bVar8 = 0;
    local_70 = local_60;
  }
  else {
    bVar8 = *local_60;
    local_70 = local_60 + 1;
  }
  if (pbStack_58 < local_70 + 1) {
    uVar9 = 0;
  }
  else {
    uVar9 = (uint)*local_70;
    local_70 = local_70 + 1;
  }
  if (local_70 + 1 <= pbStack_58) {
    unaff_w25 = *local_70;
    local_70 = local_70 + 1;
  }
  local_68 = param_3;
  FUN_006f4120(&local_70,local_88,local_94,3);
  local_38 = (byte *)0x0;
  uVar2 = FUN_01baca48(param_5,&local_38,bVar8);
  if ((uVar2 & 1) == 0) {
    return 0;
  }
  if (unaff_w25 == 1) {
    uVar6 = 0x2000000;
LAB_01bb4890:
    uVar9 = uVar6 | uVar9;
  }
  else if (unaff_w25 == 2) {
    uVar6 = 0x3000000;
    goto LAB_01bb4890;
  }
  local_68 = CONCAT44(local_68._4_4_,uVar9);
  local_70 = local_38;
  if (param_4 == 0) {
    return 0;
  }
  plVar3 = (long *)FUN_01bc06e0(param_4,&local_70,1);
  if (plVar3 == (long *)0x0) {
    return 0;
  }
  plVar3 = (long *)(**(code **)(*plVar3 + 0x20))();
  piVar4 = (int *)(**(code **)(*plVar3 + 0x48))();
  if (piVar4 == (int *)0x0) {
    return 0;
  }
  iVar1 = *piVar4;
  local_98 = 0;
  if (iVar1 == 3) {
    local_98 = 2;
  }
  else {
    if (iVar1 == 2) {
      uVar5 = 1;
      local_98 = 1;
      goto LAB_01bb4934;
    }
    uVar5 = 0;
    if (iVar1 != 1) goto LAB_01bb4934;
  }
  uVar5 = 1;
LAB_01bb4934:
  uVar2 = (ulong)local_98;
  if (2 < local_98) {
    uVar2 = 0;
  }
  lVar7 = local_88[uVar2];
  *param_1 = lVar7;
  uVar2 = (ulong)local_98;
  if (2 < local_98) {
    uVar2 = 0;
  }
  *param_2 = lVar7 + (ulong)local_94[uVar2] * 2;
  return uVar5;
}

