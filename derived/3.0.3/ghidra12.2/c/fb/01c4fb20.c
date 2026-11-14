
void FUN_01c4fb20(long param_1)

{
  long *plVar1;
  uint uVar2;
  long *plVar3;
  long lVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char cVar9;
  short sVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  ulong uVar18;
  ulong uVar19;
  long lVar20;
  uint uVar21;
  undefined8 *puVar22;
  uint *puVar23;
  code *pcVar24;
  undefined8 *puVar25;
  uint uVar26;
  uint *puVar27;
  int *piVar28;
  undefined4 uVar29;
  ushort uVar30;
  ulong *puVar31;
  long lVar32;
  undefined8 uVar33;
  long lVar34;
  uint uVar35;
  undefined8 local_180;
  undefined4 local_178;
  long local_170 [32];
  uint local_70;
  uint local_6c [3];
  
  puVar31 = *(ulong **)PTR_DAT_04bb4928;
  *(uint *)(param_1 + 0x200) = *(byte *)((long)puVar31 + 2) - 1;
  bVar5 = *(byte *)((long)puVar31 + 4);
  if ((bVar5 & 0xfc) == 4) {
    uVar29 = 1;
  }
  else if ((bVar5 & 0xf8) == 8) {
    uVar29 = 2;
  }
  else {
    uVar11 = (uint)bVar5;
    if (uVar11 == 0x10) {
      uVar29 = 3;
    }
    else if (uVar11 - 0x11 < 2) {
      uVar29 = 4;
    }
    else {
      uVar29 = 5;
      if (3 < uVar11 - 0x13) {
        uVar29 = 0;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x204) = uVar29;
  *(undefined8 *)(param_1 + 0x208) = 0;
  *(undefined8 *)(param_1 + 0x210) = 0;
  puVar6 = PTR_DAT_04bb30a0;
  uVar11 = FUN_00a8de70(*(undefined8 *)PTR_DAT_04bb30a0,puVar31);
  local_180 = *puVar31;
  uVar33 = *(undefined8 *)puVar6;
  if ((char)(local_180 >> 0x20) < '\x05') {
    local_170[0] = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_180);
    local_170[0] = local_170[0] + -0x15180;
    local_180 = nn::time::ToCalendarTimeInUtc((PosixTime *)local_170);
  }
  uVar14 = local_180;
  uVar17 = local_180 >> 0x10;
  uVar18 = local_180 >> 0x18;
  local_180._0_6_ = CONCAT24(5,(undefined4)local_180);
  local_180._7_1_ = SUB81(uVar14,7);
  local_180._0_7_ = (uint7)(uint6)local_180;
  cVar9 = FUN_00a8ae20(uVar33,uVar17,uVar18,4);
  uVar21 = 7;
  if (cVar9 != '\x02') {
    uVar21 = 3;
  }
  uVar26 = 0xd;
  if (cVar9 != '\x02') {
    uVar26 = 0x19;
  }
  if ((uVar11 & 0xfffffffe) != 4) {
    uVar21 = uVar26;
  }
  local_180 = *puVar31;
  uVar33 = *(undefined8 *)PTR_DAT_04bb30a0;
  if ((char)(local_180 >> 0x20) < '\x05') {
    local_170[0] = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_180);
    local_170[0] = local_170[0] + -0x15180;
    local_180 = nn::time::ToCalendarTimeInUtc((PosixTime *)local_170);
  }
  uVar14 = local_180;
  uVar17 = local_180 >> 0x10;
  uVar18 = local_180 >> 0x18;
  local_180._0_6_ = CONCAT24(5,(undefined4)local_180);
  local_180._7_1_ = SUB81(uVar14,7);
  local_180._0_7_ = (uint7)(uint6)local_180;
  cVar9 = FUN_00a8ae20(uVar33,uVar17,uVar18,8);
  uVar11 = uVar21 | 0x20;
  if (2 < (byte)(cVar9 - 1U)) {
    uVar11 = uVar21;
  }
  uVar14 = FUN_00a8d4a0(*(undefined8 *)PTR_DAT_04bb30a0,puVar31);
  puVar6 = PTR_DAT_04bb4008;
  local_170[0x1e] = 0;
  local_170[0x1f] = 0;
  uVar21 = uVar11 | 0x40;
  if ((uVar14 & 1) == 0) {
    uVar21 = uVar11;
  }
  local_170[0x1c] = 0;
  local_170[0x1d] = 0;
  puVar22 = (undefined8 *)0x0;
  local_170[0x1a] = 0;
  local_170[0x1b] = 0;
  local_170[0x18] = 0;
  local_170[0x19] = 0;
  local_170[0x16] = 0;
  local_170[0x17] = 0;
  local_170[0x14] = 0;
  local_170[0x15] = 0;
  local_170[0x12] = 0;
  local_170[0x13] = 0;
  local_170[0x10] = 0;
  local_170[0x11] = 0;
  local_170[0xe] = 0;
  local_170[0xf] = 0;
  local_170[0xc] = 0;
  local_170[0xd] = 0;
  local_170[10] = 0;
  local_170[0xb] = 0;
  local_170[8] = 0;
  local_170[9] = 0;
  local_170[6] = 0;
  local_170[7] = 0;
  local_170[4] = 0;
  local_170[5] = 0;
  local_170[2] = 0;
  local_170[3] = 0;
  puVar25 = *(undefined8 **)(*(long *)PTR_DAT_04bb4008 + 0x20);
  local_170[0] = 0;
  local_170[1] = 0;
  if ((puVar25 != (undefined8 *)0x0) && (*(int *)(*(long *)PTR_DAT_04bb4008 + 0x18) != 0)) {
    puVar22 = (undefined8 *)*puVar25;
    if (((*PTR_DAT_04bbfc78 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04bbfc78), iVar13 != 0)) {
      *(undefined **)PTR_DAT_04bbfc70 = PTR_DAT_04bbfc80 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbfc78);
    }
    if (puVar22 == (undefined8 *)0x0) {
      puVar22 = (undefined8 *)0x0;
    }
    else {
      uVar14 = (**(code **)*puVar22)(puVar22,PTR_DAT_04bbfc70);
      if ((uVar14 & 1) == 0) {
        puVar22 = (undefined8 *)0x0;
      }
    }
  }
  puVar8 = PTR_DAT_04bbec80;
  puVar7 = PTR_DAT_04bbec78;
  uVar11 = *(uint *)(puVar22 + 0x38);
  if ((0 < (int)uVar11) ||
     (((puVar22[0x16] != 0 && (puVar23 = *(uint **)(puVar22[0x16] + 8), puVar23 != (uint *)0x0)) &&
      (uVar11 = *puVar23, 0 < (int)uVar11)))) {
    uVar26 = 0;
    do {
      uVar12 = uVar26;
      if (*(uint *)(*(long *)puVar6 + 0x358) <= uVar26) {
        uVar12 = 0;
      }
      puVar23 = *(uint **)(*(long *)(*(long *)puVar6 + 0x360) + (ulong)uVar12 * 8);
      if (*puVar23 != 0) {
        cVar9 = *puVar7;
        do {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar8 = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
            *puVar7 = 1;
            *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
            uVar12 = *puVar23;
          }
          else {
            uVar12 = *(uint *)(puVar8 + 0x14);
            if (-1 < (int)uVar12) {
              if ((ushort *)((ulong)uVar12 + (long)puVar23) != (ushort *)0x0) {
                uVar30 = *(ushort *)((ulong)uVar12 + (long)puVar23);
                local_6c[0] = (uint)uVar30;
                if (local_6c[0] != 0x279) goto LAB_01c4fef8;
                goto LAB_01c4fde4;
              }
              break;
            }
            if (uVar12 != 0xffffffff) break;
            uVar12 = *puVar23;
          }
          if ((uVar12 == 0) || (puVar27 = (uint *)(ulong)uVar12, puVar23 == puVar27)) break;
          lVar15 = 0xc;
          if (*(char *)((long)puVar23 + (10 - (long)puVar27)) != '\0') {
            lVar15 = 0x1c;
          }
          lVar15 = (long)puVar23 + (lVar15 - (long)puVar27);
          if (lVar15 == 0) break;
          uVar14 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar27));
          *(undefined4 *)(puVar8 + 0x14) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar28 = (int *)(lVar15 + 4);
          while (piVar28[-1] != 0x20cb67bc) {
            piVar28 = piVar28 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_01c4fef0;
          }
          iVar13 = 0;
          if (*piVar28 != -1) {
            iVar13 = *piVar28;
          }
          *(int *)(puVar8 + 0x14) = iVar13;
          if (*puVar23 == 0) break;
        } while( true );
      }
LAB_01c4fef0:
      uVar30 = 0;
      local_6c[0] = 0;
LAB_01c4fef8:
      uVar12 = *puVar23;
      uVar16 = 0;
      if ((uVar12 != 0) && (puVar23 != (uint *)(ulong)uVar12)) {
        puVar27 = (uint *)((long)puVar23 - (long)(ulong)uVar12);
        uVar16 = 0;
        if (*puVar27 != 0) {
          uVar12 = puVar27[1];
          if ((uVar12 != 0) && ((ulong)(ushort)puVar27[2] != 0)) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar27 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar27 + lVar15 + (ulong)(ushort)puVar27[2] * 8;
            if (lVar15 != 0) {
              uVar16 = 0;
              if ((ulong)uVar12 != 0) {
                uVar16 = (uint)((ulong)((long)puVar23 - lVar15) / (ulong)uVar12);
              }
              if (*puVar27 <= uVar16) {
                uVar16 = 0xffffffff;
              }
              if ((uVar16 < *(uint *)PTR_DAT_04bbfc68) &&
                 (uVar16 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bbfc68 + 8) + (long)(int)uVar16 * 2),
                 uVar16 < 7)) goto LAB_01c4ff84;
            }
          }
          uVar16 = 0;
        }
      }
LAB_01c4ff84:
      local_180 = CONCAT44(local_180._4_4_,uVar16);
      if (((uVar21 >> (ulong)(uVar16 & 0x1f) & 1) != 0) &&
         (uVar14 = FUN_019515bc(*(undefined8 *)PTR_DAT_04bb47e0,local_6c), (uVar14 & 1) != 0)) {
        local_70 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
        if (1 < local_70) {
          local_70 = 0;
        }
        local_180 = (ulong)uVar30;
        lVar32 = *(long *)PTR_DAT_04bb47e0;
        FUN_0277d4ac(&local_180);
        lVar15 = FUN_01950d30(lVar32,&local_70);
        if (lVar15 != 0) {
          uVar12 = FUN_0277d6c4(&local_180);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if (uVar12 < *(uint *)(lVar15 + 0x1d8)) {
            lVar15 = *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar12 * 8);
            if (lVar15 != 0) {
              uVar12 = *(int *)(param_1 + 0x204) + *(int *)(param_1 + 0x200) * 6;
              plVar1 = (long *)(lVar32 + 0x170);
              plVar3 = plVar1 + (ulong)uVar12 * 2;
              if (0x47 < uVar12) {
                plVar3 = plVar1;
              }
              pcVar24 = (code *)*plVar3;
              if ((plVar3[1] & 1U) != 0) {
                pcVar24 = *(code **)(pcVar24 + *(long *)(lVar15 + (plVar3[1] >> 1)));
              }
              sVar10 = (*pcVar24)();
              if ((uVar26 < 0x800) && (sVar10 != 0)) {
                lVar15 = (ulong)(uVar26 >> 5) * 4;
                *(uint *)((long)local_170 + lVar15) =
                     *(uint *)((long)local_170 + lVar15) | 1 << (ulong)(uVar26 & 0x1f);
              }
            }
          }
        }
      }
LAB_01c4fde4:
      uVar26 = uVar26 + 1;
    } while (uVar26 != uVar11);
  }
  uVar11 = *(uint *)(param_1 + 0x1c0);
  lVar15 = *(long *)(param_1 + 0xb0);
  uVar21 = uVar11;
  if (((int)uVar11 < 1) &&
     (((lVar15 == 0 || (*(uint **)(lVar15 + 8) == (uint *)0x0)) ||
      (uVar21 = **(uint **)(lVar15 + 8), (int)uVar21 < 1)))) {
    return;
  }
  uVar14 = 0;
  uVar18 = DAT_0534de8c & 0xffffffff;
  uVar17 = DAT_0534de8c >> 0x20;
  uVar26 = *(uint *)(param_1 + 200);
  lVar32 = *(long *)(param_1 + 0xd0);
  uVar12 = *(uint *)(param_1 + 0x1b0);
  lVar20 = *(long *)(param_1 + 0x1b8);
  cVar9 = DAT_0534de88;
LAB_01c5018c:
  if ((int)uVar11 < 1) {
    if (lVar15 == 0) {
      puVar23 = (uint *)0x0;
    }
    else {
      puVar23 = *(uint **)(lVar15 + 8);
      if (puVar23 != (uint *)0x0) {
        if ((uVar14 < uVar26) && (*(char *)(lVar32 + uVar14) == '\0')) {
          puVar23 = (uint *)0x0;
        }
        else if (uVar14 < *puVar23) {
          if (puVar23[1] == 0) {
            puVar23 = (uint *)0x0;
          }
          else if ((ushort)puVar23[2] == 0) {
            puVar23 = (uint *)0x0;
          }
          else {
            iVar13 = 0xc;
            if (*(char *)((long)puVar23 + 10) != '\0') {
              iVar13 = 0x1c;
            }
            puVar23 = (uint *)((ulong)(puVar23[1] * (int)uVar14 + (uint)(ushort)puVar23[2] * 8 +
                                      iVar13) + (long)puVar23);
          }
        }
        else {
          puVar23 = (uint *)0x0;
        }
      }
    }
  }
  else if (uVar14 < uVar11) {
    uVar19 = uVar14 & 0xffffffff;
    if (uVar12 <= uVar14) {
      uVar19 = 0;
    }
    puVar23 = *(uint **)(lVar20 + uVar19 * 8);
  }
  else {
    puVar23 = (uint *)0x0;
  }
  while (puVar27 = (uint *)(ulong)*puVar23, *puVar23 != 0) {
    if (cVar9 != '\0') {
      if ((int)uVar17 < 0) {
        if (uVar17 == 0xffffffff) {
          if (puVar27 != (uint *)0x0) goto LAB_01c50290;
          goto LAB_01c503bc;
        }
      }
      else {
        puVar22 = (undefined8 *)(uVar17 + (long)puVar23);
        if (puVar22 != (undefined8 *)0x0) {
          local_180 = *puVar22;
          local_178 = *(undefined4 *)(puVar22 + 1);
          goto LAB_01c502ec;
        }
      }
LAB_01c502dc:
      puVar27 = (uint *)(ulong)*puVar23;
      local_180 = 0;
      local_178 = 0;
      if (*puVar23 == 0) goto LAB_01c50410;
      goto LAB_01c502ec;
    }
    DAT_0534de8c = 0xffffffffffffffff;
    cVar9 = '\x01';
    uVar18 = 0xffffffff;
    puVar27 = (uint *)(ulong)*puVar23;
    DAT_0534de88 = '\x01';
    if (puVar27 == (uint *)0x0) {
LAB_01c503bc:
      uVar17 = 0xffffffff;
      goto LAB_01c502dc;
    }
LAB_01c50290:
    lVar34 = (long)puVar23 - (long)puVar27;
    if (lVar34 == 0) goto LAB_01c503bc;
    lVar4 = 0xc;
    if (*(char *)(lVar34 + 10) != '\0') {
      lVar4 = 0x1c;
    }
    if (lVar4 + lVar34 == 0) goto LAB_01c503bc;
    uVar17 = (ulong)*(ushort *)(lVar34 + 8);
    DAT_0534de8c = CONCAT44(0xfffffffe,(undefined4)DAT_0534de8c);
    if (uVar17 == 0) {
LAB_01c502d8:
      uVar17 = 0xfffffffe;
      goto LAB_01c502dc;
    }
    puVar27 = (uint *)(lVar4 + lVar34 + 4);
    while (puVar27[-1] != 0xd086a528) {
      puVar27 = puVar27 + 2;
      uVar17 = uVar17 - 1;
      if (uVar17 == 0) goto LAB_01c502d8;
    }
    uVar17 = 0;
    if (*puVar27 != 0xffffffff) {
      uVar17 = (ulong)*puVar27;
    }
    DAT_0534de8c = CONCAT44((int)uVar17,(undefined4)DAT_0534de8c);
  }
  local_178 = 0;
  uVar16 = 1;
  local_180 = 0;
LAB_01c50414:
  uVar35 = 0;
  do {
    if (uVar35 < 0x5a) {
      uVar2 = uVar35 + 7;
      if (-1 < (int)uVar35) {
        uVar2 = uVar35;
      }
      if ((((uint)((int)uVar2 >> 3) < 0xc) &&
          ((*(byte *)((long)local_170 + ((ulong)(uint)((int)uVar2 >> 3) - 0x10)) >>
            (ulong)(uVar35 & 7) & 1) != 0)) &&
         ((*(uint *)((long)local_170 + (ulong)(uVar35 >> 5) * 4) >> (ulong)(uVar35 & 0x1f) & 1) != 0
         )) {
        if (uVar16 < 2) {
          uVar16 = *puVar23;
          goto joined_r0x01c50498;
        }
        uVar16 = 1;
      }
    }
    uVar35 = uVar35 + 1;
  } while (uVar35 != 0x5a);
  goto LAB_01c50180;
LAB_01c502ec:
  if (cVar9 != '\0') {
    if ((int)uVar18 < 0) {
      if (uVar18 != 0xffffffff) goto LAB_01c50410;
      if (puVar27 != (uint *)0x0) goto LAB_01c5032c;
LAB_01c503c4:
      uVar16 = 1;
      uVar18 = 0xffffffff;
    }
    else if ((short *)(uVar18 + (long)puVar23) == (short *)0x0) {
LAB_01c50410:
      uVar16 = 1;
    }
    else {
      uVar16 = 1;
      if (*(short *)(uVar18 + (long)puVar23) == 9) {
        uVar16 = 2;
      }
    }
    goto LAB_01c50414;
  }
  DAT_0534de8c = 0xffffffffffffffff;
  cVar9 = '\x01';
  uVar17 = 0xffffffff;
  puVar27 = (uint *)(ulong)*puVar23;
  DAT_0534de88 = '\x01';
  if (puVar27 == (uint *)0x0) goto LAB_01c503c4;
LAB_01c5032c:
  uVar16 = 1;
  if (puVar23 == puVar27) goto LAB_01c503c4;
  lVar34 = 0xc;
  if (*(char *)((long)puVar23 + (10 - (long)puVar27)) != '\0') {
    lVar34 = 0x1c;
  }
  lVar34 = (long)puVar23 + (lVar34 - (long)puVar27);
  if (lVar34 == 0) goto LAB_01c503c4;
  uVar18 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar27));
  DAT_0534de8c = CONCAT44(DAT_0534de8c._4_4_,0xfffffffe);
  if (uVar18 == 0) {
    uVar18 = 0xfffffffe;
    goto LAB_01c50414;
  }
  puVar27 = (uint *)(lVar34 + 4);
  while (puVar27[-1] != 0x54706054) {
    puVar27 = puVar27 + 2;
    uVar18 = uVar18 - 1;
    if (uVar18 == 0) {
      uVar16 = 1;
      uVar18 = 0xfffffffe;
      goto LAB_01c50414;
    }
  }
  uVar16 = 1;
  uVar18 = 0;
  if (*puVar27 != 0xffffffff) {
    uVar18 = (ulong)*puVar27;
  }
  DAT_0534de8c = CONCAT44(DAT_0534de8c._4_4_,(int)uVar18);
  puVar27 = (uint *)(ulong)*puVar23;
  if (*puVar23 == 0) goto LAB_01c50414;
  goto LAB_01c502ec;
joined_r0x01c50498:
  if (uVar16 == 0) goto LAB_01c50560;
  puVar27 = (uint *)(ulong)uVar16;
  if (cVar9 != '\0') {
    if ((int)uVar18 < 0) {
      if (uVar18 == 0xffffffff) {
        if (puVar27 != (uint *)0x0) goto LAB_01c504cc;
LAB_01c5053c:
        uVar19 = 0;
        uVar18 = 0xffffffff;
        goto LAB_01c50164;
      }
    }
    else if ((ushort *)(uVar18 + (long)puVar23) != (ushort *)0x0) {
      uVar30 = *(ushort *)(uVar18 + (long)puVar23);
      uVar19 = (ulong)uVar30;
      if (0x7f < uVar30) goto LAB_01c50180;
      goto LAB_01c50164;
    }
    goto LAB_01c50560;
  }
  DAT_0534de8c = 0xffffffffffffffff;
  cVar9 = '\x01';
  uVar17 = 0xffffffff;
  puVar27 = (uint *)(ulong)*puVar23;
  DAT_0534de88 = '\x01';
  if (puVar27 == (uint *)0x0) goto LAB_01c5053c;
LAB_01c504cc:
  if (puVar23 == puVar27) goto LAB_01c5053c;
  lVar34 = 0xc;
  if (*(char *)((long)puVar23 + (10 - (long)puVar27)) != '\0') {
    lVar34 = 0x1c;
  }
  lVar34 = (long)puVar23 + (lVar34 - (long)puVar27);
  if (lVar34 == 0) goto LAB_01c5053c;
  uVar18 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar27));
  DAT_0534de8c = CONCAT44(DAT_0534de8c._4_4_,0xfffffffe);
  if (uVar18 == 0) {
LAB_01c5015c:
    uVar19 = 0;
    uVar18 = 0xfffffffe;
    goto LAB_01c50164;
  }
  puVar27 = (uint *)(lVar34 + 4);
  while (puVar27[-1] != 0x54706054) {
    puVar27 = puVar27 + 2;
    uVar18 = uVar18 - 1;
    if (uVar18 == 0) goto LAB_01c5015c;
  }
  uVar18 = 0;
  if (*puVar27 != 0xffffffff) {
    uVar18 = (ulong)*puVar27;
  }
  DAT_0534de8c = CONCAT44(DAT_0534de8c._4_4_,(int)uVar18);
  uVar16 = *puVar23;
  goto joined_r0x01c50498;
LAB_01c50560:
  uVar19 = 0;
LAB_01c50164:
  lVar34 = (uVar19 >> 5) * 4;
  *(uint *)(param_1 + 0x208 + lVar34) =
       1 << (ulong)((uint)uVar19 & 0x1f) | *(uint *)(param_1 + 0x208 + lVar34);
LAB_01c50180:
  uVar14 = uVar14 + 1;
  if (uVar14 == uVar21) {
    return;
  }
  goto LAB_01c5018c;
}

