
void FUN_002e0bd0(undefined8 param_1,long param_2,long param_3)

{
  undefined *puVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_68;
  undefined1 local_60 [16];
  undefined1 *local_50;
  undefined8 uStack_48;
  undefined4 local_34;
  
  if (param_3 == 0) {
    local_68 = (undefined *)CONCAT44(local_68._4_4_,0x10c07);
  }
  else {
    FUN_002d4fd0(*(undefined8 *)(param_2 + 200));
    FUN_002cc0e4(param_3);
    iVar4 = FUN_00227d94();
    puVar1 = PTR_DAT_04bc0ec8;
    lVar9 = *(long *)(param_2 + 200);
    if (iVar4 == 2) {
      FUN_002cc0e4(param_3);
      uVar7 = FUN_00227acc();
      local_60[0] = 0;
      local_68 = puVar1 + 0x10;
      local_50 = local_60;
      uStack_48 = 0x10;
      FUN_0018b1d0(&local_68,uVar7,0xffffffffffffffff);
    }
    else {
      FUN_002cc0e4(param_3);
      uVar7 = FUN_00227acc();
      local_60[0] = 0;
      local_68 = puVar1 + 0x10;
      local_50 = local_60;
      uStack_48 = 0x10;
      FUN_0018b070(&local_68,uVar7,0xffffffffffffffff);
    }
    FUN_00189504(lVar9 + 0x38,&local_68);
    local_68 = puVar1 + 0x10;
    FUN_0018b1a0(&local_68);
    FUN_002cc0ec(param_3);
    iVar4 = FUN_00227d94();
    lVar9 = *(long *)(param_2 + 200);
    if (iVar4 == 2) {
      FUN_002cc0ec(param_3);
      uVar7 = FUN_00227acc();
      local_60[0] = 0;
      local_68 = puVar1 + 0x10;
      local_50 = local_60;
      uStack_48 = 0x10;
      FUN_0018b1d0(&local_68,uVar7,0xffffffffffffffff);
    }
    else {
      FUN_002cc0ec(param_3);
      uVar7 = FUN_00227acc();
      local_60[0] = 0;
      local_68 = puVar1 + 0x10;
      local_50 = local_60;
      uStack_48 = 0x10;
      FUN_0018b070(&local_68,uVar7,0xffffffffffffffff);
    }
    FUN_00189504(lVar9 + 0x60,&local_68);
    local_68 = puVar1 + 0x10;
    FUN_0018b1a0(&local_68);
    sVar2 = FUN_002cc0fc(param_3);
    if (sVar2 != 0) {
      lVar9 = *(long *)(param_2 + 200);
      uVar3 = FUN_002cc0fc(param_3);
      *(undefined2 *)(lVar9 + 0xb2) = uVar3;
    }
    lVar9 = *(long *)(param_2 + 0x110);
    *(undefined4 *)(lVar9 + 0xc) = 3;
    uVar5 = FUN_002cc114(param_3);
    *(uint *)(lVar9 + 0xc) = *(uint *)(lVar9 + 0xc) & 0xfffffffe | uVar5 & 1;
    lVar9 = *(long *)(param_2 + 0x110);
    uVar8 = FUN_002cc11c(param_3);
    uVar5 = 2;
    if ((uVar8 & 1) == 0) {
      uVar5 = 0;
    }
    *(uint *)(lVar9 + 0xc) = *(uint *)(lVar9 + 0xc) & 0xfffffffd | uVar5;
    FUN_00315694(*(long *)(param_2 + 200) + 0xb8,*(undefined8 *)(param_2 + 0x110));
    uVar8 = FUN_002cc10c(param_3);
    if ((uVar8 & 1) != 0) {
      lVar9 = *(long *)(param_2 + 200);
      uVar6 = FUN_002cc104(param_3);
      *(undefined4 *)(lVar9 + 0x2c) = uVar6;
    }
    local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
  }
  local_34 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((long)&local_68 + 4),(Result *)&local_34);
  FUN_002296c4(param_1,&local_68);
  return;
}

