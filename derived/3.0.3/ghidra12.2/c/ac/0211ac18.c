
void FUN_0211ac18(undefined2 *param_1,long param_2,uint param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  uint local_120;
  char local_11c;
  undefined4 local_118;
  undefined *local_110;
  undefined1 *puStack_108;
  undefined4 local_100;
  undefined1 local_fc [31];
  undefined1 local_dd;
  int local_d8;
  undefined2 local_d4;
  undefined1 local_d2;
  undefined1 local_d1;
  undefined4 local_d0;
  undefined2 local_cc;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined1 local_c1;
  undefined4 local_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined4 local_b8;
  undefined2 local_b4;
  undefined1 local_b2;
  undefined1 local_b1;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined1 local_aa;
  undefined1 local_a9;
  undefined4 local_a8;
  undefined2 local_a4;
  undefined1 local_a2;
  undefined1 local_a1;
  undefined4 local_a0;
  undefined2 local_9c;
  undefined1 local_9a;
  undefined1 local_99;
  undefined4 local_98;
  undefined2 local_94;
  undefined1 local_92;
  undefined1 local_91;
  undefined4 local_90;
  undefined2 local_8c;
  undefined1 local_8a;
  undefined1 local_89;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined1 local_81;
  undefined4 local_80;
  undefined2 local_7c;
  undefined1 local_7a;
  undefined1 local_79;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 local_70;
  undefined2 local_6c;
  undefined1 local_6a;
  undefined1 local_69;
  undefined4 local_68;
  undefined2 local_64;
  undefined1 local_62;
  undefined1 local_61;
  undefined4 local_60;
  undefined2 local_5c;
  undefined1 local_5a;
  undefined1 local_59;
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 local_51;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_49;
  undefined4 local_48;
  undefined2 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  
  if (param_3 == 0xffffffff) {
    FUN_007ef010(param_1,PTR_DAT_04bb3170);
    return;
  }
  local_11c = '\0';
  local_dd = 0;
  local_fc[0] = 0;
  local_118 = 0xffffffff;
  local_100 = 0x20;
  local_120 = *(uint *)PTR_DAT_04bb3238;
  puStack_108 = local_fc;
  local_d8 = 3;
  local_110 = PTR_DAT_04bb2028 + 0x10;
  local_d4 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_d2 = PTR_DAT_04bb37e0[2];
  local_d1 = PTR_DAT_04bb37e0[3];
  local_d0 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_40 = *(undefined2 *)PTR_DAT_04bb3170;
  local_3c = 1;
  local_34 = 0;
  local_38 = 0;
  if (param_3 == 0xfffffffe) {
    param_2 = param_2 + 0xf0;
  }
  else {
    if (param_3 < *(uint *)(param_2 + 0x1e8)) {
      param_2 = *(long *)(*(long *)(param_2 + 0x1f0) + (long)(int)param_3 * 8);
    }
    else {
      param_2 = 0;
    }
    param_2 = param_2 + 0xe8;
  }
  local_cc = local_d4;
  local_ca = local_d2;
  local_c9 = local_d1;
  local_c8 = local_d0;
  local_c4 = local_d4;
  local_c2 = local_d2;
  local_c1 = local_d1;
  local_c0 = local_d0;
  local_bc = local_d4;
  local_ba = local_d2;
  local_b9 = local_d1;
  local_b8 = local_d0;
  local_b4 = local_d4;
  local_b2 = local_d2;
  local_b1 = local_d1;
  local_b0 = local_d0;
  local_ac = local_d4;
  local_aa = local_d2;
  local_a9 = local_d1;
  local_a8 = local_d0;
  local_a4 = local_d4;
  local_a2 = local_d2;
  local_a1 = local_d1;
  local_a0 = local_d0;
  local_9c = local_d4;
  local_9a = local_d2;
  local_99 = local_d1;
  local_98 = local_d0;
  local_94 = local_d4;
  local_92 = local_d2;
  local_91 = local_d1;
  local_90 = local_d0;
  local_8c = local_d4;
  local_8a = local_d2;
  local_89 = local_d1;
  local_88 = local_d0;
  local_84 = local_d4;
  local_82 = local_d2;
  local_81 = local_d1;
  local_80 = local_d0;
  local_7c = local_d4;
  local_7a = local_d2;
  local_79 = local_d1;
  local_78 = local_d0;
  local_74 = local_d4;
  local_72 = local_d2;
  local_71 = local_d1;
  local_70 = local_d0;
  local_6c = local_d4;
  local_6a = local_d2;
  local_69 = local_d1;
  local_68 = local_d0;
  local_64 = local_d4;
  local_62 = local_d2;
  local_61 = local_d1;
  local_60 = local_d0;
  local_5c = local_d4;
  local_5a = local_d2;
  local_59 = local_d1;
  local_58 = local_d0;
  local_54 = local_d4;
  local_52 = local_d2;
  local_51 = local_d1;
  local_50 = local_d0;
  local_4c = local_d4;
  local_4a = local_d2;
  local_49 = local_d1;
  local_48 = local_d0;
  FUN_02125bc0(&local_120,param_2);
  puVar1 = PTR_DAT_04bb27c0;
  if (((local_11c == '\0') || (local_d8 != 2)) || (lVar5 = *(long *)PTR_DAT_04bb27c0, lVar5 == 0))
  goto LAB_0211af58;
  if (((local_120 == 0) ||
      (plVar6 = *(long **)(*(long *)(*(long *)(lVar5 + 0x1c0) + 8) +
                          ((ulong)(local_120 >> 0x11) & 0x7ff8)), plVar6 == (long *)0x0)) ||
     (((*(uint *)(plVar6 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar6 + 0x46) != local_120)))) {
    plVar6 = (long *)0x0;
  }
  if ((*(int *)(lVar5 + 0x288) == 1) || (*(int *)(lVar5 + 0x288) == -1)) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar5 = *(long *)puVar1;
    iVar2 = (**(code **)(*plVar4 + 0x60))();
    if (iVar2 < 0x11) {
      uVar7 = 1;
    }
    else {
      if (4 < *(uint *)(lVar5 + 0x5e8)) goto LAB_0211aef8;
      uVar7 = 0x1aU >> (ulong)(*(uint *)(lVar5 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0211aef8:
    uVar7 = 0;
  }
  if (plVar6 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar3 = (**(code **)(*plVar6 + 0x20))(plVar6,PTR_DAT_04bb37d0);
    if (((uVar7 & uVar3) != 0) && (plVar6[0x53] != 0)) {
      *param_1 = *(undefined2 *)(plVar6[0x53] + 0xc1b2);
      return;
    }
  }
LAB_0211af58:
  FUN_007ef010(param_1,PTR_DAT_04bb3170);
  return;
}

