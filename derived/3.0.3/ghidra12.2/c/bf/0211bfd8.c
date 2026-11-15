
void FUN_0211bfd8(long param_1,int *param_2)

{
  char cVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  ulong uVar8;
  undefined4 *puVar9;
  uint uVar10;
  byte *pbVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined4 local_d0;
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
  undefined2 local_98;
  undefined1 local_96;
  undefined1 local_95;
  undefined4 local_94;
  undefined2 local_90;
  undefined1 local_8e;
  undefined1 local_8d;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 local_80;
  undefined1 uStack_7e;
  undefined1 uStack_7d;
  undefined4 uStack_7c;
  undefined2 local_78;
  undefined1 local_76;
  undefined1 local_75;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined1 local_65;
  undefined4 local_64;
  undefined2 uStack_60;
  undefined1 uStack_5e;
  undefined1 uStack_5d;
  undefined4 local_5c;
  undefined2 local_58;
  undefined1 uStack_56;
  undefined1 uStack_55;
  undefined4 uStack_54;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  
  if (*param_2 == 0) {
    return;
  }
  puVar9 = &local_d0;
  iVar5 = FUN_02119c7c();
  puVar4 = PTR_DAT_04bb37e0;
  puVar3 = PTR_DAT_04bb27c0;
  if (iVar5 == -1) {
    return;
  }
  if (iVar5 == -2) {
    lVar14 = param_1 + 8;
    cVar1 = *(char *)(param_1 + 0xf4);
  }
  else {
    lVar14 = *(long *)(*(long *)(param_1 + 0x1f0) + (long)iVar5 * 8);
    cVar1 = *(char *)(lVar14 + 0xec);
  }
  if (cVar1 != '\0') {
    return;
  }
  local_80 = *(undefined2 *)PTR_DAT_04bb37e0;
  uStack_7e = PTR_DAT_04bb37e0[2];
  uStack_7d = PTR_DAT_04bb37e0[3];
  local_48 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_70 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_88 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_84 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  uStack_7c = local_84;
  local_78 = local_80;
  local_76 = uStack_7e;
  local_75 = uStack_7d;
  local_74 = local_84;
  local_6c = local_84;
  local_68 = local_80;
  local_66 = uStack_7e;
  local_65 = uStack_7d;
  local_64 = local_84;
  uStack_60 = local_80;
  uStack_5e = uStack_7e;
  uStack_5d = uStack_7d;
  local_5c = local_84;
  local_58 = local_80;
  uStack_56 = uStack_7e;
  uStack_55 = uStack_7d;
  uStack_54 = local_84;
  local_50 = local_80;
  local_4e = uStack_7e;
  local_4d = uStack_7d;
  local_4c = local_84;
  local_44 = local_84;
  if (iVar5 != -2) {
    FUN_021f9cc0(&local_88,param_2,1);
    puVar9 = &local_88;
    goto LAB_0211c3e0;
  }
  lVar13 = *(long *)PTR_DAT_04bb39b0;
  if (lVar13 == 0) {
    bVar2 = *PTR_DAT_04bb32e0;
LAB_0211c158:
    uVar10 = (uint)bVar2;
    if (uVar10 < 8) goto LAB_0211c1cc;
LAB_0211c160:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar13 = **(long **)PTR_DAT_04bb27d0;
      bVar2 = *(byte *)(lVar13 + 0x473);
      pbVar11 = PTR_DAT_04bb5038;
      if ((long)(char)bVar2 != 0xffffffffffffffff) {
        puVar12 = (uint *)(lVar13 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
        if (7 < bVar2) {
          puVar12 = (uint *)(lVar13 + 0x48);
        }
        if ((*puVar12 & 8) != 0) {
          pbVar11 = (byte *)(lVar13 + 0x471);
        }
      }
      uVar10 = (uint)*pbVar11;
      if (uVar10 < 8) goto LAB_0211c1cc;
    }
    uVar10 = (uint)(byte)*PTR_DAT_04bb5038;
    if (uVar10 < 8) goto LAB_0211c1cc;
LAB_0211c1e0:
    puVar12 = (uint *)PTR_DAT_04bb3238;
  }
  else {
    pbVar11 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar13 + 0x15c) != 0) {
      pbVar11 = (byte *)(lVar13 + 0x158);
    }
    uVar10 = (uint)*pbVar11;
    if (7 < *pbVar11) {
      if ((*(int *)(lVar13 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        bVar2 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0211c158;
      }
      goto LAB_0211c160;
    }
LAB_0211c1cc:
    if (*(long *)PTR_DAT_04bb4718 == 0) goto LAB_0211c1e0;
    puVar12 = (uint *)(*(long *)PTR_DAT_04bb4718 + (ulong)uVar10 * 4 + 0xde8);
  }
  lVar13 = *(long *)PTR_DAT_04bb27c0;
  if (lVar13 == 0) {
LAB_0211c31c:
    FUN_021f9cc0(&local_88,param_2,1);
  }
  else {
    uVar10 = *puVar12;
    if ((((uVar10 == 0) ||
         (plVar15 = *(long **)(*(long *)(*(long *)(lVar13 + 0x1c0) + 8) +
                              ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar15 == (long *)0x0)) ||
        ((*(uint *)(plVar15 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar15 + 0x46) != uVar10)) {
      plVar15 = (long *)0x0;
    }
    if ((*(int *)(lVar13 + 0x288) == 1) || (*(int *)(lVar13 + 0x288) == -1)) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar13 = *(long *)puVar3;
      iVar5 = (**(code **)(*plVar7 + 0x60))();
      if (iVar5 < 0x11) {
        uVar10 = 1;
      }
      else {
        if (4 < *(uint *)(lVar13 + 0x5e8)) goto LAB_0211c28c;
        uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar13 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_0211c28c:
      uVar10 = 0;
    }
    if (plVar15 == (long *)0x0) goto LAB_0211c31c;
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar6 = (**(code **)(*plVar15 + 0x20))(plVar15,PTR_DAT_04bb3770);
    if (((uVar10 & uVar6) != 1) || (plVar15 = (long *)plVar15[0xc], plVar15 == (long *)0x0))
    goto LAB_0211c31c;
    if (((*PTR_DAT_04bb37a0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37a0), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3798 = PTR_DAT_04bb37a8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37a0);
    }
    uVar8 = (**(code **)(*plVar15 + 0x10))(plVar15,PTR_DAT_04bb3798);
    if ((uVar8 & 1) == 0) goto LAB_0211c31c;
    FUN_0233e334(plVar15,&local_88,0);
  }
  local_d0._0_2_ = *(undefined2 *)puVar4;
  local_d0._2_1_ = puVar4[2];
  local_d0._3_1_ = puVar4[3];
  local_cc = *(undefined4 *)(puVar4 + 4);
  local_c8 = (undefined2)local_d0;
  local_c6 = local_d0._2_1_;
  local_c5 = local_d0._3_1_;
  local_c4 = local_cc;
  local_c0 = (undefined2)local_d0;
  local_be = local_d0._2_1_;
  local_bd = local_d0._3_1_;
  local_bc = local_cc;
  local_b8 = (undefined2)local_d0;
  local_b6 = local_d0._2_1_;
  local_b5 = local_d0._3_1_;
  local_b4 = local_cc;
  local_b0 = (undefined2)local_d0;
  local_ae = local_d0._2_1_;
  local_ad = local_d0._3_1_;
  local_ac = local_cc;
  local_a8 = (undefined2)local_d0;
  local_a6 = local_d0._2_1_;
  local_a5 = local_d0._3_1_;
  local_a4 = local_cc;
  local_a0 = (undefined2)local_d0;
  local_9e = local_d0._2_1_;
  local_9d = local_d0._3_1_;
  local_9c = local_cc;
  local_98 = (undefined2)local_d0;
  local_96 = local_d0._2_1_;
  local_95 = local_d0._3_1_;
  local_94 = local_cc;
  local_90 = (undefined2)local_d0;
  local_8e = local_d0._2_1_;
  local_8d = local_d0._3_1_;
  local_8c = local_cc;
  FUN_021f9cc0(&local_d0,param_2,1);
LAB_0211c3e0:
  FUN_0211c4e4(lVar14,puVar9);
  *(undefined4 *)(lVar14 + 0x138) = local_84;
  *(undefined4 *)(lVar14 + 0x134) = local_88;
  *(ulong *)(lVar14 + 0x13c) = CONCAT44(uStack_7c,CONCAT13(uStack_7d,CONCAT12(uStack_7e,local_80)));
  *(ulong *)(lVar14 + 0x144) = CONCAT44(local_74,CONCAT13(local_75,CONCAT12(local_76,local_78)));
  *(ulong *)(lVar14 + 0x164) = CONCAT44(uStack_54,CONCAT13(uStack_55,CONCAT12(uStack_56,local_58)));
  *(undefined4 *)(lVar14 + 0x14c) = local_70;
  *(undefined4 *)(lVar14 + 0x150) = local_6c;
  *(undefined2 *)(lVar14 + 0x154) = local_68;
  *(undefined1 *)(lVar14 + 0x156) = local_66;
  *(undefined1 *)(lVar14 + 0x157) = local_65;
  *(ulong *)(lVar14 + 0x158) = CONCAT17(uStack_5d,CONCAT16(uStack_5e,CONCAT24(uStack_60,local_64)));
  *(undefined4 *)(lVar14 + 0x160) = local_5c;
  *(ulong *)(lVar14 + 0x16c) = CONCAT44(local_4c,CONCAT13(local_4d,CONCAT12(local_4e,local_50)));
  *(undefined4 *)(lVar14 + 0x174) = local_48;
  *(undefined4 *)(lVar14 + 0x178) = local_44;
  return;
}

