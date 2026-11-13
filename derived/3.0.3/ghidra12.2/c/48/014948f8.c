
void FUN_014948f8(undefined8 *param_1,undefined8 param_2,ulong param_3)

{
  long local_40;
  char local_38;
  char local_37;
  char local_36;
  
  if (*(int *)((long)param_1 + 4) != 0) {
    FUN_0071c8d0(&local_40,(int *)((long)param_1 + 4),param_2,0);
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
    FUN_01494990(param_1,param_2,0,1);
  }
  *(undefined8 *)((long)param_1 + 6) = 0;
  *param_1 = 0;
  return;
}

