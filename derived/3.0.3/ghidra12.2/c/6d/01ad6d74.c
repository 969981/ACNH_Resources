
uint FUN_01ad6d74(long param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = FUN_0277d6c4(param_1 + 8);
  if ((iVar3 == 0x38e) || (iVar3 = FUN_0277d6c4(param_1 + 8), iVar3 == 0x10d7)) {
    uVar2 = (uint)*(ushort *)(param_1 + 0xc) - (uint)*(ushort *)(DAT_05635578 + 0x13f0);
    if (uVar2 < *(uint *)(DAT_05635578 + 0x13d0)) {
      uVar1 = 0;
      if (*(long *)(*(long *)(DAT_05635578 + 0x13d8) + (long)(int)uVar2 * 8) != 0) {
        uVar1 = (uint)*(ushort *)(param_1 + 0xc);
      }
      return uVar1;
    }
  }
  return 0;
}

