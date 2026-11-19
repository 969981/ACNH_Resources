
/* WARNING: Removing unreachable block (ram,0x038d6b78) */

void FUN_038d6820(long *param_1,long *param_2,short param_3,uint param_4)

{
  bool bVar1;
  ulong uVar2;
  short sVar3;
  short sVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  undefined2 uVar8;
  int iVar9;
  long lVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  ulong *puVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  long lVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint auStack_b0 [2];
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint uStack_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint uStack_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  
  uVar13 = *(uint *)((long)param_1 + 0x1c);
  if (((int)uVar13 < 0) && (*(uint *)((long)param_1 + 0x1c) = uVar13 + 0x10, uVar13 < 0xfffffff1)) {
    puVar14 = (ulong *)(param_1[2] + (long)(int)uVar13);
  }
  else {
    puVar14 = (ulong *)*param_1;
    *param_1 = (long)(puVar14 + 1);
  }
  uVar15 = *puVar14;
  uVar13 = (uint)(uVar15 >> 0x34) & 0x7ff;
  uVar16 = uVar15 & 0xfffffffffffff;
  if (uVar13 == 0x7ff) {
    *(undefined1 *)((long)param_1 + 0x2c) = 0;
    if (uVar16 == 0) {
      if ((long)uVar15 < 0) {
        FUN_038d7420(param_1,param_2,&DAT_0408eae2);
        return;
      }
      if ((*(uint *)(param_1 + 4) >> 1 & 1) != 0) {
        FUN_038d7420(param_1,param_2,&DAT_04069bc7);
        return;
      }
      if ((*(uint *)(param_1 + 4) >> 3 & 1) == 0) {
        FUN_038d7420(param_1,param_2,&DAT_040d191c);
        return;
      }
      FUN_038d7420(param_1,param_2,&DAT_040f1787);
      return;
    }
    if ((long)uVar15 < 0) {
      FUN_038d7420(param_1,param_2,&DAT_04083d75);
      return;
    }
    if ((*(uint *)(param_1 + 4) >> 1 & 1) != 0) {
      FUN_038d7420(param_1,param_2,&DAT_0407e5a0);
      return;
    }
    if ((*(uint *)(param_1 + 4) >> 3 & 1) == 0) {
      FUN_038d7420(param_1,param_2,&DAT_040b807e);
      return;
    }
    FUN_038d7420(param_1,param_2,&DAT_040e161f);
    return;
  }
  uVar19 = *(uint *)(param_1 + 5);
  if (0x1ff < uVar19) {
    uVar19 = 0x200;
  }
  uVar22 = 6;
  if (*(char *)((long)param_1 + 0x2c) != '\0') {
    uVar22 = uVar19;
  }
  if (uVar13 == 0) {
    if (uVar16 != 0) {
      uVar13 = 0x34;
      uVar16 = uVar16 << 0xb;
      do {
        uVar17 = uVar16 << 1;
        uVar13 = uVar13 - 1;
        uVar2 = uVar16 & 0x7fffffffffffffff;
        uVar16 = uVar17;
      } while (uVar2 >> 0x3e == 0);
      goto LAB_038d690c;
    }
    local_58 = 0;
    uVar19 = 1;
  }
  else {
    uVar13 = uVar13 + 0x33;
    uVar17 = uVar16 << 0xb | 0x8000000000000000;
LAB_038d690c:
    local_58 = 0;
    uVar19 = *(uint *)(&DAT_041a15c0 + (ulong)uVar13 * 0x18);
    do {
      if ((long)uVar17 < 0) {
        lVar26 = (long)(int)uVar19 - (long)*(int *)(&DAT_041a15c0 + (ulong)uVar13 * 0x18);
        iVar24 = (int)lVar26;
        if (iVar24 < 0x14) {
          do {
            lVar7 = ((ulong)uVar13 * 0x18 - (long)(iVar24 + 1)) + lVar26;
            lVar10 = lVar26 * 4;
            iVar25 = (int)lVar26;
            lVar26 = lVar26 + 1;
            *(uint *)(((ulong)&local_a8 | 4) + lVar10) =
                 *(int *)(((ulong)&local_a8 | 4) + lVar10) + (uint)(byte)(&UNK_041a15c5)[lVar7];
          } while (iVar25 != 0x13);
        }
        else if (4 < (byte)(&UNK_041a15d8)[(ulong)uVar13 * 0x18 - (long)iVar24]) {
          local_58 = local_58 + 1;
        }
      }
      uVar17 = uVar17 << 1;
      uVar13 = uVar13 - 1;
    } while (uVar17 != 0);
  }
  uVar13 = local_58 / 10;
  uVar27 = uVar13 / 10;
  uVar28 = uVar27 / 10;
  uVar29 = uVar28 / 10;
  local_58 = local_58 % 10;
  _local_60 = CONCAT44(uVar13 % 10,uVar27 % 10);
  uVar27 = uVar29 / 10;
  _local_68 = CONCAT44(uVar28 % 10,uVar29 % 10);
  uVar13 = uVar27 / 10;
  uVar28 = uVar13 / 10;
  _local_70 = CONCAT44(uVar27 % 10,uVar13 % 10);
  uVar27 = uVar28 / 10;
  uVar13 = uVar27 / 10;
  _local_78 = CONCAT44(uVar28 % 10,uVar27 % 10);
  _local_80 = CONCAT44(uVar13 % 10,(uVar13 / 10) % 10);
  local_88 = 0;
  local_90 = 0;
  local_98 = 0;
  local_a0 = 0;
  puVar18 = (uint *)((ulong)&local_a8 | 4);
  local_a8 = 0;
  puVar11 = puVar18;
  if (param_3 == 0x65) {
    uVar13 = uVar22 + 1;
LAB_038d6bbc:
    if (0x10 < (int)uVar13) {
      uVar13 = 0x11;
    }
    uVar16 = (ulong)uVar13;
    if (4 < puVar18[uVar16]) {
      puVar11 = puVar18 + (int)(uVar13 - 1);
      lVar26 = (long)(int)(uVar13 - 1);
      uVar27 = *puVar11 + 1;
      *puVar11 = uVar27;
      if (&local_a8 <= puVar11 && 9 < uVar27) {
        puVar11 = auStack_b0 + lVar26 + 2;
        do {
          uVar28 = uVar27 - 10;
          lVar26 = lVar26 + -1;
          uVar27 = *puVar11 + 1;
          *puVar11 = uVar27;
          puVar11[1] = uVar28;
          if (puVar11 < &local_a8) break;
          puVar11 = puVar11 + -1;
        } while (9 < uVar27);
      }
      if (lVar26 == -1) {
        uVar19 = uVar19 + 1;
        uVar13 = uVar13 + 1;
      }
      uVar16 = (ulong)uVar13;
      puVar11 = (uint *)&local_a8;
      if (lVar26 != -1) {
        puVar11 = puVar18;
      }
    }
joined_r0x038d6c60:
    puVar18 = puVar11;
    if ((long)uVar15 < 0) goto LAB_038d6c74;
LAB_038d6c64:
    if ((*(byte *)(param_1 + 4) & 10) != 0) goto LAB_038d6c74;
    iVar24 = 0;
  }
  else {
    if (param_3 != 0x66) {
      if (param_3 == 0x67) {
        uVar13 = uVar22;
        if ((int)uVar22 < 2) {
          uVar13 = 1;
        }
        goto LAB_038d6bbc;
      }
      uVar16 = 0;
      goto joined_r0x038d6c60;
    }
    uVar13 = uVar19 + uVar22;
    if (-1 < (int)uVar13) goto LAB_038d6bbc;
    uVar16 = 0;
    if (-1 < (long)uVar15) goto LAB_038d6c64;
LAB_038d6c74:
    iVar24 = 1;
  }
  uVar13 = (uint)uVar16;
  if (param_3 == 0x65) {
    uVar13 = uVar13 - 1;
    uVar27 = uVar22 - uVar13;
    if ((*(uint *)(param_1 + 4) & 0x10) == 0 && uVar22 == 0) {
LAB_038d6e3c:
      bVar1 = false;
      uVar28 = uVar27 + iVar24 + uVar13 + 6;
    }
    else {
LAB_038d6ce8:
      bVar1 = true;
      uVar28 = iVar24 + uVar27 + uVar13 + 7;
    }
    iVar25 = 0;
    uVar21 = 0;
    bVar5 = true;
    uVar16 = 1;
  }
  else {
    uVar27 = uVar19;
    if (param_3 == 0x67) {
      uVar28 = *(uint *)(param_1 + 4);
      if (((uVar28 >> 4 & 1) == 0) && (uVar13 != 0)) {
        do {
          if (puVar18[uVar16 - 1] != 0) break;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      uVar29 = (uint)uVar16;
      if (((int)uVar19 < -3) || ((int)uVar22 < (int)uVar19)) {
        uVar13 = uVar29 - 1;
        uVar27 = uVar22 - uVar29 & (int)(uVar28 << 0x1b) >> 0x1f;
        if ((1 < uVar22) || ((uVar28 >> 4 & 1) != 0)) goto LAB_038d6ce8;
        goto LAB_038d6e3c;
      }
      iVar25 = uVar19 - uVar29;
      if ((int)uVar19 < (int)uVar29) {
        uVar28 = uVar22 - uVar29 & (int)(uVar28 << 0x1b) >> 0x1f;
        if ((int)uVar19 < 1) {
          uVar22 = -uVar19;
          uVar13 = uVar29;
LAB_038d6f04:
          iVar25 = 1;
          uVar21 = uVar22;
          uVar27 = 0;
          uVar22 = uVar28;
        }
        else {
          iVar25 = 0;
          uVar21 = 0;
          uVar13 = uVar29 - uVar19;
          uVar22 = uVar28;
        }
        goto LAB_038d6f08;
      }
      iVar24 = iVar24 + uVar19;
      uVar27 = 0;
      uVar13 = uVar22 - uVar19;
      bVar1 = (int)uVar22 < (int)uVar19;
      uVar22 = uVar13;
      if (uVar13 == 0 || bVar1) {
        uVar22 = 0;
      }
      uVar13 = 0;
      uVar21 = 0;
      if ((uVar28 >> 4 & 1) != 0) goto LAB_038d6f20;
    }
    else {
      if (param_3 == 0x66) {
        uVar28 = uVar13 - uVar19;
        if (uVar28 == 0 || (int)uVar13 < (int)uVar19) {
          iVar25 = uVar19 - uVar13;
          iVar24 = iVar24 + uVar19;
          if ((*(uint *)(param_1 + 4) & 0x10) == 0 && uVar22 == 0) {
            uVar27 = uVar22;
            goto LAB_038d6d7c;
          }
          uVar13 = 0;
          uVar21 = 0;
        }
        else {
          if ((int)uVar19 < 0) {
            if ((int)uVar22 <= (int)-uVar19) {
              uVar28 = 0;
              uVar13 = 0;
              goto LAB_038d6f04;
            }
            uVar29 = (uVar19 + uVar22) - uVar13;
            if (uVar22 <= uVar28) {
              uVar13 = uVar19 + uVar22;
            }
            iVar25 = 1;
            if (uVar22 <= uVar28) {
              uVar29 = 0;
            }
            uVar21 = -uVar19;
            uVar27 = 0;
            uVar22 = uVar29;
          }
          else {
            iVar25 = 0;
            uVar21 = 0;
            uVar22 = (uVar19 + uVar22) - uVar13;
            uVar13 = uVar28;
          }
LAB_038d6f08:
          iVar24 = uVar27 + iVar24 + iVar25;
          uVar16 = (ulong)uVar27;
        }
LAB_038d6f20:
        bVar5 = false;
        bVar1 = true;
        uVar28 = iVar24 + uVar21 + uVar22 + uVar13 + 1;
        uVar27 = uVar22;
        goto LAB_038d6f3c;
      }
      uVar27 = 0;
      iVar25 = 0;
      uVar16 = 0;
    }
LAB_038d6d7c:
    bVar5 = false;
    bVar1 = false;
    uVar21 = 0;
    uVar13 = 0;
    uVar28 = iVar24 + uVar27;
  }
LAB_038d6f3c:
  iVar24 = *(uint *)((long)param_1 + 0x24) - uVar28;
  iVar20 = (int)uVar16;
  if (*(uint *)((long)param_1 + 0x24) < uVar28 || iVar24 == 0) {
    iVar24 = 0;
LAB_038d6f74:
    iVar9 = iVar24;
    iVar24 = 0;
LAB_038d6f84:
    bVar6 = iVar25 + iVar20 + iVar9 == 0;
    iVar23 = iVar24;
LAB_038d6f90:
    iVar12 = 0;
    iVar24 = 0;
  }
  else {
    if ((*(uint *)(param_1 + 4) & 1) != 0) {
      iVar9 = 0;
      goto LAB_038d6f84;
    }
    if ((*(uint *)(param_1 + 4) >> 2 & 1) != 0) goto LAB_038d6f74;
    bVar6 = iVar20 + iVar25 == 0;
    iVar23 = 0;
    if (iVar24 == 0) {
      iVar9 = 0;
      goto LAB_038d6f90;
    }
    iVar12 = iVar24 + -1;
    iVar9 = 0;
  }
  if (bVar6) {
    iVar25 = 1;
  }
  else {
    iVar12 = iVar24;
  }
  if (iVar12 != 0) {
    iVar24 = *(int *)((long)param_2 + 0xc);
    do {
      if ((int)param_2[1] <= iVar24) {
        *(undefined1 *)(param_2 + 2) = 1;
        break;
      }
      iVar12 = iVar12 + -1;
      *(undefined2 *)(*param_2 + (long)iVar24 * 2) = 0x20;
      iVar24 = *(int *)((long)param_2 + 0xc) + 1;
      *(int *)((long)param_2 + 0xc) = iVar24;
    } while (iVar12 != 0);
  }
  if ((long)uVar15 < 0) {
    lVar26 = (long)*(int *)((long)param_2 + 0xc);
    if (*(int *)((long)param_2 + 0xc) < (int)param_2[1]) {
      lVar7 = *param_2;
      uVar8 = 0x2d;
      goto LAB_038d7048;
    }
LAB_038d7060:
    *(undefined1 *)(param_2 + 2) = 1;
  }
  else {
    if ((*(uint *)(param_1 + 4) >> 1 & 1) == 0) {
      if ((*(uint *)(param_1 + 4) >> 3 & 1) == 0) goto joined_r0x038d7068;
      lVar26 = (long)*(int *)((long)param_2 + 0xc);
      if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) goto LAB_038d7060;
      lVar7 = *param_2;
      uVar8 = 0x20;
    }
    else {
      lVar26 = (long)*(int *)((long)param_2 + 0xc);
      if ((int)param_2[1] <= *(int *)((long)param_2 + 0xc)) goto LAB_038d7060;
      lVar7 = *param_2;
      uVar8 = 0x2b;
    }
LAB_038d7048:
    *(undefined2 *)(lVar7 + lVar26 * 2) = uVar8;
    *(int *)((long)param_2 + 0xc) = *(int *)((long)param_2 + 0xc) + 1;
  }
joined_r0x038d7068:
  if (iVar9 != 0) {
    iVar24 = *(int *)((long)param_2 + 0xc);
    do {
      if ((int)param_2[1] <= iVar24) {
        *(undefined1 *)(param_2 + 2) = 1;
        break;
      }
      iVar9 = iVar9 + -1;
      *(undefined2 *)(*param_2 + (long)iVar24 * 2) = 0x30;
      iVar24 = *(int *)((long)param_2 + 0xc) + 1;
      *(int *)((long)param_2 + 0xc) = iVar24;
    } while (iVar9 != 0);
  }
  if (iVar20 != 0) {
    iVar24 = *(int *)((long)param_2 + 0xc);
    uVar15 = uVar16 & 0xffffffff;
    puVar11 = puVar18;
    do {
      if (iVar24 < (int)param_2[1]) {
        *(short *)(*param_2 + (long)iVar24 * 2) = (short)*puVar11 + 0x30;
        iVar24 = *(int *)((long)param_2 + 0xc) + 1;
        *(int *)((long)param_2 + 0xc) = iVar24;
      }
      else {
        *(undefined1 *)(param_2 + 2) = 1;
      }
      uVar15 = uVar15 - 1;
      puVar11 = puVar11 + 1;
    } while (uVar15 != 0);
  }
  if (iVar25 != 0) {
    iVar24 = *(int *)((long)param_2 + 0xc);
    do {
      if ((int)param_2[1] <= iVar24) {
        *(undefined1 *)(param_2 + 2) = 1;
        break;
      }
      iVar25 = iVar25 + -1;
      *(undefined2 *)(*param_2 + (long)iVar24 * 2) = 0x30;
      iVar24 = *(int *)((long)param_2 + 0xc) + 1;
      *(int *)((long)param_2 + 0xc) = iVar24;
    } while (iVar25 != 0);
  }
  if (bVar1) {
    if (*(int *)((long)param_2 + 0xc) < (int)param_2[1]) {
      *(undefined2 *)(*param_2 + (long)*(int *)((long)param_2 + 0xc) * 2) = 0x2e;
      *(int *)((long)param_2 + 0xc) = *(int *)((long)param_2 + 0xc) + 1;
    }
    else {
      *(undefined1 *)(param_2 + 2) = 1;
    }
  }
  if (uVar21 != 0) {
    iVar24 = *(int *)((long)param_2 + 0xc);
    do {
      if ((int)param_2[1] <= iVar24) {
        *(undefined1 *)(param_2 + 2) = 1;
        break;
      }
      uVar21 = uVar21 - 1;
      *(undefined2 *)(*param_2 + (long)iVar24 * 2) = 0x30;
      iVar24 = *(int *)((long)param_2 + 0xc) + 1;
      *(int *)((long)param_2 + 0xc) = iVar24;
    } while (uVar21 != 0);
  }
  if (uVar13 != 0) {
    iVar24 = *(int *)((long)param_2 + 0xc);
    uVar15 = (ulong)uVar13;
    do {
      if (iVar24 < (int)param_2[1]) {
        *(short *)(*param_2 + (long)iVar24 * 2) = (short)puVar18[uVar16 & 0xffffffff] + 0x30;
        iVar24 = *(int *)((long)param_2 + 0xc) + 1;
        *(int *)((long)param_2 + 0xc) = iVar24;
      }
      else {
        *(undefined1 *)(param_2 + 2) = 1;
      }
      uVar15 = uVar15 - 1;
      uVar16 = (ulong)((int)uVar16 + 1);
    } while (uVar15 != 0);
  }
  if (uVar27 != 0) {
    iVar24 = *(int *)((long)param_2 + 0xc);
    do {
      if ((int)param_2[1] <= iVar24) {
        *(undefined1 *)(param_2 + 2) = 1;
        break;
      }
      uVar27 = uVar27 - 1;
      *(undefined2 *)(*param_2 + (long)iVar24 * 2) = 0x30;
      iVar24 = *(int *)((long)param_2 + 0xc) + 1;
      *(int *)((long)param_2 + 0xc) = iVar24;
    } while (uVar27 != 0);
  }
  if (!bVar5) goto joined_r0x038d73b8;
  iVar25 = (int)param_2[1];
  iVar24 = *(int *)((long)param_2 + 0xc);
  if (iVar24 < iVar25) {
    uVar8 = 0x45;
    if ((param_4 & 1) == 0) {
      uVar8 = 0x65;
    }
    *(undefined2 *)(*param_2 + (long)iVar24 * 2) = uVar8;
    iVar25 = (int)param_2[1];
    iVar24 = *(int *)((long)param_2 + 0xc) + 1;
    *(int *)((long)param_2 + 0xc) = iVar24;
  }
  else {
    *(undefined1 *)(param_2 + 2) = 1;
  }
  uVar13 = uVar19 - 1;
  if ((int)uVar19 < 1) {
    uVar13 = 1 - uVar19;
  }
  if (iVar24 < iVar25) {
    uVar8 = 0x2b;
    if ((int)uVar19 < 1) {
      uVar8 = 0x2d;
    }
    *(undefined2 *)(*param_2 + (long)iVar24 * 2) = uVar8;
    iVar25 = (int)param_2[1];
    iVar24 = *(int *)((long)param_2 + 0xc) + 1;
    *(int *)((long)param_2 + 0xc) = iVar24;
  }
  else {
    *(undefined1 *)(param_2 + 2) = 1;
  }
  sVar3 = (short)(uVar13 / 100);
  sVar4 = (short)(uVar13 / 10);
  if (iVar24 < iVar25) {
    *(short *)(*param_2 + (long)iVar24 * 2) = sVar3 + (short)(uVar13 / 1000) * -10 + 0x30;
    iVar25 = (int)param_2[1];
    iVar24 = *(int *)((long)param_2 + 0xc) + 1;
    *(int *)((long)param_2 + 0xc) = iVar24;
    if (iVar24 < iVar25) goto LAB_038d7378;
LAB_038d734c:
    *(undefined1 *)(param_2 + 2) = 1;
    if (iVar25 <= iVar24) {
LAB_038d735c:
      *(undefined1 *)(param_2 + 2) = 1;
      goto joined_r0x038d73b8;
    }
  }
  else {
    *(undefined1 *)(param_2 + 2) = 1;
    if (iVar25 <= iVar24) goto LAB_038d734c;
LAB_038d7378:
    *(short *)(*param_2 + (long)iVar24 * 2) = sVar4 + sVar3 * -10 + 0x30;
    iVar24 = *(int *)((long)param_2 + 0xc) + 1;
    *(int *)((long)param_2 + 0xc) = iVar24;
    if ((int)param_2[1] <= iVar24) goto LAB_038d735c;
  }
  *(short *)(*param_2 + (long)iVar24 * 2) = (short)uVar13 + sVar4 * -10 + 0x30;
  *(int *)((long)param_2 + 0xc) = *(int *)((long)param_2 + 0xc) + 1;
joined_r0x038d73b8:
  if (iVar23 != 0) {
    iVar24 = *(int *)((long)param_2 + 0xc);
    do {
      if ((int)param_2[1] <= iVar24) {
        *(undefined1 *)(param_2 + 2) = 1;
        return;
      }
      iVar23 = iVar23 + -1;
      *(undefined2 *)(*param_2 + (long)iVar24 * 2) = 0x20;
      iVar24 = *(int *)((long)param_2 + 0xc) + 1;
      *(int *)((long)param_2 + 0xc) = iVar24;
    } while (iVar23 != 0);
  }
  return;
}

