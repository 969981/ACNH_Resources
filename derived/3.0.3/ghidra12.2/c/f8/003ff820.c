
void FUN_003ff820(long param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_4c;
  undefined4 local_48;
  char local_44 [4];
  char local_38 [4];
  int local_34;
  
  cVar4 = *(char *)(param_1 + 0x69);
  if (cVar4 == '\0') {
    local_38[0] = *(char *)(param_2 + 8);
    local_44[0] = '\0';
    pcVar1 = local_38;
    if (local_38[0] != '\0') {
      pcVar1 = local_44;
    }
    FUN_00197478(param_1,pcVar1,1);
    local_48 = 0;
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197478(param_1,&local_48,4);
  }
  else {
    uVar6 = 0;
  }
  FUN_00197478(param_1,param_2 + 0xc,4);
  FUN_001f7044(param_1,param_2 + 0x10);
  FUN_003fde20(param_1,param_2 + 0x38);
  FUN_003fde20(param_1,param_2 + 0x60);
  FUN_00197478(param_1,param_2 + 0x88,2);
  FUN_001f77a4(param_1,param_2 + 0x90);
  local_34 = (int)((ulong)(*(long *)(param_2 + 0xd0) - *(long *)(param_2 + 200)) >> 3) * -0x33333333
  ;
  FUN_00197478(param_1,&local_34,4);
  lVar3 = *(long *)(param_2 + 0xd0);
  for (lVar2 = *(long *)(param_2 + 200); lVar2 != lVar3; lVar2 = lVar2 + 0x28) {
    FUN_001f7044(param_1,lVar2);
  }
  FUN_00197478(param_1,param_2 + 0xe0,4);
  FUN_00197478(param_1,param_2 + 0xe4,2);
  FUN_00197478(param_1,param_2 + 0xe6,1);
  if (cVar4 == '\0') {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197454(param_1,uVar6);
    local_4c = ((int)uVar5 - (int)uVar6) + -4;
    FUN_00197478(param_1,&local_4c,4);
    FUN_00197454(param_1,uVar5);
    return;
  }
  return;
}

