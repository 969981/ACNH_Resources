
/* WARNING: Removing unreachable block (ram,0x03ed2044) */
/* WARNING: Type propagation algorithm not settling */

void FUN_03ed1664(float param_1,long *param_2,undefined8 *param_3,long *param_4,uint param_5,
                 uint param_6,ulong param_7,uint param_8)

{
  long *plVar1;
  uint uVar2;
  undefined4 uVar3;
  short sVar4;
  short sVar5;
  undefined1 uVar6;
  bool bVar7;
  bool bVar8;
  long *plVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ushort uVar12;
  int iVar13;
  long lVar14;
  uint uVar15;
  undefined2 uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  undefined8 *puVar22;
  long lVar23;
  long *plVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined8 local_b0;
  long lStack_a8;
  undefined8 local_a0;
  undefined8 local_98;
  
  fVar29 = *(float *)((long)param_4 + 0x84);
  fVar25 = fVar29;
  if ((param_7 & 1) != 0) {
    fVar25 = *(float *)(param_4 + 0x10);
    *(float *)(param_4 + 0x11) = fVar29;
    if (fVar25 < 0.0) {
      local_a0 = 0xbf80000000000000;
      (**(code **)(*param_2 + 0xb8))(param_2,param_3,param_4,&local_a0);
      fVar25 = local_a0._4_4_;
      if (local_a0._4_4_ <= 0.0) {
        fVar25 = fVar29;
      }
      if (0.0 < (float)local_a0) {
        fVar25 = fVar25 + *(float *)(param_3[1] + 0xa0) * (float)local_a0 * *(float *)(param_3 + 2);
      }
    }
    *(float *)((long)param_4 + 0x84) = fVar25;
  }
  plVar1 = param_4 + 5;
  local_a0 = 0;
  local_98 = 0;
  fVar29 = 1.0 - param_1;
  *(undefined2 *)((long)param_4 + 0x5a) = 0xffff;
  if ((int)param_5 < 0) {
    lVar23 = 0;
    plVar9 = (long *)0x0;
    bVar7 = true;
  }
  else {
    sVar4 = (short)param_4[4];
    if ((int)sVar4 == param_5) {
      uVar20 = 0;
LAB_03ed1794:
      if ((param_8 & 1) == 0) {
        lVar23 = plVar1[uVar20];
      }
      else {
        lVar23 = plVar1[uVar20];
        if ((*(ushort *)(lVar23 + 0x7a) >> 3 & 1) != 0) goto LAB_03ed2088;
      }
      uVar3 = *(undefined4 *)(param_3[1] + 0x78);
      *(float *)(lVar23 + 0x50) = fVar29;
      *(undefined4 *)(lVar23 + 0x7c) = uVar3;
      *(undefined4 *)((long)&local_a0 + uVar20 * 4) = 0x3f800000;
    }
    else {
      sVar5 = *(short *)((long)param_4 + 0x22);
      if ((int)sVar5 == param_5) {
        uVar20 = 1;
        goto LAB_03ed1794;
      }
      if ((int)*(short *)((long)param_4 + 0x24) == param_5) {
        uVar20 = 2;
        goto LAB_03ed1794;
      }
      uVar20 = 3;
      if ((int)*(short *)((long)param_4 + 0x26) == param_5) goto LAB_03ed1794;
      bVar7 = -1 < sVar4;
      uVar15 = 1;
      if (!bVar7 || sVar5 >= 0) {
        uVar15 = ~((int)sVar4 >> 0xf);
      }
      uVar2 = 2;
      if (bVar7 == (bVar7 && sVar5 < 0) || -1 < *(short *)((long)param_4 + 0x24)) {
        uVar2 = uVar15;
      }
      uVar15 = 3;
      if (-1 < (int)(uVar2 & (int)*(short *)((long)param_4 + 0x26))) {
        uVar15 = uVar2;
      }
      uVar20 = (ulong)uVar15;
LAB_03ed2088:
      lVar23 = 0;
      bVar7 = true;
      plVar9 = (long *)0x0;
      if ((fVar29 <= 0.0) || ((int)uVar20 < 0)) goto LAB_03ed17d8;
      uVar12 = 0x80;
      if ((param_7 & 1) == 0) {
        uVar12 = 0;
      }
      *(ushort *)((long)param_4 + 0x7a) = *(ushort *)((long)param_4 + 0x7a) & 0xff7f | uVar12;
      lVar23 = param_2[2];
      uVar10 = (**(code **)(*param_2 + 200))(param_2,param_5);
      if ((uint)uVar10 < *(uint *)(lVar23 + 0x38)) {
        uVar11 = *(undefined8 *)(*(long *)(lVar23 + 0x40) + (long)(int)(uint)uVar10 * 8);
      }
      else {
        uVar11 = 0;
      }
      lVar23 = FUN_03ed0358(uVar10,param_3,param_4,uVar11,param_5,uVar20);
      *(float *)(lVar23 + 0x50) = fVar29;
      *(undefined4 *)((long)&local_a0 + uVar20 * 4) = 0x3f800000;
    }
    *(short *)((long)param_4 + 0x5a) = (short)uVar20;
    bVar7 = false;
    plVar9 = (long *)param_4[uVar20];
  }
LAB_03ed17d8:
  if ((int)param_6 < 0) {
    lVar17 = 0;
    plVar24 = (long *)0x0;
  }
  else {
    sVar4 = (short)param_4[4];
    if ((int)sVar4 == param_6) {
      uVar20 = 0;
LAB_03ed1834:
      if ((param_8 & 1) == 0) {
        lVar17 = plVar1[uVar20];
      }
      else {
        lVar17 = plVar1[uVar20];
        if ((*(ushort *)(lVar17 + 0x7a) >> 3 & 1) != 0) goto LAB_03ed2168;
      }
      uVar3 = *(undefined4 *)(param_3[1] + 0x78);
      *(float *)(lVar17 + 0x50) = param_1;
      *(undefined4 *)(lVar17 + 0x7c) = uVar3;
      *(undefined4 *)((long)&local_a0 + uVar20 * 4) = 0x3f800000;
      if (bVar7) {
LAB_03ed1874:
        *(short *)((long)param_4 + 0x5a) = (short)uVar20;
      }
LAB_03ed1878:
      plVar24 = (long *)param_4[uVar20];
    }
    else {
      sVar5 = *(short *)((long)param_4 + 0x22);
      if ((int)sVar5 == param_6) {
        uVar20 = 1;
        goto LAB_03ed1834;
      }
      if ((int)*(short *)((long)param_4 + 0x24) == param_6) {
        uVar20 = 2;
        goto LAB_03ed1834;
      }
      uVar20 = 3;
      if ((int)*(short *)((long)param_4 + 0x26) == param_6) goto LAB_03ed1834;
      bVar8 = -1 < sVar4;
      uVar15 = 1;
      if (!bVar8 || sVar5 >= 0) {
        uVar15 = ~((int)sVar4 >> 0xf);
      }
      uVar2 = 2;
      if (bVar8 == (bVar8 && sVar5 < 0) || -1 < *(short *)((long)param_4 + 0x24)) {
        uVar2 = uVar15;
      }
      uVar15 = 3;
      if (-1 < (int)(uVar2 & (int)*(short *)((long)param_4 + 0x26))) {
        uVar15 = uVar2;
      }
      uVar20 = (ulong)uVar15;
LAB_03ed2168:
      lVar17 = 0;
      if (param_1 <= 0.0) {
        plVar24 = (long *)0x0;
      }
      else {
        plVar24 = (long *)0x0;
        if (-1 < (int)uVar20) {
          uVar12 = 0x80;
          if ((param_7 & 1) == 0) {
            uVar12 = 0;
          }
          *(ushort *)((long)param_4 + 0x7a) = *(ushort *)((long)param_4 + 0x7a) & 0xff7f | uVar12;
          lVar17 = param_2[2];
          uVar10 = (**(code **)(*param_2 + 200))(param_2,param_6);
          if ((uint)uVar10 < *(uint *)(lVar17 + 0x38)) {
            uVar11 = *(undefined8 *)(*(long *)(lVar17 + 0x40) + (long)(int)(uint)uVar10 * 8);
          }
          else {
            uVar11 = 0;
          }
          lVar17 = FUN_03ed0358(uVar10,param_3,param_4,uVar11,param_6,uVar20);
          *(float *)(lVar17 + 0x50) = param_1;
          *(undefined4 *)((long)&local_a0 + uVar20 * 4) = 0x3f800000;
          if (bVar7) goto LAB_03ed1874;
          goto LAB_03ed1878;
        }
      }
    }
  }
  if (*param_4 == 0) {
    puVar22 = (undefined8 *)0x0;
    lVar14 = param_4[1];
joined_r0x03ed18dc:
    bVar7 = false;
    bVar8 = false;
    if (lVar14 != 0) goto LAB_03ed18e0;
LAB_03ed18b0:
    bVar7 = bVar8;
    puVar21 = (undefined8 *)0x0;
    if (param_4[2] == 0) goto LAB_03ed18bc;
LAB_03ed190c:
    puVar19 = (undefined8 *)param_4[7];
    *(undefined4 *)((long)puVar19 + 0x7c) = *(undefined4 *)(param_3[1] + 0x78);
    if ((float)local_98 != *(float *)((long)puVar19 + 0x4c)) {
      bVar7 = true;
    }
    if (param_4[3] != 0) goto LAB_03ed1938;
LAB_03ed18c8:
    puVar18 = (undefined8 *)0x0;
    if (!bVar7) goto LAB_03ed1a18;
LAB_03ed195c:
    local_b0 = *param_3;
    lStack_a8 = param_3[1];
    fVar27 = 0.0;
    if ((*(byte *)((long)param_4 + 0x7a) >> 4 & 1) == 0) {
      iVar13 = 0;
      if ((lVar23 != 0) && (plVar9 != (long *)0x0)) {
        uVar10 = (**(code **)(*plVar9 + 0x78))
                           (*(undefined4 *)(lStack_a8 + 0xa8),plVar9,&local_b0,lVar23);
        iVar13 = (int)((ulong)uVar10 >> 0x20);
        fVar27 = fVar29 * (float)uVar10 + 0.0;
      }
    }
    else {
      iVar13 = 0;
    }
    if ((((-1 < (int)param_6) && ((*(ushort *)((long)param_4 + 0x7a) >> 4 & 1) == 0)) &&
        (lVar17 != 0)) && (plVar24 != (long *)0x0)) {
      fVar29 = (float)(**(code **)(*plVar24 + 0x78))
                                (*(undefined4 *)(param_3[1] + 0xa8),plVar24,&local_b0,lVar17);
      fVar27 = fVar27 + param_1 * fVar29;
    }
    fVar29 = 1.0;
    if (1.0 <= fVar27) {
      fVar29 = 1.0 / fVar27;
    }
    fVar29 = *(float *)(param_3 + 2) * fVar29;
    uVar10 = local_a0;
    uVar11 = local_98;
  }
  else {
    puVar22 = (undefined8 *)*plVar1;
    *(undefined4 *)((long)puVar22 + 0x7c) = *(undefined4 *)(param_3[1] + 0x78);
    if ((float)local_a0 == *(float *)((long)puVar22 + 0x4c)) {
      lVar14 = param_4[1];
      goto joined_r0x03ed18dc;
    }
    bVar7 = true;
    bVar8 = true;
    if (param_4[1] == 0) goto LAB_03ed18b0;
LAB_03ed18e0:
    puVar21 = (undefined8 *)param_4[6];
    *(undefined4 *)((long)puVar21 + 0x7c) = *(undefined4 *)(param_3[1] + 0x78);
    if (local_a0._4_4_ != *(float *)((long)puVar21 + 0x4c)) {
      bVar7 = true;
    }
    if (param_4[2] != 0) goto LAB_03ed190c;
LAB_03ed18bc:
    puVar19 = (undefined8 *)0x0;
    if (param_4[3] == 0) goto LAB_03ed18c8;
LAB_03ed1938:
    puVar18 = (undefined8 *)param_4[8];
    *(undefined4 *)((long)puVar18 + 0x7c) = *(undefined4 *)(param_3[1] + 0x78);
    if ((local_98._4_4_ != *(float *)((long)puVar18 + 0x4c)) || (bVar7)) goto LAB_03ed195c;
LAB_03ed1a18:
    iVar13 = 0;
    fVar29 = 1.0;
    uVar10 = local_a0;
    uVar11 = local_98;
  }
  fVar27 = 0.0;
  if ((puVar22 != (undefined8 *)0x0) && (fVar27 = 0.0, *param_4 != 0)) {
    fVar26 = *(float *)((long)puVar22 + 0x4c);
    local_a0._0_4_ = (float)uVar10;
    if ((float)local_a0 == fVar26) {
      if ((float)local_a0 == 0.0) {
        uVar12 = *(ushort *)((long)puVar22 + 0x7a) | 8;
LAB_03ed1ad8:
        *(ushort *)((long)puVar22 + 0x7a) = uVar12;
      }
      else if ((*(ushort *)((long)param_4 + 0x7a) >> 3 & 1) == 0) {
        uVar12 = *(ushort *)((long)puVar22 + 0x7a) & 0xfff7;
        goto LAB_03ed1ad8;
      }
    }
    else {
      if ((float)local_a0 == 0.0) {
        fVar27 = fVar26 - fVar29;
        uVar12 = *(ushort *)((long)puVar22 + 0x7a) | 8;
        fVar26 = 0.0;
        if (0.0 <= fVar27) {
          fVar26 = fVar27;
        }
LAB_03ed1aa4:
        *(ushort *)((long)puVar22 + 0x7a) = uVar12;
      }
      else {
        fVar27 = fVar29 + fVar26;
        fVar26 = 1.0;
        if (fVar27 <= 1.0) {
          fVar26 = fVar27;
        }
        if ((*(ushort *)((long)param_4 + 0x7a) >> 3 & 1) == 0) {
          uVar12 = *(ushort *)((long)puVar22 + 0x7a) & 0xfff7;
          goto LAB_03ed1aa4;
        }
      }
      *(float *)((long)puVar22 + 0x4c) = fVar26;
      if (iVar13 == 0) {
        fVar26 = fVar26 * fVar26 * (fVar26 * -2.0 + 3.0);
      }
    }
    fVar27 = fVar26 * *(float *)(puVar22 + 10) + 0.0;
    *(float *)(puVar22 + 9) = fVar26 * *(float *)(puVar22 + 10);
  }
  if ((puVar21 != (undefined8 *)0x0) && (param_4[1] != 0)) {
    fVar26 = *(float *)((long)puVar21 + 0x4c);
    local_a0._4_4_ = (float)((ulong)uVar10 >> 0x20);
    if (local_a0._4_4_ == fVar26) {
      if (local_a0._4_4_ == 0.0) {
        uVar12 = *(ushort *)((long)puVar21 + 0x7a) | 8;
LAB_03ed1b94:
        *(ushort *)((long)puVar21 + 0x7a) = uVar12;
      }
      else if ((*(ushort *)((long)param_4 + 0x7a) >> 3 & 1) == 0) {
        uVar12 = *(ushort *)((long)puVar21 + 0x7a) & 0xfff7;
        goto LAB_03ed1b94;
      }
    }
    else {
      if (local_a0._4_4_ == 0.0) {
        fVar28 = fVar26 - fVar29;
        uVar12 = *(ushort *)((long)puVar21 + 0x7a) | 8;
        fVar26 = 0.0;
        if (0.0 <= fVar28) {
          fVar26 = fVar28;
        }
LAB_03ed1b60:
        *(ushort *)((long)puVar21 + 0x7a) = uVar12;
      }
      else {
        fVar28 = fVar29 + fVar26;
        fVar26 = 1.0;
        if (fVar28 <= 1.0) {
          fVar26 = fVar28;
        }
        if ((*(ushort *)((long)param_4 + 0x7a) >> 3 & 1) == 0) {
          uVar12 = *(ushort *)((long)puVar21 + 0x7a) & 0xfff7;
          goto LAB_03ed1b60;
        }
      }
      *(float *)((long)puVar21 + 0x4c) = fVar26;
      if (iVar13 == 0) {
        fVar26 = fVar26 * fVar26 * (fVar26 * -2.0 + 3.0);
      }
    }
    fVar27 = fVar27 + fVar26 * *(float *)(puVar21 + 10);
    *(float *)(puVar21 + 9) = fVar26 * *(float *)(puVar21 + 10);
  }
  if ((puVar19 != (undefined8 *)0x0) && (param_4[2] != 0)) {
    fVar26 = *(float *)((long)puVar19 + 0x4c);
    local_98._0_4_ = (float)uVar11;
    if ((float)local_98 == fVar26) {
      if ((float)local_98 == 0.0) {
        uVar12 = *(ushort *)((long)puVar19 + 0x7a) | 8;
LAB_03ed1c4c:
        *(ushort *)((long)puVar19 + 0x7a) = uVar12;
      }
      else if ((*(ushort *)((long)param_4 + 0x7a) >> 3 & 1) == 0) {
        uVar12 = *(ushort *)((long)puVar19 + 0x7a) & 0xfff7;
        goto LAB_03ed1c4c;
      }
    }
    else {
      if ((float)local_98 == 0.0) {
        fVar28 = fVar26 - fVar29;
        uVar12 = *(ushort *)((long)puVar19 + 0x7a) | 8;
        fVar26 = 0.0;
        if (0.0 <= fVar28) {
          fVar26 = fVar28;
        }
LAB_03ed1c18:
        *(ushort *)((long)puVar19 + 0x7a) = uVar12;
      }
      else {
        fVar28 = fVar29 + fVar26;
        fVar26 = 1.0;
        if (fVar28 <= 1.0) {
          fVar26 = fVar28;
        }
        if ((*(ushort *)((long)param_4 + 0x7a) >> 3 & 1) == 0) {
          uVar12 = *(ushort *)((long)puVar19 + 0x7a) & 0xfff7;
          goto LAB_03ed1c18;
        }
      }
      *(float *)((long)puVar19 + 0x4c) = fVar26;
      if (iVar13 == 0) {
        fVar26 = fVar26 * fVar26 * (fVar26 * -2.0 + 3.0);
      }
    }
    fVar27 = fVar27 + fVar26 * *(float *)(puVar19 + 10);
    *(float *)(puVar19 + 9) = fVar26 * *(float *)(puVar19 + 10);
  }
  if ((puVar18 != (undefined8 *)0x0) && (param_4[3] != 0)) {
    fVar26 = *(float *)((long)puVar18 + 0x4c);
    local_98._4_4_ = (float)((ulong)uVar11 >> 0x20);
    if (local_98._4_4_ == fVar26) {
      if (local_98._4_4_ == 0.0) {
        uVar12 = *(ushort *)((long)puVar18 + 0x7a) | 8;
LAB_03ed1d04:
        *(ushort *)((long)puVar18 + 0x7a) = uVar12;
      }
      else if ((*(ushort *)((long)param_4 + 0x7a) >> 3 & 1) == 0) {
        uVar12 = *(ushort *)((long)puVar18 + 0x7a) & 0xfff7;
        goto LAB_03ed1d04;
      }
    }
    else {
      if (local_98._4_4_ == 0.0) {
        fVar29 = fVar26 - fVar29;
        uVar12 = *(ushort *)((long)puVar18 + 0x7a) | 8;
        fVar26 = 0.0;
        if (0.0 <= fVar29) {
          fVar26 = fVar29;
        }
LAB_03ed1cd0:
        *(ushort *)((long)puVar18 + 0x7a) = uVar12;
      }
      else {
        fVar29 = fVar29 + fVar26;
        fVar26 = 1.0;
        if (fVar29 <= 1.0) {
          fVar26 = fVar29;
        }
        if ((*(ushort *)((long)param_4 + 0x7a) >> 3 & 1) == 0) {
          uVar12 = *(ushort *)((long)puVar18 + 0x7a) & 0xfff7;
          goto LAB_03ed1cd0;
        }
      }
      *(float *)((long)puVar18 + 0x4c) = fVar26;
      if (iVar13 == 0) {
        fVar26 = fVar26 * fVar26 * (fVar26 * -2.0 + 3.0);
      }
    }
    fVar27 = fVar27 + fVar26 * *(float *)(puVar18 + 10);
    *(float *)(puVar18 + 9) = fVar26 * *(float *)(puVar18 + 10);
  }
  local_a0 = uVar10;
  local_98 = uVar11;
  if (puVar22 == (undefined8 *)0x0) {
    uVar16 = 0xffff;
    uVar6 = true;
  }
  else if (*(float *)(puVar22 + 9) == 0.0) {
    FUN_03ed0160(*param_4,param_3,puVar22);
    puVar22[0xe] = 0;
    *(undefined1 *)(puVar22 + 0xf) = 0xff;
    puVar22[0x10] = 0xbf800000;
    puVar22[0x11] = 0xbf800000bf800000;
    uVar16 = 0xffff;
    uVar6 = true;
    *(undefined4 *)((long)puVar22 + 0x7c) = 0;
    *(undefined2 *)((long)puVar22 + 0x7a) = 0;
    *(undefined4 *)(puVar22 + 10) = 0;
    *(undefined8 *)((long)puVar22 + 0x54) = 0;
    *(undefined2 *)((long)puVar22 + 0x5c) = 0;
    puVar22[0x12] = 0;
    puVar22[4] = 0xffffffffffffffff;
    puVar22[5] = 0;
    *puVar22 = 0;
    puVar22[1] = 0;
    puVar22[2] = 0;
    puVar22[3] = 0;
    puVar22[8] = 0;
    puVar22[9] = 0;
    puVar22[6] = 0;
    puVar22[7] = 0;
    puVar22[0xc] = 0xffffffff;
    puVar22[0xd] = 0;
    *(undefined2 *)(param_4 + 4) = 0xffff;
    *param_4 = 0;
  }
  else {
    *(float *)(puVar22 + 9) = *(float *)(puVar22 + 9) / fVar27;
    if ((param_7 & 1) == 0) {
      uVar16 = 0;
      uVar6 = false;
    }
    else {
      *(float *)(puVar22 + 0x10) = fVar25;
      uVar16 = 0;
      uVar6 = false;
      *(int *)(puVar22 + 0x11) = (int)param_4[0x11];
    }
  }
  if (puVar21 != (undefined8 *)0x0) {
    if (*(float *)(puVar21 + 9) == 0.0) {
      FUN_03ed0160(param_4[1],param_3,puVar21);
      puVar21[0xe] = 0;
      *(undefined1 *)(puVar21 + 0xf) = 0xff;
      puVar21[0x10] = 0xbf800000;
      puVar21[0x11] = 0xbf800000bf800000;
      *(undefined4 *)((long)puVar21 + 0x7c) = 0;
      *(undefined2 *)((long)puVar21 + 0x7a) = 0;
      *(undefined4 *)(puVar21 + 10) = 0;
      *(undefined8 *)((long)puVar21 + 0x54) = 0;
      *(undefined2 *)((long)puVar21 + 0x5c) = 0;
      puVar21[0x12] = 0;
      puVar21[4] = 0xffffffffffffffff;
      puVar21[5] = 0;
      puVar21[0xc] = 0xffffffff;
      puVar21[0xd] = 0;
      *puVar21 = 0;
      puVar21[1] = 0;
      puVar21[2] = 0;
      puVar21[3] = 0;
      puVar21[8] = 0;
      puVar21[9] = 0;
      puVar21[6] = 0;
      puVar21[7] = 0;
      *(undefined2 *)((long)param_4 + 0x22) = 0xffff;
      param_4[1] = 0;
    }
    else {
      *(float *)(puVar21 + 9) = *(float *)(puVar21 + 9) / fVar27;
      if ((param_7 & 1) == 0) {
        uVar16 = 1;
        uVar6 = false;
      }
      else {
        *(float *)(puVar21 + 0x10) = fVar25;
        uVar16 = 1;
        uVar6 = false;
        *(int *)(puVar21 + 0x11) = (int)param_4[0x11];
      }
    }
  }
  if (puVar19 != (undefined8 *)0x0) {
    if (*(float *)(puVar19 + 9) == 0.0) {
      FUN_03ed0160(param_4[2],param_3,puVar19);
      puVar19[0xe] = 0;
      *(undefined1 *)(puVar19 + 0xf) = 0xff;
      puVar19[0x10] = 0xbf800000;
      puVar19[0x11] = 0xbf800000bf800000;
      *(undefined4 *)((long)puVar19 + 0x7c) = 0;
      *(undefined2 *)((long)puVar19 + 0x7a) = 0;
      *(undefined4 *)(puVar19 + 10) = 0;
      *(undefined8 *)((long)puVar19 + 0x54) = 0;
      *(undefined2 *)((long)puVar19 + 0x5c) = 0;
      puVar19[0x12] = 0;
      puVar19[4] = 0xffffffffffffffff;
      puVar19[5] = 0;
      puVar19[0xc] = 0xffffffff;
      puVar19[0xd] = 0;
      *puVar19 = 0;
      puVar19[1] = 0;
      puVar19[2] = 0;
      puVar19[3] = 0;
      puVar19[8] = 0;
      puVar19[9] = 0;
      puVar19[6] = 0;
      puVar19[7] = 0;
      *(undefined2 *)((long)param_4 + 0x24) = 0xffff;
      param_4[2] = 0;
    }
    else {
      *(float *)(puVar19 + 9) = *(float *)(puVar19 + 9) / fVar27;
      if ((param_7 & 1) == 0) {
        uVar16 = 2;
        uVar6 = false;
      }
      else {
        *(float *)(puVar19 + 0x10) = fVar25;
        uVar16 = 2;
        uVar6 = false;
        *(int *)(puVar19 + 0x11) = (int)param_4[0x11];
      }
    }
  }
  if (puVar18 != (undefined8 *)0x0) {
    if (*(float *)(puVar18 + 9) == 0.0) {
      FUN_03ed0160(param_4[3],param_3,puVar18);
      puVar18[0xe] = 0;
      *(undefined1 *)(puVar18 + 0xf) = 0xff;
      puVar18[0x10] = 0xbf800000;
      puVar18[0x11] = 0xbf800000bf800000;
      *(undefined4 *)((long)puVar18 + 0x7c) = 0;
      *(undefined2 *)((long)puVar18 + 0x7a) = 0;
      *(undefined4 *)(puVar18 + 10) = 0;
      *(undefined8 *)((long)puVar18 + 0x54) = 0;
      *(undefined2 *)((long)puVar18 + 0x5c) = 0;
      puVar18[0x12] = 0;
      puVar18[4] = 0xffffffffffffffff;
      puVar18[5] = 0;
      puVar18[0xc] = 0xffffffff;
      puVar18[0xd] = 0;
      *puVar18 = 0;
      puVar18[1] = 0;
      puVar18[2] = 0;
      puVar18[3] = 0;
      puVar18[8] = 0;
      puVar18[9] = 0;
      puVar18[6] = 0;
      puVar18[7] = 0;
      *(undefined2 *)((long)param_4 + 0x26) = 0xffff;
      param_4[3] = 0;
      if ((bool)uVar6) {
        return;
      }
      goto LAB_03ed1ff0;
    }
    *(float *)(puVar18 + 9) = *(float *)(puVar18 + 9) / fVar27;
    if ((param_7 & 1) == 0) {
      uVar16 = 0;
      goto LAB_03ed1ff0;
    }
    *(float *)(puVar18 + 0x10) = fVar25;
    uVar16 = 3;
    uVar6 = false;
    *(int *)(puVar18 + 0x11) = (int)param_4[0x11];
  }
  if ((bool)uVar6) {
    return;
  }
LAB_03ed1ff0:
  uVar12 = *(ushort *)((long)param_4 + 0x5a);
  if (-1 < (short)uVar12) {
    uVar20 = (ulong)uVar12;
    if (3 < uVar12) {
      uVar20 = 0;
    }
    if (param_4[uVar20] == 0) {
      *(undefined2 *)((long)param_4 + 0x5a) = uVar16;
    }
  }
  return;
}

