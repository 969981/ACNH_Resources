
void FUN_003156a8(long param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int local_30 [2];
  char local_28 [4];
  char local_24 [4];
  
  if (*(char *)(param_1 + 0x69) != '\0') {
    FUN_00197478(param_1,param_2 + 0xc,4);
    return;
  }
  local_24[0] = *(char *)(param_2 + 8);
  local_28[0] = '\0';
  pcVar1 = local_24;
  if (local_24[0] != '\0') {
    pcVar1 = local_28;
  }
  FUN_00197478(param_1,pcVar1,1);
  local_30[1] = 0;
  uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
  FUN_00197478(param_1,local_30 + 1,4);
  FUN_00197478(param_1,param_2 + 0xc,4);
  uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
  FUN_00197454(param_1,uVar3);
  local_30[0] = ((int)uVar2 - (int)uVar3) + -4;
  FUN_00197478(param_1,local_30,4);
  FUN_00197454(param_1,uVar2);
  return;
}

