
void FUN_026ce8a4(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  undefined *local_50;
  undefined8 uStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  lVar4 = *(long *)PTR_DAT_04bb2130;
  if (lVar4 == 0) {
    return;
  }
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar3 = malloc(0x90);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_2 = (long *)(lVar5 + 8);
      if (lVar2 != 0) {
        param_2 = (long *)(lVar2 + 0xa8);
      }
      param_2 = (long *)*param_2;
      if (param_2 == (long *)0x0) {
        plVar3 = (long *)0x0;
        goto LAB_026ce934;
      }
    }
    plVar3 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x90,8);
  }
LAB_026ce934:
  (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  uStack_48 = DAT_0556ca10;
  puStack_38 = &DAT_040d9524;
  local_50 = puVar1;
  local_40 = puVar1;
  FUN_038b1ea0(plVar3,&local_40,&local_50);
  *plVar3 = (long)(PTR_DAT_04bd0be0 + 0x10);
  (**(code **)(DAT_0556ca08 + 0x18))(&DAT_0556ca08);
  puStack_38 = (undefined *)DAT_0556ca10;
  local_40 = puVar1;
  FUN_038b54c0(lVar4,plVar3,&local_40);
  return;
}

