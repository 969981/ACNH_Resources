
void FUN_00351550(long *param_1,uint param_2,long param_3,uint param_4)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    uVar2 = param_3 << 0x30 | (ulong)(param_4 & 0xffff) << 0x20 | (ulong)param_2;
    do {
      while (*(ulong *)(lVar1 + 0x30) <= uVar2) {
        if (uVar2 <= *(ulong *)(lVar1 + 0x30)) {
          return;
        }
        lVar1 = *(long *)(lVar1 + 0x28);
        if (lVar1 == 0) {
          return;
        }
      }
      lVar1 = *(long *)(lVar1 + 0x20);
    } while (lVar1 != 0);
  }
  return;
}

