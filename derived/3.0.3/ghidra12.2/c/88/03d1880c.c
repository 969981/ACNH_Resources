
void FUN_03d1880c(undefined1 *param_1,float *param_2,long param_3)

{
  if (*(long *)(param_3 + 0x18) != 0) {
    FUN_03d1880c(param_1,param_2);
  }
  if (((*(byte *)(param_3 + 0x58) >> 1 & 1) != 0) && (*(byte *)(param_3 + 0x59) != 0xff)) {
    *param_2 = *param_2 * (float)*(byte *)(param_3 + 0x59) * 0.003921569;
    *param_1 = 1;
  }
  return;
}

