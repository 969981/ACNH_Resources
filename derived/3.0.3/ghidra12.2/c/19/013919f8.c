
long FUN_013919f8(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  
  uVar2 = *(uint *)(param_2 + 8);
  if (*(uint *)(param_1 + 0x10) <= uVar2) {
    uVar2 = 0;
  }
  lVar3 = *(long *)(param_1 + 0x18) + (long)(int)uVar2 * 0x18;
  uVar2 = *(uint *)(param_2 + 0xc);
  if (uVar2 < *(uint *)(lVar3 + 8)) {
    lVar3 = *(long *)(lVar3 + 0x10);
    if (*(uint *)(param_2 + 0x10) < *(uint *)(lVar3 + (long)(int)uVar2 * 0x10)) {
      lVar3 = *(long *)(lVar3 + (long)(int)uVar2 * 0x10 + 8) +
              (long)(int)*(uint *)(param_2 + 0x10) * 0x518;
      goto LAB_01391a60;
    }
  }
  lVar3 = 0;
LAB_01391a60:
  lVar1 = 0;
  if (lVar3 != 0) {
    lVar1 = lVar3 + 0x30;
  }
  return lVar1;
}

