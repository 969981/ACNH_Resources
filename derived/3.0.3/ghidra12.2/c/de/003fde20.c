
void FUN_003fde20(long param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  int local_44;
  undefined4 local_40;
  char local_3c [4];
  char local_38 [4];
  undefined4 local_34;
  
  cVar4 = *(char *)(param_1 + 0x69);
  if (cVar4 == '\0') {
    local_38[0] = *(char *)(param_2 + 8);
    local_3c[0] = '\0';
    pcVar1 = local_38;
    if (local_38[0] != '\0') {
      pcVar1 = local_3c;
    }
    FUN_00197478(param_1,pcVar1,1);
    local_40 = 0;
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197478(param_1,&local_40,4);
  }
  else {
    uVar5 = 0;
  }
  FUN_00197478(param_1,param_2 + 9,1);
  local_34 = (undefined4)((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) >> 3);
  FUN_00197478(param_1,&local_34,4);
  lVar3 = *(long *)(param_2 + 0x18);
  for (lVar2 = *(long *)(param_2 + 0x10); lVar2 != lVar3; lVar2 = lVar2 + 8) {
    FUN_00197478(param_1,lVar2,8);
  }
  if (cVar4 == '\0') {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197454(param_1,uVar5);
    local_44 = ((int)uVar6 - (int)uVar5) + -4;
    FUN_00197478(param_1,&local_44,4);
    FUN_00197454(param_1,uVar6);
    return;
  }
  return;
}

