
ulong FUN_03d7b580(long param_1,long *param_2,int param_3)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  float fVar4;
  undefined2 *puVar5;
  bool bVar6;
  undefined8 *puVar7;
  ulong uVar8;
  uint uVar9;
  ushort *puVar10;
  ushort *puVar11;
  ushort uVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  ushort *__src;
  uint uVar16;
  ulong uVar17;
  void *pvVar18;
  int iVar19;
  long lVar20;
  ulong uVar21;
  ulong local_180;
  uint local_174;
  undefined *local_170;
  undefined2 *local_168;
  int local_160;
  undefined2 local_15c [31];
  undefined2 local_11e;
  undefined *local_118;
  undefined2 *local_110;
  int local_108;
  undefined2 local_104 [31];
  undefined2 local_c6;
  undefined *local_c0;
  undefined2 *local_b8;
  int local_b0;
  undefined2 local_ac [31];
  undefined2 local_6e;
  
  *(undefined4 *)(param_1 + 0xb58) = 0;
  local_b0 = 0x20;
  local_b8 = local_ac;
  local_6e = 0;
  local_ac[0] = 0;
  plVar15 = *(long **)(param_1 + 0x260);
  local_108 = 0x20;
  local_170 = PTR_DAT_04bc0840 + 0x10;
  local_c6 = 0;
  local_104[0] = 0;
  local_160 = 0x20;
  local_11e = 0;
  local_15c[0] = 0;
  local_110 = local_104;
  local_168 = local_15c;
  local_118 = local_170;
  local_c0 = local_170;
  (**(code **)(*plVar15 + 0x18))(plVar15);
  puVar10 = (ushort *)plVar15[1];
  uVar12 = *puVar10;
  if (uVar12 == 0) {
    return 0;
  }
  iVar13 = *(int *)(param_1 + 0xb58);
  uVar17 = 0;
  uVar21 = 0;
  iVar19 = 0;
  local_180 = 0;
  local_174 = 0;
LAB_03d7b648:
  puVar5 = local_b8;
  uVar16 = (uint)uVar17;
  puVar11 = puVar10;
  __src = puVar10;
  do {
    iVar13 = iVar13 + 1;
    if ((uVar12 & 0xfffe) == 0xe) {
      if (uVar12 == 0xf) {
        puVar10 = puVar11 + 3;
        goto LAB_03d7b6b8;
      }
      if (uVar12 == 0xe) break;
    }
    else {
      iVar19 = iVar19 + 1;
    }
    if (param_3 < iVar19) {
      pvVar18 = (void *)param_2[1];
      uVar9 = (uint)uVar21;
      if ((int)uVar9 < 1) goto LAB_03d7bc28;
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar20 = 0;
      goto LAB_03d7bba0;
    }
    *(int *)(param_1 + 0xb58) = iVar13;
    puVar11 = puVar11 + 1;
    __src = __src + 1;
    uVar12 = *__src;
    if (uVar12 == 0) {
      return uVar17;
    }
  } while( true );
  puVar10 = (ushort *)((long)puVar11 + (ulong)__src[3] + 8);
LAB_03d7b6b8:
  uVar14 = (ulong)((long)puVar10 - (long)puVar11) >> 1;
  uVar12 = __src[1];
  uVar16 = (uint)uVar14;
  if (uVar12 == 0) {
    uVar12 = __src[2];
    if (uVar12 == 3) {
      uVar21 = uVar14 & 0xffffffff;
      if ((int)uVar16 < 0) {
        uVar21 = 0;
        do {
          if (__src[uVar21] == 0) goto LAB_03d7b738;
          if (__src[uVar21 + 1] == 0) {
            uVar21 = uVar21 + 1;
            goto LAB_03d7b738;
          }
          if (__src[uVar21 + 2] == 0) {
            uVar21 = uVar21 + 2;
            goto LAB_03d7b738;
          }
          uVar21 = uVar21 + 3;
        } while (uVar21 != 0x80001);
        uVar21 = 0;
      }
LAB_03d7b738:
      uVar9 = (uint)uVar21;
      if (local_b0 <= (int)(uint)uVar21) {
        uVar9 = local_b0 - 1;
      }
      if (0 < (int)uVar9) {
        memcpy(local_b8,__src,(ulong)uVar9 * 2);
        puVar5[uVar9] = 0;
        uVar12 = __src[1];
        if (uVar12 != 0) {
          uVar21 = uVar14 & 0xffffffff;
          goto LAB_03d7b6cc;
        }
        uVar21 = uVar14 & 0xffffffff;
        uVar12 = __src[2];
        goto LAB_03d7b8a0;
      }
      bVar6 = false;
      uVar21 = uVar14 & 0xffffffff;
    }
    else {
LAB_03d7b8a0:
      puVar5 = local_110;
      if (uVar12 == 2) {
        uVar8 = uVar14 & 0xffffffff;
        if ((int)uVar16 < 0) {
          uVar8 = 0;
          do {
            if (__src[uVar8] == 0) goto LAB_03d7b8b0;
            if (__src[uVar8 + 1] == 0) {
              uVar8 = uVar8 + 1;
              goto LAB_03d7b8b0;
            }
            if (__src[uVar8 + 2] == 0) {
              uVar8 = uVar8 + 2;
              goto LAB_03d7b8b0;
            }
            uVar8 = uVar8 + 3;
          } while (uVar8 != 0x80001);
          uVar8 = 0;
        }
LAB_03d7b8b0:
        uVar9 = (uint)uVar8;
        if (local_108 <= (int)(uint)uVar8) {
          uVar9 = local_108 - 1;
        }
        if (0 < (int)uVar9) {
          memcpy(local_110,__src,(ulong)uVar9 * 2);
          puVar5[uVar9] = 0;
        }
        fVar4 = (float)NEON_ucvtf((uint)__src[4]);
        *(float *)(param_1 + 0xb90) = fVar4 / 100.0;
        uVar12 = __src[1];
        local_174 = uVar16;
        if (uVar12 != 0) goto LAB_03d7b6cc;
        uVar12 = __src[2];
      }
      puVar5 = local_168;
      if (uVar12 == 1) {
        uVar8 = uVar14 & 0xffffffff;
        if ((int)uVar16 < 0) {
          uVar8 = 0;
          do {
            if (__src[uVar8] == 0) goto LAB_03d7b96c;
            if (__src[uVar8 + 1] == 0) {
              uVar8 = uVar8 + 1;
              goto LAB_03d7b96c;
            }
            if (__src[uVar8 + 2] == 0) {
              uVar8 = uVar8 + 2;
              goto LAB_03d7b96c;
            }
            uVar8 = uVar8 + 3;
          } while (uVar8 != 0x80001);
          uVar8 = 0;
        }
LAB_03d7b96c:
        uVar9 = (uint)uVar8;
        if (local_160 <= (int)(uint)uVar8) {
          uVar9 = local_160 - 1;
        }
        if (0 < (int)uVar9) {
          memcpy(local_168,__src,(ulong)uVar9 * 2);
          puVar5[uVar9] = 0;
          local_180 = uVar14 & 0xffffffff;
          uVar12 = __src[1];
          goto LAB_03d7b6cc;
        }
        bVar6 = false;
        local_180 = uVar14 & 0xffffffff;
      }
      else {
        bVar6 = false;
      }
    }
    goto LAB_03d7ba30;
  }
LAB_03d7b6cc:
  if (uVar12 == 1) {
    uVar12 = __src[2];
    bVar6 = uVar12 == 0;
    if (uVar12 == 0) {
      if (iVar19 == param_3) {
        *(undefined4 *)(param_1 + 0xb84) = *(undefined4 *)(__src + 4);
        if (__src[1] == 1) {
          uVar12 = __src[2];
          uVar17 = 0xffffffff;
          iVar19 = param_3;
          goto joined_r0x03d7b7ac;
        }
        bVar6 = true;
        uVar17 = 0xffffffff;
        iVar19 = param_3;
        if (__src[1] != 0xfc) goto LAB_03d7ba30;
        goto LAB_03d7b714;
      }
      bVar6 = false;
      iVar19 = iVar19 + 1;
      goto LAB_03d7ba30;
    }
joined_r0x03d7b7ac:
    if (uVar12 == 1) {
      *(undefined4 *)(param_1 + 0xb80) = *(undefined4 *)(__src + 4);
      uVar12 = __src[1];
      if (uVar12 != 1) goto LAB_03d7b70c;
      uVar12 = __src[2];
    }
    uVar9 = (uint)uVar12;
    if (uVar9 == 3) {
      if (iVar19 == param_3) {
        *(undefined1 *)(param_1 + 0xb9d) = 1;
        uVar3 = *(undefined4 *)(__src + 4);
        *(undefined4 *)(param_1 + 0xba0) = uVar3;
        *(undefined4 *)(param_1 + 0xba4) = uVar3;
        if (__src[1] == 1) {
          uVar9 = (uint)__src[2];
          iVar19 = param_3;
          goto LAB_03d7b808;
        }
LAB_03d7b9e4:
        iVar19 = param_3;
        goto LAB_03d7ba30;
      }
LAB_03d7b84c:
      iVar19 = iVar19 + 1;
      goto LAB_03d7ba30;
    }
    if (uVar9 == 2) {
      if (iVar19 == param_3) {
        *(undefined1 *)(param_1 + 0xb89) = 1;
        return 0xffffffff;
      }
      goto LAB_03d7b84c;
    }
LAB_03d7b808:
    if ((uVar9 < 0xb) && ((1 << (ulong)(uVar9 & 0x1f) & 0x770U) != 0)) {
      if (iVar19 == param_3) {
        *(undefined1 *)(param_1 + 0xb94) = 1;
        if (__src[1] != 1) goto LAB_03d7b9e4;
        uVar9 = (uint)__src[2];
        iVar19 = param_3;
      }
      else {
        iVar19 = iVar19 + 1;
      }
    }
    if (uVar9 != 7) goto LAB_03d7ba30;
  }
  else {
    bVar6 = false;
LAB_03d7b70c:
    if (uVar12 == 0xfc) {
LAB_03d7b714:
      if (__src[2] == 0) {
        iVar19 = iVar19 + 1;
      }
    }
LAB_03d7ba30:
    puVar7 = *(undefined8 **)(param_1 + 0xc48);
    if (puVar7 == (undefined8 *)0x0) goto LAB_03d7bab0;
    uVar8 = (**(code **)*puVar7)(puVar7,__src);
    if ((uVar8 & 1) == 0) goto LAB_03d7bab0;
  }
  if (iVar19 == param_3) {
    uVar17 = uVar14 & 0xffffffff;
    if ((int)uVar16 < 0) {
      uVar17 = 0;
      do {
        if (__src[uVar17] == 0) goto LAB_03d7ba60;
        if (__src[uVar17 + 1] == 0) {
          uVar17 = uVar17 + 1;
          goto LAB_03d7ba60;
        }
        if (__src[uVar17 + 2] == 0) {
          uVar17 = uVar17 + 2;
          goto LAB_03d7ba60;
        }
        uVar17 = uVar17 + 3;
      } while (uVar17 != 0x80001);
      uVar17 = 0;
    }
LAB_03d7ba60:
    uVar9 = (uint)uVar17;
    if ((int)param_2[2] <= (int)(uint)uVar17) {
      uVar9 = (int)param_2[2] - 1;
    }
    if (0 < (int)uVar9) {
      pvVar18 = (void *)param_2[1];
      memcpy(pvVar18,__src,(ulong)uVar9 * 2);
      *(undefined2 *)((long)pvVar18 + (ulong)uVar9 * 2) = 0;
    }
    bVar6 = true;
    uVar17 = uVar14 & 0xffffffff;
    iVar19 = param_3;
  }
  else {
    iVar19 = iVar19 + 1;
  }
LAB_03d7bab0:
  puVar7 = *(undefined8 **)(param_1 + 0xc40);
  if ((puVar7 != (undefined8 *)0x0) && (iVar19 == param_3)) {
    (**(code **)*puVar7)(puVar7,__src);
  }
  if (bVar6) {
    return uVar17;
  }
  iVar13 = *(int *)(param_1 + 0xb58) + uVar16;
  *(int *)(param_1 + 0xb58) = iVar13;
  uVar12 = *puVar10;
  if (uVar12 == 0) {
    return uVar17;
  }
  goto LAB_03d7b648;
  while( true ) {
    lVar2 = param_2[1] + lVar20 * 2;
    if (*(short *)(lVar2 + 2) == 0) {
      lVar20 = lVar20 + 1;
      goto LAB_03d7bbdc;
    }
    if (*(short *)(lVar2 + 4) == 0) {
      lVar20 = lVar20 + 2;
      goto LAB_03d7bbdc;
    }
    lVar20 = lVar20 + 3;
    if (lVar20 == 0x80001) break;
LAB_03d7bba0:
    if (*(short *)(param_2[1] + lVar20 * 2) == 0) goto LAB_03d7bbdc;
  }
  lVar20 = 0;
LAB_03d7bbdc:
  uVar1 = uVar9;
  if ((int)param_2[2] <= (int)uVar9) {
    uVar1 = (int)param_2[2] - 1;
  }
  if (0 < (int)uVar1) {
    (**(code **)(local_c0 + 0x18))(&local_c0);
    memcpy(pvVar18,local_b8,(ulong)uVar1 << 1);
    if ((int)lVar20 < (int)uVar1) {
      *(undefined2 *)((long)pvVar18 + (ulong)uVar1 * 2) = 0;
    }
  }
  pvVar18 = (void *)param_2[1];
  uVar16 = uVar9 + uVar16;
LAB_03d7bc28:
  if (0 < (int)local_174) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar20 = 0;
    do {
      if (*(short *)(param_2[1] + lVar20 * 2) == 0) goto LAB_03d7bc8c;
      lVar2 = param_2[1] + lVar20 * 2;
      if (*(short *)(lVar2 + 2) == 0) {
        lVar20 = lVar20 + 1;
        goto LAB_03d7bc8c;
      }
      if (*(short *)(lVar2 + 4) == 0) {
        lVar20 = lVar20 + 2;
        goto LAB_03d7bc8c;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    lVar20 = 0;
LAB_03d7bc8c:
    iVar13 = (int)lVar20;
    iVar19 = iVar13 + uVar16;
    if (iVar19 < 0 != SCARRY4(iVar13,uVar16)) {
      iVar19 = -1;
    }
    uVar9 = uVar16;
    if ((int)uVar16 < 0) {
      uVar9 = iVar19 + 1;
    }
    uVar1 = local_174;
    if ((int)((int)param_2[2] - uVar9) <= (int)local_174) {
      uVar1 = (int)param_2[2] + ~uVar9;
    }
    if (0 < (int)uVar1) {
      (**(code **)(local_118 + 0x18))(&local_118);
      memcpy((void *)((long)pvVar18 + (long)(int)uVar9 * 2),local_110,(ulong)uVar1 << 1);
      if (iVar13 < (int)(uVar1 + uVar9)) {
        *(undefined2 *)((long)pvVar18 + (long)(int)(uVar1 + uVar9) * 2) = 0;
      }
    }
    pvVar18 = (void *)param_2[1];
    uVar16 = uVar16 + local_174;
  }
  if (0 < (int)(uint)local_180) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar20 = 0;
    do {
      if (*(short *)(param_2[1] + lVar20 * 2) == 0) goto LAB_03d7bd5c;
      lVar2 = param_2[1] + lVar20 * 2;
      if (*(short *)(lVar2 + 2) == 0) {
        lVar20 = lVar20 + 1;
        goto LAB_03d7bd5c;
      }
      if (*(short *)(lVar2 + 4) == 0) {
        lVar20 = lVar20 + 2;
        goto LAB_03d7bd5c;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    lVar20 = 0;
LAB_03d7bd5c:
    iVar13 = (int)lVar20;
    iVar19 = iVar13 + uVar16;
    if (iVar19 < 0 != SCARRY4(iVar13,uVar16)) {
      iVar19 = -1;
    }
    uVar9 = uVar16;
    if ((int)uVar16 < 0) {
      uVar9 = iVar19 + 1;
    }
    uVar1 = (uint)local_180;
    if ((int)((int)param_2[2] - uVar9) <= (int)(uint)local_180) {
      uVar1 = (int)param_2[2] + ~uVar9;
    }
    if (0 < (int)uVar1) {
      (**(code **)(local_170 + 0x18))(&local_170);
      memcpy((void *)((long)pvVar18 + (long)(int)uVar9 * 2),local_168,(ulong)uVar1 << 1);
      if (iVar13 < (int)(uVar1 + uVar9)) {
        *(undefined2 *)((long)pvVar18 + (long)(int)(uVar1 + uVar9) * 2) = 0;
      }
    }
    pvVar18 = (void *)param_2[1];
    uVar16 = uVar16 + (uint)local_180;
  }
  uVar9 = uVar16;
  if ((int)uVar16 < 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar20 = 0;
    do {
      if (*(short *)(param_2[1] + lVar20 * 2) == 0) goto LAB_03d7be2c;
      lVar2 = param_2[1] + lVar20 * 2;
      if (*(short *)(lVar2 + 2) == 0) {
        lVar20 = lVar20 + 1;
        goto LAB_03d7be2c;
      }
      if (*(short *)(lVar2 + 4) == 0) {
        lVar20 = lVar20 + 2;
        goto LAB_03d7be2c;
      }
      lVar20 = lVar20 + 3;
    } while (lVar20 != 0x80001);
    lVar20 = 0;
LAB_03d7be2c:
    iVar19 = (int)lVar20 + uVar16;
    if (iVar19 < 0 != SCARRY4((int)lVar20,uVar16)) {
      iVar19 = -1;
    }
    uVar9 = iVar19 + 1;
  }
  uVar1 = (int)param_2[2] + ~uVar9;
  if (1 < (int)((int)param_2[2] - uVar9)) {
    uVar1 = 1;
  }
  if (0 < (int)uVar1) {
    memcpy((void *)((long)pvVar18 + (ulong)uVar9 * 2),__src,(ulong)uVar1 << 1);
    *(undefined2 *)((long)pvVar18 + (ulong)(uVar1 + uVar9) * 2) = 0;
  }
  return (ulong)(uVar16 + 1);
}

