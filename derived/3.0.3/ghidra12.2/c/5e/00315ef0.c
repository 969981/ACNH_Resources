
void FUN_00315ef0(long param_1,long param_2)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_44 [4];
  undefined8 local_38;
  
  FUN_0031a530();
  cVar4 = *(char *)(param_1 + 0x69);
  if (cVar4 == '\0') {
    local_44[0] = 0;
    local_38 = CONCAT71(local_38._1_7_,*(char *)(param_2 + 0x60));
    puVar1 = &local_38;
    if (*(char *)(param_2 + 0x60) != '\0') {
      puVar1 = (undefined8 *)local_44;
    }
    FUN_00197478(param_1,puVar1,1);
    local_38 = local_38 & 0xffffffff00000000;
    uVar6 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197478(param_1,&local_38,4);
  }
  else {
    uVar6 = 0;
  }
  FUN_00197478(param_1,param_2 + 100,4);
  FUN_001f7044(param_1,param_2 + 0x68);
  local_38 = CONCAT44(local_38._4_4_,
                      (int)((ulong)(*(long *)(param_2 + 0x98) - *(long *)(param_2 + 0x90)) >> 2));
  FUN_00197478(param_1,&local_38,4);
  lVar3 = *(long *)(param_2 + 0x98);
  for (lVar2 = *(long *)(param_2 + 0x90); lVar2 != lVar3; lVar2 = lVar2 + 4) {
    FUN_00197478(param_1,lVar2,4);
  }
  local_38._4_4_ = (undefined4)(local_38 >> 0x20);
  local_38 = CONCAT44(local_38._4_4_,*(int *)(param_2 + 0xb0) - *(int *)(param_2 + 0xa8));
  FUN_00197478(param_1,&local_38,4);
  if (*(long *)(param_2 + 0xa8) != *(long *)(param_2 + 0xb0)) {
    FUN_00197478(param_1,*(long *)(param_2 + 0xa8),local_38 & 0xffffffff);
  }
  local_38 = FUN_001867a4(param_2 + 0xc0);
  FUN_00197478(param_1,&local_38,8);
  local_38 = FUN_001867a4(param_2 + 200);
  FUN_00197478(param_1,&local_38,8);
  FUN_00197478(param_1,param_2 + 0xd0,4);
  FUN_00197478(param_1,param_2 + 0xd4,4);
  if (cVar4 == '\0') {
    uVar5 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197454(param_1,uVar6);
    local_38 = CONCAT44(local_38._4_4_,((int)uVar5 - (int)uVar6) + -4);
    FUN_00197478(param_1,&local_38,4);
    FUN_00197454(param_1,uVar5);
    return;
  }
  return;
}

