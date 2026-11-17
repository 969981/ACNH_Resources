
void FUN_02ad92bc(long param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04bb3350;
  if (param_2 == 0) {
    lVar3 = 1;
  }
  else {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar3 = *(long *)(lVar2 + 0xa8);
    *(long *)(lVar2 + 0xa8) = param_2;
  }
  FUN_02adafe8(param_1 + 8,param_2);
  FUN_02ad9700(param_1 + 0x1430,param_2);
  FUN_02ad4534(param_1 + 0x3c78,param_2);
  FUN_02adb2bc(param_1 + 0x9710,param_2);
  FUN_02ad5388(param_1 + 0xa120,param_2);
  FUN_02adb4f8(param_1 + 0x14228,param_2);
  if (lVar3 != 1) {
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar1 + 0x68));
    *(long *)(lVar2 + 0xa8) = lVar3;
  }
  return;
}

