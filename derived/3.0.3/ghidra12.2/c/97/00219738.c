
bool FUN_00219738(long param_1,ushort param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 0x26) == '\0') {
    uVar4 = 0;
  }
  else {
    uVar1 = *(ushort *)(param_1 + 0x20);
    iVar3 = (uint)*(ushort *)(param_1 + 0x22) + (uint)*(ushort *)(param_1 + 0x24) + (uint)uVar1 + -1
    ;
    iVar2 = 0;
    if (uVar1 != 0) {
      iVar2 = iVar3 / (int)(uint)uVar1;
    }
    uVar4 = (uint)*(ushort *)
                   (*(long *)(param_1 + 0x28) + (ulong)(iVar3 - iVar2 * (uint)uVar1) * 0x5ac);
  }
  uVar1 = 0xfffe;
  if (param_2 != 0) {
    uVar1 = param_2;
  }
  return *(char *)(param_1 + 0x26) == '\0' || uVar1 - 1 == uVar4;
}

