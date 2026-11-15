
undefined8 FUN_01e0634c(long param_1,undefined8 param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = *(uint *)(param_1 + 0x1b0);
  if (*(long *)(param_1 + 0x1b8) == 0) {
    uVar1 = 0xffffffff;
  }
  if (((int)param_3 < (int)uVar1 && param_3 < *(uint *)(param_1 + 0x1b0)) &&
     (lVar2 = *(long *)(*(long *)(param_1 + 0x1b8) + (long)(int)param_3 * 8), lVar2 != 0)) {
    FUN_01e06140(param_2,lVar2);
    return 1;
  }
  return 0;
}

