
void FUN_02d98f10(long param_1,ulong param_2,uint *param_3)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  undefined8 *puVar9;
  int iVar10;
  uint uVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  float fVar15;
  int local_194;
  undefined1 auStack_190 [3];
  char local_18d;
  int local_18c;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined2 local_150;
  undefined1 local_14e;
  char local_14d;
  int local_14c;
  undefined2 local_148;
  undefined1 local_146;
  undefined1 local_145;
  undefined4 local_144;
  undefined2 local_140;
  undefined1 local_13e;
  undefined1 local_13d;
  undefined4 local_13c;
  undefined2 local_138;
  undefined1 local_136;
  undefined1 local_135;
  undefined4 local_134;
  undefined2 local_130;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined4 local_12c;
  undefined2 local_128;
  undefined1 local_126;
  undefined1 local_125;
  undefined4 local_124;
  undefined2 local_120;
  undefined1 local_11e;
  undefined1 local_11d;
  undefined4 local_11c;
  undefined2 local_118;
  undefined1 local_116;
  undefined1 local_115;
  undefined4 local_114;
  undefined2 local_110;
  undefined1 local_10e;
  undefined1 local_10d;
  undefined4 local_10c;
  undefined2 local_108;
  undefined1 local_106;
  undefined1 local_105;
  undefined4 local_104;
  undefined2 local_100;
  undefined1 local_fe;
  undefined1 local_fd;
  undefined4 local_fc;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined1 local_f5;
  undefined4 local_f4;
  undefined2 local_f0;
  undefined1 local_ee;
  undefined1 local_ed;
  undefined4 local_ec;
  undefined2 local_e8;
  undefined1 local_e6;
  undefined1 local_e5;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined **local_98;
  int local_90;
  uint local_8c;
  uint uStack_88;
  undefined2 local_84;
  undefined8 local_82;
  undefined4 local_78;
  undefined8 local_74;
  byte local_6c;
  
  lVar13 = *(long *)(*(long *)(param_1 + 0x228) + 0x578);
  if (lVar13 == 0) {
    return;
  }
  pcVar1 = (char *)(param_1 + 0x10a804);
  local_90 = FUN_02d99710();
  local_82 = 0x1000001;
  local_74 = 0x60000000c;
  uVar11 = *(uint *)(param_1 + 0x1c260);
  local_6c = 0xff;
  iVar10 = -1;
  local_78 = 0;
  local_8c = 0;
  uStack_88 = 0;
  local_84 = 0;
  local_98 = &PTR_LAB_04b2b020;
  if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)(param_1 + 0x1c248))) {
    lVar8 = param_1 + 0x1c238;
    uVar6 = uVar11 + 1 & 3;
    if (2 < uVar11) {
      uVar11 = uVar11 + 1 & 0xfffffffc;
      do {
        uVar11 = uVar11 - 4;
        lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(lVar8 + 8) + 8) + 8) + 8);
      } while (uVar11 != 0);
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      lVar8 = *(long *)(lVar8 + 8);
    }
    iVar10 = -1;
    if ((lVar8 != 0) && (lVar8 = lVar8 - *(int *)(param_1 + 0x1c24c), lVar8 != 0)) {
      iVar10 = *(int *)(lVar8 + 0x270);
    }
  }
  local_188 = CONCAT44(local_188._4_4_,iVar10);
  if (iVar10 == 0x78) {
    if (*pcVar1 == '\0') goto LAB_02d9969c;
    *pcVar1 = '\0';
  }
  FUN_03383504(&local_188);
  puVar5 = PTR_DAT_04bb43c0;
  lVar8 = 0;
  if (*(long *)PTR_DAT_04bb2230 != 0) {
    lVar8 = *(long *)(*(long *)PTR_DAT_04bb2230 + 0x470);
  }
  if (*(int *)(param_1 + 0x108b14) == 0) {
    puVar9 = *(undefined8 **)(lVar8 + 0x28);
  }
  else {
    puVar9 = *(undefined8 **)(lVar8 + 0x20);
  }
  if (puVar9 != (undefined8 *)0x0) {
    local_188 = *puVar9;
    local_150 = *(undefined2 *)(puVar9 + 7);
    local_180 = puVar9[1];
    uStack_178 = puVar9[2];
    local_14e = *(undefined1 *)((long)puVar9 + 0x3a);
    local_170 = puVar9[3];
    uStack_168 = puVar9[4];
    local_160 = puVar9[5];
    uStack_158 = puVar9[6];
    local_14d = *(char *)((long)puVar9 + 0x3b);
    local_14c = *(int *)((long)puVar9 + 0x3c);
    local_148 = *(undefined2 *)(puVar9 + 8);
    local_146 = *(undefined1 *)((long)puVar9 + 0x42);
    local_145 = *(undefined1 *)((long)puVar9 + 0x43);
    local_144 = *(undefined4 *)((long)puVar9 + 0x44);
    local_140 = *(undefined2 *)(puVar9 + 9);
    local_13e = *(undefined1 *)((long)puVar9 + 0x4a);
    local_13d = *(undefined1 *)((long)puVar9 + 0x4b);
    local_13c = *(undefined4 *)((long)puVar9 + 0x4c);
    local_138 = *(undefined2 *)(puVar9 + 10);
    local_136 = *(undefined1 *)((long)puVar9 + 0x52);
    local_135 = *(undefined1 *)((long)puVar9 + 0x53);
    local_134 = *(undefined4 *)((long)puVar9 + 0x54);
    local_130 = *(undefined2 *)(puVar9 + 0xb);
    local_12e = *(undefined1 *)((long)puVar9 + 0x5a);
    local_12d = *(undefined1 *)((long)puVar9 + 0x5b);
    local_12c = *(undefined4 *)((long)puVar9 + 0x5c);
    local_128 = *(undefined2 *)(puVar9 + 0xc);
    local_126 = *(undefined1 *)((long)puVar9 + 0x62);
    local_125 = *(undefined1 *)((long)puVar9 + 99);
    local_124 = *(undefined4 *)((long)puVar9 + 100);
    local_120 = *(undefined2 *)(puVar9 + 0xd);
    local_11e = *(undefined1 *)((long)puVar9 + 0x6a);
    local_11d = *(undefined1 *)((long)puVar9 + 0x6b);
    local_11c = *(undefined4 *)((long)puVar9 + 0x6c);
    local_118 = *(undefined2 *)(puVar9 + 0xe);
    local_116 = *(undefined1 *)((long)puVar9 + 0x72);
    local_115 = *(undefined1 *)((long)puVar9 + 0x73);
    local_114 = *(undefined4 *)((long)puVar9 + 0x74);
    local_110 = *(undefined2 *)(puVar9 + 0xf);
    local_10e = *(undefined1 *)((long)puVar9 + 0x7a);
    local_10d = *(undefined1 *)((long)puVar9 + 0x7b);
    local_10c = *(undefined4 *)((long)puVar9 + 0x7c);
    local_108 = *(undefined2 *)(puVar9 + 0x10);
    local_106 = *(undefined1 *)((long)puVar9 + 0x82);
    local_105 = *(undefined1 *)((long)puVar9 + 0x83);
    local_104 = *(undefined4 *)((long)puVar9 + 0x84);
    local_100 = *(undefined2 *)(puVar9 + 0x11);
    local_fe = *(undefined1 *)((long)puVar9 + 0x8a);
    local_fd = *(undefined1 *)((long)puVar9 + 0x8b);
    local_fc = *(undefined4 *)((long)puVar9 + 0x8c);
    local_f8 = *(undefined2 *)(puVar9 + 0x12);
    local_f6 = *(undefined1 *)((long)puVar9 + 0x92);
    local_f5 = *(undefined1 *)((long)puVar9 + 0x93);
    local_f4 = *(undefined4 *)((long)puVar9 + 0x94);
    local_f0 = *(undefined2 *)(puVar9 + 0x13);
    local_ed = *(undefined1 *)((long)puVar9 + 0x9b);
    local_ec = *(undefined4 *)((long)puVar9 + 0x9c);
    local_ee = *(undefined1 *)((long)puVar9 + 0x9a);
    local_e8 = *(undefined2 *)(puVar9 + 0x14);
    local_e6 = *(undefined1 *)((long)puVar9 + 0xa2);
    local_e5 = *(undefined1 *)((long)puVar9 + 0xa3);
    local_e4 = *(undefined4 *)((long)puVar9 + 0xa4);
    local_e0 = puVar9[0x15];
    local_c8 = puVar9[0x18];
    uStack_c0 = puVar9[0x19];
    local_d8 = puVar9[0x16];
    uStack_d0 = puVar9[0x17];
    uStack_a8 = puVar9[0x1c];
    local_a0 = *(undefined1 *)(puVar9 + 0x1d);
    local_b0 = puVar9[0x1b];
    local_b8 = puVar9[0x1a];
  }
  uVar11 = *(uint *)(param_1 + 0x1c260);
  local_194 = -1;
  if ((-1 < (int)uVar11) && ((int)uVar11 < *(int *)(param_1 + 0x1c248))) {
    lVar8 = param_1 + 0x1c238;
    uVar6 = uVar11 + 1 & 3;
    if (2 < uVar11) {
      uVar11 = uVar11 + 1 & 0xfffffffc;
      do {
        uVar11 = uVar11 - 4;
        lVar8 = *(long *)(*(long *)(*(long *)(*(long *)(lVar8 + 8) + 8) + 8) + 8);
      } while (uVar11 != 0);
    }
    for (; uVar6 != 0; uVar6 = uVar6 - 1) {
      lVar8 = *(long *)(lVar8 + 8);
    }
    local_194 = -1;
    if ((lVar8 != 0) && (lVar8 = lVar8 - *(int *)(param_1 + 0x1c24c), lVar8 != 0)) {
      local_194 = *(int *)(lVar8 + 0x270);
    }
  }
  if (DAT_05687ad0 == local_194) {
    lVar8 = 0;
  }
  else if (DAT_05687b40 == local_194) {
    lVar8 = 1;
  }
  else if (DAT_05687bb0 == local_194) {
    lVar8 = 2;
  }
  else if (DAT_05687c20 == local_194) {
    lVar8 = 3;
  }
  else if (DAT_05687c90 == local_194) {
    lVar8 = 4;
  }
  else if (DAT_05687d00 == local_194) {
    lVar8 = 5;
  }
  else if (DAT_05687d70 == local_194) {
    lVar8 = 6;
  }
  else if (DAT_05687de0 == local_194) {
    lVar8 = 7;
  }
  else if (DAT_05687e50 == local_194) {
    lVar8 = 8;
  }
  else if (DAT_05687ec0 == local_194) {
    lVar8 = 9;
  }
  else if (DAT_05687f30 == local_194) {
    lVar8 = 10;
  }
  else if (DAT_05687fa0 == local_194) {
    lVar8 = 0xb;
  }
  else if (DAT_05688010 == local_194) {
    lVar8 = 0xc;
  }
  else {
    lVar8 = 0xd;
    if (DAT_05688080 != local_194) {
      lVar8 = 0;
    }
  }
  uVar11 = *(uint *)((long)&local_e0 + lVar8 * 4);
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar6 = FUN_0277d6c4(&local_150 + lVar8 * 4);
  if (*(long *)puVar5 == 0) {
joined_r0x02d995b0:
    uVar14 = uVar11;
    if ((param_2 & 1) == 0) {
LAB_02d99658:
      if ((int)uVar11 < 0) {
        local_8c = 0;
        uStack_88 = 0;
      }
      else {
        local_8c = uVar11;
        uStack_88 = uVar11;
        if (-1 < *(int *)(auStack_190 + lVar8 * 4 + 8)) {
          iVar10 = *(int *)(lVar13 + 0x2e8);
          iVar4 = 0;
          if (iVar10 != 0) {
            iVar4 = (int)uVar11 / iVar10;
          }
          local_8c = iVar4 * iVar10 - iVar10 * *(int *)(auStack_190 + lVar8 * 4 + 8);
          local_8c = local_8c & ((int)local_8c >> 0x1f ^ 0xffffffffU);
        }
      }
      goto LAB_02d9969c;
    }
  }
  else {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if (((*(uint *)(lVar12 + 0x1d8) <= uVar6) ||
        (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar6 * 8) == 0)) ||
       (uVar6 = FUN_02d99710(param_1), (int)uVar6 < 1)) goto joined_r0x02d995b0;
    uVar14 = 0;
    do {
      FUN_02d949c0(&local_194,param_1,uVar14);
      if (((local_194 != 8) &&
          (uVar7 = FUN_0277d7b4(auStack_190,&local_150 + lVar8 * 4), (uVar7 & 1) != 0)) &&
         ((local_18d == (&local_14d)[lVar8 * 8] && (local_18c == (&local_14c)[lVar8 * 2]))))
      goto LAB_02d9963c;
      uVar14 = uVar14 + 1;
    } while (uVar6 != uVar14);
    uVar14 = uVar11;
LAB_02d9963c:
    uVar11 = uVar14;
    if ((param_2 & 1) == 0) goto LAB_02d99658;
  }
  if (0 < local_90) {
    iVar10 = *(int *)(lVar13 + 0x2e8);
    uVar11 = 0;
    if (iVar10 != 0) {
      uVar11 = *(int *)(lVar13 + 0x2f4) / iVar10;
    }
    local_8c = uVar14;
    uStack_88 = uVar14;
    if (uVar11 != 1) {
      fVar15 = (float)(int)uVar11 * 0.5;
      uVar6 = 0;
      if (fVar15 != (float)(int)fVar15) {
        uVar6 = (uint)(0.0 <= fVar15);
      }
      iVar4 = uVar6 + (int)fVar15;
      if ((uVar11 & 1) != 0) {
        iVar4 = uVar11 - (uVar6 + (int)fVar15);
      }
      iVar3 = 0;
      if (iVar10 != 0) {
        iVar3 = (int)uVar14 / iVar10;
      }
      iVar4 = iVar3 - iVar4;
      iVar2 = iVar4;
      if (local_90 <= iVar4 * iVar10) {
        iVar2 = iVar3;
      }
      iVar3 = 0;
      if (-1 < iVar4) {
        iVar3 = iVar2;
      }
      local_8c = iVar3 * iVar10;
    }
  }
LAB_02d9969c:
  local_6c = *(byte *)(param_1 + 0x1f8);
  local_82._0_5_ = CONCAT23(0x101,(undefined3)local_82);
  local_84 = 0x101;
  if (7 < local_6c) {
    local_6c = 0xff;
  }
  local_82 = CONCAT17(1,(undefined7)local_82);
  local_74 = CONCAT44(4,(undefined4)local_74);
  FUN_03864290(lVar13,&local_98);
  if (param_3 != (uint *)0x0) {
    *param_3 = uStack_88;
  }
  *pcVar1 = '\0';
  return;
}

