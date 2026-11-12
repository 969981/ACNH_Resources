
void FUN_007608f8(undefined2 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  ulong uVar10;
  undefined4 *puVar11;
  long lVar12;
  long *plVar13;
  undefined *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  long local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined1 local_d5;
  undefined4 local_d4;
  undefined2 local_d0;
  undefined1 uStack_ce;
  undefined1 uStack_cd;
  undefined4 local_cc;
  undefined2 local_c8;
  undefined1 local_c6;
  undefined1 local_c5;
  undefined4 local_c4;
  undefined2 local_c0;
  undefined1 local_be;
  undefined1 local_bd;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined1 local_b5;
  undefined4 local_b4;
  undefined2 local_b0;
  undefined1 local_ae;
  undefined1 local_ad;
  undefined4 local_ac;
  undefined2 local_a8;
  undefined1 local_a6;
  undefined1 local_a5;
  undefined4 local_a4;
  undefined2 local_a0;
  undefined1 local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  
  puVar7 = PTR_DAT_04bb37e0;
  plVar13 = *(long **)(param_2 + 0x3b0);
  local_88 = *(undefined2 *)PTR_DAT_04bb37e0;
  local_86 = PTR_DAT_04bb37e0[2];
  local_85 = PTR_DAT_04bb37e0[3];
  local_68 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_78 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_80 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_90 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_98 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_94 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_8c = local_94;
  local_84 = local_94;
  local_7c = local_94;
  local_74 = local_94;
  local_70 = local_88;
  local_6e = local_86;
  local_6d = local_85;
  local_6c = local_94;
  local_64 = local_94;
  local_60 = local_88;
  local_5e = local_86;
  local_5d = local_85;
  local_5c = local_94;
  local_58 = local_88;
  local_56 = local_86;
  local_55 = local_85;
  local_54 = local_94;
  if (((*PTR_DAT_04bb37a0 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar9 != 0))
  {
    *(undefined ***)PTR_DAT_04bb3798 = &PTR_LAB_04908e00;
    __cxa_guard_release(PTR_DAT_04bb37a0);
  }
  if ((plVar13 == (long *)0x0) ||
     (uVar10 = (**(code **)(*plVar13 + 0x10))(plVar13,PTR_DAT_04bb3798), (uVar10 & 1) == 0)) {
    puVar6 = PTR_DAT_04bb37c8;
    plVar13 = *(long **)(param_2 + 0x3b0);
    if (((*PTR_DAT_04bb37c8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb37c8), iVar9 != 0)) {
      *(undefined ***)PTR_DAT_04bb37c0 = &PTR_LAB_04908e00;
      __cxa_guard_release(PTR_DAT_04bb37c8);
    }
    puVar5 = PTR_DAT_04bb37c0;
    if (plVar13 != (long *)0x0) {
      uVar10 = (**(code **)(*plVar13 + 0x10))(plVar13,PTR_DAT_04bb37c0);
      if ((uVar10 & 1) != 0) {
        plVar13 = *(long **)(param_2 + 0x3b0);
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb37c8), iVar9 != 0)) {
          *(undefined ***)puVar5 = &PTR_LAB_04908e00;
          __cxa_guard_release(PTR_DAT_04bb37c8);
        }
        if ((plVar13 != (long *)0x0) &&
           (uVar10 = (**(code **)(*plVar13 + 0x10))(plVar13,PTR_DAT_04bb37c0), (uVar10 & 1) != 0)) {
          lVar12 = plVar13[0xc15] + ((ulong)*(uint *)(plVar13[0xc15] + 0x10) & 1) * 0x20;
          local_98 = *(undefined4 *)(lVar12 + 0x14);
          local_94 = *(undefined4 *)(lVar12 + 0x18);
          lVar12 = plVar13[0xc16] + ((ulong)*(uint *)(plVar13[0xc16] + 0x10) & 1) * 0x20;
          local_90 = *(undefined4 *)(lVar12 + 0x14);
          local_8c = *(undefined4 *)(lVar12 + 0x18);
          FUN_0201a52c(&local_e0,plVar13);
          local_80 = local_e0;
          local_7c = local_dc;
          FUN_0201a994(&local_e0,plVar13);
          local_78 = local_e0;
          local_74 = local_dc;
          lVar12 = plVar13[0xc17] + ((ulong)*(uint *)(plVar13[0xc17] + 0x10) & 1) * 0x20;
          local_68 = *(undefined4 *)(lVar12 + 0x14);
          local_64 = *(undefined4 *)(lVar12 + 0x18);
        }
      }
    }
  }
  else {
    FUN_0233e334(plVar13,&local_98,0);
  }
  puVar6 = PTR_DAT_04bb43c0;
  local_d8 = *(undefined2 *)puVar7;
  local_d6 = puVar7[2];
  local_d5 = puVar7[3];
  local_e0 = *(undefined4 *)puVar7;
  local_dc = *(undefined4 *)(puVar7 + 4);
  local_f8 = PTR_DAT_04bc0510 + 0x10;
  local_f0 = *param_3;
  uStack_ec = param_3[1];
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  local_e8 = 0;
  local_d4 = local_dc;
  local_d0 = local_d8;
  uStack_ce = local_d6;
  uStack_cd = local_d5;
  local_cc = local_dc;
  local_c8 = local_d8;
  local_c6 = local_d6;
  local_c5 = local_d5;
  local_c4 = local_dc;
  local_c0 = local_d8;
  local_be = local_d6;
  local_bd = local_d5;
  local_bc = local_dc;
  local_b8 = local_d8;
  local_b6 = local_d6;
  local_b5 = local_d5;
  local_b4 = local_dc;
  local_b0 = local_d8;
  local_ae = local_d6;
  local_ad = local_d5;
  local_ac = local_dc;
  local_a8 = local_d8;
  local_a6 = local_d6;
  local_a5 = local_d5;
  local_a4 = local_dc;
  local_a0 = local_d8;
  local_9e = local_d6;
  local_9d = local_d5;
  local_9c = local_dc;
  uVar8 = FUN_0277d6c4(&local_f0);
  if (*(long *)puVar6 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar8 = FUN_0277d6c4(param_3);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar8 < *(uint *)(lVar12 + 0x1d8)) &&
         (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar8 * 8), lVar12 != 0)) {
        local_e8 = lVar12;
      }
    }
  }
  iVar9 = FUN_01ad78cc(&local_f8);
  if (iVar9 - 1U < 0x27) {
    puVar11 = &local_e0;
    switch(iVar9) {
    case 1:
      break;
    case 2:
      puVar11 = (undefined4 *)&local_d8;
      break;
    case 3:
      puVar11 = (undefined4 *)&local_c8;
      break;
    case 4:
      puVar11 = (undefined4 *)&local_c0;
      break;
    case 5:
      puVar11 = (undefined4 *)&local_b8;
      break;
    case 6:
      puVar11 = (undefined4 *)&local_b0;
      break;
    case 7:
      puVar11 = (undefined4 *)&local_a0;
      break;
    default:
      goto switchD_00760c64_caseD_8;
    case 0xf:
    case 0x27:
      puVar11 = (undefined4 *)&local_a8;
      break;
    case 0x18:
      puVar11 = (undefined4 *)&local_d0;
    }
    uVar1 = param_3[1];
    *puVar11 = *param_3;
    puVar11[1] = uVar1;
  }
switchD_00760c64_caseD_8:
  uVar4 = *(undefined2 *)puVar7;
  uVar2 = puVar7[2];
  *param_1 = uVar4;
  uVar3 = puVar7[3];
  uVar1 = *(undefined4 *)(puVar7 + 4);
  *(undefined1 *)(param_1 + 1) = uVar2;
  *(undefined1 *)((long)param_1 + 3) = uVar3;
  *(undefined4 *)(param_1 + 2) = uVar1;
  param_1[4] = uVar4;
  *(undefined1 *)(param_1 + 5) = uVar2;
  *(undefined1 *)((long)param_1 + 0xb) = uVar3;
  *(undefined4 *)(param_1 + 6) = uVar1;
  param_1[8] = uVar4;
  *(undefined1 *)(param_1 + 9) = uVar2;
  *(undefined1 *)((long)param_1 + 0x13) = uVar3;
  *(undefined4 *)(param_1 + 10) = uVar1;
  param_1[0xc] = uVar4;
  *(undefined1 *)(param_1 + 0xd) = uVar2;
  *(undefined1 *)((long)param_1 + 0x1b) = uVar3;
  *(undefined4 *)(param_1 + 0xe) = uVar1;
  param_1[0x10] = uVar4;
  *(undefined1 *)(param_1 + 0x11) = uVar2;
  *(undefined1 *)((long)param_1 + 0x23) = uVar3;
  *(undefined4 *)(param_1 + 0x12) = uVar1;
  param_1[0x14] = uVar4;
  *(undefined1 *)(param_1 + 0x15) = uVar2;
  *(undefined1 *)((long)param_1 + 0x2b) = uVar3;
  *(undefined4 *)(param_1 + 0x16) = uVar1;
  param_1[0x18] = uVar4;
  *(undefined1 *)(param_1 + 0x19) = uVar2;
  *(undefined1 *)((long)param_1 + 0x33) = uVar3;
  *(undefined4 *)(param_1 + 0x1a) = uVar1;
  param_1[0x1c] = uVar4;
  *(undefined1 *)(param_1 + 0x1d) = uVar2;
  *(undefined1 *)((long)param_1 + 0x3b) = uVar3;
  *(undefined4 *)(param_1 + 0x1e) = uVar1;
  param_1[0x20] = uVar4;
  *(undefined1 *)(param_1 + 0x21) = uVar2;
  *(undefined1 *)((long)param_1 + 0x43) = uVar3;
  *(undefined4 *)(param_1 + 0x22) = uVar1;
  FUN_025403d0(param_1,&local_98,&local_e0);
  return;
}

