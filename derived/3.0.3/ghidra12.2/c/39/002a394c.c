
void FUN_002a394c(undefined8 param_1,long *param_2)

{
  undefined *puVar1;
  char *pcVar2;
  bool bVar3;
  undefined4 local_44;
  ErrorResultVariant aEStack_40 [12];
  int local_34 [4];
  undefined4 local_24;
  
  puVar1 = PTR_DAT_04bcb8b8;
  (**(code **)(**(long **)(*(long *)PTR_DAT_04bcb8b8 + 8) + 0x30))(local_34);
  if (local_34[0] != 0) {
    FUN_002296c4(param_1,local_34);
    return;
  }
  (**(code **)(*param_2 + 0x10))(param_2,1);
  local_44 = 0;
  local_24 = 0;
  bVar3 = *(long *)(*(long *)puVar1 + 0x70) != 0;
  puVar1 = DAT_04bce028;
  if (bVar3) {
    puVar1 = PTR_FUN_04bce020;
  }
  param_2[6] = (long)puVar1;
  param_2[7] = 0;
  pcVar2 = "SessionStatusCheckJob::CheckSessionStatus";
  if (bVar3) {
    pcVar2 = "SessionStatusCheckJob::CheckSessionStatus4JointSession";
  }
  param_2[8] = (long)pcVar2;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_40,(Result *)&local_24);
  FUN_002296c4(param_1,&local_44);
  return;
}

