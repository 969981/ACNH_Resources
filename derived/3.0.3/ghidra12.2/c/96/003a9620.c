
void FUN_003a9620(long *param_1,uint param_2)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  
  *(short *)((long)param_1 + 0xe) = (short)param_2;
  if ((param_2 & 0xffff) <= (uint)*(ushort *)((long)param_1 + 0xc)) {
    param_2 = (uint)*(ushort *)((long)param_1 + 0xc);
  }
  if ((param_2 & 0xffff) != 0) {
    uVar1 = (ulong)param_2 & 3;
    uVar2 = 0;
    if (3 < (param_2 & 0xffff)) {
      do {
        lVar3 = uVar2 * 4;
        uVar2 = uVar2 + 4;
        *(undefined4 *)(*param_1 + lVar3) = 0xffffffff;
        *(undefined4 *)(*param_1 + lVar3 + 4) = 0xffffffff;
        *(undefined4 *)(*param_1 + lVar3 + 8) = 0xffffffff;
        *(undefined4 *)(*param_1 + lVar3 + 0xc) = 0xffffffff;
      } while (((ulong)param_2 & 0xfffc) != uVar2);
    }
    if ((param_2 & 3) != 0) {
      lVar3 = uVar2 << 2;
      do {
        uVar1 = uVar1 - 1;
        *(undefined4 *)(*param_1 + lVar3) = 0xffffffff;
        lVar3 = lVar3 + 4;
      } while (uVar1 != 0);
    }
  }
  return;
}

