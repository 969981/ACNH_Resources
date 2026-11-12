
void FUN_0075c1e4(long param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  undefined8 uVar4;
  long *plVar5;
  undefined4 local_10c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined8 local_e4;
  undefined *local_d8;
  undefined1 *puStack_d0;
  undefined4 local_c8;
  undefined1 local_c4 [127];
  undefined1 local_45;
  undefined4 local_40;
  undefined1 local_3c;
  undefined1 local_3b;
  undefined8 local_38;
  
  plVar5 = *(long **)(param_1 + 0x3b0);
  if (plVar5 != (long *)0x0) {
    if ((param_3 & 1) != 0) {
      FUN_0075bd1c(param_1,param_2);
      plVar5 = *(long **)(param_1 + 0x3b0);
    }
    local_f8 = 0;
    local_108 = 0xffffffff00000000;
    uStack_100 = 0;
    local_f4 = 0x3f800000;
    puStack_d0 = local_c4;
    local_c8 = 0x80;
    local_45 = 0;
    local_d8 = PTR_DAT_04bb2d88 + 0x10;
    local_c4[0] = 0;
    local_38 = 0;
    local_3b = 0;
    local_40 = 7;
    local_3c = *(undefined1 *)(param_1 + 0x224);
    local_ec = 0;
    local_e4 = 0;
    if (((*PTR_DAT_04bb37c8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb37c8), iVar1 != 0)) {
      *(undefined ***)PTR_DAT_04bb37c0 = &PTR_LAB_04908e00;
      __cxa_guard_release(PTR_DAT_04bb37c8);
    }
    if ((plVar5 == (long *)0x0) ||
       (uVar2 = (**(code **)(*plVar5 + 0x10))(plVar5,PTR_DAT_04bb37c0), (uVar2 & 1) == 0)) {
      lVar3 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x390))();
      if (lVar3 != 0) {
        uVar4 = (**(code **)(**(long **)(param_1 + 0x3b0) + 0x390))();
        local_10c = 0;
        FUN_017327f0(uVar4,param_2,&local_10c,&local_108,0xffffffff);
      }
    }
    else {
      local_10c = 0;
      FUN_02017350(plVar5,param_2,&local_10c);
    }
  }
  return;
}

