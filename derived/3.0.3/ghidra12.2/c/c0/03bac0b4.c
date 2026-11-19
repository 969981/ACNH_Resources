
undefined8 FUN_03bac0b4(long param_1,uint param_2)

{
  uint uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if (((lVar2 != 0) && (*(long *)(lVar2 + 0x10) != 0)) && (uVar1 = *(uint *)(lVar2 + 8), uVar1 != 0)
     ) {
    if (-1 < (int)*(uint *)(lVar2 + 0x18)) {
      param_2 = *(uint *)(lVar2 + 0x18);
    }
    if ((int)uVar1 <= (int)param_2) {
      param_2 = 0;
    }
    if (param_2 < uVar1) {
      return *(undefined8 *)(*(long *)(lVar2 + 0x10) + (long)(int)param_2 * 8);
    }
  }
  return 0;
}

