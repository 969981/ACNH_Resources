
int FUN_0053c7a0(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  ushort uVar6;
  int iVar7;
  ulong uVar8;
  int iVar9;
  
  if ((*(char *)(param_1 + 0x269) == '\0') || (uVar8 = FUN_0053aee0(param_1), (uVar8 & 1) == 0)) {
    iVar9 = 0;
    cVar4 = *(char *)(param_1 + 0x268);
  }
  else {
    uVar5 = *(ushort *)(*(long *)(param_1 + 0x18) + 0x1aa);
    uVar6 = *(ushort *)(*(long *)(param_1 + 0x18) + 0x1a8);
    *(long *)(param_1 + 0x210) = param_2;
    uVar2 = (uint)uVar5 - (uint)uVar6 & 0xffff;
    uVar3 = uVar2 + 0x10 & 0x1fff0;
    uVar8 = (ulong)uVar3;
    uVar2 = uVar2 * 0x30 + 0xaf & 0x7fff80;
    param_2 = (ulong)uVar2 + param_2;
    *(long *)(param_1 + 0x220) = param_2;
    param_2 = param_2 + uVar8;
    *(long *)(param_1 + 0x228) = param_2;
    lVar1 = param_2 + uVar8;
    param_2 = lVar1 + uVar8;
    iVar9 = uVar3 * 3 + uVar2;
    *(long *)(param_1 + 0x230) = lVar1;
    cVar4 = *(char *)(param_1 + 0x268);
  }
  if (cVar4 != '\0') {
    *(long *)(param_1 + 0x280) = param_2;
    *(int *)(param_1 + 0x288) = *(int *)(param_1 + 0x28);
    uVar2 = *(int *)(param_1 + 0x28) * 0x10;
    iVar9 = uVar2 + iVar9;
    if ((*(byte *)(param_1 + 0x26c) >> 2 & 1) != 0) {
      iVar7 = FUN_005d4620(param_1 + 0x1b0,*(undefined8 *)(param_1 + 0x18),param_2 + (ulong)uVar2);
      iVar9 = iVar7 + iVar9;
    }
  }
  return iVar9;
}

