
void FUN_007544dc(long param_1)

{
  int iVar1;
  int iVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  uint uVar8;
  
  FUN_0073aab0();
  uVar4 = *(ushort *)(param_1 + 0x12d2);
  cVar3 = *(char *)(param_1 + 0x12d1);
  iVar1 = *(int *)(param_1 + 0x12c8);
  *(bool *)(param_1 + 0x12d1) = cVar3 == '\0';
  iVar5 = (**(code **)(*(long *)(param_1 + 0x1298) + 0x20))(param_1 + 0x1298);
  iVar6 = (**(code **)(*(long *)(param_1 + 0x1298) + 0x20))(param_1 + 0x1298);
  iVar2 = *(int *)(param_1 + 0x12b0);
  lVar7 = 0;
  if (*(long *)(param_1 + 0x12b8) != 0) {
    lVar7 = (*DAT_04c61fd0)();
  }
  uVar8 = (uint)uVar4;
  if (cVar3 != '\0') {
    uVar8 = 0;
  }
  *(ulong *)(param_1 + 0x12a8) = lVar7 + (ulong)(iVar2 + ((iVar1 + iVar5) - 1U & -iVar6) * uVar8);
  FUN_0161c130(param_1 + 0x11f0);
  return;
}

