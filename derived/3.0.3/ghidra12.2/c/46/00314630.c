
void FUN_00314630(long param_1,long param_2)

{
  ulong *puVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 local_44 [4];
  ulong local_38;
  
  FUN_0031a530();
  cVar4 = *(char *)(param_1 + 0x69);
  if (cVar4 == '\0') {
    local_44[0] = 0;
    local_38 = CONCAT71(local_38._1_7_,*(char *)(param_2 + 0x60));
    puVar1 = &local_38;
    if (*(char *)(param_2 + 0x60) != '\0') {
      puVar1 = (ulong *)local_44;
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
  local_38 = CONCAT44(local_38._4_4_,
                      (int)((ulong)(*(long *)(param_2 + 0x70) - *(long *)(param_2 + 0x68)) >> 2));
  FUN_00197478(param_1,&local_38,4);
  lVar3 = *(long *)(param_2 + 0x70);
  for (lVar2 = *(long *)(param_2 + 0x68); lVar2 != lVar3; lVar2 = lVar2 + 4) {
    FUN_00197478(param_1,lVar2,4);
  }
  FUN_001975e4(param_1,param_2 + 0x80);
  FUN_00197478(param_1,param_2 + 0x84,4);
  local_38 = CONCAT44(local_38._4_4_,*(int *)(param_2 + 0x90) - *(int *)(param_2 + 0x88));
  FUN_00197478(param_1,&local_38,4);
  if (*(long *)(param_2 + 0x88) != *(long *)(param_2 + 0x90)) {
    FUN_00197478(param_1,*(long *)(param_2 + 0x88),local_38 & 0xffffffff);
  }
  FUN_00197478(param_1,param_2 + 0xa0,4);
  FUN_00197478(param_1,param_2 + 0xa4,1);
  local_38 = CONCAT44(local_38._4_4_,*(int *)(param_2 + 0xb0) - *(int *)(param_2 + 0xa8));
  FUN_00197478(param_1,&local_38,4);
  if (*(long *)(param_2 + 0xa8) != *(long *)(param_2 + 0xb0)) {
    FUN_00197478(param_1,*(long *)(param_2 + 0xa8),local_38 & 0xffffffff);
  }
  FUN_00197478(param_1,param_2 + 0xc0,4);
  FUN_00314f50(param_1,param_2 + 200);
  local_38 = FUN_001867a4(param_2 + 0xf0);
  FUN_00197478(param_1,&local_38,8);
  FUN_001f7044(param_1,param_2 + 0xf8);
  FUN_00197478(param_1,param_2 + 0x120,4);
  FUN_001975e4(param_1,param_2 + 0x124);
  FUN_001975e4(param_1,param_2 + 0x125);
  FUN_001f7044(param_1,param_2 + 0x128);
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

