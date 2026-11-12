
void FUN_0075d4c4(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined4 local_11c;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined4 local_108;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined *local_e8;
  undefined1 *puStack_e0;
  undefined4 local_d8;
  undefined1 local_d4 [127];
  undefined1 local_55;
  undefined4 local_50;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined8 local_48;
  
  FUN_0075bbbc(param_1,param_2,0);
  FUN_0075c1e4(param_1,param_2 + 8,0);
  puVar1 = PTR_DAT_04bb2d88;
  if (*(long **)(param_1 + 0x3b0) != (long *)0x0) {
    local_108 = 0;
    local_118 = 0xffffffff00000000;
    uStack_110 = 0;
    local_104 = 0x3f800000;
    puStack_e0 = local_d4;
    local_d8 = 0x80;
    local_e8 = PTR_DAT_04bb2d88 + 0x10;
    local_55 = 0;
    local_d4[0] = 0;
    local_48 = 0;
    local_4b = 0;
    local_f4 = 0;
    local_fc = 0;
    local_50 = 7;
    local_4c = *(undefined1 *)(param_1 + 0x224);
    lVar3 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x398))();
    if (lVar3 != 0) {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x398))();
      local_11c = 0;
      FUN_017327f0(uVar4,param_2 + 0x10,&local_11c,&local_118,0xffffffff);
    }
  }
  FUN_0075ca70(param_1,param_2 + 0x20,0,0);
  FUN_0075c420(param_1,param_2 + 0x18,0,0);
  if (*(long **)(param_1 + 0x3b0) != (long *)0x0) {
    local_108 = 0;
    local_118 = 0xffffffff00000000;
    uStack_110 = 0;
    local_104 = 0x3f800000;
    puStack_e0 = local_d4;
    local_d8 = 0x80;
    local_e8 = puVar1 + 0x10;
    local_55 = 0;
    local_d4[0] = 0;
    local_48 = 0;
    local_4b = 0;
    local_f4 = 0;
    local_fc = 0;
    local_50 = 7;
    local_4c = *(undefined1 *)(param_1 + 0x224);
    lVar3 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3b0))();
    if (lVar3 != 0) {
      uVar4 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3b0))();
      local_11c = 0;
      FUN_017327f0(uVar4,param_2 + 0x28,&local_11c,&local_118,0xffffffff);
    }
    if (*(long **)(param_1 + 0x3b0) != (long *)0x0) {
      local_108 = 0;
      local_118 = 0xffffffff00000000;
      uStack_110 = 0;
      local_104 = 0x3f800000;
      puStack_e0 = local_d4;
      local_d8 = 0x80;
      local_e8 = puVar1 + 0x10;
      local_55 = 0;
      local_d4[0] = 0;
      local_48 = 0;
      local_4b = 0;
      local_f4 = 0;
      local_fc = 0;
      local_50 = 7;
      local_4c = *(undefined1 *)(param_1 + 0x224);
      lVar3 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3b8))();
      if (lVar3 != 0) {
        uVar4 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3b8))();
        local_11c = 0;
        FUN_017327f0(uVar4,param_2 + 0x30,&local_11c,&local_118,0xffffffff);
      }
      if (*(long **)(param_1 + 0x3b0) != (long *)0x0) {
        local_e8 = puVar1 + 0x10;
        local_108 = 0;
        local_118 = 0xffffffff00000000;
        uStack_110 = 0;
        local_104 = 0x3f800000;
        local_55 = 0;
        local_d8 = 0x80;
        puStack_e0 = local_d4;
        local_d4[0] = 0;
        local_48 = 0;
        local_4b = 0;
        local_f4 = 0;
        local_fc = 0;
        local_50 = 7;
        local_4c = *(undefined1 *)(param_1 + 0x224);
        lVar3 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3c0))();
        if (lVar3 != 0) {
          uVar4 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3c0))();
          local_11c = 0;
          FUN_017327f0(uVar4,param_2 + 0x38,&local_11c,&local_118,0xffffffff);
        }
      }
    }
  }
  puVar1 = PTR_DAT_04bb43c0;
  lVar3 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4(param_2 + 0x40);
  if (*(long *)puVar1 != 0) {
    lVar3 = *(long *)(lVar3 + 0x57e58);
    uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
    if ((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8) != 0)) {
      FUN_0075c420(param_1,param_2 + 0x40,0,0);
    }
  }
  return;
}

