
undefined8 FUN_033bc9ec(long param_1,undefined4 param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  code *pcVar7;
  long *plVar8;
  undefined8 uVar9;
  uint uVar10;
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
  undefined4 local_24;
  
  puVar2 = PTR_DAT_04bb27c0;
  if ((1 < *(int *)(param_1 + 0x70) - 1U) || (lVar6 = *(long *)PTR_DAT_04bb27c0, lVar6 == 0))
  goto switchD_033bcb34_default;
  uVar10 = *(uint *)(param_1 + 0x6c);
  if ((uVar10 == 0) ||
     (((plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0 ||
       ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar10)))) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_033bcabc;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
    if (plVar8 != (long *)0x0) goto LAB_033bcad0;
    goto switchD_033bcb34_default;
  }
LAB_033bcabc:
  uVar10 = 0;
  if (plVar8 == (long *)0x0) goto switchD_033bcb34_default;
LAB_033bcad0:
  lVar6 = plVar8[0x2a];
  if (((*PTR_DAT_04bb3748 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3748), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb3740 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3748);
  }
  uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3740);
  uVar1 = 0;
  if ((int)lVar6 == 1) {
    uVar1 = uVar10;
  }
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  switch(param_2) {
  case 0:
    uVar9 = 1;
    FUN_0075bbbc(plVar8,PTR_DAT_04bb37e0,1);
    break;
  case 1:
  case 3:
    uVar9 = 1;
    FUN_0075c420(plVar8,PTR_DAT_04bb37e0,1,0);
    break;
  case 2:
    uVar9 = 1;
    FUN_0075ca70(plVar8,PTR_DAT_04bb37e0,1,0);
    break;
  case 4:
    uVar9 = 1;
    FUN_0075c1e4(plVar8,PTR_DAT_04bb37e0,1);
    break;
  case 5:
    if (plVar8[0x76] != 0) {
      FUN_0075bd1c(plVar8,PTR_DAT_04bb37e0);
      local_108 = 0;
      local_118 = 0xffffffff00000000;
      uStack_110 = 0;
      local_104 = 0x3f800000;
      puStack_e0 = local_d4;
      local_d8 = 0x80;
      local_55 = 0;
      local_d4[0] = 0;
      local_e8 = PTR_DAT_04bb2d88 + 0x10;
      local_48 = 0;
      local_4b = 0;
      local_f4 = 0;
      local_fc = 0;
      local_50 = 7;
      local_4c = *(undefined1 *)((long)plVar8 + 0x224);
      lVar6 = (**(code **)(*(long *)plVar8[0x76] + 0x398))();
      if (lVar6 != 0) {
        pcVar7 = *(code **)(*(long *)plVar8[0x76] + 0x398);
LAB_033bce0c:
        uVar9 = (*pcVar7)();
        local_24 = 0;
        FUN_017327f0(uVar9,PTR_DAT_04bb37e0,&local_24,&local_118,0xffffffff);
      }
    }
    goto LAB_033bce2c;
  case 6:
    if (plVar8[0x76] != 0) {
      FUN_0075bd1c(plVar8,PTR_DAT_04bb37e0);
      local_108 = 0;
      local_118 = 0xffffffff00000000;
      uStack_110 = 0;
      local_104 = 0x3f800000;
      puStack_e0 = local_d4;
      local_d8 = 0x80;
      local_55 = 0;
      local_d4[0] = 0;
      local_e8 = PTR_DAT_04bb2d88 + 0x10;
      local_48 = 0;
      local_4b = 0;
      local_f4 = 0;
      local_fc = 0;
      local_50 = 7;
      local_4c = *(undefined1 *)((long)plVar8 + 0x224);
      lVar6 = (**(code **)(*(long *)plVar8[0x76] + 0x3b0))();
      if (lVar6 != 0) {
        pcVar7 = *(code **)(*(long *)plVar8[0x76] + 0x3b0);
        goto LAB_033bce0c;
      }
    }
    goto LAB_033bce2c;
  case 7:
    if (plVar8[0x76] != 0) {
      FUN_0075bd1c(plVar8,PTR_DAT_04bb37e0);
      local_108 = 0;
      local_118 = 0xffffffff00000000;
      uStack_110 = 0;
      local_104 = 0x3f800000;
      puStack_e0 = local_d4;
      local_d8 = 0x80;
      local_55 = 0;
      local_d4[0] = 0;
      local_e8 = PTR_DAT_04bb2d88 + 0x10;
      local_48 = 0;
      local_4b = 0;
      local_f4 = 0;
      local_fc = 0;
      local_50 = 7;
      local_4c = *(undefined1 *)((long)plVar8 + 0x224);
      lVar6 = (**(code **)(*(long *)plVar8[0x76] + 0x3b8))();
      if (lVar6 != 0) {
        pcVar7 = *(code **)(*(long *)plVar8[0x76] + 0x3b8);
        goto LAB_033bce0c;
      }
    }
    goto LAB_033bce2c;
  case 8:
    if (plVar8[0x76] != 0) {
      FUN_0075bd1c(plVar8,PTR_DAT_04bb37e0);
      local_108 = 0;
      local_118 = 0xffffffff00000000;
      uStack_110 = 0;
      local_104 = 0x3f800000;
      puStack_e0 = local_d4;
      local_d8 = 0x80;
      local_55 = 0;
      local_d4[0] = 0;
      local_e8 = PTR_DAT_04bb2d88 + 0x10;
      local_48 = 0;
      local_4b = 0;
      local_f4 = 0;
      local_fc = 0;
      local_50 = 7;
      local_4c = *(undefined1 *)((long)plVar8 + 0x224);
      lVar6 = (**(code **)(*(long *)plVar8[0x76] + 0x3c0))();
      if (lVar6 != 0) {
        pcVar7 = *(code **)(*(long *)plVar8[0x76] + 0x3c0);
        goto LAB_033bce0c;
      }
    }
LAB_033bce2c:
    uVar9 = 1;
    break;
  case 9:
    FUN_0075d11c(plVar8,PTR_DAT_04bb37e0,1);
  default:
switchD_033bcb34_default:
    uVar9 = 0;
  }
  return uVar9;
}

