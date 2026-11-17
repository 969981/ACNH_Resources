
undefined8 FUN_02b48630(long param_1,undefined8 param_2,ulong param_3,ulong param_4)

{
  long local_40;
  char local_38;
  char local_37;
  char local_36;
  
  if (*(int *)(param_1 + 0x48) == 0) {
    if ((param_3 & 1) != 0) {
      return 1;
    }
  }
  else {
    FUN_0071c8d0(&local_40,(int *)(param_1 + 0x48),param_2,0);
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
    FUN_02b48700(param_1,param_2,0,1,1);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0xffffffff00000000;
  *(undefined2 *)(param_1 + 0x50) = 0;
  return 1;
}

