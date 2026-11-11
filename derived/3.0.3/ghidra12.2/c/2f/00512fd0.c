
void FUN_00512fd0(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00438810(0x28);
  *puVar1 = &PTR_LAB_048c7a30;
  puVar1[1] = *param_1 & 0xfffffffffffffffc;
  puVar1[2] = param_2;
  *param_1 = *param_1 & 3 | (ulong)puVar1;
  *puVar1 = &PTR_LAB_048c7b48;
  puVar1[3] = param_3;
  puVar1[4] = param_4;
  return;
}

