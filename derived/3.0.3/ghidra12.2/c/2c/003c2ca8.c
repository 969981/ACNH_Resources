
void FUN_003c2ca8(long param_1,int param_2,undefined8 param_3,uint param_4)

{
  FUN_003c2f30(param_1 + (long)param_2 * 0xe0,param_3);
  if ((param_4 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x1e0) = param_3;
  }
  return;
}

