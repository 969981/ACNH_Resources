
undefined8 FUN_00144178(undefined8 *param_1,int param_2,char *param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ulong uVar3;
  
  if ((*(char *)((long)param_1 + (long)param_2 + 0x418) == '\0') ||
     (uVar2 = FUN_00144078(param_1,param_2), (int)uVar2 == 0)) {
    uVar3 = FUN_00144120(*param_1);
    puVar1 = PTR_PTR_04bcb710;
    if ((uVar3 & 1) == 0) {
      uVar2 = 0x23;
    }
    else {
      *(byte *)(param_1 + (long)param_2 * 3 + 0x54) =
           *(byte *)(param_1 + (long)param_2 * 3 + 0x54) | 1;
      uVar2 = (**(code **)(*(long *)puVar1 + 0x68))(param_1,param_2,param_3);
      if ((int)uVar2 == 0) {
        if (*param_3 != '\0') {
          FUN_00146c9c(*param_1,5);
        }
        uVar2 = 0;
      }
    }
  }
  return uVar2;
}

