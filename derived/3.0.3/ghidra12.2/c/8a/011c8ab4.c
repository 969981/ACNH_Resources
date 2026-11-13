
void FUN_011c8ab4(long param_1,uint param_2)

{
  long lVar1;
  long lVar2;
  undefined4 uVar3;
  ulong uVar4;
  
  lVar1 = param_1 + 0x278;
  lVar2 = lVar1 + (ulong)param_2 * 0x120;
  if (999 < param_2) {
    lVar2 = lVar1;
  }
  if (*(int *)(lVar2 + 0xfc) != 4) {
    uVar3 = *(undefined4 *)(param_1 + 0x46790);
    uVar4 = *(ulong *)(lVar2 + 0x108);
    *(ulong *)(lVar2 + 0x108) = uVar4 | 0x80000;
    if (*(int *)(lVar2 + 0xfc) == 2 && (uVar4 & 0x10000000) == 0) {
      FUN_011cf0c0(lVar2,lVar1,uVar3,0,0);
      return;
    }
  }
  return;
}

