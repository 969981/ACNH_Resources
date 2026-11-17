
undefined8 FUN_02e5ed6c(long param_1,byte *param_2,int param_3)

{
  byte bVar1;
  
  if (*(int *)(param_1 + 0x1b0) == 5) {
    if (param_3 == 1) {
      if (*(int *)(param_1 + 0x57bbc) == 0) goto LAB_02e5edbc;
    }
    else if (param_3 == 2) {
LAB_02e5edbc:
      *(undefined4 *)(param_1 + 0x57bbc) = 0xffffffff;
      *(undefined8 *)(param_2 + 0x10) = DAT_0569bac0;
      *(long *)(param_2 + 0x28) = param_1 + 0x57b98;
      bVar1 = *(byte *)(param_1 + 0x1f8);
      param_2[0x38] = 0;
      param_2[0x39] = 0;
      param_2[0x3a] = 0;
      param_2[0x3b] = 0;
      if (7 < bVar1) {
        bVar1 = 0xff;
      }
      *param_2 = bVar1;
      return 1;
    }
  }
  return 0;
}

