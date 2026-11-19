
void FUN_03c4ae28(undefined8 param_1,long *param_2,long param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  lVar5 = *(long *)PTR_DAT_04bb2698;
  if (lVar5 == 0) {
    plVar4 = malloc(0x30);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      param_2 = (long *)(lVar5 + 8);
      if (lVar3 != 0) {
        param_2 = (long *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*param_2;
    }
    plVar4 = (long *)(**(code **)(*param_2 + 0x30))(param_2,0x30,8);
  }
  puVar2 = PTR_DAT_04bd2e80;
  *(undefined4 *)(plVar4 + 4) = 0;
  puVar1 = PTR_DAT_04bc3d38;
  plVar4[5] = 0;
  *plVar4 = (long)(puVar2 + 0x10);
  plVar4[1] = param_3;
  plVar4[2] = 0x3f80000000000000;
  plVar4[3] = (long)(puVar1 + 0x10);
  return;
}

