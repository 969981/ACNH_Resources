
uint FUN_03d7ca10(long param_1,long *param_2,int param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  ushort uVar4;
  bool bVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ushort uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined *puVar12;
  uint uVar13;
  long *plVar14;
  uint uVar15;
  ushort *puVar16;
  int iVar17;
  ushort *puVar18;
  uint uVar19;
  int iVar20;
  ulong uVar21;
  uint uVar22;
  ushort *local_148;
  ushort *local_140;
  uint local_12c;
  int local_124;
  uint local_120;
  undefined *local_110;
  void *local_108;
  undefined *local_100;
  ushort *local_f8;
  int local_f0;
  ushort local_ec [63];
  undefined2 local_6e;
  
  plVar14 = *(long **)(param_1 + 0x260);
  (**(code **)(*plVar14 + 0x18))(plVar14);
  uVar8 = *(ushort *)plVar14[1];
  if (uVar8 == 0) {
    return 0;
  }
  local_140 = (ushort *)0x0;
  uVar19 = 0;
  bVar5 = false;
  local_148 = (ushort *)0x0;
  uVar4 = 0xffff;
  local_124 = 0;
  puVar1 = PTR_DAT_04bb8610 + 0x10;
  puVar12 = puVar1;
  puVar16 = (ushort *)plVar14[1];
  uVar15 = 0;
LAB_03d7ca90:
  local_12c = (uint)puVar12;
  local_120 = local_12c >> 1 & 0x7fff;
  do {
    if ((uVar8 & 0xfffe) == 0xe) {
      if (uVar8 == 0xf) {
        puVar18 = puVar16 + 3;
        goto LAB_03d7cc08;
      }
      if (uVar8 == 0xe) break;
    }
    else {
      local_124 = local_124 + 1;
    }
    uVar22 = uVar15;
    if (param_3 < local_124) goto LAB_03d7ce38;
    lVar9 = param_2[1];
    local_100 = PTR_DAT_04bb8610 + 0x10;
    uVar22 = uVar19;
    local_f8 = puVar16;
    if ((int)uVar19 < 0) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar11 = 0;
      do {
        if (*(short *)(param_2[1] + lVar11 * 2) == 0) goto LAB_03d7cb80;
        lVar10 = param_2[1] + lVar11 * 2;
        if (*(short *)(lVar10 + 2) == 0) {
          lVar11 = lVar11 + 1;
          goto LAB_03d7cb80;
        }
        if (*(short *)(lVar10 + 4) == 0) {
          lVar11 = lVar11 + 2;
          goto LAB_03d7cb80;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_03d7cb80:
      iVar20 = (int)lVar11 + uVar19;
      if (iVar20 < 0 != SCARRY4((int)lVar11,uVar19)) {
        iVar20 = -1;
      }
      uVar22 = iVar20 + 1;
    }
    uVar13 = (int)param_2[2] + ~uVar22;
    if (1 < (int)((int)param_2[2] - uVar22)) {
      uVar13 = 1;
    }
    if (0 < (int)uVar13) {
      (**(code **)(local_100 + 0x18))(&local_100);
      memcpy((void *)(lVar9 + (ulong)uVar22 * 2),local_f8,(ulong)uVar13 << 1);
      *(undefined2 *)(lVar9 + (ulong)(uVar13 + uVar22) * 2) = 0;
    }
    uVar15 = uVar15 + 1;
    uVar19 = uVar19 + 1;
    puVar16 = puVar16 + 1;
    uVar8 = *puVar16;
    bVar5 = (bool)(bVar5 & uVar15 < local_120);
    uVar22 = uVar15;
    if (uVar8 == 0) goto LAB_03d7ce38;
  } while( true );
  puVar18 = (ushort *)((long)puVar16 + (ulong)puVar16[3] + 8);
LAB_03d7cc08:
  uVar21 = (ulong)((long)puVar18 - (long)puVar16) >> 1;
  uVar8 = puVar16[1];
  iVar20 = (int)uVar21;
  if (uVar8 == 0) {
    if (puVar16[2] == 0) {
      uVar22 = 0;
      bVar5 = true;
      local_12c = (uint)puVar16[4];
      local_148 = puVar18;
      local_140 = puVar16;
      goto LAB_03d7ccd4;
    }
LAB_03d7cc54:
    uVar22 = uVar15 + iVar20;
    puVar6 = *(undefined8 **)(param_1 + 0xc48);
    if (puVar6 != (undefined8 *)0x0) {
      uVar7 = (**(code **)*puVar6)(puVar6,puVar16);
      if ((uVar7 & 1) != 0) goto LAB_03d7cc88;
      uVar8 = puVar16[1];
    }
    if (uVar8 == 0xfc) {
      if (puVar16[2] != 0) goto LAB_03d7ccd4;
      goto LAB_03d7cc88;
    }
  }
  else {
    if (((uVar8 != 1) || (7 < puVar16[2])) || ((1 << (ulong)(puVar16[2] & 0x1f) & 0x85U) == 0))
    goto LAB_03d7cc54;
LAB_03d7cc88:
    uVar22 = uVar15 + iVar20;
    if (local_124 == param_3) goto LAB_03d7ce38;
    uVar8 = puVar16[1];
    local_124 = local_124 + 1;
  }
  uVar22 = uVar15 + iVar20;
  if (uVar8 == 0) {
    if (puVar16[2] == 1) {
      uVar4 = puVar16[4];
    }
  }
LAB_03d7ccd4:
  if (param_3 < local_124) goto LAB_03d7ce38;
  lVar9 = param_2[1];
  uVar15 = uVar19;
  local_100 = puVar1;
  local_f8 = puVar16;
  if ((int)uVar19 < 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar11 = 0;
    do {
      if (*(short *)(param_2[1] + lVar11 * 2) == 0) goto LAB_03d7cd5c;
      lVar10 = param_2[1] + lVar11 * 2;
      if (*(short *)(lVar10 + 2) == 0) {
        lVar11 = lVar11 + 1;
        goto LAB_03d7cd5c;
      }
      if (*(short *)(lVar10 + 4) == 0) {
        lVar11 = lVar11 + 2;
        goto LAB_03d7cd5c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_03d7cd5c:
    iVar17 = (int)lVar11 + uVar19;
    if (iVar17 < 0 != SCARRY4((int)lVar11,uVar19)) {
      iVar17 = -1;
    }
    uVar15 = iVar17 + 1;
  }
  uVar21 = uVar21 & 0xffffffff;
  if (iVar20 < 0) {
    (**(code **)(local_100 + 0x18))(&local_100);
    uVar21 = 0;
    do {
      if (local_f8[uVar21] == 0) goto LAB_03d7cdd0;
      if (local_f8[uVar21 + 1] == 0) {
        uVar21 = uVar21 + 1;
        goto LAB_03d7cdd0;
      }
      if (local_f8[uVar21 + 2] == 0) {
        uVar21 = uVar21 + 2;
        goto LAB_03d7cdd0;
      }
      uVar21 = uVar21 + 3;
    } while (uVar21 != 0x80001);
    uVar21 = 0;
  }
LAB_03d7cdd0:
  uVar13 = (uint)uVar21;
  if ((int)((int)param_2[2] - uVar15) <= (int)(uint)uVar21) {
    uVar13 = (int)param_2[2] + ~uVar15;
  }
  if (0 < (int)uVar13) {
    (**(code **)(local_100 + 0x18))(&local_100);
    memcpy((void *)(lVar9 + (long)(int)uVar15 * 2),local_f8,(ulong)uVar13 << 1);
    *(undefined2 *)(lVar9 + (long)(int)(uVar13 + uVar15) * 2) = 0;
  }
  uVar8 = *puVar18;
  uVar19 = uVar19 + iVar20;
  puVar12 = (undefined *)(ulong)local_12c;
  puVar16 = puVar18;
  uVar15 = uVar22;
  if (uVar8 == 0) goto LAB_03d7ce38;
  goto LAB_03d7ca90;
LAB_03d7ce38:
  puVar1 = PTR_PTR_04bb8620;
  uVar15 = uVar19;
  if (bVar5) {
    local_6e = 0;
    local_f0 = 0x40;
    local_ec[0] = 0;
    local_f8 = local_ec;
    local_100 = PTR_DAT_04bc0c10 + 0x10;
    (**(code **)(*(long *)PTR_PTR_04bb8620 + 0x18))(PTR_PTR_04bb8620);
    FUN_038d1340(&local_100,*(undefined8 *)(puVar1 + 8));
    puVar16 = local_f8;
    if (local_f8 != local_148) {
      uVar21 = (ulong)uVar22;
      if ((int)uVar22 < 0) {
        uVar21 = 0;
        do {
          if (local_148[uVar21] == 0) goto LAB_03d7cea0;
          if (local_148[uVar21 + 1] == 0) {
            uVar21 = uVar21 + 1;
            goto LAB_03d7cea0;
          }
          if (local_148[uVar21 + 2] == 0) {
            uVar21 = uVar21 + 2;
            goto LAB_03d7cea0;
          }
          uVar21 = uVar21 + 3;
        } while (uVar21 != 0x80001);
        uVar21 = 0;
      }
LAB_03d7cea0:
      uVar15 = (uint)uVar21;
      if (local_f0 <= (int)(uint)uVar21) {
        uVar15 = local_f0 - 1;
      }
      uVar21 = -(ulong)(uVar15 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar15 << 1;
      memcpy(local_f8,local_148,uVar21);
      *(undefined2 *)((long)puVar16 + uVar21) = 0;
    }
    plVar14 = *(long **)(param_1 + 0x260);
    (**(code **)(*plVar14 + 0x18))(plVar14);
    lVar10 = plVar14[1];
    lVar11 = param_2[1];
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar9 = 0;
    do {
      if (*(short *)(param_2[1] + lVar9 * 2) == 0) goto LAB_03d7cf54;
      lVar3 = param_2[1] + lVar9 * 2;
      if (*(short *)(lVar3 + 2) == 0) {
        lVar9 = lVar9 + 1;
        goto LAB_03d7cf54;
      }
      if (*(short *)(lVar3 + 4) == 0) {
        lVar9 = lVar9 + 2;
        goto LAB_03d7cf54;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    lVar9 = 0;
LAB_03d7cf54:
    uVar15 = (uint)((ulong)((long)local_140 - lVar10) >> 1);
    iVar17 = (int)lVar9;
    iVar20 = iVar17 + uVar15;
    if (iVar20 < 0 != SCARRY4(iVar17,uVar15)) {
      iVar20 = -1;
    }
    uVar13 = uVar15;
    if ((int)uVar15 < 0) {
      uVar13 = iVar20 + 1;
    }
    uVar21 = (ulong)uVar22;
    if ((int)uVar22 < 0) {
      (**(code **)(local_100 + 0x18))(&local_100);
      uVar21 = 0;
      do {
        if (local_f8[uVar21] == 0) goto LAB_03d7cf6c;
        if (local_f8[uVar21 + 1] == 0) {
          uVar21 = uVar21 + 1;
          goto LAB_03d7cf6c;
        }
        if (local_f8[uVar21 + 2] == 0) {
          uVar21 = uVar21 + 2;
          goto LAB_03d7cf6c;
        }
        uVar21 = uVar21 + 3;
      } while (uVar21 != 0x80001);
      uVar21 = 0;
    }
LAB_03d7cf6c:
    uVar2 = (uint)uVar21;
    if ((int)((int)param_2[2] - uVar13) <= (int)(uint)uVar21) {
      uVar2 = (int)param_2[2] + ~uVar13;
    }
    if (0 < (int)uVar2) {
      (**(code **)(local_100 + 0x18))(&local_100);
      memcpy((void *)(lVar11 + (long)(int)uVar13 * 2),local_f8,(ulong)uVar2 << 1);
      if (iVar17 < (int)(uVar2 + uVar13)) {
        *(undefined2 *)(lVar11 + (long)(int)(uVar2 + uVar13) * 2) = 0;
      }
    }
    uVar15 = uVar22 + uVar15;
    if ((int)uVar15 < (int)uVar19) {
      puVar12 = PTR_DAT_04bb8610 + 0x10;
      uVar22 = uVar15;
      do {
        (**(code **)(*(long *)puVar1 + 0x18))(puVar1);
        local_108 = *(void **)(puVar1 + 8);
        lVar9 = param_2[1];
        uVar13 = uVar22;
        local_110 = puVar12;
        if ((int)uVar22 < 0) {
          (**(code **)(*param_2 + 0x18))(param_2);
          lVar11 = 0;
          do {
            if (*(short *)(param_2[1] + lVar11 * 2) == 0) goto LAB_03d7d07c;
            lVar10 = param_2[1] + lVar11 * 2;
            if (*(short *)(lVar10 + 2) == 0) {
              lVar11 = lVar11 + 1;
              goto LAB_03d7d07c;
            }
            if (*(short *)(lVar10 + 4) == 0) {
              lVar11 = lVar11 + 2;
              goto LAB_03d7d07c;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_03d7d07c:
          iVar20 = (int)lVar11 + uVar22;
          if (iVar20 < 0 != SCARRY4((int)lVar11,uVar22)) {
            iVar20 = -1;
          }
          uVar13 = iVar20 + 1;
        }
        uVar2 = (int)param_2[2] + ~uVar13;
        if (1 < (int)((int)param_2[2] - uVar13)) {
          uVar2 = 1;
        }
        if (0 < (int)uVar2) {
          (**(code **)(local_110 + 0x18))(&local_110);
          memcpy((void *)(lVar9 + (ulong)uVar13 * 2),local_108,(ulong)uVar2 << 1);
          *(undefined2 *)(lVar9 + (ulong)(uVar2 + uVar13) * 2) = 0;
        }
        uVar22 = uVar22 + 1;
      } while ((int)uVar22 < (int)uVar19);
    }
  }
  if (uVar4 != 0xffff) {
    lVar9 = param_2[1];
    uVar19 = uVar15;
    if ((int)uVar15 < 0) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar11 = 0;
      do {
        if (*(short *)(param_2[1] + lVar11 * 2) == 0) goto LAB_03d7d1e0;
        lVar10 = param_2[1] + lVar11 * 2;
        if (*(short *)(lVar10 + 2) == 0) {
          lVar11 = lVar11 + 1;
          goto LAB_03d7d1e0;
        }
        if (*(short *)(lVar10 + 4) == 0) {
          lVar11 = lVar11 + 2;
          goto LAB_03d7d1e0;
        }
        lVar11 = lVar11 + 3;
      } while (lVar11 != 0x80001);
      lVar11 = 0;
LAB_03d7d1e0:
      iVar20 = (int)lVar11 + uVar15;
      if (iVar20 < 0 != SCARRY4((int)lVar11,uVar15)) {
        iVar20 = -1;
      }
      uVar19 = iVar20 + 1;
    }
    uVar22 = 5;
    if ((int)((int)param_2[2] - uVar19) < 6) {
      uVar22 = (int)param_2[2] + ~uVar19;
    }
    if (0 < (int)uVar22) {
      memcpy((void *)(lVar9 + (ulong)uVar19 * 2),&DAT_041e93a0,(ulong)uVar22 << 1);
      *(undefined2 *)(lVar9 + (ulong)(uVar22 + uVar19) * 2) = 0;
    }
    uVar15 = uVar15 + 5;
  }
  return uVar15;
}

