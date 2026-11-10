
bool FUN_00219610(long param_1,short param_2)

{
  short sVar1;
  short sVar2;
  ushort uVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  short sVar7;
  short sVar8;
  
  if (*(char *)(param_1 + 0x26) == '\0') {
    return false;
  }
  uVar3 = *(ushort *)(param_1 + 0x20);
  iVar6 = (uint)*(ushort *)(param_1 + 0x22) + (uint)*(ushort *)(param_1 + 0x24) + (uint)uVar3 + -1;
  iVar5 = 0;
  if (uVar3 != 0) {
    iVar5 = iVar6 / (int)(uint)uVar3;
  }
  sVar4 = *(short *)(*(long *)(param_1 + 0x28) + (ulong)(iVar6 - iVar5 * (uint)uVar3) * 0x5ac);
  sVar7 = sVar4 - param_2;
  sVar1 = param_2;
  sVar2 = sVar4;
  sVar8 = -sVar7;
  if (-1 < sVar7) {
    sVar1 = sVar4;
    sVar2 = param_2;
    sVar8 = sVar7;
  }
  if (-1 < sVar8) {
    sVar2 = sVar1;
  }
  return sVar4 == sVar2;
}

