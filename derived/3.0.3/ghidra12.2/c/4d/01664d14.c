
undefined8 FUN_01664d14(long param_1,int param_2)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 8) == 0) {
    return 0;
  }
  uVar2 = 0;
  if ((*(long *)(*(long *)(param_1 + 8) + 0x20) != 0) &&
     (lVar1 = FUN_038fde10(), uVar2 = 0, lVar1 != 0)) {
    uVar2 = *(undefined8 *)(*(long *)(lVar1 + 0x28) + (long)param_2 * 8);
  }
  return uVar2;
}

