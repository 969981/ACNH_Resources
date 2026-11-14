
void FUN_017acea0(undefined2 *param_1,undefined8 param_2,ulong param_3)

{
  undefined2 uVar1;
  long local_40;
  char local_38;
  char local_37;
  char local_36;
  
  if (*(int *)(param_1 + 8) != 0) {
    FUN_0071c8d0(&local_40,param_1 + 8,param_2,0);
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
    FUN_017acf60(param_1,param_2,0,1,1);
  }
  *param_1 = 0xffff;
  *(undefined1 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0xffffffff;
  *(undefined8 *)(param_1 + 8) = 0;
  uVar1 = DAT_04cb6038;
  param_1[0xc] = 0;
  param_1[1] = uVar1;
  return;
}

