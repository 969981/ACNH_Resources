
void FUN_003fead0(long param_1,long param_2)

{
  int *piVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_48 [4];
  int local_44;
  
  cVar4 = *(char *)(param_1 + 0x69);
  if (cVar4 == '\0') {
    local_48[0] = 0;
    local_44 = CONCAT31(local_44._1_3_,*(char *)(param_2 + 8));
    piVar1 = &local_44;
    if (*(char *)(param_2 + 8) != '\0') {
      piVar1 = (int *)local_48;
    }
    FUN_00197478(param_1,piVar1,1);
    local_44 = 0;
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197478(param_1,&local_44,4);
  }
  else {
    uVar5 = 0;
  }
  FUN_00197478(param_1,param_2 + 0xc,4);
  FUN_001f7044(param_1,param_2 + 0x10);
  FUN_00197478(param_1,param_2 + 0x38,2);
  FUN_001f77a4(param_1,param_2 + 0x40);
  FUN_003fde20(param_1,param_2 + 0x78);
  FUN_003fde20(param_1,param_2 + 0xa0);
  FUN_00197478(param_1,param_2 + 200,4);
  FUN_00197478(param_1,param_2 + 0xcc,2);
  FUN_00197478(param_1,param_2 + 0xd0,4);
  local_44 = (int)((ulong)(*(long *)(param_2 + 0xe0) - *(long *)(param_2 + 0xd8)) >> 3) *
             -0x33333333;
  FUN_00197478(param_1,&local_44,4);
  lVar3 = *(long *)(param_2 + 0xe0);
  for (lVar2 = *(long *)(param_2 + 0xd8); lVar2 != lVar3; lVar2 = lVar2 + 0x28) {
    FUN_001f7044(param_1,lVar2);
  }
  local_44 = (int)((ulong)(*(long *)(param_2 + 0xf8) - *(long *)(param_2 + 0xf0)) >> 3) *
             -0x49249249;
  FUN_00197478(param_1,&local_44,4);
  lVar3 = *(long *)(param_2 + 0xf8);
  for (lVar2 = *(long *)(param_2 + 0xf0); lVar2 != lVar3; lVar2 = lVar2 + 0x38) {
    FUN_003fe454(param_1,lVar2);
  }
  FUN_003fe560(param_1,param_2 + 0x108);
  local_44 = (int)((ulong)(*(long *)(param_2 + 0x120) - *(long *)(param_2 + 0x118)) >> 3) *
             -0x33333333;
  FUN_00197478(param_1,&local_44,4);
  lVar3 = *(long *)(param_2 + 0x120);
  for (lVar2 = *(long *)(param_2 + 0x118); lVar2 != lVar3; lVar2 = lVar2 + 0x28) {
    FUN_001f7044(param_1,lVar2);
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

