
int FUN_0053c6f0(long param_1)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  if ((*(char *)(param_1 + 0x269) == '\0') || (uVar4 = FUN_0053aee0(param_1), (uVar4 & 1) == 0)) {
    iVar5 = 0;
    cVar2 = *(char *)(param_1 + 0x268);
  }
  else {
    uVar1 = (uint)*(ushort *)(*(long *)(param_1 + 0x18) + 0x1aa) -
            (uint)*(ushort *)(*(long *)(param_1 + 0x18) + 0x1a8) & 0xffff;
    iVar5 = (uVar1 + 0x10 & 0x1fff0) * 3 + (uVar1 * 0x30 + 0xaf & 0x7fff80);
    cVar2 = *(char *)(param_1 + 0x268);
  }
  if ((cVar2 == '\0') ||
     (iVar5 = iVar5 + *(int *)(param_1 + 0x28) * 0x10, (*(byte *)(param_1 + 0x26c) >> 2 & 1) == 0))
  {
    return iVar5;
  }
  iVar3 = FUN_005d4610(param_1 + 0x1b0,*(undefined8 *)(param_1 + 0x18));
  return iVar3 + iVar5;
}

