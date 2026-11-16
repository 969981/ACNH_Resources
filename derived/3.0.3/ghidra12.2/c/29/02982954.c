
long FUN_02982954(undefined8 param_1,undefined8 param_2,long *param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  
  lVar2 = FUN_03ba2680();
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    puVar4 = malloc(0x38);
  }
  else {
    if (param_3 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      param_3 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        param_3 = (long *)(lVar3 + 0xa8);
      }
      param_3 = (long *)*param_3;
    }
    puVar4 = (undefined8 *)(**(code **)(*param_3 + 0x30))(param_3,0x38,8);
  }
  *(undefined4 *)(puVar4 + 4) = 0;
  puVar1 = PTR_DAT_04bc3d38 + 0x10;
  puVar4[2] = 0x3f80000000000000;
  puVar4[3] = puVar1;
  puVar4[5] = 0;
  puVar4[6] = 0;
  *puVar4 = &PTR_LAB_04a97138;
  puVar4[1] = lVar2;
  *(undefined8 **)(lVar2 + 0x90) = puVar4;
  return lVar2;
}

