
undefined8 FUN_03ea830c(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined8 uVar2;
  long *plVar3;
  undefined *local_38;
  undefined *local_30;
  char local_22;
  
  local_22 = '\0';
  local_38 = PTR_DAT_04bb2020 + 0x10;
  local_30 = PTR_DAT_04bb2120;
  FUN_03c5a110(&local_38,param_2,0xffffffff,0);
  uVar2 = FUN_03ea8c80(param_1 + 0x88,&local_38);
  if (local_22 != '\0') {
    (**(code **)(local_38 + 0x18))(&local_38);
    puVar1 = local_30;
    if (local_30 != (undefined *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(local_30);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_30);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,puVar1);
        }
      }
    }
  }
  return uVar2;
}

