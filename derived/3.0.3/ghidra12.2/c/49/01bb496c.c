
undefined8 FUN_01bb496c(long *param_1,long *param_2,long param_3,long param_4,undefined8 param_5)

{
  ulong uVar1;
  long *plVar2;
  int *piVar3;
  uint uVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
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
    bVar6 = 0;
    local_70 = local_60;
  }
  else {
    bVar6 = *local_60;
    local_70 = local_60 + 1;
  }
  if (pbStack_58 < local_70 + 1) {
    uVar7 = 0;
  }
  else {
    uVar7 = (uint)*local_70;
    local_70 = local_70 + 1;
  }
  if (local_70 + 1 <= pbStack_58) {
    unaff_w25 = *local_70;
    local_70 = local_70 + 1;
  }
  local_68 = param_3;
  FUN_006f4120(&local_70,local_88,local_94,3);
  local_38 = (byte *)0x0;
  uVar1 = FUN_01baca48(param_5,&local_38,bVar6);
  if ((uVar1 & 1) == 0) {
    return 0;
  }
  if (unaff_w25 == 1) {
    uVar4 = 0x2000000;
  }
  else {
    if (unaff_w25 != 2) goto LAB_01bb4a48;
    uVar4 = 0x3000000;
  }
  uVar7 = uVar4 | uVar7;
LAB_01bb4a48:
  local_68 = CONCAT44(local_68._4_4_,uVar7);
  local_70 = local_38;
  if (param_4 == 0) {
    return 0;
  }
  plVar2 = (long *)FUN_01bc06e0(param_4,&local_70,1);
  if (plVar2 == (long *)0x0) {
    return 0;
  }
  plVar2 = (long *)(**(code **)(*plVar2 + 0x20))();
  piVar3 = (int *)(**(code **)(*plVar2 + 0x48))();
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  local_98 = 0;
  if (piVar3[1] == 1) {
    local_98 = 2;
  }
  else if (*piVar3 == 3) {
    local_98 = 1;
  }
  uVar1 = (ulong)local_98;
  if (2 < local_98) {
    uVar1 = 0;
  }
  lVar5 = local_88[uVar1];
  *param_1 = lVar5;
  uVar1 = (ulong)local_98;
  if (2 < local_98) {
    uVar1 = 0;
  }
  *param_2 = lVar5 + (ulong)local_94[uVar1] * 2;
  return 1;
}

