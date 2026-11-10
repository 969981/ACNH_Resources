
void FUN_002e0840(undefined8 param_1,long param_2,long *param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  long lVar6;
  int local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined4 local_34;
  
  uVar4 = (**(code **)(*param_3 + 0x48))(param_3,0);
  uVar1 = (**(code **)(*param_3 + 0x50))(param_3);
  FUN_002e0a40(&local_50,param_2,uVar4,uVar1);
  if (local_50 == 0) {
    uVar4 = (**(code **)(*param_3 + 0x40))(param_3);
    FUN_002df7a0(&local_50,param_2,uVar4,param_4 & 1);
    if (local_50 == 0) {
      uVar4 = (**(code **)(*param_3 + 0x40))(param_3);
      FUN_002d4cc0(*(undefined8 *)(param_2 + 0xb8));
      lVar6 = *(long *)(param_2 + 0xb8);
      if (lVar6 + 0x1b0 != *(long *)(param_2 + 0x88)) {
        FUN_002e7760(lVar6 + 0x1b0,*(undefined8 *)(*(long *)(param_2 + 0x88) + 8));
        lVar6 = *(long *)(param_2 + 0xb8);
      }
      FUN_0031450c(lVar6 + 0x10,*(undefined8 *)(param_2 + 0x80));
      lVar6 = *(long *)(param_2 + 0x110);
      *(undefined4 *)(lVar6 + 0xc) = 3;
      uVar2 = FUN_002cbdc0(param_3);
      *(uint *)(lVar6 + 0xc) = *(uint *)(lVar6 + 0xc) & 0xfffffffe | uVar2 & 1;
      lVar6 = *(long *)(param_2 + 0x110);
      uVar5 = FUN_002cbdcc(param_3);
      uVar2 = 2;
      if ((uVar5 & 1) == 0) {
        uVar2 = 0;
      }
      *(uint *)(lVar6 + 0xc) = *(uint *)(lVar6 + 0xc) & 0xfffffffd | uVar2;
      FUN_00315694(*(long *)(param_2 + 0xb8) + 0x1e0,*(undefined8 *)(param_2 + 0x110));
      uVar5 = FUN_002cbdd8(param_3);
      uVar2 = 0;
      if ((uVar5 & 1) == 0) {
        uVar5 = FUN_002be2ec(uVar4);
      }
      else {
        uVar5 = FUN_002bdbd0(uVar4);
        uVar2 = 2;
        if ((uVar5 & 1) == 0) {
          uVar2 = 0;
        }
        uVar5 = FUN_002be2ec(uVar4);
      }
      if ((uVar5 & 1) != 0) {
        uVar3 = FUN_002be2e4(uVar4);
        uVar2 = uVar3 | uVar2;
      }
      if (uVar2 != 0) {
        *(uint *)(*(long *)(param_2 + 0xb8) + 0x17c) = uVar2;
      }
      local_50 = 0;
    }
    else {
      local_50 = 0x10c08;
    }
  }
  else {
    local_50 = 0x10c07;
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_34);
  FUN_002296c4(param_1,&local_50);
  return;
}

