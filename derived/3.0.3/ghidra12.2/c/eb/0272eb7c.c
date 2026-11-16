
void FUN_0272eb7c(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  
  puVar1 = PTR_DAT_04bb2698;
  if (param_2 != (long *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      pvVar2 = malloc(0x110);
    }
    else {
      pvVar2 = (void *)(**(code **)(*param_2 + 0x30))(param_2,0x110,8);
    }
    FUN_03856670(pvVar2,4,param_2);
    *param_1 = pvVar2;
    if (*(long *)puVar1 == 0) {
      puVar3 = malloc(0x110);
    }
    else {
      puVar3 = (undefined4 *)(**(code **)(*param_2 + 0x30))(param_2,0x110,8);
    }
    FUN_03856670(puVar3,4,param_2);
    param_1[1] = puVar3;
    *puVar3 = 2;
  }
  return;
}

