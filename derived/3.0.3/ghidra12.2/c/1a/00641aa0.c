
void FUN_00641aa0(undefined8 *param_1,undefined8 param_2)

{
  int iVar1;
  
  iVar1 = FUN_00426fc0(param_1[1]);
  if (iVar1 == 8) {
    FUN_00422d90(param_2,"%#018llx",*(undefined8 *)*param_1);
    return;
  }
  FUN_00422d90(param_2,"%#010x",*(undefined4 *)*param_1);
  return;
}

