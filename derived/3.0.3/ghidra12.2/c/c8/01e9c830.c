
undefined8 FUN_01e9c830(long param_1,float *param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  char cVar8;
  undefined8 uVar9;
  long lVar10;
  uint *puVar11;
  ulong uVar12;
  int *piVar13;
  float *pfVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined4 local_48 [2];
  undefined1 auStack_40 [8];
  uint *local_38;
  
  if (5 < *param_3) {
    return 1;
  }
  switch(*param_3) {
  case 0:
    fVar17 = *(float *)(param_1 + 0xeca4);
    pfVar14 = (float *)(param_1 + 0xee00);
    fVar18 = *(float *)(param_1 + 0xecec);
    fVar21 = *(float *)(param_1 + 0xedc4);
    fVar22 = *(float *)(param_1 + 0xed7c);
    fVar20 = *(float *)(param_1 + 0xee0c);
    fVar23 = *(float *)(param_1 + 0xee54);
    fVar24 = *(float *)(param_1 + 0xee9c);
    iVar16 = -(uint)(3.4028235e+38 <= fVar17 || fVar17 <= 0.0);
    fVar15 = 3.4028235e+38;
    if (3.4028235e+38 > fVar17 && fVar17 > 0.0) {
      fVar15 = fVar17;
    }
    if (0.0 < fVar18 && fVar18 < fVar15) {
      iVar16 = 1;
      fVar15 = fVar18;
    }
    fVar17 = fVar21;
    if (fVar21 <= 0.0 || fVar15 <= fVar21) {
      fVar17 = fVar15;
    }
    iVar19 = 2;
    if (fVar21 <= 0.0 || fVar15 <= fVar21) {
      iVar19 = iVar16;
    }
    fVar15 = fVar22;
    if (fVar22 <= 0.0 || fVar17 <= fVar22) {
      fVar15 = fVar17;
    }
    iVar16 = 3;
    if (fVar22 <= 0.0 || fVar17 <= fVar22) {
      iVar16 = iVar19;
    }
    fVar17 = fVar20;
    if (fVar20 <= 0.0 || fVar15 <= fVar20) {
      fVar17 = fVar15;
    }
    iVar19 = 4;
    if (fVar20 <= 0.0 || fVar15 <= fVar20) {
      iVar19 = iVar16;
    }
    fVar15 = fVar23;
    if (fVar23 <= 0.0 || fVar17 <= fVar23) {
      fVar15 = fVar17;
    }
    iVar16 = 5;
    if (fVar23 <= 0.0 || fVar17 <= fVar23) {
      iVar16 = iVar19;
    }
    bVar5 = false;
    bVar6 = true;
    bVar7 = false;
    if (fVar24 < fVar15) {
      bVar5 = false;
      bVar6 = false;
      bVar7 = true;
      if (!NAN(fVar24)) {
        bVar5 = fVar24 < 0.0;
        bVar6 = fVar24 == 0.0;
        bVar7 = false;
      }
    }
    iVar19 = 6;
    if (bVar6 || bVar5 != bVar7) {
      iVar19 = iVar16;
    }
    switch(iVar19) {
    case 0:
      lVar10 = param_1 + 0xec70;
      FUN_01ad5d04(local_48,param_1 + 0xeca8);
      fVar15 = (float)FUN_01ae8c70(local_48);
      fVar15 = fVar15 * 0.5;
      break;
    case 1:
      FUN_0124c030(local_48,param_1 + 0xecf0);
      uVar12 = FUN_0124d8e4(local_48,0);
      if ((uVar12 & 1) == 0) {
        iVar16 = FUN_0123db50(auStack_40,local_38);
        if ((iVar16 - 0xbU < 7) && (cVar8 = FUN_0124dff0(local_48), cVar8 != '\0')) {
          fVar15 = 2.5;
        }
        else {
          iVar16 = FUN_0123db50(auStack_40,local_38);
          fVar15 = 0.0;
          if (iVar16 - 0x18U < 7) {
            uVar12 = FUN_0124dff0(local_48);
            fVar15 = 5.0;
            if ((uVar12 & 0xfe) == 0) {
              fVar15 = 0.0;
            }
          }
        }
      }
      else {
        fVar15 = 5.0;
      }
      lVar10 = 0xecb8;
      goto LAB_01e9ce0c;
    case 2:
      lVar10 = 0xed90;
      fVar15 = 0.0;
LAB_01e9ce0c:
      lVar10 = param_1 + lVar10;
      break;
    case 3:
      lVar10 = param_1 + 0xed48;
      fVar15 = (float)FUN_02201b50(param_1 + 0xed80);
      break;
    case 4:
      fVar15 = 7.5;
      goto LAB_01e9cd74;
    case 5:
      pfVar14 = (float *)(param_1 + 61000);
      fVar15 = (float)FUN_015cb8d4(pfVar14,0);
      goto LAB_01e9cd64;
    case 6:
      fVar15 = *(float *)(param_1 + 0xee94);
      pfVar14 = (float *)(param_1 + 0xee90);
LAB_01e9cd64:
      fVar17 = (float)FUN_0097a900(pfVar14,0);
      fVar15 = fVar15 - fVar17;
LAB_01e9cd74:
      *param_2 = *pfVar14;
      param_2[1] = pfVar14[1];
      fVar17 = pfVar14[2];
      goto LAB_01e9ce60;
    default:
      goto LAB_01e9ccbc;
    }
    if (param_2 != (float *)0x0) {
      iVar19 = *(int *)(lVar10 + 0x24);
      iVar16 = *(int *)(lVar10 + 0x14);
      *param_2 = ((float)*(int *)(lVar10 + 0x10) * 5.0 + (float)*(int *)(lVar10 + 0x20) * 5.0 + 5.0)
                 * 0.5;
      fVar17 = ((float)iVar16 * 5.0 + (float)iVar19 * 5.0 + 5.0) * 0.5;
LAB_01e9ce60:
      param_2[2] = fVar17;
    }
    lVar10 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar10 == 0) || (*(long *)(lVar10 + 0xa8) == 0)) || (*(char *)(lVar10 + 0x11c8) != '\0'))
    {
      fVar17 = -500.0;
    }
    else {
      fVar17 = (float)FUN_0093a950(lVar10 + 0x28,param_2,0);
    }
    fVar15 = fVar15 + fVar17;
    uVar9 = 1;
    goto LAB_01e9ccb0;
  default:
    fVar17 = *(float *)(param_1 + 0xed34);
    fVar15 = *(float *)(param_1 + 0xedc4);
    if (fVar17 <= 0.0) {
code_r0x01e9c99c:
      if (fVar15 <= 0.0) {
LAB_01e9ccbc:
        return 1;
      }
      fVar15 = 0.0;
      param_1 = param_1 + 0xed90;
    }
    else {
      bVar5 = true;
      if ((0.0 <= fVar15) && (bVar5 = false, !NAN(fVar17) && !NAN(fVar15))) {
        bVar5 = fVar17 < fVar15;
      }
      if (!bVar5) goto code_r0x01e9c99c;
      FUN_0124c030(local_48,param_1 + 0xed38);
      puVar4 = PTR_DAT_04bbbc78;
      puVar3 = PTR_DAT_04bbbc70;
      fVar15 = 0.0;
      if ((local_38 != (uint *)0x0) && (uVar1 = *local_38, uVar1 != 0)) {
        cVar8 = *PTR_DAT_04bbbc70;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
            *(undefined8 *)puVar4 = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
            *puVar3 = 1;
            *(undefined4 *)(puVar4 + 0x60) = 0xffffffff;
            *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
            uVar1 = *local_38;
          }
          else {
            uVar2 = *(uint *)puVar4;
            if (-1 < (int)uVar2) {
              if ((float *)((ulong)uVar2 + (long)local_38) != (float *)0x0) {
                fVar15 = *(float *)((ulong)uVar2 + (long)local_38) * 0.5;
              }
              break;
            }
            if (uVar2 != 0xffffffff) break;
          }
          puVar11 = (uint *)(ulong)uVar1;
          if ((puVar11 == (uint *)0x0) || (local_38 == puVar11)) break;
          lVar10 = 0xc;
          if (*(char *)((long)local_38 + (10 - (long)puVar11)) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)local_38 + (lVar10 - (long)puVar11);
          if (lVar10 == 0) break;
          uVar12 = (ulong)*(ushort *)((long)local_38 + (8 - (long)puVar11));
          *(undefined4 *)puVar4 = 0xfffffffe;
          if (uVar12 == 0) break;
          piVar13 = (int *)(lVar10 + 4);
          while (piVar13[-1] != 0xc315945) {
            piVar13 = piVar13 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) goto LAB_01e9cec4;
          }
          iVar16 = 0;
          if (*piVar13 != -1) {
            iVar16 = *piVar13;
          }
          *(int *)puVar4 = iVar16;
          uVar1 = *local_38;
          if (uVar1 == 0) break;
        } while( true );
      }
LAB_01e9cec4:
      param_1 = param_1 + 0xed00;
    }
    if (param_2 != (float *)0x0) {
      iVar19 = *(int *)(param_1 + 0x24);
      iVar16 = *(int *)(param_1 + 0x14);
      *param_2 = ((float)*(int *)(param_1 + 0x10) * 5.0 +
                 (float)*(int *)(param_1 + 0x20) * 5.0 + 5.0) * 0.5;
      param_2[2] = ((float)iVar16 * 5.0 + (float)iVar19 * 5.0 + 5.0) * 0.5;
    }
    lVar10 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar10 == 0) || (*(long *)(lVar10 + 0xa8) == 0)) || (*(char *)(lVar10 + 0x11c8) != '\0'))
    {
      fVar17 = -500.0;
    }
    else {
      fVar17 = (float)FUN_0093a950(lVar10 + 0x28,param_2,0);
    }
    fVar15 = fVar15 + fVar17;
    break;
  case 3:
    *param_2 = *(float *)(param_1 + 0x7830);
    param_2[1] = *(float *)(param_1 + 0x7834);
    param_2[2] = *(float *)(param_1 + 0x7838);
    return 0;
  case 4:
    if ((param_4 & 1) == 0) {
      return 1;
    }
    *param_2 = *(float *)(param_1 + 0xa9f0);
    param_2[1] = *(float *)(param_1 + 0xa9f4);
    param_2[2] = *(float *)(param_1 + 0xa9f8);
    lVar10 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar10 == 0) || (*(long *)(lVar10 + 0xa8) == 0)) || (*(char *)(lVar10 + 0x11c8) != '\0'))
    {
      fVar15 = -500.0;
    }
    else {
      fVar15 = (float)FUN_0093a950(lVar10 + 0x28,param_2,0);
    }
    break;
  case 5:
    local_48[0] = 0;
    if (*(int *)(*(long *)(param_1 + 0x10) + 0x360) != 0) {
      return 1;
    }
    lVar10 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    fVar15 = (float)(*(uint *)(lVar10 + 0x2b4) & 0xffffff);
    pfVar14 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar10 + 0x2b4) >> 0x14) & 0xff0));
    fVar18 = pfVar14[2];
    fVar21 = pfVar14[3];
    fVar22 = *(float *)(lVar10 + 0x27c);
    fVar17 = *(float *)(lVar10 + 0x280);
    *param_2 = *(float *)(lVar10 + 0x278) + (*pfVar14 + pfVar14[1] * fVar15 * 5.9604645e-08) * 29.9;
    param_2[1] = fVar22 + 0.0;
    param_2[2] = fVar17 + (fVar18 + fVar21 * fVar15 * 5.9604645e-08) * 29.9;
    fVar15 = (float)FUN_015cb8d4(param_2,0);
  }
  uVar9 = 0;
LAB_01e9ccb0:
  param_2[1] = fVar15;
  return uVar9;
}

