
/* WARNING: Type propagation algorithm not settling */

void FUN_03ed2218(undefined8 param_1,undefined8 *param_2,long *param_3,long param_4)

{
  undefined1 uVar1;
  bool bVar2;
  bool bVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  int iVar8;
  ulong uVar9;
  ushort uVar10;
  uint uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined2 uVar17;
  undefined2 uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  undefined8 local_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 local_58;
  
  *(undefined2 *)((long)param_3 + 0x5a) = 0xffff;
  local_60 = 0;
  local_58 = 0;
  if (*param_3 == param_4) {
    uVar11 = 0;
LAB_03ed2308:
    lVar5 = param_3[(ulong)uVar11 + 5];
    *(undefined4 *)(lVar5 + 0x7c) = *(undefined4 *)(param_2[1] + 0x78);
LAB_03ed2320:
    *(undefined4 *)(lVar5 + 0x50) = 0x3f800000;
    *(short *)((long)param_3 + 0x5a) = (short)uVar11;
    plVar6 = (long *)param_3[uVar11];
    *(undefined4 *)((long)&local_60 + (ulong)uVar11 * 4) = 0x3f800000;
    if (*param_3 != 0) goto LAB_03ed2340;
LAB_03ed247c:
    puVar16 = (undefined8 *)0x0;
    lVar12 = param_3[1];
joined_r0x03ed2484:
    bVar2 = false;
    bVar3 = false;
    if (lVar12 != 0) goto LAB_03ed236c;
LAB_03ed2488:
    puVar15 = (undefined8 *)0x0;
    if (param_3[2] != 0) goto LAB_03ed2398;
LAB_03ed2494:
    puVar14 = (undefined8 *)0x0;
    if (param_3[3] != 0) goto LAB_03ed23c4;
LAB_03ed24a0:
    puVar13 = (undefined8 *)0x0;
    if (bVar2) goto LAB_03ed23e8;
LAB_03ed24a8:
    iVar8 = 0;
    fVar20 = 1.0;
    uVar7 = local_60;
    uVar4 = local_58;
  }
  else {
    if (param_3[1] == param_4) {
      uVar11 = 1;
      goto LAB_03ed2308;
    }
    if ((short)param_3[4] < 0) {
      if (param_3[2] == param_4) goto LAB_03ed22bc;
      if (param_3[3] != param_4) {
        uVar11 = 0;
        goto LAB_03ed22d8;
      }
LAB_03ed2304:
      uVar11 = 3;
      goto LAB_03ed2308;
    }
    if (param_3[2] == param_4) {
LAB_03ed22bc:
      uVar11 = 2;
      goto LAB_03ed2308;
    }
    if (*(short *)((long)param_3 + 0x22) < 0) {
      uVar11 = 1;
    }
    else {
      uVar11 = 2;
      if (-1 < *(short *)((long)param_3 + 0x24)) {
        uVar11 = 0xffffffff;
      }
    }
    if (param_3[3] == param_4) goto LAB_03ed2304;
    if (-1 < (int)uVar11) {
LAB_03ed22d8:
      *(ushort *)((long)param_3 + 0x7a) = *(ushort *)((long)param_3 + 0x7a) & 0xff7f;
      lVar5 = FUN_03ed0358(param_1,param_2,param_3,param_4,*(undefined2 *)(param_4 + 10),uVar11);
      goto LAB_03ed2320;
    }
    if (*(short *)((long)param_3 + 0x26) < 0) {
      uVar11 = 3;
      goto LAB_03ed22d8;
    }
    plVar6 = (long *)0x0;
    lVar5 = 0;
    if (*param_3 == 0) goto LAB_03ed247c;
LAB_03ed2340:
    puVar16 = (undefined8 *)param_3[5];
    *(undefined4 *)((long)puVar16 + 0x7c) = *(undefined4 *)(param_2[1] + 0x78);
    if ((float)local_60 == *(float *)((long)puVar16 + 0x4c)) {
      lVar12 = param_3[1];
      goto joined_r0x03ed2484;
    }
    bVar3 = true;
    bVar2 = true;
    if (param_3[1] == 0) goto LAB_03ed2488;
LAB_03ed236c:
    puVar15 = (undefined8 *)param_3[6];
    *(undefined4 *)((long)puVar15 + 0x7c) = *(undefined4 *)(param_2[1] + 0x78);
    bVar2 = bVar3;
    if (local_60._4_4_ != *(float *)((long)puVar15 + 0x4c)) {
      bVar2 = true;
    }
    if (param_3[2] == 0) goto LAB_03ed2494;
LAB_03ed2398:
    puVar14 = (undefined8 *)param_3[7];
    *(undefined4 *)((long)puVar14 + 0x7c) = *(undefined4 *)(param_2[1] + 0x78);
    if ((float)local_58 != *(float *)((long)puVar14 + 0x4c)) {
      bVar2 = true;
    }
    if (param_3[3] == 0) goto LAB_03ed24a0;
LAB_03ed23c4:
    puVar13 = (undefined8 *)param_3[8];
    *(undefined4 *)((long)puVar13 + 0x7c) = *(undefined4 *)(param_2[1] + 0x78);
    if ((local_58._4_4_ == *(float *)((long)puVar13 + 0x4c)) && (!bVar2)) goto LAB_03ed24a8;
LAB_03ed23e8:
    local_70 = *param_2;
    lStack_68 = param_2[1];
    fVar19 = 0.0;
    if ((*(byte *)((long)param_3 + 0x7a) >> 4 & 1) == 0) {
      iVar8 = 0;
      if ((plVar6 != (long *)0x0) && (lVar5 != 0)) {
        uVar7 = (**(code **)(*plVar6 + 0x78))(*(undefined4 *)(lStack_68 + 0xa8),plVar6,&local_70);
        iVar8 = (int)((ulong)uVar7 >> 0x20);
        fVar19 = (float)uVar7 + 0.0;
      }
    }
    else {
      iVar8 = 0;
    }
    fVar20 = 1.0;
    if (1.0 <= fVar19) {
      fVar20 = 1.0 / fVar19;
    }
    fVar20 = *(float *)(param_2 + 2) * fVar20;
    uVar7 = local_60;
    uVar4 = local_58;
  }
  fVar19 = 0.0;
  if ((puVar16 != (undefined8 *)0x0) && (fVar19 = 0.0, *param_3 != 0)) {
    fVar21 = *(float *)((long)puVar16 + 0x4c);
    local_60._0_4_ = (float)uVar7;
    if ((float)local_60 == fVar21) {
      if ((float)local_60 == 0.0) {
        uVar10 = *(ushort *)((long)puVar16 + 0x7a) | 8;
LAB_03ed2558:
        *(ushort *)((long)puVar16 + 0x7a) = uVar10;
      }
      else if ((*(ushort *)((long)param_3 + 0x7a) >> 3 & 1) == 0) {
        uVar10 = *(ushort *)((long)puVar16 + 0x7a) & 0xfff7;
        goto LAB_03ed2558;
      }
    }
    else {
      if ((float)local_60 == 0.0) {
        fVar19 = fVar21 - fVar20;
        uVar10 = *(ushort *)((long)puVar16 + 0x7a) | 8;
        fVar21 = 0.0;
        if (0.0 <= fVar19) {
          fVar21 = fVar19;
        }
LAB_03ed2524:
        *(ushort *)((long)puVar16 + 0x7a) = uVar10;
      }
      else {
        fVar19 = fVar20 + fVar21;
        fVar21 = 1.0;
        if (fVar19 <= 1.0) {
          fVar21 = fVar19;
        }
        if ((*(ushort *)((long)param_3 + 0x7a) >> 3 & 1) == 0) {
          uVar10 = *(ushort *)((long)puVar16 + 0x7a) & 0xfff7;
          goto LAB_03ed2524;
        }
      }
      *(float *)((long)puVar16 + 0x4c) = fVar21;
      if (iVar8 == 0) {
        fVar21 = fVar21 * fVar21 * (fVar21 * -2.0 + 3.0);
      }
    }
    fVar19 = fVar21 * *(float *)(puVar16 + 10) + 0.0;
    *(float *)(puVar16 + 9) = fVar21 * *(float *)(puVar16 + 10);
  }
  if ((puVar15 != (undefined8 *)0x0) && (param_3[1] != 0)) {
    fVar21 = *(float *)((long)puVar15 + 0x4c);
    local_60._4_4_ = (float)((ulong)uVar7 >> 0x20);
    if (local_60._4_4_ == fVar21) {
      if (local_60._4_4_ == 0.0) {
        uVar10 = *(ushort *)((long)puVar15 + 0x7a) | 8;
LAB_03ed2618:
        *(ushort *)((long)puVar15 + 0x7a) = uVar10;
      }
      else if ((*(ushort *)((long)param_3 + 0x7a) >> 3 & 1) == 0) {
        uVar10 = *(ushort *)((long)puVar15 + 0x7a) & 0xfff7;
        goto LAB_03ed2618;
      }
    }
    else {
      if (local_60._4_4_ == 0.0) {
        fVar22 = fVar21 - fVar20;
        uVar10 = *(ushort *)((long)puVar15 + 0x7a) | 8;
        fVar21 = 0.0;
        if (0.0 <= fVar22) {
          fVar21 = fVar22;
        }
LAB_03ed25e4:
        *(ushort *)((long)puVar15 + 0x7a) = uVar10;
      }
      else {
        fVar22 = fVar20 + fVar21;
        fVar21 = 1.0;
        if (fVar22 <= 1.0) {
          fVar21 = fVar22;
        }
        if ((*(ushort *)((long)param_3 + 0x7a) >> 3 & 1) == 0) {
          uVar10 = *(ushort *)((long)puVar15 + 0x7a) & 0xfff7;
          goto LAB_03ed25e4;
        }
      }
      *(float *)((long)puVar15 + 0x4c) = fVar21;
      if (iVar8 == 0) {
        fVar21 = fVar21 * fVar21 * (fVar21 * -2.0 + 3.0);
      }
    }
    fVar19 = fVar19 + fVar21 * *(float *)(puVar15 + 10);
    *(float *)(puVar15 + 9) = fVar21 * *(float *)(puVar15 + 10);
  }
  if ((puVar14 != (undefined8 *)0x0) && (param_3[2] != 0)) {
    fVar21 = *(float *)((long)puVar14 + 0x4c);
    local_58._0_4_ = (float)uVar4;
    if ((float)local_58 == fVar21) {
      if ((float)local_58 == 0.0) {
        uVar10 = *(ushort *)((long)puVar14 + 0x7a) | 8;
LAB_03ed26d4:
        *(ushort *)((long)puVar14 + 0x7a) = uVar10;
      }
      else if ((*(ushort *)((long)param_3 + 0x7a) >> 3 & 1) == 0) {
        uVar10 = *(ushort *)((long)puVar14 + 0x7a) & 0xfff7;
        goto LAB_03ed26d4;
      }
    }
    else {
      if ((float)local_58 == 0.0) {
        fVar22 = fVar21 - fVar20;
        uVar10 = *(ushort *)((long)puVar14 + 0x7a) | 8;
        fVar21 = 0.0;
        if (0.0 <= fVar22) {
          fVar21 = fVar22;
        }
LAB_03ed26a0:
        *(ushort *)((long)puVar14 + 0x7a) = uVar10;
      }
      else {
        fVar22 = fVar20 + fVar21;
        fVar21 = 1.0;
        if (fVar22 <= 1.0) {
          fVar21 = fVar22;
        }
        if ((*(ushort *)((long)param_3 + 0x7a) >> 3 & 1) == 0) {
          uVar10 = *(ushort *)((long)puVar14 + 0x7a) & 0xfff7;
          goto LAB_03ed26a0;
        }
      }
      *(float *)((long)puVar14 + 0x4c) = fVar21;
      if (iVar8 == 0) {
        fVar21 = fVar21 * fVar21 * (fVar21 * -2.0 + 3.0);
      }
    }
    fVar19 = fVar19 + fVar21 * *(float *)(puVar14 + 10);
    *(float *)(puVar14 + 9) = fVar21 * *(float *)(puVar14 + 10);
  }
  if ((puVar13 != (undefined8 *)0x0) && (param_3[3] != 0)) {
    fVar21 = *(float *)((long)puVar13 + 0x4c);
    local_58._4_4_ = (float)((ulong)uVar4 >> 0x20);
    if (local_58._4_4_ == fVar21) {
      if (local_58._4_4_ == 0.0) {
        uVar10 = *(ushort *)((long)puVar13 + 0x7a) | 8;
LAB_03ed2790:
        *(ushort *)((long)puVar13 + 0x7a) = uVar10;
      }
      else if ((*(ushort *)((long)param_3 + 0x7a) >> 3 & 1) == 0) {
        uVar10 = *(ushort *)((long)puVar13 + 0x7a) & 0xfff7;
        goto LAB_03ed2790;
      }
    }
    else {
      if (local_58._4_4_ == 0.0) {
        fVar20 = fVar21 - fVar20;
        uVar10 = *(ushort *)((long)puVar13 + 0x7a) | 8;
        fVar21 = 0.0;
        if (0.0 <= fVar20) {
          fVar21 = fVar20;
        }
LAB_03ed275c:
        *(ushort *)((long)puVar13 + 0x7a) = uVar10;
      }
      else {
        fVar20 = fVar20 + fVar21;
        fVar21 = 1.0;
        if (fVar20 <= 1.0) {
          fVar21 = fVar20;
        }
        if ((*(ushort *)((long)param_3 + 0x7a) >> 3 & 1) == 0) {
          uVar10 = *(ushort *)((long)puVar13 + 0x7a) & 0xfff7;
          goto LAB_03ed275c;
        }
      }
      *(float *)((long)puVar13 + 0x4c) = fVar21;
      if (iVar8 == 0) {
        fVar21 = fVar21 * fVar21 * (fVar21 * -2.0 + 3.0);
      }
    }
    fVar19 = fVar19 + fVar21 * *(float *)(puVar13 + 10);
    *(float *)(puVar13 + 9) = fVar21 * *(float *)(puVar13 + 10);
  }
  local_60 = uVar7;
  local_58 = uVar4;
  if (puVar16 == (undefined8 *)0x0) {
    uVar17 = 0xffff;
    uVar18 = 0xffff;
    uVar1 = true;
  }
  else if (*(float *)(puVar16 + 9) == 0.0) {
    FUN_03ed0160(*param_3,param_2,puVar16);
    puVar16[0xe] = 0;
    *(undefined1 *)(puVar16 + 0xf) = 0xff;
    puVar16[0x10] = 0xbf800000;
    puVar16[0x11] = 0xbf800000bf800000;
    uVar17 = 0xffff;
    uVar18 = 0xffff;
    uVar1 = true;
    *(undefined4 *)((long)puVar16 + 0x7c) = 0;
    *(undefined2 *)((long)puVar16 + 0x7a) = 0;
    *(undefined4 *)(puVar16 + 10) = 0;
    *(undefined8 *)((long)puVar16 + 0x54) = 0;
    *(undefined2 *)((long)puVar16 + 0x5c) = 0;
    puVar16[0x12] = 0;
    puVar16[4] = 0xffffffffffffffff;
    puVar16[5] = 0;
    *puVar16 = 0;
    puVar16[1] = 0;
    puVar16[2] = 0;
    puVar16[3] = 0;
    puVar16[8] = 0;
    puVar16[9] = 0;
    puVar16[6] = 0;
    puVar16[7] = 0;
    puVar16[0xc] = 0xffffffff;
    puVar16[0xd] = 0;
    *(undefined2 *)(param_3 + 4) = 0xffff;
    *param_3 = 0;
  }
  else {
    uVar17 = 0;
    uVar18 = 0;
    uVar1 = false;
    *(float *)(puVar16 + 9) = *(float *)(puVar16 + 9) / fVar19;
  }
  if (puVar15 != (undefined8 *)0x0) {
    if (*(float *)(puVar15 + 9) == 0.0) {
      FUN_03ed0160(param_3[1],param_2,puVar15);
      puVar15[0xe] = 0;
      *(undefined1 *)(puVar15 + 0xf) = 0xff;
      puVar15[0x10] = 0xbf800000;
      puVar15[0x11] = 0xbf800000bf800000;
      *(undefined4 *)((long)puVar15 + 0x7c) = 0;
      *(undefined2 *)((long)puVar15 + 0x7a) = 0;
      *(undefined4 *)(puVar15 + 10) = 0;
      *(undefined8 *)((long)puVar15 + 0x54) = 0;
      *(undefined2 *)((long)puVar15 + 0x5c) = 0;
      puVar15[0x12] = 0;
      puVar15[4] = 0xffffffffffffffff;
      puVar15[5] = 0;
      puVar15[0xc] = 0xffffffff;
      puVar15[0xd] = 0;
      *puVar15 = 0;
      puVar15[1] = 0;
      puVar15[2] = 0;
      puVar15[3] = 0;
      puVar15[8] = 0;
      puVar15[9] = 0;
      puVar15[6] = 0;
      puVar15[7] = 0;
      *(undefined2 *)((long)param_3 + 0x22) = 0xffff;
      param_3[1] = 0;
      uVar18 = uVar17;
    }
    else {
      uVar1 = false;
      *(float *)(puVar15 + 9) = *(float *)(puVar15 + 9) / fVar19;
      uVar18 = 1;
    }
  }
  if (puVar14 != (undefined8 *)0x0) {
    if (*(float *)(puVar14 + 9) == 0.0) {
      FUN_03ed0160(param_3[2],param_2,puVar14);
      puVar14[0xe] = 0;
      *(undefined1 *)(puVar14 + 0xf) = 0xff;
      puVar14[0x10] = 0xbf800000;
      puVar14[0x11] = 0xbf800000bf800000;
      *(undefined4 *)((long)puVar14 + 0x7c) = 0;
      *(undefined2 *)((long)puVar14 + 0x7a) = 0;
      *(undefined4 *)(puVar14 + 10) = 0;
      *(undefined8 *)((long)puVar14 + 0x54) = 0;
      *(undefined2 *)((long)puVar14 + 0x5c) = 0;
      puVar14[0x12] = 0;
      puVar14[4] = 0xffffffffffffffff;
      puVar14[5] = 0;
      puVar14[0xc] = 0xffffffff;
      puVar14[0xd] = 0;
      *puVar14 = 0;
      puVar14[1] = 0;
      puVar14[2] = 0;
      puVar14[3] = 0;
      puVar14[8] = 0;
      puVar14[9] = 0;
      puVar14[6] = 0;
      puVar14[7] = 0;
      *(undefined2 *)((long)param_3 + 0x24) = 0xffff;
      param_3[2] = 0;
    }
    else {
      uVar18 = 2;
      uVar1 = false;
      *(float *)(puVar14 + 9) = *(float *)(puVar14 + 9) / fVar19;
    }
  }
  if (puVar13 != (undefined8 *)0x0) {
    if (*(float *)(puVar13 + 9) != 0.0) {
      *(float *)(puVar13 + 9) = *(float *)(puVar13 + 9) / fVar19;
      uVar18 = 0;
      goto LAB_03ed29e0;
    }
    FUN_03ed0160(param_3[3],param_2,puVar13);
    puVar13[0xe] = 0;
    *(undefined1 *)(puVar13 + 0xf) = 0xff;
    puVar13[0x10] = 0xbf800000;
    puVar13[0x11] = 0xbf800000bf800000;
    *(undefined4 *)((long)puVar13 + 0x7c) = 0;
    *(undefined2 *)((long)puVar13 + 0x7a) = 0;
    *(undefined4 *)(puVar13 + 10) = 0;
    *(undefined8 *)((long)puVar13 + 0x54) = 0;
    *(undefined2 *)((long)puVar13 + 0x5c) = 0;
    puVar13[0x12] = 0;
    puVar13[4] = 0xffffffffffffffff;
    puVar13[5] = 0;
    puVar13[0xc] = 0xffffffff;
    puVar13[0xd] = 0;
    *puVar13 = 0;
    puVar13[1] = 0;
    puVar13[2] = 0;
    puVar13[3] = 0;
    puVar13[8] = 0;
    puVar13[9] = 0;
    puVar13[6] = 0;
    puVar13[7] = 0;
    *(undefined2 *)((long)param_3 + 0x26) = 0xffff;
    param_3[3] = 0;
  }
  if ((bool)uVar1) {
    return;
  }
LAB_03ed29e0:
  uVar10 = *(ushort *)((long)param_3 + 0x5a);
  if (-1 < (short)uVar10) {
    uVar9 = (ulong)uVar10;
    if (3 < uVar10) {
      uVar9 = 0;
    }
    if (param_3[uVar9] == 0) {
      *(undefined2 *)((long)param_3 + 0x5a) = uVar18;
    }
  }
  return;
}

