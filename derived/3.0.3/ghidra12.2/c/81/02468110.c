
bool FUN_02468110(long param_1,ulong param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  float *pfVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  float *pfVar11;
  long lVar12;
  undefined8 *puVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  ulong uVar17;
  uint *puVar18;
  uint uVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined8 local_d4;
  float local_cc;
  undefined4 local_c8;
  undefined1 local_c4;
  float local_c0;
  float fStack_bc;
  float local_b8;
  float local_b4 [5];
  uint local_94;
  
  if ((param_2 & 1) != 0) {
    if (DAT_054f5738 == 0) {
      if ((DAT_054f0960 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_054f0960);
        puVar18 = (uint *)&DAT_054f0958;
        if (iVar9 != 0) {
          DAT_054f0958 = 0;
          __cxa_guard_release(&DAT_054f0960);
        }
      }
      else {
        puVar18 = (uint *)&DAT_054f0958;
      }
    }
    else {
      puVar18 = (uint *)(DAT_054f5738 + 0x204);
      if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
        puVar18 = (uint *)(DAT_054f5738 + 0x204) + (ulong)*(byte *)(param_1 + 0x1ee8) * 2;
      }
    }
    if ((*puVar18 >> 0x19 & 1) == 0) {
      if (*(char *)(param_1 + 0x17ac) != '\0') {
        return false;
      }
      if (((*(uint *)(param_1 + 0xed0) & 1) == 0) && ((*(uint *)(param_1 + 0xec8) & 1) == 0)) {
        return false;
      }
    }
  }
  puVar7 = PTR_DAT_04bb39b0;
  pbVar1 = (byte *)(param_1 + 0x1ee8);
  lVar12 = *(long *)PTR_DAT_04bb39b0;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x15c) != 0)) {
    pbVar3 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar3 = (byte *)(lVar12 + 0x158);
    }
    bVar14 = *pbVar3;
    bVar15 = *pbVar1;
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    if ((bVar14 != bVar15) && ((*(byte *)(*(long *)PTR_DAT_04bb2230 + 0x3f0) & 1) != 0)) {
      return false;
    }
  }
  local_b4[0] = 3.46121e-43;
  if (*(long *)(param_1 + 0x70) == 0) {
    local_d4._0_4_ = 0;
LAB_024682e0:
    local_b4[0] = 3.44719e-43;
    if ((uint)local_d4 != 0xf6) {
      return false;
    }
  }
  else {
    uVar19 = *(uint *)(*(long *)(param_1 + 0x70) + 0x280);
    local_d4._0_4_ = 0;
    if (uVar19 < 0x149) {
      local_d4._0_4_ = uVar19;
    }
    if ((uint)local_d4 != 0xf7) goto LAB_024682e0;
  }
  if (DAT_054f5738 == 0) {
    if ((DAT_054f0960 & 1) == 0) {
      iVar9 = __cxa_guard_acquire(&DAT_054f0960);
      puVar13 = &DAT_054f0958;
      if (iVar9 != 0) {
        DAT_054f0958 = 0;
        __cxa_guard_release(&DAT_054f0960);
      }
    }
    else {
      puVar13 = &DAT_054f0958;
    }
  }
  else {
    puVar13 = (undefined8 *)(DAT_054f5738 + 0x204);
    if ((ulong)*pbVar1 < 8) {
      puVar13 = (undefined8 *)(DAT_054f5738 + 0x204) + *pbVar1;
    }
  }
  local_b4[0] = 6.5861e-44;
  if ((*(uint *)((long)puVar13 + 4) >> 0xf & 1) != 0) {
    return false;
  }
  lVar12 = *(long *)puVar7;
  if ((lVar12 != 0) && (*(int *)(lVar12 + 0x15c) != 0)) {
    pbVar3 = &DAT_0548e140;
    if (*(int *)(lVar12 + 0x15c) != 0) {
      pbVar3 = (byte *)(lVar12 + 0x158);
    }
    bVar15 = *pbVar1;
    bVar14 = *pbVar3;
    if (7 < bVar14) {
      bVar14 = 0xff;
    }
    if (7 < bVar15) {
      bVar15 = 0xff;
    }
    if (bVar14 != bVar15) {
      pbVar3 = &DAT_0548e140;
      if (DAT_054f5738 != 0) {
        pbVar3 = (byte *)(DAT_054f5738 + 0x11a4);
      }
      if (*pbVar3 < 8) {
        if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
          iVar9 = FUN_02582d8c(pbVar3,2);
          if (-1 < iVar9) {
            return false;
          }
        }
        else {
          local_b4[0]._0_1_ = *pbVar3;
          uVar10 = FUN_01d3e2d0(*DAT_0537d558 + 8,local_b4);
          if ((uVar10 & 1) != 0) {
            return false;
          }
        }
      }
    }
  }
  local_b4[0] = 25.0;
  local_b4[1] = 27.5;
  local_b4[2] = 30.0;
  local_b4[3] = 32.5;
  local_b4[4] = 35.0;
  lVar12 = FUN_0251e98c(1);
  (**(code **)(*(long *)(lVar12 + 0x2a0) + 0xf0))(lVar12 + 0x2a0);
  pfVar4 = (float *)PTR_DAT_04bc3038;
  pfVar11 = (float *)PTR_DAT_04bc3038;
  if (*(char *)(param_1 + 0x12f8) != '\0') {
    pfVar11 = (float *)(param_1 + 0xeec);
  }
  fVar21 = SQRT(pfVar11[1] * pfVar11[1] + *pfVar11 * *pfVar11);
  lVar12 = FUN_0251e98c(1);
  pfVar11 = (float *)(**(code **)(*(long *)(lVar12 + 0x120) + 0xf0))(lVar12 + 0x120);
  if (*pfVar11 <= fVar21) {
    lVar12 = FUN_0251e98c(1);
    pfVar11 = (float *)(**(code **)(*(long *)(lVar12 + 0x120) + 0xf0))(lVar12 + 0x120);
    fVar20 = *pfVar11;
    lVar12 = FUN_0251e98c(1);
    pfVar11 = (float *)(**(code **)(*(long *)(lVar12 + 0x120) + 0xf0))(lVar12 + 0x120);
    fVar20 = (fVar21 - *pfVar11) / (1.0 - fVar20);
    fVar21 = 0.9999;
    if (fVar20 <= 0.9999) {
      fVar21 = fVar20;
    }
    if ((0.0 <= fVar20) && (0.0 < fVar21)) {
      if (*(char *)(param_1 + 0x12f8) != '\0') {
        pfVar4 = (float *)(param_1 + 0xeec);
      }
      FUN_02569464(&local_94,pfVar4);
      puVar13 = *(undefined8 **)(param_1 + 0x4c8);
      goto LAB_0246855c;
    }
  }
  puVar13 = *(undefined8 **)(param_1 + 0x4c8);
  puVar5 = &DAT_054e9a58;
  if (puVar13 != (undefined8 *)0x0) {
    puVar5 = puVar13;
  }
  local_94 = *(uint *)((long)puVar5 + 0x2b4);
LAB_0246855c:
  puVar5 = &DAT_054e9a58;
  if (puVar13 != (undefined8 *)0x0) {
    puVar5 = puVar13;
  }
  pfVar11 = (float *)(PTR_DAT_04bb2d00 + (ulong)(local_94 >> 0x18) * 0x10);
  fVar21 = (float)(local_94 & 0xffffff) * 5.9604645e-08;
  fVar20 = *pfVar11 + fVar21 * pfVar11[1];
  fVar21 = pfVar11[2] + fVar21 * pfVar11[3];
  fVar22 = fVar20 * 0.0;
  fVar23 = fVar20 + 0.0;
  fVar24 = fVar22 * 0.0 + fVar21 * 0.0;
  fVar20 = fVar21 * 0.0 * 0.0 - fVar20 * 0.0;
  fVar25 = (fVar22 * 0.0 + 1.0) * 0.0 + fVar21 * 0.0 * 0.0;
  local_d4 = CONCAT44(local_d4._4_4_,*(undefined4 *)(param_1 + 0x230));
  local_c0 = *(float *)(puVar5 + 0x4f) + fVar24 + fVar23 * 25.0;
  local_b8 = *(float *)(puVar5 + 0x50) + fVar20 + fVar21 * 25.0;
  fStack_bc = *(float *)((long)puVar5 + 0x27c) + fVar25 + fVar22 * 25.0;
  uVar10 = FUN_02467370(*(long *)(param_1 + 0x68) + 0x278,&local_c0,pbVar1,&local_d4,1);
  if ((uVar10 & 1) != 0) {
    puVar13 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_c8 = FUN_006f0400(local_c0 - *(float *)(puVar13 + 0x4f),
                            local_b8 - *(float *)(puVar13 + 0x50));
    local_d4 = CONCAT44(fStack_bc,local_c0);
    local_c4 = 1;
    local_cc = local_b8;
    uVar10 = FUN_02468b98(param_1,&local_d4);
    if ((uVar10 & 1) != 0) {
      return true;
    }
  }
  puVar13 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_d4 = CONCAT44(local_d4._4_4_,*(undefined4 *)(param_1 + 0x230));
  local_c0 = fVar24 + fVar23 * 27.5 + *(float *)(puVar13 + 0x4f);
  fStack_bc = fVar25 + fVar22 * 27.5 + *(float *)((long)puVar13 + 0x27c);
  local_b8 = fVar20 + fVar21 * 27.5 + *(float *)(puVar13 + 0x50);
  uVar10 = FUN_02467370(*(long *)(param_1 + 0x68) + 0x278,&local_c0,pbVar1,&local_d4,1);
  if ((uVar10 & 1) != 0) {
    puVar13 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_c8 = FUN_006f0400(local_c0 - *(float *)(puVar13 + 0x4f),
                            local_b8 - *(float *)(puVar13 + 0x50));
    local_d4 = CONCAT44(fStack_bc,local_c0);
    local_c4 = 1;
    local_cc = local_b8;
    uVar10 = FUN_02468b98(param_1,&local_d4);
    if ((uVar10 & 1) != 0) {
      return true;
    }
  }
  puVar13 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_c0 = fVar24 + fVar23 * 30.0 + *(float *)(puVar13 + 0x4f);
  fStack_bc = fVar25 + fVar22 * 30.0 + *(float *)((long)puVar13 + 0x27c);
  local_b8 = fVar20 + fVar21 * 30.0 + *(float *)(puVar13 + 0x50);
  local_d4 = CONCAT44(local_d4._4_4_,*(undefined4 *)(param_1 + 0x230));
  uVar10 = FUN_02467370(*(long *)(param_1 + 0x68) + 0x278,&local_c0,pbVar1,&local_d4,1);
  if ((uVar10 & 1) != 0) {
    puVar13 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_c8 = FUN_006f0400(local_c0 - *(float *)(puVar13 + 0x4f),
                            local_b8 - *(float *)(puVar13 + 0x50));
    local_d4 = CONCAT44(fStack_bc,local_c0);
    local_c4 = 1;
    local_cc = local_b8;
    uVar10 = FUN_02468b98(param_1,&local_d4);
    if ((uVar10 & 1) != 0) {
      return true;
    }
  }
  puVar13 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_d4 = CONCAT44(local_d4._4_4_,*(undefined4 *)(param_1 + 0x230));
  local_c0 = fVar24 + fVar23 * 32.5 + *(float *)(puVar13 + 0x4f);
  fStack_bc = fVar25 + fVar22 * 32.5 + *(float *)((long)puVar13 + 0x27c);
  local_b8 = fVar20 + fVar21 * 32.5 + *(float *)(puVar13 + 0x50);
  uVar10 = FUN_02467370(*(long *)(param_1 + 0x68) + 0x278,&local_c0,pbVar1,&local_d4,1);
  if ((uVar10 & 1) != 0) {
    puVar13 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_c8 = FUN_006f0400(local_c0 - *(float *)(puVar13 + 0x4f),
                            local_b8 - *(float *)(puVar13 + 0x50));
    local_d4 = CONCAT44(fStack_bc,local_c0);
    local_c4 = 1;
    local_cc = local_b8;
    uVar10 = FUN_02468b98(param_1,&local_d4);
    if ((uVar10 & 1) != 0) {
      return true;
    }
  }
  puVar13 = &DAT_054e9a58;
  if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
    puVar13 = *(undefined8 **)(param_1 + 0x4c8);
  }
  local_d4 = CONCAT44(local_d4._4_4_,*(undefined4 *)(param_1 + 0x230));
  local_c0 = *(float *)(puVar13 + 0x4f) + fVar24 + fVar23 * 35.0;
  fStack_bc = *(float *)((long)puVar13 + 0x27c) + fVar25 + fVar22 * 35.0;
  local_b8 = *(float *)(puVar13 + 0x50) + fVar20 + fVar21 * 35.0;
  uVar10 = FUN_02467370(*(long *)(param_1 + 0x68) + 0x278,&local_c0,pbVar1,&local_d4,1);
  if ((uVar10 & 1) != 0) {
    puVar13 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar13 = *(undefined8 **)(param_1 + 0x4c8);
    }
    local_c8 = FUN_006f0400(local_c0 - *(float *)(puVar13 + 0x4f),
                            local_b8 - *(float *)(puVar13 + 0x50));
    local_d4 = CONCAT44(fStack_bc,local_c0);
    local_c4 = 1;
    local_cc = local_b8;
    uVar10 = FUN_02468b98(param_1,&local_d4);
    if ((uVar10 & 1) != 0) {
      return true;
    }
  }
  uVar10 = 0;
  bVar8 = true;
  do {
    uVar19 = 0xffffffd3;
    fVar21 = local_b4[uVar10];
    do {
      uVar6 = *(uint *)(*(long *)(param_1 + 0x68) + 0x2b4);
      uVar17 = (ulong)((float)(int)(uVar19 + 0x2d) * 11930465.0);
      uVar16 = (uint)uVar17;
      if (uVar6 == uVar16) {
LAB_02468a00:
        uVar17 = uVar17 >> 0x18 & 0xff;
        local_d4 = CONCAT44(local_d4._4_4_,*(undefined4 *)(param_1 + 0x230));
        fVar20 = (float)(uVar16 & 0xffffff) * 5.9604645e-08;
        fVar22 = (float)(&DAT_04199798)[uVar17 * 4] + fVar20 * (float)(&DAT_0419979c)[uVar17 * 4];
        fVar20 = (float)(&DAT_041997a0)[uVar17 * 4] + fVar20 * (float)(&DAT_041997a4)[uVar17 * 4];
        fVar23 = fVar22 * 0.0;
        puVar13 = &DAT_054e9a58;
        if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
          puVar13 = *(undefined8 **)(param_1 + 0x4c8);
        }
        local_c0 = *(float *)(puVar13 + 0x4f) +
                   fVar23 * 0.0 + fVar20 * 0.0 + fVar21 * (fVar22 + 0.0);
        local_b8 = *(float *)(puVar13 + 0x50) +
                   (fVar20 * 0.0 * 0.0 - fVar22 * 0.0) + fVar21 * fVar20;
        fStack_bc = *(float *)((long)puVar13 + 0x27c) +
                    (fVar23 * 0.0 + 1.0) * 0.0 + fVar20 * 0.0 * 0.0 + fVar21 * fVar23;
        uVar17 = FUN_02467370(*(long *)(param_1 + 0x68) + 0x278,&local_c0,pbVar1,&local_d4,1);
        if ((uVar17 & 1) != 0) {
          puVar13 = &DAT_054e9a58;
          if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
            puVar13 = *(undefined8 **)(param_1 + 0x4c8);
          }
          local_c8 = FUN_006f0400(local_c0 - *(float *)(puVar13 + 0x4f),
                                  local_b8 - *(float *)(puVar13 + 0x50));
          local_d4 = CONCAT44(fStack_bc,local_c0);
          local_cc = local_b8;
          local_c4 = 1;
          uVar17 = FUN_02468b98(param_1,&local_d4);
          if ((uVar17 & 1) != 0) {
            return bVar8;
          }
        }
      }
      else {
        uVar2 = uVar6 - uVar16;
        if (uVar6 < uVar16 || uVar6 - uVar16 == 0) {
          uVar2 = uVar16 - uVar6;
        }
        uVar6 = -uVar2;
        if (uVar2 < 0x80000001) {
          uVar6 = uVar2;
        }
        if ((float)uVar6 * 8.381903e-08 < 56.25) goto LAB_02468a00;
      }
      uVar19 = uVar19 + 0x2d;
    } while (uVar19 < 0x13b);
    bVar8 = uVar10 < 4;
    uVar10 = uVar10 + 1;
    if (uVar10 == 5) {
      return bVar8;
    }
  } while( true );
}

