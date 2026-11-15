
void FUN_0234ea74(undefined4 *param_1,undefined8 param_2,ulong param_3)

{
  int *piVar1;
  long local_40;
  char local_38;
  char local_37;
  char local_36;
  
  piVar1 = param_1 + 2;
  if (*piVar1 != 0) {
    FUN_0071c8d0(&local_40,piVar1,param_2,0);
    if (local_40 != 0) {
      if (local_37 == '\0') {
        return;
      }
      if ((param_3 & 1) != 0) {
        if (local_38 == '\0') {
          return;
        }
        if (local_36 == '\0') {
          return;
        }
      }
      FUN_006fb3d0();
    }
    FUN_0234eb20(param_1,param_2,0,1);
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  piVar1[0] = 0;
  piVar1[1] = 0;
  *(undefined2 *)(param_1 + 4) = 0;
  return;
}

