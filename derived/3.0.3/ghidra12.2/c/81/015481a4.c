
undefined8 * FUN_015481a4(undefined8 param_1,long *param_2,int param_3)

{
  undefined8 *puVar1;
  int iVar2;
  
  if (param_2 == (long *)0x0) {
    return (undefined8 *)0x0;
  }
  if (param_3 < 0x1d096e7d) {
    if (param_3 < 0x1ac1236) {
      if (param_3 == -0x74337aab) goto LAB_015482c8;
      iVar2 = -0x196792d8;
    }
    else {
      if ((param_3 == 0x1ac1236) || (param_3 == 0x427dece)) goto LAB_015482c8;
      iVar2 = 0xe716ff8;
    }
  }
  else {
    if (param_3 < 0x72a13146) {
      if ((param_3 != 0x1d096e7d) && (param_3 != 0x4d702d55)) {
        if (param_3 != 0x7194bd96) {
          return (undefined8 *)0x0;
        }
        if (DAT_05ae7600 == 0) {
          puVar1 = malloc(0x48);
        }
        else {
          puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x48,8);
        }
        *puVar1 = &PTR_LAB_049a7e78;
        FUN_01548d80(puVar1,param_2);
        return puVar1;
      }
      goto LAB_015482c8;
    }
    if ((param_3 == 0x72a13146) || (param_3 == 0x7c939885)) goto LAB_015482c8;
    iVar2 = 0x77870a84;
  }
  if (param_3 != iVar2) {
    return (undefined8 *)0x0;
  }
LAB_015482c8:
  if (DAT_05ae7600 == 0) {
    puVar1 = malloc(0x48);
  }
  else {
    puVar1 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x48,8);
  }
  *puVar1 = &PTR_LAB_049a7e78;
  FUN_0154880c(puVar1,param_2);
  return puVar1;
}

