
void FUN_029d3cf8(undefined4 *param_1,long *param_2)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  int iVar15;
  ulong *puVar16;
  long *plVar17;
  int iVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  char cVar23;
  long lVar24;
  int iVar25;
  long lVar26;
  bool bVar27;
  int iVar28;
  uint uVar29;
  long *plVar30;
  undefined4 uVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined8 local_a0;
  long *local_98;
  ulong local_90;
  long *local_88;
  long *local_80;
  uint local_74;
  
  local_74 = *(uint *)((long)param_2 + 0xc);
  uVar20 = local_74;
  if (local_74 != 0) {
    switch(param_1[0x4b]) {
    case 0:
      if ((local_74 | 4) != 5) goto switchD_029d3d54_caseD_4;
      *(char *)(param_1 + 0x4c) = (char)param_2[2];
      break;
    case 1:
      if (local_74 != 2) {
        local_74 = 1;
LAB_029d3e2c:
        uVar20 = local_74;
      }
      break;
    case 2:
      if (local_74 != 3) {
        local_74 = 2;
        goto LAB_029d3e2c;
      }
      *(char *)(param_1 + 0x4c) = (char)param_2[2];
      uVar20 = 3;
      break;
    case 3:
      if (local_74 != 4) {
        local_74 = 3;
        goto LAB_029d3e2c;
      }
      break;
    default:
switchD_029d3d54_caseD_4:
      local_74 = 0;
      FUN_02a0d600(*(long *)PTR_DAT_04bb26a8 + 0xa7660,0x80c8d15e,0);
      uVar20 = 0;
      break;
    case 5:
      if (local_74 != 6) {
        local_74 = 5;
        goto LAB_029d3e2c;
      }
      break;
    case 6:
      if (local_74 != 7) {
        local_74 = 6;
        goto LAB_029d3e2c;
      }
      *(char *)(param_1 + 0x4c) = (char)param_2[2];
      uVar20 = 7;
      break;
    case 7:
      if (local_74 != 8) {
        local_74 = 7;
        goto LAB_029d3e2c;
      }
    }
  }
  param_1[0x4b] = uVar20;
  uVar31 = 0xbf800000;
  lVar19 = *param_2;
  if (lVar19 == 0) {
LAB_029d3f68:
    plVar30 = (long *)0x0;
    bVar5 = false;
LAB_029d3f7c:
    fVar32 = 0.0;
    bVar7 = false;
    iVar11 = -1;
    iVar10 = -1;
    iVar9 = -1;
    uVar8 = 0xffffffff;
    uVar20 = 0xffffffff;
    iVar12 = iVar11;
  }
  else {
    if (*(long *)(lVar19 + 0x18) == 0) {
      lVar22 = *(long *)(lVar19 + 8);
      if ((lVar22 != 0) && (*(int *)(lVar19 + 0x10) == *(int *)(lVar22 + 0x10))) {
        lVar24 = *(long *)(*(long *)(lVar22 + 0x120) + 8);
        lVar26 = *(long *)(lVar24 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar26 != 0)) {
          if (DAT_05aebc00 != '\0') {
            lVar26 = lVar24 + 0x70;
          }
          lVar26 = *(long *)(lVar26 + 8);
          if (((lVar26 != 0) && (*(uint *)(lVar26 + 0x18) != 0)) &&
             (*(long *)((ulong)*(uint *)(lVar26 + 0x18) + lVar26) == 0x101feff464e494d))
          goto LAB_029d3e4c;
        }
      }
      goto LAB_029d3f68;
    }
    lVar22 = *(long *)(lVar19 + 8);
LAB_029d3e4c:
    if ((((lVar22 == 0) || (*(int *)(lVar22 + 0x10) != *(int *)(lVar19 + 0x10))) ||
        ((*(int *)(lVar22 + 0xc) == 0 || (*(int *)(lVar22 + 0xc) == 7)))) ||
       (((5 < uVar20 || ((1 << (ulong)(uVar20 & 0x1f) & 0x2aU) == 0)) &&
        (local_80 = (long *)0x0, uVar20 != 7)))) goto LAB_029d3f68;
    local_80 = (long *)0x0;
    uVar14 = FUN_02a228a8(&local_80,local_74,*(undefined1 *)(param_1 + 0x4c));
    plVar30 = local_80;
    bVar5 = true;
    if (((uVar14 & 1) == 0) || (local_80 == (long *)0x0)) goto LAB_029d3f7c;
    uVar20 = *(uint *)(param_2 + 1);
    if (-1 < (int)uVar20) {
      uVar13 = *(uint *)((long)local_80 + 0x1c);
      uVar20 = uVar20 + 0xc80;
      if (uVar13 <= uVar20) {
        if (uVar13 == *(uint *)(local_80 + 3)) {
          uVar20 = 0xffffffff;
        }
        else {
          uVar20 = (uVar20 - uVar13) + *(uint *)(local_80 + 3);
        }
      }
    }
    puVar16 = (ulong *)*param_2;
    local_a0 = *puVar16;
    local_98 = (long *)puVar16[1];
    local_90 = puVar16[2];
    local_88 = (long *)puVar16[3];
    if (puVar16[1] == 0) {
      bVar7 = false;
    }
    else {
      bVar7 = *(int *)(puVar16[1] + 0x10) == (int)puVar16[2];
    }
    if (((int)uVar20 < 1) || (bVar7)) {
      if (local_88 != (long *)0x0) goto LAB_029d4298;
      if ((local_98 != (long *)0x0) && ((int)local_90 == *(int *)((long)local_98 + 0x10))) {
        lVar19 = *(long *)(*(long *)((long)local_98 + 0x120) + 8);
        lVar22 = *(long *)(lVar19 + 0x38);
        if ((DAT_05aebc00 == '\0') && (lVar22 == 0)) goto LAB_029d444c;
        lVar19 = lVar19 + 0x70;
        lVar26 = lVar22;
        if (DAT_05aebc00 != '\0') {
          lVar26 = lVar19;
        }
        lVar26 = *(long *)(lVar26 + 8);
        if (((lVar26 == 0) || (*(uint *)(lVar26 + 0x18) == 0)) ||
           (*(long *)((ulong)*(uint *)(lVar26 + 0x18) + lVar26) != 0x101feff464e494d))
        goto LAB_029d444c;
        if (DAT_05aebc00 == '\0') {
          lVar19 = lVar22;
        }
        plVar17 = (long *)((ulong)*(uint *)(*(long *)(lVar19 + 8) + 0x18) + *(long *)(lVar19 + 8));
        if (*plVar17 != 0x101feff464e494d) {
          plVar17 = (long *)0x0;
        }
        uVar29 = *(uint *)(plVar17 + 4);
        uVar13 = FUN_03b46270();
        uVar13 = uVar13 & ((int)uVar13 >> 0x1f ^ 0xffffffffU);
        goto LAB_029d42a0;
      }
LAB_029d444c:
      bVar7 = false;
    }
    else {
      local_90 = local_90 & 0xffffffff00000000;
      local_98 = (long *)0x0;
      local_88 = local_80;
      local_a0 = (ulong)uVar20;
LAB_029d4298:
      uVar29 = *(uint *)(local_88 + 4);
      uVar13 = (uint)local_a0;
LAB_029d42a0:
      bVar7 = uVar13 < uVar29;
    }
    uVar8 = FUN_03f0f0a0(&local_a0);
    iVar9 = FUN_03f0f6f0(&local_a0);
    plVar17 = local_88;
    if (local_88 == (long *)0x0) {
      if ((local_98 != (long *)0x0) && ((int)local_90 == *(int *)((long)local_98 + 0x10))) {
        lVar22 = *(long *)(*(long *)((long)local_98 + 0x120) + 8);
        lVar19 = *(long *)(lVar22 + 0x38);
        if ((DAT_05aebc00 != '\0') || (lVar19 != 0)) {
          if (DAT_05aebc00 != '\0') {
            lVar19 = lVar22 + 0x70;
          }
          lVar19 = *(long *)(lVar19 + 8);
          if (((lVar19 != 0) && (*(uint *)(lVar19 + 0x18) != 0)) &&
             (plVar17 = (long *)((ulong)*(uint *)(lVar19 + 0x18) + lVar19),
             *plVar17 == 0x101feff464e494d)) goto LAB_029d42c8;
        }
      }
LAB_029d4360:
      iVar10 = -1;
    }
    else {
LAB_029d42c8:
      uVar13 = *(uint *)((long)plVar17 + 0x3c);
      if (((uVar13 == 0) ||
          (psVar1 = (short *)((ulong)uVar13 + (long)plVar17 + 0x3c), psVar1 == (short *)0x0)) ||
         (*psVar1 == 0)) goto LAB_029d4360;
      iVar10 = FUN_03f0fbe0(&local_a0);
      iVar10 = iVar10 + 1;
    }
    iVar11 = FUN_03f0eae0(&local_a0);
    iVar12 = FUN_03f0ecd0(&local_a0);
    uVar31 = FUN_03f0e900(&local_a0);
    iVar18 = -iVar9;
    if (-1 < iVar9) {
      iVar18 = iVar9;
    }
    fVar32 = (float)FUN_03f0f270(&local_a0);
    fVar32 = (fVar32 + (float)(iVar18 + -1)) / (float)iVar11;
  }
  local_a0 = CONCAT44(uVar20,(int)local_a0) & 0xffffffffffffff00;
  local_98 = plVar30;
  FUN_029e69e0(param_1 + 0x22,&local_a0);
  local_a0 = CONCAT44(uVar20,(int)local_a0) & 0xffffffffffffff00;
  local_98 = plVar30;
  FUN_029e69e0(param_1 + 0x3c,&local_a0);
  local_a0 = CONCAT44(0x2030405,uVar31);
  local_98 = (long *)CONCAT71(local_98._1_7_,3);
  FUN_029e32c0(param_1 + 0x16,&local_a0);
  if (plVar30 == (long *)0x0) {
    if (param_1[0x29] == -1) {
      iVar18 = 0;
      fVar33 = 0.0;
      bVar6 = true;
      iVar15 = -1;
      goto LAB_029d4078;
    }
    cVar23 = *(char *)(param_1 + 0x24);
    iVar15 = -1;
    iVar18 = 0;
    iVar21 = 0;
    iVar25 = -1;
  }
  else {
    iVar15 = param_1[0x29];
    fVar33 = (float)NEON_ucvtf(*(undefined4 *)((long)plVar30 + 0x14));
    if (iVar15 == -1) {
      bVar6 = false;
      iVar18 = 0;
    }
    else {
      bVar6 = false;
      fVar34 = (float)NEON_ucvtf(param_1[0x37]);
      fVar34 = (fVar34 / fVar33) * 30.0;
      uVar20 = 0;
      if (fVar34 != (float)(int)fVar34) {
        uVar20 = (uint)(0.0 <= fVar34);
      }
      iVar18 = uVar20 + (int)fVar34;
    }
LAB_029d4078:
    iVar21 = 0;
    cVar23 = *(char *)(param_1 + 0x24);
    iVar25 = -1;
    if ((param_1[0x2a] != -1) && (!bVar6)) {
      fVar34 = (float)NEON_ucvtf(param_1[0x3a]);
      fVar33 = (fVar34 / fVar33) * 30.0;
      uVar20 = 0;
      if (fVar33 != (float)(int)fVar33) {
        uVar20 = (uint)(0.0 <= fVar33);
      }
      iVar21 = uVar20 + (int)fVar33;
      iVar25 = param_1[0x2a];
    }
  }
  if (local_74 == 1) {
LAB_029d40d4:
    bVar6 = false;
    bVar27 = true;
  }
  else {
    bVar6 = local_74 == 5;
    if (bVar6) {
LAB_029d40fc:
      if (3 < iVar10) {
        bVar27 = true;
        goto LAB_029d4124;
      }
      if (iVar10 == 3) {
        bVar27 = 1 < iVar9;
        goto LAB_029d4124;
      }
    }
    else {
      if (local_74 == 3) goto LAB_029d40d4;
      if (local_74 == 7) goto LAB_029d40fc;
      bVar6 = false;
    }
    bVar27 = false;
  }
LAB_029d4124:
  iVar28 = param_1[0x44];
  if (iVar28 != -1) {
    fVar33 = (float)param_1[0x3f] * 30.0;
    uVar20 = 0;
    if (fVar33 != (float)(int)fVar33) {
      uVar20 = (uint)(0.0 <= fVar33);
    }
    iVar28 = uVar20 + (int)fVar33;
    if (iVar28 < 0 != SCARRY4(uVar20,(int)fVar33)) {
      iVar28 = -1;
    }
  }
  iVar4 = param_1[0x1c];
  if (bVar5) {
    if (local_74 == 1) {
      bVar6 = true;
    }
    if (bVar6) {
      local_74 = 0;
    }
    else if (local_74 != 3) {
      local_74 = 3;
    }
    if (-1 < (int)param_1[0x43]) {
      local_74 = local_74 + param_1[0x43] + 1;
    }
  }
  else {
    local_74 = 0xffffffff;
  }
  param_1[5] = uVar31;
  iVar3 = iVar15;
  if (cVar23 == '\0') {
    iVar3 = -1;
  }
  iVar2 = 0;
  if (cVar23 != '\0') {
    iVar2 = iVar18;
  }
  param_1[6] = fVar32;
  if (iVar4 == 0x7fffffff) {
    iVar4 = -1;
  }
  *param_1 = uVar8;
  param_1[1] = iVar9;
  param_1[2] = iVar10;
  param_1[3] = iVar11;
  param_1[4] = iVar12;
  *(bool *)(param_1 + 7) = bVar5;
  *(bool *)((long)param_1 + 0x1d) = bVar7;
  param_1[8] = param_1[0x18];
  param_1[9] = (int)*(undefined8 *)(param_1 + 0x19);
  param_1[10] = (int)((ulong)*(undefined8 *)(param_1 + 0x19) >> 0x20);
  param_1[0xb] = param_1[0x1b];
  param_1[0xc] = iVar4;
  param_1[0xd] = param_1[0x1d];
  param_1[0xe] = param_1[0x1e];
  param_1[0xf] = iVar15;
  param_1[0x10] = iVar18;
  param_1[0x11] = iVar3;
  param_1[0x12] = iVar2;
  param_1[0x13] = iVar25;
  param_1[0x14] = iVar21;
  param_1[0x48] = local_74;
  param_1[0x49] = iVar28;
  *(bool *)(param_1 + 0x4a) = bVar27;
  return;
}

