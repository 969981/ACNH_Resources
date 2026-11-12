
/* WARNING: Removing unreachable block (ram,0x008d22ec) */
/* WARNING: Removing unreachable block (ram,0x008d21b4) */
/* WARNING: Removing unreachable block (ram,0x008d1fe8) */
/* WARNING: Removing unreachable block (ram,0x008d207c) */
/* WARNING: Removing unreachable block (ram,0x008d2250) */
/* WARNING: Removing unreachable block (ram,0x008d2390) */

void FUN_008d1880(long param_1)

{
  long *plVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  byte *pbVar16;
  ulong uVar17;
  long lVar18;
  uint uVar19;
  undefined8 *puVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  undefined *puVar24;
  undefined8 *puVar25;
  uint *puVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined8 local_a4;
  undefined8 local_9c;
  undefined8 local_94;
  undefined8 local_8c;
  undefined8 local_84;
  undefined4 local_7c;
  undefined *local_78;
  long local_70;
  int local_64;
  
  uVar14 = DAT_04ced030;
  puVar24 = PTR_DAT_04bb2020;
  plVar1 = (long *)(param_1 + 0x30708);
  DAT_04ced030 = 1;
  if (0 < *(int *)(param_1 + 0x3095c)) {
    *(int *)(param_1 + 0x3095c) = *(int *)(param_1 + 0x3095c) + -1;
    goto LAB_008d1c10;
  }
  uVar21 = FUN_0251dab4();
  if ((uVar21 & 1) == 0) goto LAB_008d1c10;
  iVar12 = *(int *)(param_1 + 0x30964);
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  pbVar16 = PTR_DAT_04bb32e0;
  if (lVar18 == 0) {
LAB_008d1948:
    if (*pbVar16 < 8) goto LAB_008d19b4;
LAB_008d1954:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_008d19ac:
      pbVar16 = PTR_DAT_04bb5038;
      goto LAB_008d19b4;
    }
    lVar18 = **(long **)PTR_DAT_04bb27d0;
    bVar5 = *(byte *)(lVar18 + 0x473);
    pbVar16 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar26 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar26 = (uint *)(lVar18 + 0x48);
      }
      if ((*puVar26 & 8) != 0) {
        pbVar16 = (byte *)(lVar18 + 0x471);
      }
    }
    uVar27 = (uint)*pbVar16;
    if (7 < *pbVar16) goto LAB_008d19ac;
  }
  else {
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar16 = (byte *)(lVar18 + 0x158);
    }
    if (7 < *pbVar16) {
      if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar16 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_008d1948;
      }
      goto LAB_008d1954;
    }
LAB_008d19b4:
    uVar27 = (uint)*pbVar16;
    if (7 < uVar27) {
      uVar27 = 0xff;
    }
  }
  uVar10 = uVar27;
  if (7 < uVar27) {
    uVar10 = 0xff;
  }
  local_78 = (undefined *)CONCAT71(local_78._1_7_,(char)uVar10);
  iVar15 = iVar12;
  if (*(char *)(param_1 + 0x315c8) == '\0') {
    if (0 < *(int *)(param_1 + 0x315b8)) {
      iVar6 = *(int *)(param_1 + 0x315b8) + *(int *)(param_1 + 0x315b4) + -1;
      iVar13 = 0;
      if (*(int *)(param_1 + 0x315b0) <= iVar6) {
        iVar13 = *(int *)(param_1 + 0x315b0);
      }
      if (*(int *)(*(long *)(param_1 + 0x315a8) + (long)(iVar6 - iVar13) * 4) != 1) {
        if (*(long *)PTR_DAT_04bb4718 == 0) {
          if ((DAT_054f0960 & 1) == 0) {
            iVar13 = __cxa_guard_acquire(&DAT_054f0960);
            puVar25 = &DAT_054f0958;
            if (iVar13 != 0) {
              DAT_054f0958 = 0;
              __cxa_guard_release(&DAT_054f0960);
            }
          }
          else {
            puVar25 = &DAT_054f0958;
          }
        }
        else {
          puVar25 = (undefined8 *)(*(long *)PTR_DAT_04bb4718 + 0x204);
          if (uVar27 < 8) {
            puVar25 = puVar25 + uVar27;
          }
        }
        local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0x20);
        if ((*(uint *)((long)puVar25 + 4) & 1) == 0) goto LAB_008d19e0;
      }
    }
    goto switchD_008d23b4_default;
  }
LAB_008d19e0:
  uVar10 = FUN_02582d8c(&local_78,1);
  puVar7 = PTR_DAT_04bb4fb8;
  if (7 < uVar10) goto switchD_008d23b4_default;
  if (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar10 * 0x13f0 + 0x13d4) == '\0')
  goto switchD_008d23b4_default;
  uVar10 = *(uint *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar10 * 0x13f0 + 0x13d8);
  uVar21 = (ulong)uVar10;
  if (((((int)uVar10 < 0) || (lVar18 = *(long *)PTR_DAT_04bb3960, lVar18 == 0)) ||
      (uVar11 = FUN_02582d8c(&local_78,1), 7 < uVar11)) ||
     (*(char *)(*(long *)puVar7 + (ulong)uVar11 * 0x13f0 + 0x13d4) == '\0')) {
    puVar24 = PTR_DAT_04bb2020;
    goto switchD_008d23b4_default;
  }
  uVar11 = *(uint *)(*(long *)puVar7 + (ulong)uVar11 * 0x13f0 + 0x13d8);
  uVar17 = (ulong)uVar11;
  if (((int)uVar11 < 0) || (*(long *)PTR_DAT_04bb3960 == 0)) {
LAB_008d1ff0:
    puVar24 = PTR_DAT_04bb2020;
    goto switchD_008d23b4_default;
  }
  if (3 < uVar11) {
    uVar17 = 0;
  }
  lVar22 = *(long *)(*(long *)PTR_DAT_04bb3960 + uVar17 * 8 + 0xf5b20);
  if (lVar22 == 0) goto LAB_008d1ff0;
  if (3 < uVar10) {
    uVar21 = 0;
  }
  uVar10 = *(uint *)(lVar18 + uVar21 * 4 + 0xf5b40);
  if (uVar10 < 3) {
LAB_008d2080:
    fVar29 = *(float *)(lVar22 + 0x98);
    fVar28 = *(float *)(lVar22 + 0x9c);
    fVar31 = 0.0;
    fVar30 = SQRT(fVar28 * fVar28 + fVar29 * fVar29);
    if (DAT_04ced028 < fVar30) {
      if (DAT_04ced02c <= fVar30) {
        fVar31 = 1.0;
      }
      else {
        fVar31 = (fVar30 - DAT_04ced028) / (DAT_04ced02c - DAT_04ced028) + 0.0;
      }
    }
    if (0.0 < fVar30) {
      fVar29 = (fVar31 / fVar30) * fVar29;
      fVar28 = (fVar31 / fVar30) * fVar28;
    }
    bVar9 = fVar28 == 0.0 && fVar29 == 0.0;
    if (2 < uVar10) goto LAB_008d2120;
    uVar27 = *(uint *)(lVar22 + 0x8c);
    uVar19 = 0x8000000;
    uVar10 = uVar27 >> 0x18 & 1;
    uVar11 = uVar27 >> 0x19 & 1;
    uVar23 = uVar27 >> 0x1a & 1;
    puVar24 = PTR_DAT_04bb2020;
LAB_008d2384:
    bVar8 = (uVar19 & uVar27) != 0;
  }
  else {
    if ((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) {
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(&DAT_054f0960);
          puVar26 = (uint *)&DAT_054f0958;
          if (iVar13 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar26 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar26 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
        if (uVar27 < 8) {
          puVar26 = puVar26 + (ulong)uVar27 * 2;
        }
      }
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0x19);
      if ((*puVar26 >> 0x19 & 1) == 0) goto LAB_008d2080;
    }
    else if (*(int *)(param_1 + 0x30808) != 3) goto LAB_008d2080;
    bVar9 = true;
LAB_008d2120:
    puVar24 = PTR_DAT_04bb2020;
    if ((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) {
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(&DAT_054f0960);
          puVar26 = (uint *)&DAT_054f0958;
          if (iVar13 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar26 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar26 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
        if (uVar27 < 8) {
          puVar26 = puVar26 + (ulong)uVar27 * 2;
        }
      }
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0x19);
      if ((*puVar26 >> 0x19 & 1) != 0) goto LAB_008d21a8;
LAB_008d21b8:
      uVar10 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x30808) != 3) goto LAB_008d21b8;
LAB_008d21a8:
      uVar10 = *(byte *)(lVar22 + 0x8e) >> 4 & 1;
    }
    if ((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) {
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(&DAT_054f0960);
          puVar26 = (uint *)&DAT_054f0958;
          if (iVar13 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar26 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar26 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
        if (uVar27 < 8) {
          puVar26 = puVar26 + (ulong)uVar27 * 2;
        }
      }
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0x19);
      if ((*puVar26 >> 0x19 & 1) != 0) goto LAB_008d2244;
LAB_008d2254:
      uVar11 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x30808) != 3) goto LAB_008d2254;
LAB_008d2244:
      uVar11 = *(byte *)(lVar22 + 0x8e) >> 5 & 1;
    }
    if ((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) {
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(&DAT_054f0960);
          puVar26 = (uint *)&DAT_054f0958;
          if (iVar13 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar26 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar26 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
        if (uVar27 < 8) {
          puVar26 = puVar26 + (ulong)uVar27 * 2;
        }
      }
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0x19);
      if ((*puVar26 >> 0x19 & 1) != 0) goto LAB_008d22e0;
LAB_008d22f0:
      uVar23 = 0;
    }
    else {
      if (*(int *)(param_1 + 0x30808) != 3) goto LAB_008d22f0;
LAB_008d22e0:
      uVar23 = *(byte *)(lVar22 + 0x8e) >> 6 & 1;
    }
    if ((*(long *)PTR_DAT_04bb7ff8 == 0) || (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) == 0)) {
      if (*(long *)PTR_DAT_04bb4718 == 0) {
        if ((DAT_054f0960 & 1) == 0) {
          iVar13 = __cxa_guard_acquire(&DAT_054f0960);
          puVar26 = (uint *)&DAT_054f0958;
          if (iVar13 != 0) {
            DAT_054f0958 = 0;
            __cxa_guard_release(&DAT_054f0960);
          }
        }
        else {
          puVar26 = (uint *)&DAT_054f0958;
        }
      }
      else {
        puVar26 = (uint *)(*(long *)PTR_DAT_04bb4718 + 0x204);
        if (uVar27 < 8) {
          puVar26 = puVar26 + (ulong)uVar27 * 2;
        }
      }
      local_b8 = (undefined *)CONCAT44(local_b8._4_4_,0x19);
      if ((*puVar26 >> 0x19 & 1) != 0) goto LAB_008d237c;
    }
    else if (*(int *)(param_1 + 0x30808) == 3) {
LAB_008d237c:
      uVar27 = *(uint *)(lVar22 + 0x8c);
      uVar19 = 0x800000;
      goto LAB_008d2384;
    }
    bVar8 = false;
  }
  switch(iVar12) {
  case 0:
  case 1:
    if (uVar10 == 0) {
      iVar15 = iVar12 + uVar11;
    }
    else {
      if (iVar12 < 2) {
        iVar15 = 1;
      }
      iVar15 = iVar15 + -1;
      if (!bVar9) {
        iVar15 = iVar12;
      }
    }
    break;
  case 2:
    if (uVar10 != 0) {
      iVar15 = 1;
      break;
    }
    iVar15 = 4;
    if (!bVar8) {
      iVar15 = 2;
    }
    iVar13 = 3;
    if (uVar23 == 0) {
      iVar13 = iVar15;
    }
    iVar15 = 5;
    goto LAB_008d2420;
  case 3:
    iVar15 = 2;
    if ((uVar10 == 0 && uVar11 == 0) && !bVar8) {
      iVar15 = 3;
    }
    break;
  case 4:
    uVar10 = uVar23 | uVar10 | uVar11;
    iVar13 = 4;
    goto LAB_008d241c;
  case 5:
    iVar13 = 5;
LAB_008d241c:
    iVar15 = 2;
    uVar11 = uVar10;
LAB_008d2420:
    if (uVar11 == 0) {
      iVar15 = iVar13;
    }
  }
switchD_008d23b4_default:
  local_78 = (undefined *)CONCAT44(local_78._4_4_,iVar15);
  if (iVar12 != iVar15) {
    *(undefined4 *)(param_1 + 0x3095c) = 10;
    *(int *)(param_1 + 0x30964) = iVar15;
    if (((iVar15 == 3) || (iVar15 == 4)) && (iVar12 == 2)) {
      uStack_b0 = 0x40c9972;
    }
    else if ((iVar15 == 2) && (iVar12 - 3U < 2)) {
      uStack_b0 = 0x405bfe8;
    }
    else {
      uStack_b0 = 0x405bfe8;
      if (iVar15 <= iVar12) {
        uStack_b0 = 0x40c466d;
      }
    }
    local_b8 = puVar24 + 0x10;
    local_ac = 0;
    FUN_03844960(param_1 + 0x37fc8,&local_b8,0);
  }
LAB_008d1c10:
  DAT_04ced030 = uVar14;
  if (*(long *)PTR_DAT_04bb59d8 == 0) {
    bVar9 = false;
  }
  else {
    lVar18 = *(long *)PTR_DAT_04bb2720;
    if (lVar18 == 0) {
      puVar25 = &DAT_055c04a0;
    }
    else {
      puVar25 = &DAT_055c04a0;
      if (*(long *)(lVar18 + 0x330) != 0) {
        puVar25 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar18 + 0x338));
        iVar12 = FUN_006bd550(*puVar25,0);
        puVar25 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar12 != 0x758f7eaf) {
          puVar25 = &DAT_055c04a0;
        }
      }
    }
    bVar9 = *(int *)(puVar25 + 7) == -0x17df00c3;
  }
  uVar27 = *(uint *)(param_1 + 0x410);
  if (uVar27 == 0x1e) {
    local_64 = 0x43;
  }
  else {
    uVar10 = *(uint *)(param_1 + 0x30964);
    piVar2 = &DAT_04ced1c0 + uVar10;
    if (3 < uVar10) {
      piVar2 = &DAT_04ced1c0;
    }
    piVar3 = &DAT_04ced1d0 + uVar10;
    if (5 < uVar10) {
      piVar3 = &DAT_04ced1d0;
    }
    if ((uVar27 & 0xfffffffe) == 0x1a) {
      piVar2 = piVar3;
    }
    local_64 = *piVar2;
  }
  local_78 = puVar24 + 0x10;
  local_70 = *(long *)(PTR_PTR_04bb2238 + 8);
  iVar12 = *(int *)(param_1 + 0x307e8);
  if (iVar12 == local_64) {
joined_r0x008d1d50:
    if (!bVar9) {
      return;
    }
  }
  else {
    local_b8 = (undefined *)CONCAT44(local_b8._4_4_,iVar12);
    if (iVar12 < 0) goto joined_r0x008d1d50;
    bVar8 = false;
    if (5 < iVar12) {
      bVar8 = bVar9;
    }
    if (!bVar8) {
      if (5 < iVar12) {
        return;
      }
      goto LAB_008d1e0c;
    }
  }
  uVar10 = *(uint *)(param_1 + 0x30964);
  if ((uVar27 & 0xfffffffe) == 0x1a) {
    puVar20 = &DAT_04ced348;
    puVar25 = &DAT_04ced348 + (ulong)uVar10 * 2;
    bVar8 = 5 < uVar10;
  }
  else {
    puVar20 = &DAT_04ced308;
    puVar25 = &DAT_04ced308 + (ulong)uVar10 * 2;
    bVar8 = 3 < uVar10;
  }
  if (bVar8) {
    puVar25 = puVar20;
  }
  lVar18 = puVar25[1];
  local_70 = lVar18;
  (**(code **)(*plVar1 + 0x18))(plVar1);
  (**(code **)(*plVar1 + 0x18))(plVar1);
  if (*(long *)(param_1 + 0x30710) == lVar18) {
    return;
  }
  uVar21 = 0;
  bVar8 = true;
  do {
    cVar4 = *(char *)(*(long *)(param_1 + 0x30710) + uVar21);
    if (cVar4 != *(char *)(lVar18 + uVar21)) break;
    if (cVar4 == '\0') {
      if (bVar8) {
        return;
      }
      break;
    }
    bVar8 = uVar21 < 0x80000;
    uVar21 = uVar21 + 1;
  } while (uVar21 != 0x80001);
  uVar21 = FUN_008c8080(&local_78);
  if ((uVar21 & 1) == 0) {
    return;
  }
LAB_008d1e0c:
  if (bVar9) {
    local_b8 = puVar24 + 0x10;
    uStack_b0 = SUB84(PTR_s_cDefault_04bb5888,0);
    local_ac = (undefined4)((ulong)PTR_s_cDefault_04bb5888 >> 0x20);
    FUN_008bf770(param_1,&local_78,&local_b8);
  }
  else {
    FUN_008c4aa0(param_1,local_64,0);
  }
  local_b8 = *(undefined **)(param_1 + 0x30910);
  local_94 = *(undefined8 *)(param_1 + 0x30934);
  local_8c = *(undefined8 *)(param_1 + 0x3093c);
  local_84 = *(undefined8 *)(param_1 + 0x30944);
  local_7c = *(undefined4 *)(param_1 + 0x3094c);
  local_a4 = *(undefined8 *)(param_1 + 0x30924);
  local_ac = (undefined4)*(undefined8 *)(param_1 + 0x3091c);
  uStack_a8 = (undefined4)((ulong)*(undefined8 *)(param_1 + 0x3091c) >> 0x20);
  local_9c = *(undefined8 *)(param_1 + 0x3092c);
  uStack_c0 = *(undefined8 *)(param_1 + 0x30980);
  local_d0 = *(undefined8 *)(param_1 + 0x30970);
  local_c8 = *(undefined8 *)(param_1 + 0x30978);
  FUN_008cb7e4(param_1,&local_d0,*(undefined4 *)(param_1 + 0x307e8),&local_b8,0);
  if ((*(int *)(param_1 + 0x307e8) == 1) && (uVar21 = FUN_008cbab0(), (uVar21 & 1) != 0)) {
    uVar14 = 0x5b05b08;
  }
  else {
    uVar14 = 0;
  }
  *(undefined4 *)(param_1 + 0x315e8) = uVar14;
  return;
}

