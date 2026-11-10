
void FUN_002beb38(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined *local_78 [3];
  undefined8 local_60;
  undefined1 auStack_50 [24];
  undefined2 local_38;
  
  FUN_0021f4e0(auStack_50);
  uVar5 = FUN_001a4fac(param_1);
  uVar2 = FUN_001e1884();
  FUN_0021f5a0(auStack_50,uVar2);
  local_38 = FUN_001e14f8(uVar5);
  uVar3 = FUN_001b923c(param_1);
  if ((uVar3 & 0x7f) == 0) {
    FUN_002b44ec(param_2,auStack_50);
    FUN_002b455c(param_2,1);
    FUN_0021fed4(auStack_50);
    FUN_002b44e4(param_2,auStack_50);
  }
  else {
    FUN_002b44e4(param_2);
    FUN_002b455c(param_2,0);
    FUN_0021fed4(auStack_50);
    FUN_002b44ec(param_2,auStack_50);
  }
  uVar5 = FUN_001b7ba4(param_1);
  FUN_002b44fc(param_2,uVar5);
  uVar2 = FUN_001ab32c(param_1);
  FUN_002b4504(param_2,uVar2);
  uVar2 = FUN_001a8b90(param_1);
  FUN_002b450c(param_2,uVar2);
  uVar2 = FUN_001b9164(param_1);
  FUN_002b4514(param_2,uVar2);
  uVar4 = FUN_001b91a8(param_1);
  FUN_002b452c(param_2,uVar4 & 0xf);
  FUN_002b453c(param_2,uVar4 >> 4 & 0xf);
  FUN_002b454c(param_2,uVar3);
  uVar3 = FUN_001acbfc(param_1);
  FUN_002b4554(param_2,uVar3 & 1);
  uVar6 = FUN_001ad86c(param_1);
  if ((uVar6 & 1) != 0) {
    FUN_001af970(local_78,param_1);
    puVar1 = PTR_DAT_04bce340;
    FUN_001e1640(PTR_DAT_04bce340,local_60);
    local_78[0] = PTR_DAT_04bc0ec8 + 0x10;
    FUN_0018b1a0(local_78);
    uVar2 = FUN_001e1884(puVar1);
    FUN_0021f5a0(auStack_50,uVar2);
    local_38 = FUN_001e14f8(puVar1);
    uVar6 = FUN_0021f6f8(auStack_50);
    if ((uVar6 & 1) == 0) {
      FUN_0021fed4(auStack_50);
    }
    else {
      local_38 = FUN_001afa84(param_1);
    }
    FUN_002b44f4(param_2,auStack_50);
  }
  FUN_0021f584(auStack_50);
  return;
}

