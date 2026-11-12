
void FUN_0075cf6c(long param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  long lVar2;
  undefined8 uVar3;
  undefined4 local_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined4 local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined8 local_d4;
  undefined *local_c8;
  undefined1 *puStack_c0;
  undefined4 local_b8;
  undefined1 local_b4 [127];
  undefined1 local_35;
  undefined4 local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined8 local_28;
  
  plVar1 = *(long **)(param_1 + 0x3b0);
  if (plVar1 != (long *)0x0) {
    if ((param_3 & 1) != 0) {
      FUN_0075bd1c(param_1,param_2);
      plVar1 = *(long **)(param_1 + 0x3b0);
    }
    local_e8 = 0;
    local_f8 = 0xffffffff00000000;
    uStack_f0 = 0;
    local_e4 = 0x3f800000;
    puStack_c0 = local_b4;
    local_b8 = 0x80;
    local_35 = 0;
    local_b4[0] = 0;
    local_c8 = PTR_DAT_04bb2d88 + 0x10;
    local_28 = 0;
    local_2b = 0;
    local_d4 = 0;
    local_dc = 0;
    local_30 = 7;
    local_2c = *(undefined1 *)(param_1 + 0x224);
    lVar2 = (**(code **)(*plVar1 + 0x3b8))();
    if (lVar2 != 0) {
      uVar3 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x3b8))();
      local_fc = 0;
      FUN_017327f0(uVar3,param_2,&local_fc,&local_f8,0xffffffff);
    }
  }
  return;
}

