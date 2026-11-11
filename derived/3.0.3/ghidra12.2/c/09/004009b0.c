
void FUN_004009b0(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_44 [4];
  ulong local_38;
  
  cVar4 = *(char *)(param_1 + 0x69);
  if (cVar4 == '\0') {
    local_44[0] = 0;
    local_38 = CONCAT71(local_38._1_7_,*(char *)(param_2 + 8));
    puVar1 = &local_38;
    if (*(char *)(param_2 + 8) != '\0') {
      puVar1 = (ulong *)local_44;
    }
    FUN_00197478(param_1,puVar1,1);
    local_38 = local_38 & 0xffffffff00000000;
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197478(param_1,&local_38,4);
  }
  else {
    uVar5 = 0;
  }
  FUN_00197478(param_1,param_2 + 9,1);
  local_38 = CONCAT44(local_38._4_4_,
                      (int)((ulong)(*(long *)(param_2 + 0x18) - *(long *)(param_2 + 0x10)) >> 3));
  FUN_00197478(param_1,&local_38,4);
  lVar3 = *(long *)(param_2 + 0x18);
  for (lVar2 = *(long *)(param_2 + 0x10); lVar2 != lVar3; lVar2 = lVar2 + 8) {
    FUN_00197478(param_1,lVar2,8);
  }
  FUN_00197478(param_1,param_2 + 0x28,1);
  local_38 = CONCAT44(local_38._4_4_,
                      (int)((ulong)(*(long *)(param_2 + 0x38) - *(long *)(param_2 + 0x30)) >> 3));
  FUN_00197478(param_1,&local_38,4);
  lVar3 = *(long *)(param_2 + 0x38);
  for (lVar2 = *(long *)(param_2 + 0x30); lVar2 != lVar3; lVar2 = lVar2 + 8) {
    FUN_00197478(param_1,lVar2,8);
  }
  FUN_00197478(param_1,param_2 + 0x48,2);
  local_38 = FUN_001867a4(param_2 + 0x50);
  FUN_00197478(param_1,&local_38,8);
  local_38 = FUN_001867a4(param_2 + 0x58);
  FUN_00197478(param_1,&local_38,8);
  local_38 = FUN_001867a4(param_2 + 0x60);
  FUN_00197478(param_1,&local_38,8);
  local_38 = FUN_001867a4(param_2 + 0x68);
  FUN_00197478(param_1,&local_38,8);
  FUN_00197478(param_1,param_2 + 0x70,4);
  local_38 = CONCAT44(local_38._4_4_,
                      (int)((ulong)(*(long *)(param_2 + 0x80) - *(long *)(param_2 + 0x78)) >> 3) *
                      -0x33333333);
  FUN_00197478(param_1,&local_38,4);
  lVar3 = *(long *)(param_2 + 0x80);
  for (lVar2 = *(long *)(param_2 + 0x78); lVar2 != lVar3; lVar2 = lVar2 + 0x28) {
    FUN_001f7044(param_1,lVar2);
  }
  FUN_00197478(param_1,param_2 + 0x90,1);
  FUN_00197478(param_1,param_2 + 0x91,1);
  FUN_001fedac(param_1,param_2 + 0x98);
  FUN_00197478(param_1,param_2 + 0xb0,1);
  FUN_00197478(param_1,param_2 + 0xb4,4);
  FUN_001975e4(param_1,param_2 + 0xb8);
  FUN_001975e4(param_1,param_2 + 0xb9);
  local_38 = CONCAT44(local_38._4_4_,
                      (int)((ulong)(*(long *)(param_2 + 200) - *(long *)(param_2 + 0xc0)) >> 1));
  FUN_00197478(param_1,&local_38,4);
  lVar3 = *(long *)(param_2 + 200);
  for (lVar2 = *(long *)(param_2 + 0xc0); lVar2 != lVar3; lVar2 = lVar2 + 2) {
    FUN_00197478(param_1,lVar2,2);
  }
  if (cVar4 == '\0') {
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197454(param_1,uVar5);
    local_38 = CONCAT44(local_38._4_4_,((int)uVar6 - (int)uVar5) + -4);
    FUN_00197478(param_1,&local_38,4);
    FUN_00197454(param_1,uVar6);
    return;
  }
  return;
}

