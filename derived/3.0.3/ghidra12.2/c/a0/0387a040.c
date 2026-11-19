
void FUN_0387a040(int *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined *puVar1;
  undefined4 local_40 [4];
  undefined8 local_30;
  undefined8 uStack_28;
  
  *param_1 = 0;
  local_40[0] = 0;
  local_30 = param_2;
  uStack_28 = param_3;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)(param_1 + 1),(Result *)local_40);
  FUN_002911b0(local_40);
  FUN_00229780(param_1,local_40);
  if (*param_1 != 0) {
    FUN_00223064(param_1);
  }
  FUN_00291270(local_40);
  FUN_00229780(param_1,local_40);
  if (*param_1 != 0) {
    FUN_00223064(param_1);
  }
  FUN_00298af4(local_40,&local_30);
  FUN_00229780(param_1,local_40);
  if (*param_1 != 0) {
    FUN_00223064(param_1);
  }
  FUN_00291310(local_40);
  FUN_00229780(param_1,local_40);
  if (*param_1 != 0) {
    FUN_00223064(param_1);
  }
  puVar1 = PTR_DAT_04bcb8b8;
  FUN_0029c204(local_40,*(undefined8 *)PTR_DAT_04bcb8b8,FUN_0387a140,0);
  FUN_0029c7a0(*(undefined8 *)puVar1,PTR_LAB_04bcb858);
  return;
}

