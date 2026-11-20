
void FUN_04000714(long param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  puVar3 = (undefined8 *)(**(code **)(*param_2 + 0x10))(param_2,0x20,8);
  *puVar3 = &PTR_LAB_04bb1510;
  uVar1 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = *(undefined8 *)(param_1 + 0x18);
  puVar3[1] = *(undefined8 *)(param_1 + 8);
  puVar3[2] = uVar1;
  puVar3[3] = uVar2;
  return;
}

