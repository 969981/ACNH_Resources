
void FUN_0387ac20(undefined8 param_1)

{
  undefined *puVar1;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  puVar1 = PTR_DAT_04bcb8b8;
  if (*(long *)PTR_DAT_04bcb8b8 != 0) {
    nn::os::GetSystemTick();
    FUN_00299e90(*(undefined8 *)puVar1);
  }
  local_34 = 0;
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

