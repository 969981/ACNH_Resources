
void FUN_021ae660(long param_1,uint param_2,uint param_3,undefined4 param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + (ulong)param_2 * 0xba0;
  if (9 < param_2) {
    lVar1 = param_1;
  }
  if ((*(long *)(lVar1 + 0xaa0) == 0) || (*(int *)(*(long *)(lVar1 + 0xaa0) + 4) != 5)) {
    return;
  }
  lVar2 = *(long *)(lVar1 + 0x928);
  if (lVar2 != lVar1 + 0x920) {
    lVar3 = lVar2 + -0x10;
    if ((param_3 & 1) == 0) {
      do {
        if (*(int *)(lVar3 + 4) == 5) {
          *(undefined1 *)(lVar3 + 9) = 1;
        }
        lVar2 = *(long *)(lVar2 + 8);
        lVar3 = lVar2 + -0x10;
      } while (lVar3 != lVar1 + 0x910);
    }
    else {
      do {
        if (*(int *)(lVar3 + 4) == 5) {
          *(undefined4 *)(lVar3 + 4) = 6;
          *(undefined1 *)(lVar3 + 9) = 1;
        }
        lVar2 = *(long *)(lVar2 + 8);
        lVar3 = lVar2 + -0x10;
      } while (lVar3 != lVar1 + 0x910);
    }
  }
  FUN_0214e990(lVar1 + 0x8b0,param_4);
  return;
}

