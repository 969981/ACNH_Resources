
void FUN_012e20a8(long param_1,float *param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_2 != (float *)0x0) {
    iVar2 = *(int *)(param_1 + 0x24);
    iVar1 = *(int *)(param_1 + 0x14);
    *param_2 = ((float)*(int *)(param_1 + 0x10) * 5.0 + (float)*(int *)(param_1 + 0x20) * 5.0 + 5.0)
               * 0.5;
    param_2[2] = ((float)iVar1 * 5.0 + (float)iVar2 * 5.0 + 5.0) * 0.5;
  }
  return;
}

