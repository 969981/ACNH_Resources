
void FUN_00315970(long param_1,long param_2)

{
  char *pcVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  int local_4c;
  undefined4 local_48;
  char local_44 [4];
  char local_38 [4];
  undefined4 local_34;
  
  cVar2 = *(char *)(param_1 + 0x69);
  if (cVar2 == '\0') {
    local_38[0] = *(char *)(param_2 + 8);
    local_44[0] = '\0';
    pcVar1 = local_38;
    if (local_38[0] != '\0') {
      pcVar1 = local_44;
    }
    FUN_00197478(param_1,pcVar1,1);
    local_48 = 0;
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197478(param_1,&local_48,4);
  }
  else {
    uVar4 = 0;
  }
  FUN_00314630(param_1,param_2 + 0x10);
  local_34 = (undefined4)*(undefined8 *)(param_2 + 0x170);
  FUN_00197478(param_1,&local_34,4);
  for (lVar5 = *(long *)(param_2 + 0x168); lVar5 != param_2 + 0x160; lVar5 = *(long *)(lVar5 + 8)) {
    FUN_00197478(param_1,lVar5 + 0x10,8);
  }
  FUN_00197478(param_1,param_2 + 0x178,4);
  FUN_00197478(param_1,param_2 + 0x17c,4);
  FUN_001f7044(param_1,param_2 + 0x180);
  FUN_00197478(param_1,param_2 + 0x1a8,2);
  if (cVar2 == '\0') {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197454(param_1,uVar4);
    local_4c = ((int)uVar3 - (int)uVar4) + -4;
    FUN_00197478(param_1,&local_4c,4);
    FUN_00197454(param_1,uVar3);
    return;
  }
  return;
}

