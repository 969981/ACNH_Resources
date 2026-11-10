
void FUN_00315780(long param_1,long param_2)

{
  int *piVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 local_38 [4];
  int local_34;
  
  cVar2 = *(char *)(param_1 + 0x69);
  if (cVar2 == '\0') {
    local_38[0] = 0;
    local_34 = CONCAT31(local_34._1_3_,*(char *)(param_2 + 8));
    piVar1 = &local_34;
    if (*(char *)(param_2 + 8) != '\0') {
      piVar1 = (int *)local_38;
    }
    FUN_00197478(param_1,piVar1,1);
    local_34 = 0;
    uVar4 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197478(param_1,&local_34,4);
  }
  else {
    uVar4 = 0;
  }
  FUN_00314630(param_1,param_2 + 0x10);
  local_34 = (int)*(undefined8 *)(param_2 + 0x170);
  FUN_00197478(param_1,&local_34,4);
  for (lVar5 = *(long *)(param_2 + 0x168); lVar5 != param_2 + 0x160; lVar5 = *(long *)(lVar5 + 8)) {
    FUN_00197478(param_1,lVar5 + 0x10,8);
  }
  FUN_00197478(param_1,param_2 + 0x178,4);
  FUN_00197478(param_1,param_2 + 0x17c,4);
  FUN_001f7044(param_1,param_2 + 0x180);
  FUN_00197478(param_1,param_2 + 0x1a8,2);
  local_34 = (int)*(undefined8 *)(param_2 + 0x1c0);
  FUN_00197478(param_1,&local_34,4);
  for (lVar5 = *(long *)(param_2 + 0x1b8); lVar5 != param_2 + 0x1b0; lVar5 = *(long *)(lVar5 + 8)) {
    FUN_003152d0(param_1,lVar5 + 0x10);
  }
  local_34 = (int)*(undefined8 *)(param_2 + 0x1d8);
  FUN_00197478(param_1,&local_34,4);
  for (lVar5 = *(long *)(param_2 + 0x1d0); lVar5 != param_2 + 0x1c8; lVar5 = *(long *)(lVar5 + 8)) {
    FUN_00197478(param_1,lVar5 + 0x10,4);
  }
  FUN_003156a8(param_1,param_2 + 0x1e0);
  if (cVar2 == '\0') {
    uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197454(param_1,uVar4);
    local_34 = ((int)uVar3 - (int)uVar4) + -4;
    FUN_00197478(param_1,&local_34,4);
    FUN_00197454(param_1,uVar3);
    return;
  }
  return;
}

