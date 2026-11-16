
undefined8 * FUN_02982a14(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar6 = *(long *)PTR_DAT_04bb2698;
  if (lVar6 == 0) {
    puVar4 = malloc(0x198);
  }
  else {
    plVar3 = param_3;
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar6 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
      if (plVar3 == (long *)0x0) {
        puVar4 = (undefined8 *)0x0;
        goto LAB_02982a90;
      }
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x198,8);
  }
LAB_02982a90:
  FUN_03ba1cd4(puVar4);
  *puVar4 = &PTR_FUN_04b79e68;
  puVar4[10] = &PTR_LAB_04b79f60;
  lVar6 = *(long *)puVar1;
  if (lVar6 == 0) {
    puVar5 = malloc(0x38);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar6 + 8);
      if (lVar2 != 0) {
        param_3 = (long *)(lVar2 + 0xa8);
      }
      param_3 = (long *)*param_3;
    }
    puVar5 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x38,8);
  }
  *(undefined4 *)(puVar5 + 4) = 0;
  puVar1 = PTR_DAT_04bc3d38 + 0x10;
  puVar5[2] = 0x3f80000000000000;
  puVar5[3] = puVar1;
  puVar5[5] = 0;
  puVar5[6] = 0;
  *puVar5 = &PTR_LAB_04a97138;
  puVar5[1] = puVar4;
  puVar4[0x12] = puVar5;
  return puVar4;
}

