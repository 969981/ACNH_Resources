
void FUN_02119efc(long param_1,int param_2,undefined4 *param_3,uint param_4)

{
  uint *puVar1;
  byte bVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  byte *pbVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined8 local_d4;
  undefined8 local_cc;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined2 local_bc;
  undefined1 local_ba;
  undefined1 local_b9;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined8 local_ac;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined4 uStack_98;
  byte local_94 [4];
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined2 local_88;
  undefined1 local_86;
  undefined1 local_85;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 local_7e;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined2 local_70;
  undefined1 local_6e;
  undefined1 local_6d;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined2 local_60;
  undefined1 local_5e;
  undefined1 local_5d;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 local_56;
  undefined1 local_55;
  undefined4 local_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined1 local_48;
  undefined4 local_44;
  
  if (param_2 == -1) {
    return;
  }
  local_dc = *param_3;
  uStack_d8 = param_3[1];
  local_d4 = *(undefined8 *)(param_3 + 2);
  local_cc = *(undefined8 *)(param_3 + 4);
  local_c4 = param_3[6];
  uStack_c0 = param_3[7];
  local_bc = *(undefined2 *)(param_3 + 8);
  local_ba = *(undefined1 *)((long)param_3 + 0x22);
  local_b9 = *(undefined1 *)((long)param_3 + 0x23);
  local_b8 = *(undefined8 *)(param_3 + 9);
  local_b0 = param_3[0xb];
  local_ac = *(undefined8 *)(param_3 + 0xc);
  local_a4 = *(undefined8 *)(param_3 + 0xe);
  local_9c = param_3[0x10];
  uStack_98 = param_3[0x11];
  if (*(long *)PTR_DAT_04bb47d8 != 0) {
    FUN_021206a0(param_1,param_2,&local_dc,param_4 & 1);
    FUN_02120fe0(param_1,param_2,&local_c4,param_4 & 1);
  }
  if (param_2 == -2) {
    lVar9 = param_1 + 8;
  }
  else {
    lVar9 = *(long *)(*(long *)(param_1 + 0x1f0) + (long)param_2 * 8);
  }
  *(undefined4 *)(lVar9 + 0x138) = uStack_d8;
  *(undefined4 *)(lVar9 + 0x134) = local_dc;
  *(undefined8 *)(lVar9 + 0x13c) = local_d4;
  *(undefined8 *)(lVar9 + 0x144) = local_cc;
  *(undefined8 *)(lVar9 + 0x164) = local_ac;
  *(undefined4 *)(lVar9 + 0x14c) = local_c4;
  *(undefined4 *)(lVar9 + 0x150) = uStack_c0;
  *(undefined2 *)(lVar9 + 0x154) = local_bc;
  *(undefined1 *)(lVar9 + 0x156) = local_ba;
  *(undefined1 *)(lVar9 + 0x157) = local_b9;
  *(undefined8 *)(lVar9 + 0x158) = local_b8;
  *(undefined4 *)(lVar9 + 0x160) = local_b0;
  *(undefined8 *)(lVar9 + 0x16c) = local_a4;
  *(undefined4 *)(lVar9 + 0x174) = local_9c;
  *(undefined4 *)(lVar9 + 0x178) = uStack_98;
  if (param_2 == -2) {
    uVar12 = *(uint *)(param_1 + 0xf0);
    if ((param_4 & 1) != 0) {
      local_90 = *(undefined2 *)PTR_DAT_04bb37e0;
      local_8e = PTR_DAT_04bb37e0[2];
      local_8c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      bVar2 = *PTR_DAT_04bb32e0;
      local_8d = PTR_DAT_04bb37e0[3];
      lVar9 = *(long *)PTR_DAT_04bb39b0;
      pbVar8 = PTR_DAT_04bb32e0;
      if (lVar9 == 0) {
LAB_0211a17c:
        if (bVar2 < 8) goto LAB_0211a1e4;
LAB_0211a184:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0211a1dc:
          pbVar8 = PTR_DAT_04bb5038;
          goto LAB_0211a1e4;
        }
        lVar9 = **(long **)PTR_DAT_04bb27d0;
        bVar2 = *(byte *)(lVar9 + 0x473);
        pbVar8 = PTR_DAT_04bb5038;
        if ((long)(char)bVar2 != 0xffffffffffffffff) {
          puVar1 = (uint *)(lVar9 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
          if (7 < bVar2) {
            puVar1 = (uint *)(lVar9 + 0x48);
          }
          if ((*puVar1 & 8) != 0) {
            pbVar8 = (byte *)(lVar9 + 0x471);
          }
        }
        local_94[0] = *pbVar8;
        if (7 < local_94[0]) goto LAB_0211a1dc;
      }
      else {
        if (*(int *)(lVar9 + 0x15c) != 0) {
          pbVar8 = (byte *)(lVar9 + 0x158);
        }
        if (7 < *pbVar8) {
          if ((*(int *)(lVar9 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar8 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            bVar2 = *pbVar8;
            goto LAB_0211a17c;
          }
          goto LAB_0211a184;
        }
LAB_0211a1e4:
        local_94[0] = *pbVar8;
        if (7 < local_94[0]) {
          local_94[0] = 0xff;
        }
      }
      local_48 = 0;
      if (7 < local_94[0]) {
        local_94[0] = 0xff;
      }
      local_44 = 0;
      local_88 = local_90;
      local_86 = local_8e;
      local_85 = local_8d;
      local_84 = local_8c;
      local_80 = local_90;
      local_7e = local_8e;
      local_7d = local_8d;
      local_7c = local_8c;
      local_78 = local_90;
      local_76 = local_8e;
      local_75 = local_8d;
      local_74 = local_8c;
      local_70 = local_90;
      local_6e = local_8e;
      local_6d = local_8d;
      local_6c = local_8c;
      local_68 = local_90;
      local_66 = local_8e;
      local_65 = local_8d;
      local_64 = local_8c;
      local_60 = local_90;
      local_5e = local_8e;
      local_5d = local_8d;
      local_5c = local_8c;
      local_58 = local_90;
      local_56 = local_8e;
      local_55 = local_8d;
      local_54 = local_8c;
      local_50 = local_90;
      local_4e = local_8e;
      local_4d = local_8d;
      local_4c = local_8c;
      FUN_02543cdc(local_94);
    }
  }
  else {
    uVar12 = *(uint *)(*(long *)(*(long *)(param_1 + 0x1f0) + (long)param_2 * 8) + 0xe8);
  }
  puVar3 = PTR_DAT_04bb27c0;
  if (uVar12 == 0) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + (ulong)(uVar12 >> 0x14) * 8);
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar12)) {
    plVar10 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar12 = 1;
      goto joined_r0x0211a2d4;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0211a2d4;
    }
  }
  uVar12 = 0;
joined_r0x0211a2d4:
  if (plVar10 != (long *)0x0) {
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    if ((uVar12 & uVar5) == 1) {
      puVar11 = (undefined8 *)plVar10[0x77];
      if (((*PTR_DAT_04bc2280 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bc2280), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bc2278 = PTR_DAT_04bb6718 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc2280);
      }
      if ((puVar11 != (undefined8 *)0x0) &&
         (uVar7 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bc2278), (uVar7 & 1) != 0)) {
        FUN_01f72264(puVar11,&local_dc,param_4 & 1);
      }
    }
  }
  return;
}

