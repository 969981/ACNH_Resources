
void FUN_00514500(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  
  FUN_004435a0(param_3);
  lVar1 = *(long *)(param_1 + 0x30);
  if (*(long *)(lVar1 + (long)param_2 * 8) != 0) {
    FUN_004435c0();
    lVar1 = *(long *)(param_1 + 0x30);
  }
  *(undefined8 *)(lVar1 + (long)param_2 * 8) = param_3;
  return;
}

