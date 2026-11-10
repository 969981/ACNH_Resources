
void FUN_001fe628(long param_1,long param_2)

{
  ulong *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  undefined1 local_3c [4];
  ulong local_38;
  
  if (*(char *)(param_1 + 0x69) == '\0') {
    local_3c[0] = 0;
    bVar4 = true;
    local_38 = CONCAT71(local_38._1_7_,*(char *)(param_2 + 8));
    puVar1 = &local_38;
    if (*(char *)(param_2 + 8) != '\0') {
      puVar1 = (ulong *)local_3c;
    }
    FUN_00197478(param_1,puVar1,1);
    local_38 = local_38 & 0xffffffff00000000;
    FUN_00197478(param_1,&local_38,4);
    if (*(char *)(param_1 + 0x69) == '\0') {
      local_3c[0] = 0;
      local_38 = CONCAT71(local_38._1_7_,*(char *)(param_2 + 9));
      puVar1 = &local_38;
      if (*(char *)(param_2 + 9) != '\0') {
        puVar1 = (ulong *)local_3c;
      }
      FUN_00197478(param_1,puVar1,1);
      local_38 = local_38 & 0xffffffff00000000;
      uVar3 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
      FUN_00197478(param_1,&local_38,4);
      bVar4 = false;
    }
    else {
      uVar3 = 0;
    }
  }
  else {
    uVar3 = 0;
    bVar4 = true;
  }
  FUN_00197478(param_1,param_2 + 0xc,4);
  FUN_00197478(param_1,param_2 + 0x10,4);
  FUN_00197478(param_1,param_2 + 0x18,8);
  local_38 = FUN_001867a4(param_2 + 0x20);
  FUN_00197478(param_1,&local_38,8);
  FUN_00197478(param_1,param_2 + 0x28,4);
  FUN_00197478(param_1,param_2 + 0x2c,4);
  FUN_001f7044(param_1,param_2 + 0x30);
  FUN_001f7044(param_1,param_2 + 0x58);
  FUN_001fd810(param_1,param_2 + 0x80);
  if (!bVar4) {
    uVar2 = *(undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    FUN_00197454(param_1,uVar3);
    local_38 = CONCAT44(local_38._4_4_,((int)uVar2 - (int)uVar3) + -4);
    FUN_00197478(param_1,&local_38,4);
    FUN_00197454(param_1,uVar2);
  }
  return;
}

