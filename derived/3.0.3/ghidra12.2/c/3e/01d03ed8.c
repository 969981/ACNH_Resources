
undefined8 FUN_01d03ed8(long *param_1,undefined2 *param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  
  if (*(char *)param_1[1] == '\0') {
    uVar1 = FUN_0069ab50(param_3,4);
  }
  else {
    (**(code **)(*param_1 + 0x18))();
    uVar1 = FUN_0069b2a4(param_3,param_1[1],4);
  }
  if ((uVar1 & 1) != 0) {
    if (*PTR_DAT_04c4b988 == '\0') {
      uVar1 = FUN_0069ae60(param_3,*param_2);
    }
    else {
      (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
      uVar1 = FUN_0069b854(param_3,PTR_DAT_04c4b988,*param_2);
    }
    if ((uVar1 & 1) != 0) {
      if (*PTR_DAT_04c4b988 == '\0') {
        uVar1 = FUN_0069ae60(param_3,param_2[1]);
      }
      else {
        (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
        uVar1 = FUN_0069b854(param_3,PTR_DAT_04c4b988,param_2[1]);
      }
      if ((uVar1 & 1) != 0) {
        if (*PTR_DAT_04c4b988 == '\0') {
          uVar1 = FUN_0069ae60(param_3,param_2[2]);
        }
        else {
          (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
          uVar1 = FUN_0069b854(param_3,PTR_DAT_04c4b988,param_2[2]);
        }
        if ((uVar1 & 1) != 0) {
          if (*PTR_DAT_04c4b988 == '\0') {
            uVar2 = FUN_0069ae60(param_3,param_2[3]);
            return uVar2;
          }
          (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
          uVar2 = FUN_0069b854(param_3,PTR_DAT_04c4b988,param_2[3]);
          return uVar2;
        }
      }
    }
  }
  return 0;
}

