
void FUN_039b2080(long param_1,uint *param_2,long param_3,long *param_4)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  size_t sVar6;
  undefined8 uVar7;
  long lVar8;
  long *plVar9;
  void *pvVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  uint *puVar14;
  long lVar15;
  long *plVar16;
  undefined4 *puVar17;
  long lVar18;
  ulong uVar19;
  long lVar20;
  long lVar21;
  undefined4 uVar22;
  float fVar23;
  ulong local_178;
  uint local_160;
  uint uStack_15c;
  uint local_158;
  undefined4 local_154;
  undefined8 local_150;
  size_t local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  lVar18 = DAT_05ae7600;
  uVar4 = *param_2;
  if (0 < (int)uVar4) {
    if (DAT_05ae7600 == 0) {
      pvVar10 = malloc((long)(int)uVar4 << 3);
    }
    else {
      plVar9 = param_4;
      if (param_4 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar9 = (long *)(lVar18 + 8);
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_039b2130;
      }
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,(long)(int)uVar4 << 3,8);
    }
    if (pvVar10 != (void *)0x0) {
      *(void **)(param_1 + 0x18) = pvVar10;
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(uint *)(param_1 + 0x14) = uVar4;
    }
  }
LAB_039b2130:
  lVar18 = DAT_05ae7600;
  iVar2 = param_2[0x88] + param_2[0x44];
  if ((iVar2 != 0) && (0 < iVar2)) {
    if (DAT_05ae7600 == 0) {
      pvVar10 = malloc((long)(iVar2 * 8));
    }
    else {
      plVar9 = param_4;
      if (param_4 == (long *)0x0) {
        lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar9 = (long *)(lVar18 + 8);
        if (lVar8 != 0) {
          plVar9 = (long *)(lVar8 + 0xa8);
        }
        plVar9 = (long *)*plVar9;
        if (plVar9 == (long *)0x0) goto LAB_039b21b8;
      }
      pvVar10 = (void *)(**(code **)(*plVar9 + 0x30))(plVar9,(long)(iVar2 * 8),8);
    }
    if (pvVar10 != (void *)0x0) {
      *(void **)(param_1 + 0x28) = pvVar10;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(int *)(param_1 + 0x24) = iVar2;
    }
  }
LAB_039b21b8:
  *(long *)(param_1 + 8) = param_3;
  plVar9 = (long *)(param_3 + 0xd8);
  uVar4 = *param_2;
  local_178 = (ulong)uVar4;
  if (uVar4 != 0) {
    uVar19 = 0;
    lVar8 = *(long *)(param_2 + 2);
    puVar1 = PTR_DAT_04bd0ab0 + 0x10;
    lVar18 = (long)(int)uVar4 << 3;
    do {
      lVar21 = DAT_05ae7600;
      lVar20 = *(long *)(lVar8 + uVar19 * 8);
      puVar14 = (uint *)((long)(param_2 + 0xcc) + uVar19);
      if (0x7f < uVar19) {
        puVar14 = param_2 + 0xcc;
      }
      uVar5 = *puVar14;
      if (DAT_05ae7600 == 0) {
        plVar12 = malloc(0x90);
      }
      else {
        plVar12 = param_4;
        if (param_4 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar12 = (long *)(lVar21 + 8);
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) {
            plVar12 = (long *)0x0;
            goto LAB_039b22ac;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x90,8);
      }
LAB_039b22ac:
      plVar12[3] = 0x3f80000000000000;
      plVar12[2] = 0;
      plVar12[1] = (long)(plVar12 + 2);
      plVar12[6] = 0;
      plVar12[7] = 0;
      *(undefined4 *)(plVar12 + 8) = 0;
      plVar12[0x11] = 0;
      *plVar12 = (long)puVar1;
      uVar3 = local_154 >> 0x10;
      plVar12[4] = (long)FUN_003a9580;
      plVar12[5] = 0;
      local_140 = 0;
      plVar12[9] = 0;
      plVar12[10] = 0;
      plVar12[0xb] = 0;
      plVar12[0xc] = 0;
      plVar12[0xd] = 0;
      plVar12[0xe] = 0;
      plVar12[0xf] = 0;
      plVar12[0x10] = 0;
      local_c8 = 0xffffffffffffffff;
      local_150 = 0;
      local_148 = 0;
      local_138 = 8;
      local_130 = 0;
      local_128 = 0xffffffffffffffff;
      local_120 = 0;
      local_118 = 8;
      local_110 = 0;
      local_108 = 0xffffffffffffffff;
      local_100 = 0;
      local_f8 = 8;
      local_f0 = 0;
      local_e8 = 0xffffffffffffffff;
      local_e0 = 0;
      local_d8 = 8;
      local_d0 = 0;
      local_160 = (uint)*(ushort *)(*(long *)(*plVar9 + 0x18) + 0x38);
      uStack_15c = (uint)*(ushort *)(lVar20 + 0x4c);
      local_158 = *(uint *)(lVar20 + 0x44);
      if ((int)local_158 < 0) {
        local_158 = 0xffffffff;
      }
      local_154._0_2_ = CONCAT11((*(uint *)(lVar20 + 4) & 1) == 0,1);
      local_154 = CONCAT22((short)uVar3,(undefined2)local_154) & 0xff00ffff;
      FUN_003a4744(&local_160);
      sVar6 = local_150;
      lVar21 = *(long *)PTR_DAT_04bb2698;
      if (lVar21 == 0) {
        pvVar10 = malloc(local_150);
      }
      else {
        plVar13 = param_4;
        if (param_4 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar13 = (long *)(lVar21 + 8);
          if (lVar11 != 0) {
            plVar13 = (long *)(lVar11 + 0xa8);
          }
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) {
            pvVar10 = (void *)0x0;
            goto LAB_039b23dc;
          }
        }
        pvVar10 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,sVar6,0x10);
      }
LAB_039b23dc:
      FUN_003a4830(plVar12,&local_160,pvVar10,sVar6);
      FUN_003a4940(plVar12,lVar20);
      (**(code **)(*plVar12 + 0x28))(plVar12,plVar9);
      if ((char)uVar5 != '\0') {
        fVar23 = 3600.0;
        if (*(float *)(plVar12[1] + 8) <= 3600.0) {
          fVar23 = *(float *)(plVar12[1] + 8);
        }
        puVar14 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar5 = *puVar14 ^ *puVar14 << 0xb;
        uVar3 = puVar14[3];
        *puVar14 = puVar14[1];
        puVar14[1] = puVar14[2];
        uVar5 = uVar5 >> 8 ^ uVar3 >> 0x13 ^ uVar5 ^ uVar3;
        puVar14[2] = uVar3;
        puVar14[3] = uVar5;
        puVar17 = (undefined4 *)plVar12[1];
        uVar22 = (**(code **)(puVar17 + 4))
                           (fVar23 * ((float)(uVar5 >> 9 | 0x3f800000) + -1.0),puVar17[1],puVar17[2]
                            ,*(undefined8 *)(puVar17 + 6));
        *puVar17 = uVar22;
      }
      if (*(int *)(param_1 + 0x10) < *(int *)(param_1 + 0x14)) {
        *(long **)(*(long *)(param_1 + 0x18) + (long)*(int *)(param_1 + 0x10) * 8) = plVar12;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      }
      lVar18 = lVar18 + -8;
      uVar19 = uVar19 + 1;
    } while (lVar18 != 0);
  }
  if (param_2[0x44] != 0) {
    lVar8 = (long)(int)param_2[0x44] << 3;
    lVar21 = *(long *)(param_2 + 0x46);
    lVar18 = 0;
    puVar1 = PTR_DAT_04bd09c0 + 0x10;
    do {
      lVar20 = DAT_05ae7600;
      lVar11 = *(long *)(lVar21 + lVar18 * 8);
      puVar14 = (uint *)((long)(param_2 + 0xcc) + lVar18 + local_178);
      if (0x7f < local_178 + lVar18) {
        puVar14 = param_2 + 0xcc;
      }
      uVar5 = *puVar14;
      if (DAT_05ae7600 == 0) {
        plVar12 = malloc(0xa0);
      }
      else {
        plVar12 = param_4;
        if (param_4 == (long *)0x0) {
          lVar15 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar12 = (long *)(lVar20 + 8);
          if (lVar15 != 0) {
            plVar12 = (long *)(lVar15 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) {
            plVar12 = (long *)0x0;
            goto LAB_039b25ac;
          }
        }
        plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0xa0,8);
      }
LAB_039b25ac:
      sVar6 = local_150;
      plVar12[3] = 0x3f80000000000000;
      plVar12[2] = 0;
      plVar12[1] = (long)(plVar12 + 2);
      plVar12[6] = 0;
      plVar12[7] = 0;
      *(undefined4 *)(plVar12 + 8) = 0;
      plVar12[0x13] = 0;
      *plVar12 = (long)puVar1;
      plVar12[4] = (long)FUN_003a9580;
      plVar12[5] = 0;
      local_138 = 0;
      plVar12[9] = 0;
      plVar12[10] = 0;
      plVar12[0xb] = 0;
      plVar12[0xc] = 0;
      plVar12[0xd] = 0;
      plVar12[0xe] = 0;
      plVar12[0xf] = 0;
      plVar12[0x10] = 0;
      plVar12[0x11] = 0;
      plVar12[0x12] = 0;
      local_80 = 0xffffffffffffffff;
      local_100 = 0xffffffffffffffff;
      local_f8 = 0;
      local_f0 = 8;
      local_e8 = 0;
      local_e0 = 0xffffffffffffffff;
      local_d8 = 0;
      local_d0 = 8;
      local_c8 = 0;
      local_c0 = 0xffffffffffffffff;
      uStack_b8 = 0;
      local_b0 = 8;
      uStack_a8 = 0;
      local_a0 = 0xffffffffffffffff;
      uStack_98 = 0;
      local_90 = 8;
      uStack_88 = 0;
      local_120 = 0xffffffffffffffff;
      local_118 = 0;
      local_160 = (uint)*(ushort *)(*plVar9 + 0x6c);
      uStack_15c = (uint)*(ushort *)(lVar11 + 0x62);
      local_158 = (uint)*(ushort *)(lVar11 + 0x68) + (uint)*(ushort *)(lVar11 + 0x66);
      local_154 = (uint)*(ushort *)(lVar11 + 0x6c);
      local_150 = CONCAT44(1,(uint)*(ushort *)(lVar11 + 100));
      uVar7 = local_150;
      local_148 = 0;
      local_140 = 0;
      local_130 = 8;
      local_128 = 0;
      local_110 = 8;
      local_108 = 0;
      local_150._6_2_ = SUB82(sVar6,6);
      local_150._0_6_ = CONCAT15((*(ushort *)(lVar11 + 4) & 1) == 0,(int5)uVar7);
      FUN_003aac60(&local_160);
      sVar6 = local_148;
      lVar20 = *(long *)PTR_DAT_04bb2698;
      if (lVar20 == 0) {
        pvVar10 = malloc(local_148);
      }
      else {
        plVar13 = param_4;
        if (param_4 == (long *)0x0) {
          lVar15 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar13 = (long *)(lVar20 + 8);
          if (lVar15 != 0) {
            plVar13 = (long *)(lVar15 + 0xa8);
          }
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) {
            pvVar10 = (void *)0x0;
            goto LAB_039b26f0;
          }
        }
        pvVar10 = (void *)(**(code **)(*plVar13 + 0x30))(plVar13,sVar6,8);
      }
LAB_039b26f0:
      FUN_003aad84(plVar12,&local_160,pvVar10,sVar6);
      FUN_003aaf10(plVar12,lVar11);
      (**(code **)(*plVar12 + 0x28))(plVar12,plVar9);
      if ((char)uVar5 != '\0') {
        fVar23 = 3600.0;
        if (*(float *)(plVar12[1] + 8) <= 3600.0) {
          fVar23 = *(float *)(plVar12[1] + 8);
        }
        puVar14 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar5 = *puVar14 ^ *puVar14 << 0xb;
        uVar3 = puVar14[3];
        *puVar14 = puVar14[1];
        puVar14[1] = puVar14[2];
        uVar5 = uVar5 >> 8 ^ uVar3 >> 0x13 ^ uVar5 ^ uVar3;
        puVar14[2] = uVar3;
        puVar14[3] = uVar5;
        puVar17 = (undefined4 *)plVar12[1];
        uVar22 = (**(code **)(puVar17 + 4))
                           (fVar23 * ((float)(uVar5 >> 9 | 0x3f800000) + -1.0),puVar17[1],puVar17[2]
                            ,*(undefined8 *)(puVar17 + 6));
        *puVar17 = uVar22;
      }
      if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x24)) {
        *(long **)(*(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x20) * 8) = plVar12;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
      lVar18 = lVar18 + 1;
      lVar8 = lVar8 + -8;
    } while (lVar8 != 0);
    local_178 = (ulong)(uVar4 + (int)lVar18);
  }
  if (param_2[0x88] != 0) {
    plVar12 = *(long **)(param_2 + 0x8a);
    lVar18 = (long)(int)param_2[0x88] << 3;
    puVar1 = PTR_DAT_04bd09b8 + 0x10;
    do {
      lVar8 = DAT_05ae7600;
      lVar21 = *plVar12;
      puVar14 = (uint *)((long)(param_2 + 0xcc) + local_178);
      if (0x7f < local_178) {
        puVar14 = param_2 + 0xcc;
      }
      uVar4 = *puVar14;
      if (DAT_05ae7600 == 0) {
        plVar13 = malloc(0x80);
      }
      else {
        plVar13 = param_4;
        if (param_4 == (long *)0x0) {
          lVar20 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar13 = (long *)(lVar8 + 8);
          if (lVar20 != 0) {
            plVar13 = (long *)(lVar20 + 0xa8);
          }
          plVar13 = (long *)*plVar13;
          if (plVar13 == (long *)0x0) {
            plVar13 = (long *)0x0;
            goto LAB_039b28bc;
          }
        }
        plVar13 = (long *)(**(code **)(*plVar13 + 0x30))(plVar13,0x80,8);
      }
LAB_039b28bc:
      plVar13[3] = 0x3f80000000000000;
      plVar13[2] = 0;
      plVar13[1] = (long)(plVar13 + 2);
      plVar13[6] = 0;
      plVar13[7] = 0;
      *(undefined4 *)(plVar13 + 8) = 0;
      plVar13[0xd] = 0;
      *(undefined2 *)(plVar13 + 0xe) = 0;
      *(undefined4 *)((long)plVar13 + 0x74) = 0;
      *plVar13 = (long)puVar1;
      plVar13[0xf] = 0;
      local_150 = 0;
      plVar13[4] = (long)FUN_003a9580;
      plVar13[5] = 0;
      plVar13[9] = 0;
      plVar13[10] = 0;
      plVar13[0xb] = 0;
      plVar13[0xc] = 0;
      local_e8 = 0xffffffffffffffff;
      local_148 = 0;
      local_140 = 0;
      local_138 = 8;
      local_130 = 0;
      local_128 = 0xffffffffffffffff;
      local_120 = 0;
      local_118 = 8;
      local_110 = 0;
      local_108 = 0xffffffffffffffff;
      local_100 = 0;
      local_f8 = 8;
      local_f0 = 0;
      local_160 = (uint)*(ushort *)(*(long *)(*plVar9 + 0x18) + 0x38);
      uStack_15c = (uint)*(ushort *)(lVar21 + 0x58);
      local_158 = (uint)*(ushort *)(lVar21 + 0x5a);
      local_154._0_2_ = CONCAT11((*(ushort *)(lVar21 + 4) & 1) == 0,1);
      FUN_003aa384(&local_160);
      sVar6 = local_150;
      lVar8 = *(long *)PTR_DAT_04bb2698;
      if (lVar8 == 0) {
        pvVar10 = malloc(local_150);
      }
      else {
        plVar16 = param_4;
        if (param_4 == (long *)0x0) {
          lVar20 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar16 = (long *)(lVar8 + 8);
          if (lVar20 != 0) {
            plVar16 = (long *)(lVar20 + 0xa8);
          }
          plVar16 = (long *)*plVar16;
          if (plVar16 == (long *)0x0) {
            pvVar10 = (void *)0x0;
            goto LAB_039b29dc;
          }
        }
        pvVar10 = (void *)(**(code **)(*plVar16 + 0x30))(plVar16,sVar6,8);
      }
LAB_039b29dc:
      FUN_003aa444(plVar13,&local_160,pvVar10,sVar6);
      FUN_003aa550(plVar13,lVar21);
      (**(code **)(*plVar13 + 0x28))(plVar13,plVar9);
      if ((char)uVar4 != '\0') {
        fVar23 = 3600.0;
        if (*(float *)(plVar13[1] + 8) <= 3600.0) {
          fVar23 = *(float *)(plVar13[1] + 8);
        }
        puVar14 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar4 = *puVar14 ^ *puVar14 << 0xb;
        uVar5 = puVar14[3];
        *puVar14 = puVar14[1];
        puVar14[1] = puVar14[2];
        uVar4 = uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar5;
        puVar14[2] = uVar5;
        puVar14[3] = uVar4;
        puVar17 = (undefined4 *)plVar13[1];
        uVar22 = (**(code **)(puVar17 + 4))
                           (fVar23 * ((float)(uVar4 >> 9 | 0x3f800000) + -1.0),puVar17[1],puVar17[2]
                            ,*(undefined8 *)(puVar17 + 6));
        *puVar17 = uVar22;
      }
      if (*(int *)(param_1 + 0x20) < *(int *)(param_1 + 0x24)) {
        *(long **)(*(long *)(param_1 + 0x28) + (long)*(int *)(param_1 + 0x20) * 8) = plVar13;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
      plVar12 = plVar12 + 1;
      lVar18 = lVar18 + -8;
      local_178 = local_178 + 1;
    } while (lVar18 != 0);
  }
  FUN_039b2b10(0,param_1,*(undefined8 *)(param_1 + 8));
  return;
}

