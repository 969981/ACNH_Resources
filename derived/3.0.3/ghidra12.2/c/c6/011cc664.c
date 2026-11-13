
undefined8 FUN_011cc664(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  
  lVar1 = param_1 + 0x278 + (ulong)param_2 * 0x120;
  if (999 < param_2) {
    lVar1 = param_1 + 0x278;
  }
  if (((*(int *)(lVar1 + 0xfc) == 4) || (*(int *)(lVar1 + 0x100) != 0)) ||
     (iVar2 = FUN_0277d6c4(lVar1), iVar2 != 0x3332)) {
    uVar3 = 0;
  }
  else {
    uVar3 = 1;
    *(undefined4 *)(lVar1 + 0x100) = 0x1d;
    *(ulong *)(lVar1 + 0x108) = *(ulong *)(lVar1 + 0x108) | 3;
  }
  return uVar3;
}

