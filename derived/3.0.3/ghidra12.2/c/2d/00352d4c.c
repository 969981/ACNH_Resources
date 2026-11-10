
void FUN_00352d4c(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  
  iVar3 = (**(code **)(*param_2 + 0xb8))();
  puVar1 = PTR_LAB_04bd05b8;
  if (iVar3 == 3) {
    *param_1 = 0;
    param_1[1] = puVar1;
    param_1[2] = 0;
    return;
  }
  puVar1 = (undefined *)0x0;
  if (iVar3 == 1) {
    puVar1 = PTR_LAB_04bd05a8;
  }
  puVar2 = PTR_LAB_04bd05c0;
  if (iVar3 != 2) {
    puVar2 = puVar1;
  }
  *param_1 = 0;
  param_1[1] = puVar2;
  param_1[2] = 0;
  return;
}

