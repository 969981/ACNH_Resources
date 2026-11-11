
void FUN_004008a8(long param_1,long param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int local_38 [2];
  char local_28 [4];
  char local_24 [4];
  
  cVar2 = *(char *)(param_1 + 0x69);
  if (cVar2 == '\0') {
    local_24[0] = *(char *)(param_2 + 8);
    local_28[0] = '\0';
    pcVar1 = local_24;
    if (local_24[0] != '\0') {
      pcVar1 = local_28;
    }
    FUN_00197478(param_1,pcVar1,1);
    local_38[1] = 0;
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197478(param_1,local_38 + 1,4);
  }
  else {
    uVar4 = 0;
  }
  FUN_00197478(param_1,param_2 + 0x10,8);
  FUN_00197478(param_1,param_2 + 0x18,4);
  FUN_001975e4(param_1,param_2 + 0x1c);
  if (cVar2 == '\0') {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197454(param_1,uVar4);
    local_38[0] = ((int)uVar3 - (int)uVar4) + -4;
    FUN_00197478(param_1,local_38,4);
    FUN_00197454(param_1,uVar3);
    return;
  }
  return;
}

