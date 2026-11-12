
undefined8 FUN_0076b868(undefined2 *param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  long local_40;
  char local_38;
  char local_37;
  char local_36;
  
  if (*(int *)(param_1 + 10) == 0) {
    if ((param_3 & 1) != 0) {
      return 1;
    }
  }
  else {
    FUN_0071c8d0(&local_40,param_1 + 10,param_2,0);
    if (local_40 != 0) {
      if ((local_37 == '\0') || (((param_4 & 1) != 0 && ((local_38 == '\0' || (local_36 == '\0')))))
         ) {
        return 0;
      }
      FUN_006fb3d0();
    }
    if ((param_3 & 1) != 0) {
      return 1;
    }
    FUN_0076c480(param_1,param_2,0,1,1);
  }
  puVar1 = PTR_DAT_04bb37e0;
  *(undefined8 *)(param_1 + 10) = 0;
  param_1[0xe] = 0;
  *param_1 = *(undefined2 *)puVar1;
  *(undefined *)(param_1 + 1) = puVar1[2];
  *(undefined *)((long)param_1 + 3) = puVar1[3];
  *(undefined4 *)(param_1 + 2) = *(undefined4 *)(puVar1 + 4);
  *(undefined8 *)(param_1 + 4) = 0xffffffff00000000;
  return 1;
}

