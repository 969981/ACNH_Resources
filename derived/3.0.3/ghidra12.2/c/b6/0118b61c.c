
void FUN_0118b61c(undefined8 *param_1,int param_2)

{
  undefined *puVar1;
  undefined1 auStack_30 [16];
  
  if (param_2 == 0x7e3d1e46) {
    puVar1 = PTR_DAT_04c4b988;
  }
  else {
    FUN_011b9ab0(auStack_30,param_2);
    puVar1 = (undefined *)FUN_011b9df0(auStack_30);
  }
  *param_1 = &PTR_LAB_048f9770;
  param_1[1] = puVar1;
  return;
}

