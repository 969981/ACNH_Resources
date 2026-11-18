
void FUN_03731f10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  ushort uVar5;
  bool bVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  ulong uVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  byte *pbVar14;
  undefined8 uVar15;
  undefined8 *puVar16;
  long *plVar17;
  uint *puVar18;
  long *plVar19;
  uint local_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined2 uStack_184;
  undefined1 uStack_182;
  undefined1 uStack_181;
  undefined4 local_180;
  undefined2 uStack_17c;
  undefined1 uStack_17a;
  undefined1 uStack_179;
  undefined4 uStack_178;
  undefined2 local_174;
  undefined1 uStack_172;
  undefined1 uStack_171;
  undefined4 uStack_170;
  undefined8 local_16c;
  undefined2 local_164;
  undefined1 local_162;
  undefined1 local_161;
  undefined8 local_160;
  undefined8 local_158;
  int local_150;
  uint local_14c [5];
  undefined2 local_138;
  undefined1 local_136;
  undefined1 local_135;
  uint local_134;
  undefined2 local_130;
  undefined1 local_12e;
  undefined1 local_12d;
  uint local_12c;
  undefined2 local_128;
  undefined1 local_126;
  undefined1 local_125;
  uint local_124;
  undefined2 local_120;
  undefined1 local_11e;
  undefined1 local_11d;
  uint local_11c;
  undefined2 local_118;
  undefined1 local_116;
  undefined1 local_115;
  uint local_114;
  undefined2 local_110;
  undefined1 local_10e;
  undefined1 local_10d;
  uint local_10c;
  undefined2 local_108;
  undefined1 local_106;
  undefined1 local_105;
  uint local_104;
  undefined2 local_100;
  undefined1 local_fe;
  undefined1 local_fd;
  uint local_fc;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined1 local_f5;
  uint local_f4;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined1 local_ed;
  uint local_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined1 local_e5;
  uint local_e4;
  undefined2 local_e0;
  undefined1 local_de;
  undefined1 local_dd;
  uint local_dc;
  undefined2 local_d8;
  undefined1 local_d6;
  undefined1 local_d5;
  uint local_d4;
  undefined2 local_d0;
  undefined1 local_ce;
  undefined1 local_cd;
  uint local_cc;
  undefined4 local_c8;
  uint local_c4;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined8 local_8c;
  undefined8 uStack_84;
  undefined2 local_7c;
  undefined8 local_78;
  undefined2 local_6c;
  undefined1 local_6a;
  
  *(uint *)(&DAT_00001230 + param_1) = *(uint *)(&DAT_00001230 + param_1) | 0x80;
  puVar1 = PTR_DAT_04bb2720;
  lVar12 = *(long *)PTR_DAT_04bb27f8;
  if (lVar12 != 0) {
    if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       (uVar5 = **(ushort **)PTR_DAT_04bc3a48, (uVar5 & 1) == 0)) {
      if (*(int *)(lVar12 + 0x10) == 2) goto LAB_03731f84;
    }
    else if (((uVar5 ^ 0xffff) & 5) == 0) {
LAB_03731f84:
      if (*(int *)(lVar12 + 0x14) == 6) {
        return;
      }
    }
  }
  lVar12 = *(long *)PTR_DAT_04bb2720;
  if (lVar12 == 0) {
    puVar16 = &DAT_055c04a0;
  }
  else {
    puVar16 = &DAT_055c04a0;
    if (*(long *)(lVar12 + 0x330) != 0) {
      puVar16 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
      iVar7 = FUN_006bd550(*puVar16,0);
      puVar16 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar16 = &DAT_055c04a0;
      }
    }
  }
  iVar7 = *(int *)(puVar16 + 7);
  if (DAT_05ac0a90 == iVar7) {
    lVar12 = 0;
LAB_037320ec:
    bVar6 = true;
    local_194 = (&DAT_05ac0a98)[lVar12 * 4];
    lVar12 = *(long *)puVar1;
  }
  else {
    if (DAT_05ac0aa0 == iVar7) {
      lVar12 = 1;
      goto LAB_037320ec;
    }
    if (DAT_05ac0ab0 == iVar7) {
      lVar12 = 2;
      goto LAB_037320ec;
    }
    if (DAT_05ac0ac0 == iVar7) {
      lVar12 = 3;
      goto LAB_037320ec;
    }
    if (DAT_05ac0ad0 == iVar7) {
      lVar12 = 4;
      goto LAB_037320ec;
    }
    if (DAT_05ac0ae0 == iVar7) {
      lVar12 = 5;
      goto LAB_037320ec;
    }
    if (DAT_05ac0af0 == iVar7) {
      lVar12 = 6;
      goto LAB_037320ec;
    }
    if (DAT_05ac0b00 == iVar7) {
      lVar12 = 7;
      goto LAB_037320ec;
    }
    if (DAT_05ac0b10 == iVar7) {
      lVar12 = 8;
      goto LAB_037320ec;
    }
    if (DAT_05ac0b20 == iVar7) {
      lVar12 = 9;
      goto LAB_037320ec;
    }
    bVar6 = false;
    local_194 = 0;
    lVar12 = *(long *)puVar1;
  }
  if ((lVar12 != 0) && (*(long *)(lVar12 + 0x330) != 0)) {
    puVar16 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
    FUN_006bd550(*puVar16,0);
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    plVar19 = *(long **)(param_1 + 0xe8);
    uVar15 = *(undefined8 *)PTR_DAT_04bb27c0;
    plVar3 = plVar19 + *(int *)(param_1 + 0xe0);
    puVar1 = PTR_DAT_04bb2d88 + 0x10;
    do {
      lVar12 = *plVar19;
      if ((*(ushort *)(lVar12 + 0x114) >> 5 & 1) == 0) {
        if (bVar6) {
          local_190 = (undefined *)(ulong)local_194;
          if (((*(int *)(lVar12 + 0x3c) != 2) && (local_194 == *(uint *)(lVar12 + 0xe8))) &&
             (*(int *)(lVar12 + 0xd8) != 0)) goto LAB_0373220c;
        }
        else if (*(int *)(lVar12 + 0x3c) != 2) {
LAB_0373220c:
          local_cd = 0;
          uStack_17c = 0;
          uStack_17a = 0x80;
          uStack_179 = 0x3f;
          uStack_178 = 0;
          local_150 = 0x80;
          local_14c[0] = local_14c[0] & 0xffffff00;
          local_c0 = 0;
          local_c4 = local_c4 & 0xffff0000;
          local_190 = (undefined *)0xffffffff00000000;
          local_174 = 0;
          uStack_172 = 0;
          uStack_171 = 0;
          uStack_170 = 0;
          local_16c = 0;
          local_c8 = 7;
          plVar17 = (long *)(lVar12 + 0x10);
          local_160 = puVar1;
          local_158 = local_14c;
          (**(code **)(*plVar17 + 0x18))(plVar17);
          puVar18 = *(uint **)(lVar12 + 0x18);
          if (local_14c != puVar18) {
            (**(code **)(*(long *)(lVar12 + 0x10) + 0x18))(plVar17);
            lVar13 = 0;
            do {
              if (*(char *)(*(long *)(lVar12 + 0x18) + lVar13) == '\0') goto LAB_037322cc;
              lVar4 = *(long *)(lVar12 + 0x18) + lVar13;
              if (*(char *)(lVar4 + 1) == '\0') {
                lVar13 = lVar13 + 1;
                goto LAB_037322cc;
              }
              if (*(char *)(lVar4 + 2) == '\0') {
                lVar13 = lVar13 + 2;
                goto LAB_037322cc;
              }
              lVar13 = lVar13 + 3;
            } while (lVar13 != 0x80001);
            lVar13 = 0;
LAB_037322cc:
            iVar7 = (int)lVar13;
            if (local_150 <= (int)lVar13) {
              iVar7 = local_150 + -1;
            }
            memcpy(local_14c,puVar18,(long)iVar7);
            *(undefined1 *)((long)local_14c + (long)iVar7) = 0;
          }
          uVar10 = FUN_03725e90(param_1,&local_190,lVar12);
          if ((uVar10 & 1) != 0) {
            if (bVar6) {
              if (DAT_05abbc50 == *(int *)(lVar12 + 0xe4)) {
LAB_0373218c:
                FUN_037289d0(param_1,plVar17,0);
              }
              else if (((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
                       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) && (*(int *)(lVar12 + 0x3c) == 0)
                      ) {
                local_6c = 0x23;
                local_6a = 8;
                FUN_020fd3a0(&local_6c,plVar17);
                uVar9 = FUN_021d7d60(&local_6c);
                if (((uVar9 < 10) && ((&DAT_053fee41)[(ulong)uVar9 * 0xba0] != '\0')) &&
                   (((&DAT_053fede8)[(ulong)uVar9 * 0x174] != 0 &&
                    (*(int *)((&DAT_053fede8)[(ulong)uVar9 * 0x174] + 4) == 1)))) goto LAB_0373218c;
              }
            }
            uVar8 = FUN_007402e0(uVar15,&local_190,(ulong)local_190 & 0xffffffff,1);
            *(undefined4 *)(lVar12 + 8) = uVar8;
          }
        }
      }
      plVar19 = plVar19 + 1;
    } while (plVar19 != plVar3);
  }
  puVar1 = PTR_DAT_04bb37e0;
  uStack_184 = *(undefined2 *)PTR_DAT_04bb37e0;
  uStack_182 = PTR_DAT_04bb37e0[2];
  uStack_181 = PTR_DAT_04bb37e0[3];
  local_14c[0] = *(uint *)PTR_DAT_04bb37e0;
  local_190 = (undefined *)
              CONCAT17(uStack_181,CONCAT16(uStack_182,CONCAT24(uStack_184,(undefined4)local_190)));
  bVar11 = *PTR_DAT_04bb32e0;
  local_188 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_16c = CONCAT44(local_188,*(undefined4 *)PTR_DAT_04bb37e0);
  local_160 = (undefined *)CONCAT44(*(undefined4 *)PTR_DAT_04bb37e0,local_188);
  local_158 = (uint *)CONCAT44(*(undefined4 *)PTR_DAT_04bb37e0,local_188);
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  pbVar14 = PTR_DAT_04bb32e0;
  if (lVar12 == 0) {
LAB_037324c8:
    if (7 < bVar11) {
LAB_037324d0:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar12 = **(long **)PTR_DAT_04bb27d0;
        bVar11 = *(byte *)(lVar12 + 0x473);
        pbVar14 = PTR_DAT_04bb5038;
        if ((long)(char)bVar11 != 0xffffffffffffffff) {
          puVar18 = (uint *)(lVar12 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
          if (7 < bVar11) {
            puVar18 = (uint *)(lVar12 + 0x48);
          }
          if ((*puVar18 & 8) != 0) {
            pbVar14 = (byte *)(lVar12 + 0x471);
          }
        }
        bVar11 = *pbVar14;
        if (bVar11 < 8) goto LAB_03732540;
      }
      pbVar14 = PTR_DAT_04bb5038;
    }
  }
  else {
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar12 + 0x158);
    }
    if (7 < *pbVar14) {
      if ((*(int *)(lVar12 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        bVar11 = *pbVar14;
        goto LAB_037324c8;
      }
      goto LAB_037324d0;
    }
  }
  bVar11 = *pbVar14;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
LAB_03732540:
  local_14c[2] = local_14c[2] & 0xffffff00;
  if (7 < bVar11) {
    bVar11 = 0xff;
  }
  local_14c[3] = 0;
  local_190 = (undefined *)CONCAT71((int7)((ulong)local_190 >> 8),bVar11);
  local_180 = local_188;
  uStack_17c = uStack_184;
  uStack_17a = uStack_182;
  uStack_179 = uStack_181;
  uStack_178 = local_188;
  local_174 = uStack_184;
  uStack_172 = uStack_182;
  uStack_171 = uStack_181;
  uStack_170 = local_188;
  local_164 = uStack_184;
  local_162 = uStack_182;
  local_161 = uStack_181;
  local_150 = local_188;
  local_14c[1] = local_188;
  FUN_02543cdc(&local_190);
  local_160._0_4_ = (uint)(uint3)local_160;
  local_16c = local_16c & 0xffffffffffffff00;
  local_158 = (uint *)CONCAT62(local_158._2_6_,0xffff);
  uStack_170 = 0x10;
  local_158 = (uint *)CONCAT44(3,(undefined4)local_158);
  local_190 = PTR_DAT_04bcacd8 + 0x10;
  local_a0 = 0;
  uStack_98 = 0;
  local_188 = *(undefined4 *)PTR_DAT_04bb3238;
  puVar2 = PTR_DAT_04bb2ab0 + 0x10;
  local_138 = *(undefined2 *)puVar1;
  local_78 = 0;
  local_7c = 0;
  local_135 = puVar1[3];
  local_180 = SUB84(puVar2,0);
  uStack_17c = (undefined2)((ulong)puVar2 >> 0x20);
  uStack_17a = (undefined1)((ulong)puVar2 >> 0x30);
  uStack_179 = (undefined1)((ulong)puVar2 >> 0x38);
  uStack_178 = SUB84(&local_16c,0);
  local_174 = (undefined2)((ulong)&local_16c >> 0x20);
  uStack_172 = (undefined1)((ulong)&local_16c >> 0x30);
  uStack_171 = (undefined1)((ulong)&local_16c >> 0x38);
  local_136 = puVar1[2];
  local_c8 = *(undefined4 *)puVar1;
  local_14c[3] = *(uint *)puVar1;
  local_14c[1] = *(uint *)puVar1;
  local_150 = *(int *)puVar1;
  local_14c[0] = *(uint *)(puVar1 + 4);
  local_c0 = 0xffffffff;
  uStack_b8 = 0xffffffff00000000;
  local_b0 = 0xffffffff;
  uStack_a8 = 0xffffffffffffffff;
  local_90 = 0x244db4da;
  local_8c = 0;
  uStack_84 = 0;
  if (*(int *)(param_1 + 0xe0) != 0) {
    plVar19 = *(long **)(param_1 + 0xe8);
    lVar12 = (long)*(int *)(param_1 + 0xe0) << 3;
    do {
      if ((*(ushort *)(*plVar19 + 0x114) & 1) != 0) {
        local_14c[2] = local_14c[0];
        local_14c[4] = local_14c[0];
        local_134 = local_14c[0];
        local_130 = local_138;
        local_12e = local_136;
        local_12d = local_135;
        local_12c = local_14c[0];
        local_128 = local_138;
        local_126 = local_136;
        local_125 = local_135;
        local_124 = local_14c[0];
        local_120 = local_138;
        local_11e = local_136;
        local_11d = local_135;
        local_11c = local_14c[0];
        local_118 = local_138;
        local_116 = local_136;
        local_115 = local_135;
        local_114 = local_14c[0];
        local_110 = local_138;
        local_10e = local_136;
        local_10d = local_135;
        local_10c = local_14c[0];
        local_108 = local_138;
        local_106 = local_136;
        local_105 = local_135;
        local_104 = local_14c[0];
        local_100 = local_138;
        local_fe = local_136;
        local_fd = local_135;
        local_fc = local_14c[0];
        local_f8 = local_138;
        local_f6 = local_136;
        local_f5 = local_135;
        local_f4 = local_14c[0];
        local_f0 = local_138;
        local_ee = local_136;
        local_ed = local_135;
        local_ec = local_14c[0];
        local_e8 = local_138;
        local_e6 = local_136;
        local_e5 = local_135;
        local_e4 = local_14c[0];
        local_e0 = local_138;
        local_de = local_136;
        local_dd = local_135;
        local_dc = local_14c[0];
        local_d8 = local_138;
        local_d6 = local_136;
        local_d5 = local_135;
        local_d4 = local_14c[0];
        local_d0 = local_138;
        local_ce = local_136;
        local_cd = local_135;
        local_cc = local_14c[0];
        local_c4 = local_14c[0];
        FUN_0373b290(&local_190);
        FUN_037327a0(param_1,&local_188,param_1 + 0x11d0,0);
        return;
      }
      plVar19 = plVar19 + 1;
      lVar12 = lVar12 + -8;
    } while (lVar12 != 0);
  }
  return;
}

