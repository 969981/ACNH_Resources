
bool FUN_0151f7f8(long param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  int *piVar12;
  uint uVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  long lVar17;
  char cVar18;
  float fVar19;
  float fVar20;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  int local_a4;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  uint *local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 uStack_7c;
  uint *local_78;
  
  puVar6 = PTR_DAT_04bb43c0;
  lVar15 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(param_3);
  lVar17 = *(long *)puVar6;
  if (lVar17 == 0) {
    return false;
  }
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if (*(uint *)(lVar15 + 0x1d8) <= uVar7) {
    return false;
  }
  if (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
    return false;
  }
  uVar7 = FUN_0277d6c4(param_4);
  lVar15 = *(long *)puVar6;
  if (lVar15 == 0) {
    return false;
  }
  lVar17 = *(long *)(lVar17 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
  if (*(uint *)(lVar17 + 0x1d8) <= uVar7) {
    return false;
  }
  if (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar7 * 8) == 0) {
    return false;
  }
  local_78 = (uint *)0x0;
  local_80 = *param_3;
  uStack_7c = param_3[1];
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  local_88 = puVar1;
  uVar7 = FUN_0277d6c4(&local_80);
  if (*(long *)puVar6 == 0) {
LAB_0151f958:
    puVar16 = (uint *)0x0;
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0151f958;
    lVar15 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(param_3);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if (*(uint *)(lVar15 + 0x1d8) <= uVar7) goto LAB_0151f958;
    puVar16 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8);
    if (puVar16 != (uint *)0x0) {
      local_78 = puVar16;
    }
  }
  local_98 = *param_4;
  uStack_94 = param_4[1];
  lVar15 = *(long *)puVar6;
  local_90 = (uint *)0x0;
  local_a0 = puVar1;
  uVar7 = FUN_0277d6c4(&local_98);
  if (*(long *)puVar6 == 0) {
LAB_0151fa7c:
    puVar14 = (uint *)0x0;
LAB_0151fa80:
    local_d0._0_4_ = 0;
  }
  else {
    lVar15 = *(long *)(lVar15 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_0151fa7c;
    lVar15 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(param_4);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
    if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
       (puVar14 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8),
       puVar14 == (uint *)0x0)) goto LAB_0151fa7c;
    local_d0._0_4_ = 0;
    uVar7 = *puVar14;
    local_90 = puVar14;
    if ((uVar7 != 0) && (puVar14 != (uint *)(ulong)uVar7)) {
      puVar11 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
      local_d0._0_4_ = 0;
      if (*puVar11 == 0) goto LAB_0151fa84;
      uVar7 = puVar11[1];
      if ((uVar7 != 0) && ((ulong)(ushort)puVar11[2] != 0)) {
        lVar15 = 0xc;
        if (*(char *)((long)puVar11 + 10) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar11 + lVar15 + (ulong)(ushort)puVar11[2] * 8;
        if (lVar15 != 0) {
          uVar9 = 0;
          if ((ulong)uVar7 != 0) {
            uVar9 = (uint)((ulong)((long)puVar14 - lVar15) / (ulong)uVar7);
          }
          if (*puVar11 <= uVar9) {
            uVar9 = 0xffffffff;
          }
          if ((uVar9 < *(uint *)PTR_DAT_04bc0048) &&
             (local_d0._0_4_ =
                   (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar9 * 2),
             (uint)local_d0 < 0x52)) goto LAB_0151fa84;
        }
      }
      goto LAB_0151fa80;
    }
  }
LAB_0151fa84:
  if (((uint)local_d0 & 0xfffffffe) != 10) {
    return false;
  }
  iVar8 = FUN_01ae98d0(&local_88);
  local_d0 = (undefined *)CONCAT44(local_d0._4_4_,iVar8);
  local_a4 = FUN_01ae98d0(&local_a0);
  puVar1 = PTR_DAT_04bbfe90;
  puVar6 = PTR_DAT_04bbfe88;
  if (iVar8 != local_a4) {
    return false;
  }
  fVar20 = 0.0;
  fVar19 = 0.0;
  if ((puVar16 != (uint *)0x0) && (uVar7 = *puVar16, uVar7 != 0)) {
    cVar18 = *PTR_DAT_04bbfe88;
    do {
      if (cVar18 == '\0') {
        cVar18 = '\x01';
        *puVar6 = 1;
        memset(puVar1,0xff,0x1ac);
        uVar7 = *puVar16;
      }
      else {
        uVar9 = *(uint *)(puVar1 + 0xf0);
        if (-1 < (int)uVar9) {
          fVar19 = 0.0;
          if ((float *)((ulong)uVar9 + (long)puVar16) != (float *)0x0) {
            fVar19 = *(float *)((ulong)uVar9 + (long)puVar16);
          }
          break;
        }
        if (uVar9 != 0xffffffff) goto LAB_0151fba0;
      }
      lVar15 = (long)puVar16 - (ulong)uVar7;
      if (((ulong)uVar7 == 0) || (lVar15 == 0)) goto LAB_0151fba0;
      lVar17 = 0xc;
      if (*(char *)(lVar15 + 10) != '\0') {
        lVar17 = 0x1c;
      }
      if (lVar17 + lVar15 == 0) goto LAB_0151fba0;
      uVar10 = (ulong)*(ushort *)(lVar15 + 8);
      *(undefined4 *)(puVar1 + 0xf0) = 0xfffffffe;
      if (uVar10 == 0) goto LAB_0151fba0;
      piVar12 = (int *)(lVar17 + lVar15 + 4);
      while (piVar12[-1] != -0x499d99d4) {
        piVar12 = piVar12 + 2;
        uVar10 = uVar10 - 1;
        if (uVar10 == 0) goto LAB_0151fba0;
      }
      iVar8 = 0;
      if (*piVar12 != -1) {
        iVar8 = *piVar12;
      }
      *(int *)(puVar1 + 0xf0) = iVar8;
      uVar7 = *puVar16;
      if (uVar7 == 0) goto LAB_0151fba0;
    } while( true );
  }
LAB_0151fba4:
  puVar1 = PTR_DAT_04bbfe90;
  puVar6 = PTR_DAT_04bbfe88;
  if ((puVar14 == (uint *)0x0) || (uVar7 = *puVar14, uVar7 == 0)) {
LAB_0151fc9c:
    fVar19 = fVar19 - fVar20;
    fVar20 = -fVar19;
    if (0.0 <= fVar19) {
      fVar20 = fVar19;
    }
    if (0.5 < fVar20) {
      return false;
    }
    uVar7 = *(int *)(param_1 + 0x24) + 1;
    uVar9 = *(uint *)(param_1 + 0x14);
    if (uVar7 != uVar9) {
      uVar5 = *(uint *)(param_1 + 0x10);
      uVar13 = uVar5;
      do {
        if (((uVar9 < 0x100) && (uVar13 < 0x120)) &&
           ((*(uint *)(PTR_DAT_04bbcc10 + (ulong)(uVar13 + uVar9 * 0x120 >> 5) * 4 + 8) >>
             (ulong)(uVar13 & 0x1f) & 1) != 0)) {
          return false;
        }
        if ((int)uVar13 < *(int *)(param_1 + 0x20)) {
          uVar13 = uVar13 + 1;
        }
        else {
          uVar9 = uVar9 + 1;
          uVar13 = uVar5;
        }
      } while ((uVar5 != uVar13) || (uVar7 != uVar9));
    }
    local_c0 = 0;
    local_d0 = PTR_DAT_04bbc1a0 + 0x10;
    puStack_c8 = PTR_DAT_04bb2010 + 0x10;
    local_b0 = 0;
    local_b8 = puStack_c8;
    FUN_01afb480(&local_a0,&local_d0);
    local_c0._0_4_ = (int)local_c0 + *(int *)(param_2 + 8);
    iVar8 = *(int *)(param_1 + 0x10);
    iVar3 = *(int *)(param_1 + 0x14);
    local_b0._0_4_ = (int)local_b0 + *(int *)(param_2 + 8);
    local_c0._4_4_ = local_c0._4_4_ + *(int *)(param_2 + 0xc);
    local_b0._4_4_ = local_b0._4_4_ + *(int *)(param_2 + 0xc);
    iVar2 = *(int *)(param_1 + 0x20);
    iVar4 = *(int *)(param_1 + 0x24);
    return (((int)local_c0 <= iVar8 && iVar2 <= (int)local_b0) && local_c0._4_4_ <= iVar3) &&
           iVar4 == local_b0._4_4_ ||
           ((((int)local_c0 <= iVar8 && iVar2 <= (int)local_b0) && local_c0._4_4_ <= iVar3) &&
           iVar4 - local_b0._4_4_ < 0) !=
           ((((int)local_c0 <= iVar8 && iVar2 <= (int)local_b0) && local_c0._4_4_ <= iVar3) &&
           SBORROW4(iVar4,local_b0._4_4_));
  }
  cVar18 = *PTR_DAT_04bbfe88;
  do {
    if (cVar18 == '\0') {
      cVar18 = '\x01';
      *puVar6 = 1;
      memset(puVar1,0xff,0x1ac);
      uVar7 = *puVar14;
    }
    else {
      uVar9 = *(uint *)(puVar1 + 0xf0);
      if (-1 < (int)uVar9) {
        if ((float *)((ulong)uVar9 + (long)puVar14) != (float *)0x0) {
          fVar20 = *(float *)((ulong)uVar9 + (long)puVar14);
        }
        goto LAB_0151fc9c;
      }
      if (uVar9 != 0xffffffff) goto LAB_0151fc9c;
    }
    lVar15 = (long)puVar14 - (ulong)uVar7;
    if (((ulong)uVar7 == 0) || (lVar15 == 0)) goto LAB_0151fc9c;
    lVar17 = 0xc;
    if (*(char *)(lVar15 + 10) != '\0') {
      lVar17 = 0x1c;
    }
    if (lVar17 + lVar15 == 0) goto LAB_0151fc9c;
    uVar10 = (ulong)*(ushort *)(lVar15 + 8);
    *(undefined4 *)(puVar1 + 0xf0) = 0xfffffffe;
    if (uVar10 == 0) goto LAB_0151fc9c;
    piVar12 = (int *)(lVar17 + lVar15 + 4);
    while (piVar12[-1] != -0x499d99d4) {
      piVar12 = piVar12 + 2;
      uVar10 = uVar10 - 1;
      if (uVar10 == 0) goto LAB_0151fc9c;
    }
    iVar8 = 0;
    if (*piVar12 != -1) {
      iVar8 = *piVar12;
    }
    *(int *)(puVar1 + 0xf0) = iVar8;
    uVar7 = *puVar14;
    if (uVar7 == 0) goto LAB_0151fc9c;
  } while( true );
LAB_0151fba0:
  fVar19 = 0.0;
  goto LAB_0151fba4;
}

