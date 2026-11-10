
void FUN_0016bc98(long *param_1)

{
  long lVar1;
  
  lVar1 = *param_1;
  if (lVar1 != 0) {
    *param_1 = *(long *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x88) = 0;
    if (*param_1 == 0) {
      param_1[1] = 0;
    }
    param_1[2] = param_1[2] + -1;
  }
  return;
}

