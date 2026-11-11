
void FUN_003c9240(undefined8 *param_1,int *param_2)

{
  int *piVar1;
  
  if ((((param_2 != (int *)0x0) && (*param_2 == 0x4b4e4246)) && ((short)param_2[1] == -0x101)) &&
     (param_2[2] == 0x10000)) {
    *param_1 = param_2;
    piVar1 = (int *)FUN_003c94d0(param_2);
    if (*piVar1 == 0x4f464e49) {
      param_1[1] = piVar1 + 2;
      *(undefined1 *)(param_1 + 2) = 1;
    }
  }
  return;
}

