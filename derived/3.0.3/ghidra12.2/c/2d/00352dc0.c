
void FUN_00352dc0(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  int iVar2;
  
  iVar2 = (**(code **)(*param_2 + 0xb8))();
  puVar1 = PTR_LAB_04bd05b0;
  param_1[2] = 0;
  if (iVar2 != 1) {
    puVar1 = (undefined *)0x0;
  }
  *param_1 = 0;
  param_1[1] = puVar1;
  return;
}

