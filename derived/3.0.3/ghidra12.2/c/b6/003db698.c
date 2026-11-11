
void FUN_003db698(undefined8 *param_1,int *param_2)

{
  ulong uVar1;
  
  if (((*param_2 == 0x4d545346) && ((short)param_2[1] == -0x101)) &&
     (param_2[2] - 0x10000U < 0x50301)) {
    *param_1 = param_2;
    uVar1 = FUN_003dbae0(param_2);
    param_2 = (int *)((long)param_2 + (uVar1 & 0xffffffff));
    if (*param_2 == 0x4f464e49) {
      param_1[1] = param_2 + 2;
    }
  }
  return;
}

