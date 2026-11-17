
/* WARNING: Removing unreachable block (ram,0x02ad77b8) */
/* WARNING: Removing unreachable block (ram,0x02ad775c) */
/* WARNING: Removing unreachable block (ram,0x02ad7704) */
/* WARNING: Removing unreachable block (ram,0x02ad7418) */
/* WARNING: Removing unreachable block (ram,0x02ad73c0) */
/* WARNING: Removing unreachable block (ram,0x02ad7368) */
/* WARNING: Removing unreachable block (ram,0x02ad7324) */
/* WARNING: Removing unreachable block (ram,0x02ad7020) */
/* WARNING: Removing unreachable block (ram,0x02ad6fc8) */
/* WARNING: Removing unreachable block (ram,0x02ad6f70) */
/* WARNING: Removing unreachable block (ram,0x02ad6f58) */
/* WARNING: Removing unreachable block (ram,0x02ad6f9c) */
/* WARNING: Removing unreachable block (ram,0x02ad6ff4) */
/* WARNING: Removing unreachable block (ram,0x02ad704c) */
/* WARNING: Removing unreachable block (ram,0x02ad733c) */
/* WARNING: Removing unreachable block (ram,0x02ad7394) */
/* WARNING: Removing unreachable block (ram,0x02ad73ec) */
/* WARNING: Removing unreachable block (ram,0x02ad76ec) */
/* WARNING: Removing unreachable block (ram,0x02ad7730) */
/* WARNING: Removing unreachable block (ram,0x02ad7788) */
/* WARNING: Removing unreachable block (ram,0x02ad77e4) */

void FUN_02ad68d0(long param_1,uint *param_2)

{
  long *plVar1;
  long *plVar2;
  uint uVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  char *pcVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  uint *puVar20;
  ulong uVar21;
  int iVar22;
  ulong uVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  uint local_78;
  uint local_74;
  
  local_74 = *param_2;
  if (local_74 == 0x1f) {
    if (param_2[0xf] == 0) {
      lVar14 = DAT_05635578 + 0x24690;
    }
    else {
      lVar14 = DAT_05635578 + 0x250a0;
    }
    goto LAB_02ad6ba8;
  }
  lVar14 = *(long *)PTR_DAT_04bb5008;
  if (local_74 == 0) {
switchD_02ad6a18_default:
    if (*(char *)((long)param_2 + 0x35) == '\0') {
      if (*(char *)(lVar14 + 0x10eb0) == '\0') {
        return;
      }
      lVar14 = lVar14 + 0x10e80;
    }
    else {
      if (*(char *)(lVar14 + 0x104a0) == '\0') {
        return;
      }
      lVar14 = lVar14 + 0x10470;
    }
    goto LAB_02ad6ba8;
  }
  if ((int)*(uint *)(lVar14 + 0x1e0) < 1) {
    if ((((*(long *)(lVar14 + 0xd0) != 0) &&
         (puVar12 = *(uint **)(*(long *)(lVar14 + 0xd0) + 8), puVar12 != (uint *)0x0)) &&
        ((*(uint *)(lVar14 + 0xe8) <= local_74 ||
         (*(char *)(*(long *)(lVar14 + 0xf0) + (long)(int)local_74) != '\0')))) &&
       (((local_74 < *puVar12 && (puVar12[1] != 0)) && ((ushort)puVar12[2] != 0)))) {
      iVar8 = 0xc;
      if (*(char *)((long)puVar12 + 10) != '\0') {
        iVar8 = 0x1c;
      }
      puVar12 = (uint *)((ulong)(puVar12[1] * local_74 + (uint)(ushort)puVar12[2] * 8 + iVar8) +
                        (long)puVar12);
      if (puVar12 != (uint *)0x0) goto LAB_02ad6974;
    }
    goto switchD_02ad6a18_default;
  }
  if (*(uint *)(lVar14 + 0x1e0) <= local_74) goto switchD_02ad6a18_default;
  uVar10 = local_74;
  if (*(uint *)(lVar14 + 0x1d0) <= local_74) {
    uVar10 = 0;
  }
  puVar12 = *(uint **)(*(long *)(lVar14 + 0x1d8) + (ulong)uVar10 * 8);
  if (puVar12 == (uint *)0x0) goto switchD_02ad6a18_default;
LAB_02ad6974:
  uVar10 = *puVar12;
  if (uVar10 == 0 || puVar12 == (uint *)(ulong)uVar10) goto switchD_02ad6a18_default;
  puVar20 = (uint *)((long)puVar12 - (long)(ulong)uVar10);
  uVar10 = *puVar20;
  if (((uVar10 == 0) || (uVar21 = (ulong)puVar20[1], puVar20[1] == 0)) ||
     (uVar23 = (ulong)(ushort)puVar20[2], uVar23 == 0)) goto switchD_02ad6a18_default;
  lVar13 = 0xc;
  if (*(char *)((long)puVar20 + 10) != '\0') {
    lVar13 = 0x1c;
  }
  lVar13 = (long)puVar20 + lVar13 + uVar23 * 8;
  if (lVar13 == 0) {
switchD_02ad6a18_caseD_0:
    lVar13 = 0xc;
    if (*(char *)((long)puVar20 + 10) != '\0') {
      lVar13 = 0x1c;
    }
    lVar13 = (long)puVar20 + lVar13 + uVar23 * 8;
    if (lVar13 != 0) {
      uVar24 = 0;
      if (uVar21 != 0) {
        uVar24 = (uint)((ulong)((long)puVar12 - lVar13) / uVar21);
      }
      if (uVar10 <= uVar24) {
        uVar24 = 0xffffffff;
      }
      if ((uVar24 < DAT_0560baf8) && (*(short *)(DAT_0560bb00 + (long)(int)uVar24 * 2) == 1)) {
        cVar4 = *(char *)((long)param_2 + 0x35);
        uVar10 = param_2[0xd];
        local_74 = 0;
        FUN_02b67620(&local_74);
        iVar8 = FUN_026640d0(local_74);
        if (cVar4 == '\0') {
          if ((char)uVar10 == '\0') {
            if (iVar8 == 2) {
              if (*(char *)(lVar14 + 0x136f8) == '\0') {
                return;
              }
              lVar14 = lVar14 + 0x136c8;
            }
            else {
              if (iVar8 != 1) {
                return;
              }
              if (*(char *)(lVar14 + 0x12ce8) == '\0') {
                return;
              }
              lVar14 = lVar14 + 0x12cb8;
            }
          }
          else {
            if (*(char *)(lVar14 + 0x122d8) == '\0') {
              return;
            }
            lVar14 = lVar14 + 0x122a8;
          }
        }
        else {
          if (*(char *)(lVar14 + 0x118c8) == '\0') {
            return;
          }
          lVar14 = lVar14 + 0x11898;
        }
        goto LAB_02ad6ba8;
      }
    }
    goto switchD_02ad6a18_default;
  }
  uVar24 = 0;
  if (uVar21 != 0) {
    uVar24 = (uint)((ulong)((long)puVar12 - lVar13) / uVar21);
  }
  if (uVar10 <= uVar24) {
    uVar24 = 0xffffffff;
  }
  if ((*(uint *)PTR_DAT_04bc46a8 <= uVar24) ||
     (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc46a8 + 8) + (long)(int)uVar24 * 2), 4 < uVar5))
  goto switchD_02ad6a18_caseD_0;
  switch(uVar5) {
  case 0:
    goto switchD_02ad6a18_caseD_0;
  case 1:
  case 4:
    local_78 = 0;
    uVar21 = FUN_02b677c0(&local_78);
    if ((uVar21 & 1) == 0) goto switchD_02ad7b6c_default;
    if (8 < local_78) {
      return;
    }
    lVar13 = lVar14 + 0x1a580;
    pcVar15 = (char *)(lVar14 + 0x20048);
    switch(local_78) {
    case 0:
      lVar14 = FUN_02ad617c(lVar13,param_2[0x10]);
      break;
    case 1:
      lVar14 = lVar14 + 0x1f608;
      break;
    case 2:
      lVar14 = FUN_02ad61ec(lVar13,param_2[0x11]);
      break;
    case 3:
      lVar13 = lVar14 + 0x20018;
      goto LAB_02ad7c24;
    case 4:
      lVar14 = lVar14 + 0x1ebf8;
      break;
    case 5:
      if (param_2[0x12] == 2) {
        if (*(char *)(lVar14 + 0x21468) == '\0') goto switchD_02ad7b6c_default;
        lVar14 = lVar14 + 0x21438;
      }
      else if ((param_2[0x12] == 1) && (*(char *)(lVar14 + 0x20a58) != '\0')) {
        lVar14 = lVar14 + 0x20a28;
      }
      else {
switchD_02ad7b6c_default:
        lVar14 = 0;
      }
      break;
    case 6:
      lVar14 = FUN_02ad6280(lVar13,param_2[0x13]);
      break;
    case 7:
      return;
    case 8:
      pcVar15 = (char *)(lVar14 + 0x23ca8);
      lVar13 = lVar14 + 0x23c78;
LAB_02ad7c24:
      lVar14 = 0;
      if (*pcVar15 != '\0') {
        lVar14 = lVar13;
      }
    }
LAB_02ad7c90:
    if (lVar14 == 0) {
      return;
    }
    break;
  case 2:
    uVar10 = param_2[0xe];
    if (*(char *)((long)param_2 + 0x36) == '\0') {
code_r0x02ad7b58:
      switch(uVar10) {
      case 0:
        lVar14 = lVar14 + 0x140e0;
        break;
      case 1:
        lVar14 = lVar14 + 0x14af0;
        break;
      case 2:
        lVar14 = lVar14 + 0x15500;
        break;
      case 3:
        lVar14 = lVar14 + 0x15f10;
        break;
      case 4:
        lVar14 = lVar14 + 0x16920;
        break;
      case 5:
        lVar14 = lVar14 + 0x17330;
        break;
      default:
        goto switchD_02ad7b6c_default;
      }
      goto LAB_02ad7c90;
    }
    if (uVar10 == 5) {
      lVar14 = lVar14 + 0x19160;
    }
    else if (uVar10 == 4) {
      lVar14 = lVar14 + 0x18750;
    }
    else {
      if (uVar10 != 3) goto code_r0x02ad7b58;
      lVar14 = lVar14 + 0x17d40;
    }
    break;
  case 3:
    lVar14 = lVar14 + 0x19b70;
    break;
  default:
    goto switchD_02ad6a18_default;
  }
LAB_02ad6ba8:
  *(long *)(param_1 + 8) = lVar14;
  *(uint *)(param_1 + 0x10) = param_2[0xc];
  *(uint *)(param_1 + 0x28) = param_2[6];
  *(uint *)(param_1 + 0x2c) = param_2[7];
  *(uint *)(param_1 + 0x38) = param_2[10];
  *(uint *)(param_1 + 0x3c) = param_2[0xb];
  uVar10 = 0;
  do {
    lVar14 = param_1 + 0x40 + (ulong)uVar10 * 0x70;
    if (10 < uVar10) {
      lVar14 = param_1 + 0x40;
    }
    plVar1 = (long *)(*(long *)(param_1 + 8) + 0x70);
    plVar2 = plVar1 + uVar10;
    if (10 < uVar10) {
      plVar2 = plVar1;
    }
    lVar13 = *plVar2;
    iVar8 = 0;
    if (lVar13 != 0) {
      if (*(char *)(lVar13 + 0x48) == '\0') {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(lVar13 + 0x38);
      }
    }
    uVar21 = (ulong)uVar10;
    if (10 < uVar10) {
      uVar21 = 0;
    }
    lVar13 = plVar1[uVar21];
    iVar22 = 0;
    if (lVar13 != 0) {
      if (*(char *)(lVar13 + 0x48) == '\0') {
        iVar22 = 0;
      }
      else {
        iVar22 = *(int *)(lVar13 + 0x3c);
      }
    }
    uVar21 = (ulong)uVar10;
    if (10 < uVar10) {
      uVar21 = 0;
    }
    lVar13 = plVar1[uVar21];
    iVar16 = 0;
    if (lVar13 != 0) {
      if (*(char *)(lVar13 + 0x48) == '\0') {
        iVar16 = 0;
      }
      else {
        iVar16 = *(int *)(lVar13 + 0x30);
      }
    }
    uVar21 = (ulong)uVar10;
    if (10 < uVar10) {
      uVar21 = 0;
    }
    lVar13 = plVar1[uVar21];
    uVar24 = 0;
    if (lVar13 != 0) {
      if (*(char *)(lVar13 + 0x48) == '\0') {
        uVar24 = 0;
      }
      else {
        uVar24 = *(uint *)(lVar13 + 0x40);
      }
    }
    uVar21 = (ulong)uVar10;
    if (10 < uVar10) {
      uVar21 = 0;
    }
    lVar13 = plVar1[uVar21];
    iVar11 = 0;
    if (lVar13 != 0) {
      if (*(char *)(lVar13 + 0x48) == '\0') {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(lVar13 + 0x34);
      }
    }
    uVar21 = (ulong)uVar10;
    if (10 < uVar10) {
      uVar21 = 0;
    }
    lVar13 = plVar1[uVar21];
    uVar17 = 0;
    if (lVar13 != 0) {
      if (*(char *)(lVar13 + 0x48) == '\0') {
        uVar17 = 0;
      }
      else {
        uVar17 = *(uint *)(lVar13 + 0x44);
      }
    }
    uVar3 = (*(uint *)(param_1 + 0x10) >> 0x1e | *(uint *)(param_1 + 0x10) << 2) ^ 2;
    if (uVar3 < 4) {
      iVar16 = iVar16 + ~uVar24;
      iVar11 = iVar11 + ~uVar17;
      iVar18 = iVar11;
      iVar19 = iVar16;
      iVar9 = iVar8;
      switch(uVar3) {
      case 0:
        iVar18 = iVar22;
        iVar19 = iVar8;
        iVar9 = iVar16;
        iVar22 = iVar11;
        break;
      case 1:
        iVar18 = iVar16;
        iVar19 = iVar22;
        iVar9 = iVar11;
        iVar22 = iVar8;
        break;
      case 3:
        iVar18 = iVar8;
        iVar19 = iVar11;
        iVar9 = iVar22;
        iVar22 = iVar16;
      }
    }
    else {
      iVar18 = 0;
      iVar19 = 0;
      iVar9 = 0;
      iVar22 = 0;
    }
    iVar9 = *(int *)(param_1 + 0x28) - iVar9;
    iVar22 = *(int *)(param_1 + 0x2c) - iVar22;
    iVar19 = *(int *)(param_1 + 0x38) + iVar19;
    iVar18 = *(int *)(param_1 + 0x3c) + iVar18;
    iVar8 = iVar9;
    if (iVar19 <= iVar9) {
      iVar8 = iVar19;
    }
    if (iVar9 <= iVar19) {
      iVar9 = iVar19;
    }
    iVar16 = iVar22;
    if (iVar18 <= iVar22) {
      iVar16 = iVar18;
    }
    if (iVar22 <= iVar18) {
      iVar22 = iVar18;
    }
    *(int *)(lVar14 + 0x10) = iVar8;
    *(int *)(lVar14 + 0x14) = iVar16;
    *(int *)(lVar14 + 0x20) = iVar9;
    *(int *)(lVar14 + 0x24) = iVar22;
    fVar25 = (float)iVar8 * 10.0 + 2.5;
    fVar27 = (float)iVar16 * 10.0 + 2.5;
    fVar26 = (float)iVar9 * 10.0 + 10.0 + -2.5;
    iVar19 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
    fVar25 = (float)iVar22 * 10.0 + 10.0 + -2.5;
    iVar18 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
    iVar6 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
    iVar7 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
    iVar11 = iVar19;
    if (iVar6 <= iVar19) {
      iVar11 = iVar6;
    }
    if (iVar19 <= iVar6) {
      iVar19 = iVar6;
    }
    iVar6 = iVar18;
    if (iVar7 <= iVar18) {
      iVar6 = iVar7;
    }
    if (iVar18 <= iVar7) {
      iVar18 = iVar7;
    }
    *(int *)(lVar14 + 0x38) = iVar11;
    *(int *)(lVar14 + 0x3c) = iVar6;
    *(int *)(lVar14 + 0x48) = iVar19;
    *(int *)(lVar14 + 0x4c) = iVar18;
    switch((*(uint *)(param_1 + 0x10) >> 0x1e | *(uint *)(param_1 + 0x10) << 2) ^ 2) {
    case 0:
      iVar8 = iVar9;
    case 3:
      iVar16 = iVar22;
      break;
    case 1:
      iVar8 = iVar9;
      break;
    case 2:
      break;
    default:
      goto switchD_02ad6f30_default;
    }
    *(int *)(lVar14 + 0x58) = iVar8;
    *(int *)(lVar14 + 0x5c) = iVar16;
switchD_02ad6f30_default:
    local_78 = uVar10;
    local_74 = uVar10;
    FUN_02ad7c98(param_1,lVar14 + 0x60);
    uVar24 = 0xb;
    if ((int)uVar10 < 0xb) {
      uVar24 = uVar10 + 1;
    }
    uVar10 = uVar24;
  } while (uVar24 != 0xb);
  local_78 = 0;
  plVar1 = (long *)(*(long *)(param_1 + 8) + 200);
  lVar14 = *plVar1;
  iVar8 = 0;
  if (lVar14 != 0) {
    if (*(char *)(lVar14 + 0x48) == '\0') {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(lVar14 + 0x38);
    }
  }
  lVar14 = *plVar1;
  iVar22 = 0;
  if (lVar14 != 0) {
    if (*(char *)(lVar14 + 0x48) == '\0') {
      iVar22 = 0;
    }
    else {
      iVar22 = *(int *)(lVar14 + 0x3c);
    }
  }
  lVar14 = *plVar1;
  iVar16 = 0;
  if (lVar14 != 0) {
    if (*(char *)(lVar14 + 0x48) == '\0') {
      iVar16 = 0;
    }
    else {
      iVar16 = *(int *)(lVar14 + 0x30);
    }
  }
  lVar14 = *plVar1;
  uVar10 = 0;
  if (lVar14 != 0) {
    if (*(char *)(lVar14 + 0x48) == '\0') {
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)(lVar14 + 0x40);
    }
  }
  lVar14 = *plVar1;
  iVar11 = 0;
  if (lVar14 != 0) {
    if (*(char *)(lVar14 + 0x48) == '\0') {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(lVar14 + 0x34);
    }
  }
  local_74 = 0;
  lVar14 = *plVar1;
  uVar24 = 0;
  if (lVar14 != 0) {
    if (*(char *)(lVar14 + 0x48) == '\0') {
      uVar24 = 0;
    }
    else {
      uVar24 = *(uint *)(lVar14 + 0x44);
    }
  }
  uVar17 = (*(uint *)(param_1 + 0x10) >> 0x1e | *(uint *)(param_1 + 0x10) << 2) ^ 2;
  if (uVar17 < 4) {
    iVar16 = iVar16 + ~uVar10;
    iVar11 = iVar11 + ~uVar24;
    iVar19 = iVar11;
    iVar18 = iVar16;
    iVar9 = iVar8;
    switch(uVar17) {
    case 0:
      iVar19 = iVar22;
      iVar18 = iVar8;
      iVar9 = iVar16;
      iVar22 = iVar11;
      break;
    case 1:
      iVar19 = iVar16;
      iVar18 = iVar22;
      iVar9 = iVar11;
      iVar22 = iVar8;
      break;
    case 3:
      iVar19 = iVar8;
      iVar18 = iVar11;
      iVar9 = iVar22;
      iVar22 = iVar16;
    }
  }
  else {
    iVar19 = 0;
    iVar18 = 0;
    iVar9 = 0;
    iVar22 = 0;
  }
  fVar26 = (float)*(int *)(param_1 + 0x2c) * 10.0 + 2.5;
  fVar25 = (float)*(int *)(param_1 + 0x28) * 10.0 + 2.5;
  iVar8 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
  fVar27 = (float)*(int *)(param_1 + 0x3c) * 10.0 + 10.0 + -2.5;
  fVar25 = (float)*(int *)(param_1 + 0x38) * 10.0 + 10.0 + -2.5;
  iVar16 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
  iVar6 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
  iVar7 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
  iVar11 = iVar8;
  if (iVar6 <= iVar8) {
    iVar11 = iVar6;
  }
  if (iVar8 <= iVar6) {
    iVar8 = iVar6;
  }
  iVar11 = iVar11 - iVar9;
  iVar8 = iVar8 + iVar18;
  iVar18 = iVar16;
  if (iVar7 <= iVar16) {
    iVar18 = iVar7;
  }
  if (iVar16 <= iVar7) {
    iVar16 = iVar7;
  }
  iVar9 = iVar11;
  if (iVar8 <= iVar11) {
    iVar9 = iVar8;
  }
  iVar18 = iVar18 - iVar22;
  iVar16 = iVar16 + iVar19;
  if (iVar11 <= iVar8) {
    iVar11 = iVar8;
  }
  iVar8 = iVar18;
  if (iVar16 <= iVar18) {
    iVar8 = iVar16;
  }
  if (iVar18 <= iVar16) {
    iVar18 = iVar16;
  }
  *(int *)(param_1 + 0x548) = iVar9;
  *(int *)(param_1 + 0x54c) = iVar8;
  *(int *)(param_1 + 0x558) = iVar11;
  *(int *)(param_1 + 0x55c) = iVar18;
  fVar25 = (float)iVar9 * 0.5;
  uVar10 = 0;
  if (fVar25 != (float)(int)fVar25) {
    uVar10 = (uint)(fVar25 < 0.0);
  }
  iVar22 = (int)fVar25 - uVar10;
  fVar25 = (float)iVar8 * 0.5;
  uVar10 = 0;
  if (fVar25 != (float)(int)fVar25) {
    uVar10 = (uint)(fVar25 < 0.0);
  }
  iVar8 = (int)fVar25 - uVar10;
  fVar25 = (float)iVar11 * 0.5;
  uVar10 = 0;
  if (fVar25 != (float)(int)fVar25) {
    uVar10 = (uint)(fVar25 < 0.0);
  }
  iVar16 = (int)fVar25 - uVar10;
  fVar25 = (float)iVar18 * 0.5;
  uVar10 = 0;
  if (fVar25 != (float)(int)fVar25) {
    uVar10 = (uint)(fVar25 < 0.0);
  }
  iVar19 = (int)fVar25 - uVar10;
  iVar11 = iVar22;
  if (iVar16 <= iVar22) {
    iVar11 = iVar16;
  }
  if (iVar22 <= iVar16) {
    iVar22 = iVar16;
  }
  iVar16 = iVar8;
  if (iVar19 <= iVar8) {
    iVar16 = iVar19;
  }
  if (iVar8 <= iVar19) {
    iVar8 = iVar19;
  }
  *(int *)(param_1 + 0x520) = iVar11;
  *(int *)(param_1 + 0x524) = iVar16;
  *(int *)(param_1 + 0x530) = iVar22;
  *(int *)(param_1 + 0x534) = iVar8;
  switch((*(uint *)(param_1 + 0x10) >> 0x1e | *(uint *)(param_1 + 0x10) << 2) ^ 2) {
  case 0:
    iVar11 = iVar22;
  case 3:
    iVar16 = iVar8;
    break;
  case 1:
    iVar11 = iVar22;
    break;
  case 2:
    break;
  default:
    goto switchD_02ad72e4_default;
  }
  *(int *)(param_1 + 0x568) = iVar11;
  *(int *)(param_1 + 0x56c) = iVar16;
switchD_02ad72e4_default:
  FUN_02ad7c98(param_1,param_1 + 0x570);
  local_78 = 1;
  lVar14 = *(long *)(param_1 + 8);
  lVar13 = *(long *)(lVar14 + 0xd0);
  iVar8 = 0;
  if (lVar13 != 0) {
    if (*(char *)(lVar13 + 0x48) == '\0') {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(lVar13 + 0x38);
    }
  }
  lVar13 = *(long *)(lVar14 + 0xd0);
  iVar22 = 0;
  if (lVar13 != 0) {
    if (*(char *)(lVar13 + 0x48) == '\0') {
      iVar22 = 0;
    }
    else {
      iVar22 = *(int *)(lVar13 + 0x3c);
    }
  }
  lVar13 = *(long *)(lVar14 + 0xd0);
  iVar16 = 0;
  if (lVar13 != 0) {
    if (*(char *)(lVar13 + 0x48) == '\0') {
      iVar16 = 0;
    }
    else {
      iVar16 = *(int *)(lVar13 + 0x30);
    }
  }
  lVar13 = *(long *)(lVar14 + 0xd0);
  uVar10 = 0;
  if (lVar13 != 0) {
    if (*(char *)(lVar13 + 0x48) == '\0') {
      uVar10 = 0;
    }
    else {
      uVar10 = *(uint *)(lVar13 + 0x40);
    }
  }
  lVar13 = *(long *)(lVar14 + 0xd0);
  iVar11 = 0;
  if (lVar13 != 0) {
    if (*(char *)(lVar13 + 0x48) == '\0') {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(lVar13 + 0x34);
    }
  }
  local_74 = 1;
  lVar14 = *(long *)(lVar14 + 0xd0);
  uVar24 = 0;
  if (lVar14 != 0) {
    if (*(char *)(lVar14 + 0x48) == '\0') {
      uVar24 = 0;
    }
    else {
      uVar24 = *(uint *)(lVar14 + 0x44);
    }
  }
  uVar17 = (*(uint *)(param_1 + 0x10) >> 0x1e | *(uint *)(param_1 + 0x10) << 2) ^ 2;
  if (uVar17 < 4) {
    iVar16 = iVar16 + ~uVar10;
    iVar11 = iVar11 + ~uVar24;
    iVar19 = iVar11;
    iVar18 = iVar16;
    iVar9 = iVar8;
    switch(uVar17) {
    case 0:
      iVar19 = iVar22;
      iVar18 = iVar8;
      iVar9 = iVar16;
      iVar22 = iVar11;
      break;
    case 1:
      iVar19 = iVar16;
      iVar18 = iVar22;
      iVar9 = iVar11;
      iVar22 = iVar8;
      break;
    case 3:
      iVar19 = iVar8;
      iVar18 = iVar11;
      iVar9 = iVar22;
      iVar22 = iVar16;
    }
  }
  else {
    iVar19 = 0;
    iVar18 = 0;
    iVar9 = 0;
    iVar22 = 0;
  }
  fVar26 = (float)*(int *)(param_1 + 0x2c) * 10.0 + 2.5;
  fVar25 = (float)*(int *)(param_1 + 0x28) * 10.0 + 2.5;
  iVar8 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
  fVar27 = (float)*(int *)(param_1 + 0x3c) * 10.0 + 10.0 + -2.5;
  fVar25 = (float)*(int *)(param_1 + 0x38) * 10.0 + 10.0 + -2.5;
  iVar16 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
  iVar6 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
  iVar7 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
  iVar11 = iVar8;
  if (iVar6 <= iVar8) {
    iVar11 = iVar6;
  }
  if (iVar8 <= iVar6) {
    iVar8 = iVar6;
  }
  iVar11 = iVar11 - iVar9;
  iVar8 = iVar8 + iVar18;
  iVar18 = iVar16;
  if (iVar7 <= iVar16) {
    iVar18 = iVar7;
  }
  if (iVar16 <= iVar7) {
    iVar16 = iVar7;
  }
  iVar9 = iVar11;
  if (iVar8 <= iVar11) {
    iVar9 = iVar8;
  }
  iVar18 = iVar18 - iVar22;
  iVar16 = iVar16 + iVar19;
  if (iVar11 <= iVar8) {
    iVar11 = iVar8;
  }
  iVar8 = iVar18;
  if (iVar16 <= iVar18) {
    iVar8 = iVar16;
  }
  if (iVar18 <= iVar16) {
    iVar18 = iVar16;
  }
  *(int *)(param_1 + 0x5b8) = iVar9;
  *(int *)(param_1 + 0x5bc) = iVar8;
  *(int *)(param_1 + 0x5c8) = iVar11;
  *(int *)(param_1 + 0x5cc) = iVar18;
  fVar25 = (float)iVar9 * 0.5;
  uVar10 = 0;
  if (fVar25 != (float)(int)fVar25) {
    uVar10 = (uint)(fVar25 < 0.0);
  }
  iVar22 = (int)fVar25 - uVar10;
  fVar25 = (float)iVar8 * 0.5;
  uVar10 = 0;
  if (fVar25 != (float)(int)fVar25) {
    uVar10 = (uint)(fVar25 < 0.0);
  }
  iVar8 = (int)fVar25 - uVar10;
  fVar25 = (float)iVar11 * 0.5;
  uVar10 = 0;
  if (fVar25 != (float)(int)fVar25) {
    uVar10 = (uint)(fVar25 < 0.0);
  }
  iVar16 = (int)fVar25 - uVar10;
  fVar25 = (float)iVar18 * 0.5;
  uVar10 = 0;
  if (fVar25 != (float)(int)fVar25) {
    uVar10 = (uint)(fVar25 < 0.0);
  }
  iVar19 = (int)fVar25 - uVar10;
  iVar11 = iVar22;
  if (iVar16 <= iVar22) {
    iVar11 = iVar16;
  }
  if (iVar22 <= iVar16) {
    iVar22 = iVar16;
  }
  iVar16 = iVar8;
  if (iVar19 <= iVar8) {
    iVar16 = iVar19;
  }
  if (iVar8 <= iVar19) {
    iVar8 = iVar19;
  }
  *(int *)(param_1 + 0x590) = iVar11;
  *(int *)(param_1 + 0x594) = iVar16;
  *(int *)(param_1 + 0x5a0) = iVar22;
  *(int *)(param_1 + 0x5a4) = iVar8;
  switch((*(uint *)(param_1 + 0x10) >> 0x1e | *(uint *)(param_1 + 0x10) << 2) ^ 2) {
  case 0:
    iVar11 = iVar22;
  case 3:
    iVar16 = iVar8;
    break;
  case 1:
    iVar11 = iVar22;
    break;
  case 2:
    break;
  default:
    goto switchD_02ad76ac_default;
  }
  *(int *)(param_1 + 0x5d8) = iVar11;
  *(int *)(param_1 + 0x5dc) = iVar16;
switchD_02ad76ac_default:
  FUN_02ad7c98(param_1,param_1 + 0x5e0);
  local_78 = 2;
  lVar14 = *(long *)(param_1 + 8);
  lVar13 = *(long *)(lVar14 + 0xd8);
  iVar8 = 0;
  if (lVar13 != 0) {
    if (*(char *)(lVar13 + 0x48) == '\0') {
      iVar8 = 0;
    }
    else {
      iVar8 = *(int *)(lVar13 + 0x38);
    }
  }
  lVar13 = *(long *)(lVar14 + 0xd8);
  iVar22 = 0;
  if (lVar13 != 0) {
    if (*(char *)(lVar13 + 0x48) == '\0') {
      iVar22 = 0;
    }
    else {
      iVar22 = *(int *)(lVar13 + 0x3c);
    }
  }
  lVar13 = *(long *)(lVar14 + 0xd8);
  iVar16 = 0;
  if (lVar13 != 0) {
    if (*(char *)(lVar13 + 0x48) == '\0') {
      iVar16 = 0;
    }
    else {
      iVar16 = *(int *)(lVar13 + 0x30);
    }
  }
  lVar13 = *(long *)(lVar14 + 0xd8);
  if ((lVar13 == 0) || (*(char *)(lVar13 + 0x48) == '\0')) {
    uVar10 = 0xffffffff;
  }
  else {
    uVar10 = ~*(uint *)(lVar13 + 0x40);
  }
  lVar13 = *(long *)(lVar14 + 0xd8);
  iVar11 = 0;
  if (lVar13 != 0) {
    if (*(char *)(lVar13 + 0x48) == '\0') {
      iVar11 = 0;
    }
    else {
      iVar11 = *(int *)(lVar13 + 0x34);
    }
  }
  local_74 = 2;
  lVar14 = *(long *)(lVar14 + 0xd8);
  if ((lVar14 == 0) || (*(char *)(lVar14 + 0x48) == '\0')) {
    uVar24 = 0xffffffff;
  }
  else {
    uVar24 = ~*(uint *)(lVar14 + 0x44);
  }
  uVar17 = (*(uint *)(param_1 + 0x10) >> 0x1e | *(uint *)(param_1 + 0x10) << 2) ^ 2;
  if (uVar17 < 4) {
    iVar16 = uVar10 + iVar16;
    iVar11 = uVar24 + iVar11;
    iVar19 = iVar11;
    iVar18 = iVar16;
    iVar9 = iVar8;
    switch(uVar17) {
    case 0:
      iVar19 = iVar22;
      iVar18 = iVar8;
      iVar9 = iVar16;
      iVar22 = iVar11;
      break;
    case 1:
      iVar19 = iVar16;
      iVar18 = iVar22;
      iVar9 = iVar11;
      iVar22 = iVar8;
      break;
    case 3:
      iVar19 = iVar8;
      iVar18 = iVar11;
      iVar9 = iVar22;
      iVar22 = iVar16;
    }
  }
  else {
    iVar19 = 0;
    iVar18 = 0;
    iVar9 = 0;
    iVar22 = 0;
  }
  fVar26 = (float)*(int *)(param_1 + 0x2c) * 10.0 + 2.5;
  fVar25 = (float)*(int *)(param_1 + 0x28) * 10.0 + 2.5;
  iVar8 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
  fVar27 = (float)*(int *)(param_1 + 0x3c) * 10.0 + 10.0 + -2.5;
  fVar25 = (float)*(int *)(param_1 + 0x38) * 10.0 + 10.0 + -2.5;
  iVar16 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
  iVar6 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
  iVar7 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
  iVar11 = iVar8;
  if (iVar6 <= iVar8) {
    iVar11 = iVar6;
  }
  if (iVar8 <= iVar6) {
    iVar8 = iVar6;
  }
  iVar11 = iVar11 - iVar9;
  iVar8 = iVar8 + iVar18;
  iVar18 = iVar16;
  if (iVar7 <= iVar16) {
    iVar18 = iVar7;
  }
  if (iVar16 <= iVar7) {
    iVar16 = iVar7;
  }
  iVar9 = iVar11;
  if (iVar8 <= iVar11) {
    iVar9 = iVar8;
  }
  iVar18 = iVar18 - iVar22;
  iVar16 = iVar16 + iVar19;
  if (iVar11 <= iVar8) {
    iVar11 = iVar8;
  }
  iVar8 = iVar18;
  if (iVar16 <= iVar18) {
    iVar8 = iVar16;
  }
  if (iVar18 <= iVar16) {
    iVar18 = iVar16;
  }
  *(int *)(param_1 + 0x628) = iVar9;
  *(int *)(param_1 + 0x62c) = iVar8;
  *(int *)(param_1 + 0x638) = iVar11;
  *(int *)(param_1 + 0x63c) = iVar18;
  fVar25 = (float)iVar9 * 0.5;
  uVar10 = 0;
  if (fVar25 != (float)(int)fVar25) {
    uVar10 = (uint)(fVar25 < 0.0);
  }
  iVar22 = (int)fVar25 - uVar10;
  fVar25 = (float)iVar8 * 0.5;
  uVar10 = 0;
  if (fVar25 != (float)(int)fVar25) {
    uVar10 = (uint)(fVar25 < 0.0);
  }
  iVar8 = (int)fVar25 - uVar10;
  fVar25 = (float)iVar11 * 0.5;
  uVar10 = 0;
  if (fVar25 != (float)(int)fVar25) {
    uVar10 = (uint)(fVar25 < 0.0);
  }
  iVar16 = (int)fVar25 - uVar10;
  fVar25 = (float)iVar18 * 0.5;
  uVar10 = 0;
  if (fVar25 != (float)(int)fVar25) {
    uVar10 = (uint)(fVar25 < 0.0);
  }
  iVar19 = (int)fVar25 - uVar10;
  iVar11 = iVar22;
  if (iVar16 <= iVar22) {
    iVar11 = iVar16;
  }
  if (iVar22 <= iVar16) {
    iVar22 = iVar16;
  }
  iVar16 = iVar8;
  if (iVar19 <= iVar8) {
    iVar16 = iVar19;
  }
  if (iVar8 <= iVar19) {
    iVar8 = iVar19;
  }
  *(int *)(param_1 + 0x600) = iVar11;
  *(int *)(param_1 + 0x604) = iVar16;
  *(int *)(param_1 + 0x610) = iVar22;
  *(int *)(param_1 + 0x614) = iVar8;
  switch((*(uint *)(param_1 + 0x10) >> 0x1e | *(uint *)(param_1 + 0x10) << 2) ^ 2) {
  case 0:
    iVar11 = iVar22;
  case 3:
    iVar16 = iVar8;
    break;
  case 1:
    iVar11 = iVar22;
    break;
  case 2:
    break;
  default:
    goto switchD_02ad7a74_default;
  }
  *(int *)(param_1 + 0x648) = iVar11;
  *(int *)(param_1 + 0x64c) = iVar16;
switchD_02ad7a74_default:
  FUN_02ad7c98(param_1,param_1 + 0x650);
  return;
}

