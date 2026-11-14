
/* WARNING: Removing unreachable block (ram,0x01aecae8) */

undefined8 FUN_01aec970(long param_1,long param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  byte bVar4;
  char *__src;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  char *pcVar13;
  ulong uVar14;
  uint *puVar15;
  ulong uVar16;
  byte bVar17;
  char cVar18;
  undefined *local_1a8;
  byte *local_1a0;
  int local_198;
  byte local_194 [7];
  undefined1 local_18d;
  undefined1 local_115;
  undefined *local_110;
  char *local_108;
  undefined *local_100;
  char *local_f8;
  int local_f0;
  char local_ec [127];
  undefined1 local_6d;
  
  puVar2 = PTR_DAT_04bbfe90;
  puVar3 = PTR_DAT_04bbfe88;
  puVar15 = *(uint **)(param_1 + 0x10);
  local_100 = (undefined *)CONCAT44(local_100._4_4_,0x74);
  if (puVar15 == (uint *)0x0) {
    return 0;
  }
  uVar6 = *puVar15;
  if (uVar6 == 0 || puVar15 == (uint *)(ulong)uVar6) {
LAB_01aec9b4:
    uVar6 = 0;
  }
  else {
    puVar12 = (uint *)((long)puVar15 - (long)(ulong)uVar6);
    uVar6 = 0;
    if (*puVar12 != 0) {
      uVar6 = puVar12[1];
      if ((uVar6 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
        lVar8 = 0xc;
        if (*(char *)((long)puVar12 + 10) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar12 + lVar8 + (ulong)(ushort)puVar12[2] * 8;
        if (lVar8 != 0) {
          uVar1 = 0;
          if ((ulong)uVar6 != 0) {
            uVar1 = (uint)((ulong)((long)puVar15 - lVar8) / (ulong)uVar6);
          }
          if (*puVar12 <= uVar1) {
            uVar1 = 0xffffffff;
          }
          if ((uVar1 < *(uint *)PTR_DAT_04bc00c8) &&
             (uVar6 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2),
             uVar6 < 0xbd)) goto LAB_01aec9b8;
        }
      }
      goto LAB_01aec9b4;
    }
  }
LAB_01aec9b8:
  local_1a8 = (undefined *)CONCAT44(local_1a8._4_4_,uVar6);
  if (uVar6 != 0x74) {
    return 0;
  }
  uVar6 = *puVar15;
  if (uVar6 != 0) {
    cVar18 = *PTR_DAT_04bbfe88;
    do {
      if (cVar18 == '\0') {
        cVar18 = '\x01';
        *puVar3 = 1;
        memset(puVar2,0xff,0x1ac);
        uVar6 = *puVar15;
      }
      else {
        uVar1 = *(uint *)(puVar2 + 0x18c);
        if (-1 < (int)uVar1) {
          pcVar13 = (char *)((ulong)uVar1 + (long)puVar15);
          goto LAB_01aecab8;
        }
        if (uVar1 != 0xffffffff) break;
      }
      puVar12 = (uint *)(ulong)uVar6;
      pcVar13 = (char *)0x0;
      if ((puVar12 == (uint *)0x0) || (pcVar13 = (char *)0x0, puVar15 == puVar12))
      goto LAB_01aecab8;
      lVar8 = 0xc;
      if (*(char *)((long)puVar15 + (10 - (long)puVar12)) != '\0') {
        lVar8 = 0x1c;
      }
      lVar8 = (long)puVar15 + (lVar8 - (long)puVar12);
      pcVar13 = (char *)0x0;
      if (lVar8 == 0) goto LAB_01aecab8;
      uVar14 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar12));
      *(undefined4 *)(puVar2 + 0x18c) = 0xfffffffe;
      if (uVar14 == 0) break;
      piVar11 = (int *)(lVar8 + 4);
      while (piVar11[-1] != 0x3febc642) {
        piVar11 = piVar11 + 2;
        uVar14 = uVar14 - 1;
        if (uVar14 == 0) goto LAB_01aecab4;
      }
      iVar7 = 0;
      if (*piVar11 != -1) {
        iVar7 = *piVar11;
      }
      *(int *)(puVar2 + 0x18c) = iVar7;
      uVar6 = *puVar15;
      if (uVar6 == 0) break;
    } while( true );
  }
LAB_01aecab4:
  pcVar13 = (char *)0x0;
LAB_01aecab8:
  __src = *(char **)PTR_PTR_04bc0008;
  if (pcVar13 != (char *)0x0) {
    __src = pcVar13;
  }
  local_6d = 0;
  local_f0 = 0x80;
  local_100 = PTR_DAT_04bb2e90 + 0x10;
  local_f8 = local_ec;
  if (local_ec != __src) {
    lVar8 = 0;
    do {
      if (__src[lVar8] == '\0') {
LAB_01aecbdc:
        iVar7 = (int)lVar8;
joined_r0x01aecbe0:
        if (0x7f < iVar7) {
          iVar7 = 0x7f;
        }
        goto LAB_01aecbe8;
      }
      if (__src[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_01aecbdc;
      }
      if (__src[lVar8 + 2] == '\0') {
        iVar7 = (int)lVar8 + 2;
        goto joined_r0x01aecbe0;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    iVar7 = 0;
LAB_01aecbe8:
    memcpy(local_ec,__src,(long)iVar7);
    local_ec[iVar7] = '\0';
    __src = local_f8;
  }
  puVar3 = PTR_DAT_04bb2d88;
  local_100 = PTR_DAT_04bb2d88 + 0x10;
  if (*__src != 'B') {
    return 0;
  }
  if (__src[1] != 'r') {
    return 0;
  }
  if (__src[2] != 'o') {
    return 0;
  }
  if (__src[3] != 'm') {
    return 0;
  }
  if (__src[4] != 'i') {
    return 0;
  }
  if (__src[5] != 'd') {
    return 0;
  }
  if (__src[6] != 'e') {
    return 0;
  }
  if (__src[7] != 'N') {
    return 0;
  }
  if (__src[8] != 'p') {
    return 0;
  }
  if (__src[9] != 'c') {
    return 0;
  }
  lVar8 = 0;
  __src[(long)local_f0 + -1] = '\0';
  do {
    if (local_f8[lVar8] == '\0') {
LAB_01aeccf4:
      if (9 < (int)lVar8) {
        pcVar13 = local_f8 + 10;
        goto LAB_01aecd10;
      }
      break;
    }
    if (local_f8[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_01aeccf4;
    }
    if (local_f8[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_01aeccf4;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  pcVar13 = *(char **)(PTR_PTR_04bb2238 + 8);
LAB_01aecd10:
  if (*pcVar13 == 'S') {
    if (pcVar13[1] != 'p') {
      return 0;
    }
    lVar8 = 0;
    do {
      if (pcVar13[lVar8] == '\0') {
LAB_01aecdd8:
        if (1 < (int)lVar8) {
          local_108 = pcVar13 + 2;
          goto LAB_01aecdf4;
        }
        break;
      }
      if (pcVar13[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_01aecdd8;
      }
      if (pcVar13[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_01aecdd8;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    local_108 = *(char **)(PTR_PTR_04bb2238 + 8);
LAB_01aecdf4:
    *param_3 = 1;
    puVar2 = PTR_DAT_04bb2120;
    lVar8 = 0;
    local_198 = 0x80;
    local_115 = 0;
    local_1a0 = local_194;
    local_194[0] = 0;
    local_110 = PTR_DAT_04bb2020 + 0x10;
    local_1a8 = puVar3 + 0x10;
    do {
      if (local_108[lVar8] == '\0') {
LAB_01aece6c:
        iVar7 = (int)lVar8 + 1;
        if ((int)lVar8 == -1) goto LAB_01aed008;
        goto LAB_01aece7c;
      }
      if (local_108[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_01aece6c;
      }
      if (local_108[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_01aece6c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    iVar7 = 1;
LAB_01aece7c:
    uVar14 = 0;
    uVar6 = 0;
    uVar16 = 0;
    do {
      (**(code **)(local_110 + 0x18))(&local_110);
      lVar8 = 0;
      do {
        if (local_108[lVar8] == '\0') goto LAB_01aecf08;
        if (local_108[lVar8 + 1] == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_01aecf08;
        }
        if (local_108[lVar8 + 2] == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_01aecf08;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_01aecf08:
      pbVar5 = puVar2;
      if ((int)uVar14 <= (int)lVar8 && -1 < (int)uVar14) {
        pbVar5 = (byte *)(local_108 + uVar16);
      }
      bVar17 = *pbVar5;
      if (uVar6 < 3) {
        bVar4 = bVar17 + 0x20;
        if (0x19 < bVar17 - 0x41) {
          bVar4 = bVar17;
        }
        bVar17 = bVar4;
        (**(code **)(local_1a8 + 0x18))(&local_1a8);
        lVar8 = 0;
        do {
          if (local_1a0[lVar8] == 0) goto LAB_01aecfd8;
          if (local_1a0[lVar8 + 1] == 0) {
            lVar8 = lVar8 + 1;
            goto LAB_01aecfd8;
          }
          if (local_1a0[lVar8 + 2] == 0) {
            lVar8 = lVar8 + 2;
            goto LAB_01aecfd8;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_01aecfd8:
        iVar10 = (int)lVar8;
        if (iVar10 < local_198 + -1) {
LAB_01aece94:
          local_1a0[iVar10] = bVar17;
          (local_1a0 + iVar10)[1] = 0;
        }
      }
      else {
        (**(code **)(local_1a8 + 0x18))(&local_1a8);
        lVar8 = 0;
        do {
          if (local_1a0[lVar8] == 0) goto LAB_01aecff0;
          if (local_1a0[lVar8 + 1] == 0) {
            lVar8 = lVar8 + 1;
            goto LAB_01aecff0;
          }
          if (local_1a0[lVar8 + 2] == 0) {
            lVar8 = lVar8 + 2;
            goto LAB_01aecff0;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_01aecff0:
        iVar10 = (int)lVar8;
        if (iVar10 < local_198 + -1) goto LAB_01aece94;
      }
      uVar14 = uVar16 + 1;
      uVar6 = uVar6 + 1;
      uVar16 = uVar14 & 0xffffffff;
    } while (iVar7 != (int)uVar14);
LAB_01aed008:
    (**(code **)(local_1a8 + 0x18))(&local_1a8);
    pbVar5 = *(byte **)(param_2 + 8);
    if (pbVar5 == local_1a0) {
      return 1;
    }
    lVar8 = 0;
    do {
      if (local_1a0[lVar8] == 0) goto LAB_01aed21c;
      if (local_1a0[lVar8 + 1] == 0) goto LAB_01aed210;
      if (local_1a0[lVar8 + 2] == 0) goto LAB_01aed218;
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
  }
  else {
    if (*pcVar13 != 'N') {
      return 0;
    }
    if (pcVar13[1] != 'm') {
      return 0;
    }
    if (pcVar13[2] != 'l') {
      return 0;
    }
    lVar8 = 0;
    do {
      if (pcVar13[lVar8] == '\0') {
LAB_01aed064:
        if (2 < (int)lVar8) {
          pbVar5 = (byte *)(pcVar13 + 3);
          goto LAB_01aed080;
        }
        break;
      }
      if (pcVar13[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_01aed064;
      }
      if (pcVar13[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_01aed064;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    pbVar5 = *(byte **)(PTR_PTR_04bb2238 + 8);
LAB_01aed080:
    *param_3 = 0;
    local_18d = 0;
    local_198 = 8;
    local_1a8 = PTR_DAT_04bb6a30 + 0x10;
    local_1a0 = local_194;
    if (local_194 == pbVar5) {
      lVar8 = 7;
    }
    else {
      lVar8 = 0;
      do {
        if (pbVar5[lVar8] == 0) {
LAB_01aed0f8:
          iVar7 = (int)lVar8;
          if (7 < iVar7) {
            iVar7 = 7;
          }
          goto LAB_01aed104;
        }
        if (pbVar5[lVar8 + 1] == 0) {
          lVar8 = lVar8 + 1;
          goto LAB_01aed0f8;
        }
        if (pbVar5[lVar8 + 2] == 0) {
          lVar8 = lVar8 + 2;
          goto LAB_01aed0f8;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      iVar7 = 0;
LAB_01aed104:
      memcpy(local_194,pbVar5,(long)iVar7);
      local_194[iVar7] = 0;
      lVar8 = (long)local_198 + -1;
      pbVar5 = local_1a0;
    }
    puVar3 = PTR_DAT_04bb3768;
    lVar9 = 0;
    local_1a8 = PTR_DAT_04bb3768 + 0x10;
    pbVar5[lVar8] = 0;
    do {
      if (local_1a0[lVar9] == 0) {
LAB_01aed178:
        pbVar5 = local_1a0;
        if (0 < (int)lVar9) {
          do {
            if (*pbVar5 - 0x41 < 0x1a) {
              *pbVar5 = "abcdefghijklmnopqrstuvwxyz"[(ulong)(*pbVar5 - 0x41) & 0xff];
            }
            lVar9 = lVar9 + -1;
            pbVar5 = pbVar5 + 1;
          } while (lVar9 != 0);
        }
        break;
      }
      if (local_1a0[lVar9 + 1] == 0) {
        lVar9 = lVar9 + 1;
        goto LAB_01aed178;
      }
      if (local_1a0[lVar9 + 2] == 0) {
        lVar9 = lVar9 + 2;
        goto LAB_01aed178;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    (**(code **)(puVar3 + 0x28))(&local_1a8);
    pbVar5 = *(byte **)(param_2 + 8);
    if (pbVar5 == local_1a0) {
      return 1;
    }
    lVar8 = 0;
    do {
      if (local_1a0[lVar8] == 0) goto LAB_01aed21c;
      if (local_1a0[lVar8 + 1] == 0) goto LAB_01aed210;
      if (local_1a0[lVar8 + 2] == 0) goto LAB_01aed218;
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
  }
  lVar8 = 0;
LAB_01aed21c:
  iVar7 = (int)lVar8;
  if (*(int *)(param_2 + 0x10) <= (int)lVar8) {
    iVar7 = *(int *)(param_2 + 0x10) + -1;
  }
  memcpy(pbVar5,local_1a0,(long)iVar7);
  pbVar5[iVar7] = 0;
  return 1;
LAB_01aed210:
  lVar8 = lVar8 + 1;
  goto LAB_01aed21c;
LAB_01aed218:
  lVar8 = lVar8 + 2;
  goto LAB_01aed21c;
}

