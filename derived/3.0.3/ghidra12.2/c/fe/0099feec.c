
void FUN_0099feec(undefined2 *param_1,undefined8 param_2,ulong param_3)

{
  undefined2 uVar1;
  long local_40;
  char local_38;
  char local_37;
  char local_36;
  
  if (*(int *)(param_1 + 6) != 0) {
    FUN_0071c8d0(&local_40,param_1 + 6,param_2,0);
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
    FUN_0099ffb0(param_1,param_2,0,1);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  *(undefined8 *)(param_1 + 4) = 0;
  uVar1 = DAT_05586008;
  param_1[10] = 0;
  *param_1 = uVar1;
  *(undefined1 *)(param_1 + 1) = DAT_0558600a;
  *(undefined1 *)((long)param_1 + 3) = DAT_0558600b;
  *(undefined4 *)(param_1 + 2) = DAT_0558600c;
  return;
}

