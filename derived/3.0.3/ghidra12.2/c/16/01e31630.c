
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff4c : 0x01e31fd4 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01e31630(long param_1,long param_2,int *param_3,int *param_4,int *param_5,uint param_6,
                 long *param_7,long param_8,long param_9)

{
  int iVar1;
  undefined2 *puVar2;
  bool bVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  byte bVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  long lVar22;
  undefined8 *puVar23;
  ulong uVar24;
  bool bVar25;
  char cVar26;
  byte bVar27;
  uint uVar28;
  uint *puVar29;
  ulong uVar30;
  undefined **ppuVar31;
  long *plVar32;
  uint uVar33;
  long *plVar34;
  uint *puVar35;
  int *piVar36;
  long lVar37;
  uint *puVar38;
  bool bVar39;
  float fVar41;
  float fVar40;
  float fVar42;
  uint local_104;
  uint local_f4;
  undefined2 local_b4;
  undefined1 local_b2;
  uint local_b0;
  int local_ac;
  undefined *local_a8;
  char *pcStack_a0;
  undefined *local_98;
  char *pcStack_90;
  
  lVar37 = *(long *)PTR_DAT_04bb3968;
  if (lVar37 == 0) {
    return;
  }
  bVar7 = *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476);
  puVar29 = (uint *)(param_2 + 0xc);
  lVar22 = FUN_0265c2a0(*puVar29);
  if (lVar22 == 0) {
LAB_01e31708:
    local_f4 = FUN_021eb720(puVar29);
  }
  else {
    if ((*(long **)(lVar22 + 0x28) == (long *)0x0) ||
       (puVar23 = (undefined8 *)**(long **)(lVar22 + 0x28), puVar23 == (undefined8 *)0x0)) {
      cVar26 = *(char *)(*(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8) + 0x1267a);
    }
    else {
      uVar24 = (**(code **)*puVar23)();
      cVar26 = *(char *)(*(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8) + 0x1267a);
      if ((((uVar24 & 1) != 0) && (*(long *)(lVar22 + 0x28) != 0)) &&
         (puVar23 = *(undefined8 **)(*(long *)(lVar22 + 0x28) + 8), puVar23 != (undefined8 *)0x0)) {
        (**(code **)*puVar23)();
      }
    }
    if (cVar26 != '\x02') goto LAB_01e31708;
    local_f4 = 1;
  }
  lVar22 = *(long *)PTR_DAT_04bb46b0;
  if (lVar22 == 0) {
LAB_01e317c0:
    local_104 = 0;
  }
  else {
    puVar23 = *(undefined8 **)(lVar22 + 0x10);
    if ((*(byte *)(lVar22 + 0x453) & 1) == 0) {
      lVar22 = (**(code **)(*(long *)*puVar23 + 0x38))();
      if (lVar22 == 0) goto LAB_01e317c0;
      lVar22 = lVar22 + 0x70;
    }
    else if (((puVar23 == (undefined8 *)0x0) || ((long *)puVar23[0x26] == (long *)0x0)) ||
            (lVar22 = (**(code **)(*(long *)puVar23[0x26] + 0x38))(), lVar22 == 0))
    goto LAB_01e317c0;
    if ((*(long **)(lVar22 + 0x1bf260) == (long *)0x0) ||
       (puVar23 = (undefined8 *)**(long **)(lVar22 + 0x1bf260), puVar23 == (undefined8 *)0x0)) {
      uVar24 = 0;
    }
    else {
      uVar24 = (**(code **)*puVar23)();
      uVar24 = uVar24 & 0xffffffff;
    }
    local_104 = FUN_028d53e4(*(long *)(lVar22 + 0x1bf248) + *(long *)(lVar22 + 0x1bf240));
    if ((((uVar24 & 1) != 0) && (*(long *)(lVar22 + 0x1bf260) != 0)) &&
       (puVar23 = *(undefined8 **)(*(long *)(lVar22 + 0x1bf260) + 8), puVar23 != (undefined8 *)0x0))
    {
      (**(code **)*puVar23)();
    }
  }
  puVar9 = PTR_DAT_04bb32f0;
  puVar8 = PTR_DAT_04bb2020;
  if (*(long *)PTR_DAT_04bb32f0 == 0) {
LAB_01e3182c:
    bVar15 = true;
LAB_01e31830:
    bVar39 = true;
LAB_01e31834:
    pcStack_90 = "CatchInsectFesQuestStart";
    local_98 = puVar8 + 0x10;
    iVar18 = FUN_02743000(&local_98);
    if (iVar18 == 0) {
      pcStack_a0 = "NNPC_CatchInsectFesAction_Continue";
      local_a8 = puVar8 + 0x10;
      iVar18 = FUN_02743000(&local_a8);
      bVar14 = iVar18 != 0;
    }
    else {
      bVar14 = true;
    }
    if (bVar15 || bVar39) {
      bVar39 = (bool)(bVar15 ^ 1);
      goto LAB_01e318ac;
    }
    if (*(long *)puVar9 == 0) {
      bVar39 = true;
      goto LAB_01e318ac;
    }
    iVar18 = FUN_00883068();
    bVar39 = true;
    bVar15 = true;
    if (iVar18 != 1) goto LAB_01e318ac;
  }
  else {
    uVar17 = FUN_00883550();
    lVar22 = *(long *)puVar9;
    if (1 < uVar17) {
      if ((lVar22 == 0) || (uVar17 = FUN_00883068(), 1 < uVar17)) goto LAB_01e3182c;
      bVar15 = false;
      bVar39 = false;
      goto LAB_01e31834;
    }
    if (lVar22 == 0) {
      bVar15 = false;
      goto LAB_01e31830;
    }
    iVar18 = FUN_00883550();
    bVar39 = true;
    if (iVar18 != 1) {
      bVar15 = false;
      goto LAB_01e31834;
    }
    bVar14 = true;
LAB_01e318ac:
    pcStack_90 = "CatchFishFesQuestStart";
    local_98 = puVar8 + 0x10;
    iVar18 = FUN_02743000(&local_98);
    if (iVar18 == 0) {
      pcStack_a0 = "NNPC_CatchFishFesAction_Continue";
      local_a8 = puVar8 + 0x10;
      iVar18 = FUN_02743000(&local_a8);
      bVar15 = iVar18 != 0;
    }
    else {
      bVar15 = true;
    }
  }
  local_98 = (undefined *)((ulong)local_98 & 0xffffffff00000000);
  uVar24 = FUN_02b67a30(&local_98,*puVar29);
  uVar17 = 0;
  if ((uVar24 & 1) != 0) {
    uVar17 = FUN_02664820((ulong)local_98 & 0xffffffff);
  }
  uVar19 = FUN_02201980();
  bVar16 = FUN_021ded20();
  uVar20 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0);
  uVar20 = uVar20 & 0xfffffffe;
  bVar27 = *(byte *)(param_2 + 8);
  if (((bVar27 < 0x23) && (*(byte *)(param_2 + 9) <= (byte)PTR_DAT_04bc27f0[bVar27])) &&
     ((*(uint *)(PTR_DAT_04bc2a20 + (ulong)bVar27 * 4) >> (ulong)(*(byte *)(param_2 + 9) & 0x1f) & 1
      ) != 0)) {
    if (bVar27 == 0xd) {
      bVar25 = true;
      goto LAB_01e319f0;
    }
    FUN_020fd7d8();
  }
  bVar25 = false;
LAB_01e319f0:
  puVar9 = PTR_DAT_04bc1568;
  bVar3 = false;
  if (uVar20 == 4) {
    bVar3 = bVar25;
  }
  uVar24 = 0;
  do {
    lVar22 = *(long *)(lVar37 + 0x169b8);
    if (lVar22 == 0) {
      return;
    }
    uVar30 = 0;
    if (*(long *)(lVar22 + 8) != 0) {
      uVar30 = (ulong)*(uint *)(*(long *)(lVar22 + 8) + 4);
    }
    if (uVar30 <= uVar24) {
      return;
    }
    local_ac = (int)uVar24;
    if ((int)*(uint *)(lVar37 + 0x16ac8) < 1) {
      if (((lVar22 != 0) && (puVar38 = *(uint **)(lVar22 + 8), puVar38 != (uint *)0x0)) &&
         (((*(uint *)(lVar37 + 0x169d0) <= uVar24 ||
           (*(char *)(*(long *)(lVar37 + 0x169d8) + uVar24) != '\0')) &&
          (((uVar24 < *puVar38 && (puVar38[1] != 0)) && ((ushort)puVar38[2] != 0)))))) {
        iVar18 = 0xc;
        if (*(char *)((long)puVar38 + 10) != '\0') {
          iVar18 = 0x1c;
        }
        puVar38 = (uint *)((ulong)(puVar38[1] * local_ac + (uint)(ushort)puVar38[2] * 8 + iVar18) +
                          (long)puVar38);
        goto joined_r0x01e31c54;
      }
    }
    else if (uVar24 < *(uint *)(lVar37 + 0x16ac8)) {
      uVar30 = uVar24 & 0xffffffff;
      if (*(uint *)(lVar37 + 0x16ab8) <= uVar24) {
        uVar30 = 0;
      }
      puVar38 = *(uint **)(*(long *)(lVar37 + 0x16ac0) + uVar30 * 8);
joined_r0x01e31c54:
      if ((puVar38 != (uint *)0x0) && (local_b0 = FUN_0209eb90(puVar38), local_b0 != 3)) {
        if ((bVar7 < 2 && (param_6 & 1) == 0) &&
           ((*(char *)(param_1 + 0x57c) == '\0' ||
            (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x2f1ac06c)))) {
LAB_01e31c6c:
          if (*param_3 == 1) {
            if (bVar7 < 2) {
              uVar30 = FUN_02153104(*puVar29,*(long *)PTR_DAT_04bb32e8 + 0x4060,1);
              if (((uVar30 & 1) == 0) &&
                 (uVar30 = FUN_00a8117c(*(long *)PTR_DAT_04bb32e8 + 0x4060), (uVar30 & 1) == 0))
              goto LAB_01e31cec;
            }
            else if ((*(ushort *)(param_1 + 0x57e) >> (ulong)(*puVar29 & 0x1f) & 1) == 0)
            goto LAB_01e31cec;
LAB_01e31cdc:
            if (local_ac == 0x16) {
LAB_01e31d00:
              bVar25 = true;
LAB_01e31d04:
              local_98 = (undefined *)CONCAT44(local_98._4_4_,5);
              if (*puVar38 != 0) {
                cVar26 = *PTR_DAT_04bc1560;
                do {
                  puVar10 = PTR_DAT_04bc1560;
                  if (cVar26 == '\0') {
                    cVar26 = '\x01';
                    *(undefined8 *)puVar9 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                    *puVar10 = 1;
                    *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
                  }
                  else {
                    uVar28 = *(uint *)(puVar9 + 0x14);
                    if (-1 < (int)uVar28) {
                      if (((byte *)((ulong)uVar28 + (long)puVar38) != (byte *)0x0) &&
                         ((*(byte *)((ulong)uVar28 + (long)puVar38) >> 5 & 1) != 0)) {
                        pcStack_90 = "CoffeTakeout";
                        local_98 = puVar8 + 0x10;
                        uVar30 = FUN_0273f0a0(&local_98);
                        if ((uVar30 & 1) == 0) goto LAB_01e31a60;
                      }
                      break;
                    }
                    if (uVar28 != 0xffffffff) break;
                  }
                  lVar22 = (long)puVar38 - (ulong)*puVar38;
                  if ((*puVar38 == 0) || (lVar22 == 0)) break;
                  lVar5 = 0xc;
                  if (*(char *)(lVar22 + 10) != '\0') {
                    lVar5 = 0x1c;
                  }
                  if (lVar5 + lVar22 == 0) break;
                  uVar30 = (ulong)*(ushort *)(lVar22 + 8);
                  *(undefined4 *)(puVar9 + 0x14) = 0xfffffffe;
                  if (uVar30 == 0) break;
                  piVar36 = (int *)(lVar5 + lVar22 + 4);
                  while (piVar36[-1] != 0x430dbf65) {
                    piVar36 = piVar36 + 2;
                    uVar30 = uVar30 - 1;
                    if (uVar30 == 0) goto LAB_01e3208c;
                  }
                  iVar18 = 0;
                  if (*piVar36 != -1) {
                    iVar18 = *piVar36;
                  }
                  *(int *)(puVar9 + 0x14) = iVar18;
                  if (*puVar38 == 0) break;
                } while( true );
              }
LAB_01e3208c:
              if (*param_3 == 0) {
                bVar27 = 2;
                if (*puVar38 != 0) {
                  cVar26 = *PTR_DAT_04bc1560;
                  do {
                    puVar10 = PTR_DAT_04bc1560;
                    if (cVar26 == '\0') {
                      cVar26 = '\x01';
                      *(undefined8 *)puVar9 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                      *puVar10 = 1;
                      *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
                    }
                    else {
                      uVar28 = *(uint *)(puVar9 + 0x50);
                      if (-1 < (int)uVar28) {
                        if ((byte *)((ulong)uVar28 + (long)puVar38) != (byte *)0x0) {
                          uVar28 = (uint)*(byte *)((ulong)uVar28 + (long)puVar38);
                          goto LAB_01e32604;
                        }
                        break;
                      }
                      if (uVar28 != 0xffffffff) break;
                    }
                    puVar35 = (uint *)(ulong)*puVar38;
                    uVar28 = 2;
                    if ((*puVar38 == 0) || (puVar38 == puVar35)) goto LAB_01e32604;
                    lVar22 = 0xc;
                    if (*(char *)((long)puVar38 + (10 - (long)puVar35)) != '\0') {
                      lVar22 = 0x1c;
                    }
                    lVar22 = (long)puVar38 + (lVar22 - (long)puVar35);
                    if (lVar22 == 0) break;
                    uVar30 = (ulong)*(ushort *)((long)puVar38 + (8 - (long)puVar35));
                    *(undefined4 *)(puVar9 + 0x50) = 0xfffffffe;
                    if (uVar30 == 0) break;
                    piVar36 = (int *)(lVar22 + 4);
                    while (piVar36[-1] != 0x67850558) {
                      piVar36 = piVar36 + 2;
                      uVar30 = uVar30 - 1;
                      if (uVar30 == 0) goto LAB_01e32600;
                    }
                    iVar18 = 0;
                    if (*piVar36 != -1) {
                      iVar18 = *piVar36;
                    }
                    *(int *)(puVar9 + 0x50) = iVar18;
                    if (*puVar38 == 0) break;
                  } while( true );
                }
LAB_01e32600:
                uVar28 = 2;
LAB_01e32604:
                if (1 < uVar28) {
                  uVar28 = 2;
                }
                local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar28);
                if (*puVar38 != 0) {
                  cVar26 = *PTR_DAT_04bc1560;
LAB_01e32624:
                  puVar10 = PTR_DAT_04bc1560;
                  if (cVar26 == '\0') {
                    cVar26 = '\x01';
                    *(undefined8 *)puVar9 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                    *puVar10 = 1;
                    *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
LAB_01e32674:
                    puVar35 = (uint *)(ulong)*puVar38;
                    bVar27 = 2;
                    if ((*puVar38 == 0) || (puVar38 == puVar35)) goto LAB_01e32714;
                    lVar22 = 0xc;
                    if (*(char *)((long)puVar38 + (10 - (long)puVar35)) != '\0') {
                      lVar22 = 0x1c;
                    }
                    lVar22 = (long)puVar38 + (lVar22 - (long)puVar35);
                    if (lVar22 == 0) goto LAB_01e32710;
                    uVar30 = (ulong)*(ushort *)((long)puVar38 + (8 - (long)puVar35));
                    *(undefined4 *)(puVar9 + 0x4c) = 0xfffffffe;
                    if (uVar30 == 0) goto LAB_01e32710;
                    piVar36 = (int *)(lVar22 + 4);
                    while (piVar36[-1] != -0x5621fc7c) {
                      piVar36 = piVar36 + 2;
                      uVar30 = uVar30 - 1;
                      if (uVar30 == 0) goto LAB_01e32710;
                    }
                    iVar18 = 0;
                    if (*piVar36 != -1) {
                      iVar18 = *piVar36;
                    }
                    *(int *)(puVar9 + 0x4c) = iVar18;
                    if (*puVar38 == 0) goto LAB_01e32710;
                    goto LAB_01e32624;
                  }
                  uVar33 = *(uint *)(puVar9 + 0x4c);
                  if ((int)uVar33 < 0) {
                    if (uVar33 != 0xffffffff) goto LAB_01e32710;
                    goto LAB_01e32674;
                  }
                  if ((byte *)((ulong)uVar33 + (long)puVar38) != (byte *)0x0) {
                    bVar27 = *(byte *)((ulong)uVar33 + (long)puVar38);
                    goto LAB_01e32714;
                  }
LAB_01e32710:
                  bVar27 = 2;
                }
LAB_01e32714:
                if (1 < bVar27) {
                  bVar27 = 2;
                }
                iVar18 = *param_5;
                if (0 < iVar18) {
                  local_a8 = (undefined *)CONCAT44(local_a8._4_4_,*(int *)(param_2 + 0x1dc));
                  if (*(int *)(param_2 + 0x1dc) < 1) {
                    if (bVar3) goto LAB_01e32760;
                    if (iVar18 == 2) {
                      if (((uVar20 != 4) || ((uVar28 == 1 & (bVar16 ^ 0xff)) == 0)) && (bVar27 == 0)
                         ) {
LAB_01e327d4:
                        puVar35 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                        uVar28 = *puVar35 ^ *puVar35 << 0xb;
                        uVar33 = puVar35[3];
                        *puVar35 = puVar35[1];
                        puVar35[1] = puVar35[2];
                        uVar28 = uVar28 >> 8 ^ uVar33 >> 0x13 ^ uVar28 ^ uVar33;
                        puVar35[2] = uVar33;
                        puVar35[3] = uVar28;
                        if (0x45 < (uint)((ulong)uVar28 * 100 >> 0x20)) goto LAB_01e32094;
                      }
                      goto LAB_01e31a60;
                    }
                    if (iVar18 == 1) {
                      if (((uVar20 == 4 && (bVar16 & 1) == 0) && uVar28 == 1) || (bVar27 == 2))
                      goto LAB_01e31a60;
                      if (bVar27 == 1) goto LAB_01e327d4;
                    }
                  }
                  else if ((*(byte *)(param_2 + 0x1e0) & 1) == 0 && !bVar3) {
                    if (uVar28 != 0) goto LAB_01e31a60;
                  }
                  else {
LAB_01e32760:
                    if ((uVar28 != 0) && (uVar28 != 1)) goto LAB_01e31a60;
                  }
                }
              }
LAB_01e32094:
              if (bVar25) {
LAB_01e322c4:
                fVar40 = 1.0;
                if (local_b0 == 1) {
                  iVar18 = (*(code *)(&PTR_LAB_04a71c78)[(long)*(int *)(param_2 + 0x1c) * 2])
                                     (puVar38);
                  local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar18);
                  fVar42 = 0.4;
                  if (iVar18 != 1) {
                    fVar42 = 0.0;
                  }
                  fVar40 = 1.0;
                  if (iVar18 != 0) {
                    fVar40 = fVar42;
                  }
                }
              }
              else {
                if (*puVar38 == 0) {
LAB_01e322a0:
                  uVar28 = 0;
                }
                else {
                  cVar26 = *PTR_DAT_04bc1560;
                  do {
                    puVar10 = PTR_DAT_04bc1560;
                    if (cVar26 == '\0') {
                      cVar26 = '\x01';
                      *(undefined8 *)puVar9 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                      *puVar10 = 1;
                      *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
                    }
                    else {
                      uVar28 = *(uint *)(puVar9 + 0x98);
                      if (-1 < (int)uVar28) {
                        if (((byte *)((ulong)uVar28 + (long)puVar38) == (byte *)0x0) ||
                           (bVar27 = *(byte *)((ulong)uVar28 + (long)puVar38), uVar28 = (uint)bVar27
                           , 4 < bVar27)) goto LAB_01e322a0;
                        goto LAB_01e322a4;
                      }
                      if (uVar28 != 0xffffffff) goto LAB_01e322a0;
                    }
                    puVar35 = (uint *)(ulong)*puVar38;
                    uVar28 = 0;
                    if ((*puVar38 == 0) || (puVar38 == puVar35)) goto LAB_01e322a4;
                    lVar22 = 0xc;
                    if (*(char *)((long)puVar38 + (10 - (long)puVar35)) != '\0') {
                      lVar22 = 0x1c;
                    }
                    lVar22 = (long)puVar38 + (lVar22 - (long)puVar35);
                    if (lVar22 == 0) goto LAB_01e322a0;
                    uVar30 = (ulong)*(ushort *)((long)puVar38 + (8 - (long)puVar35));
                    *(undefined4 *)(puVar9 + 0x98) = 0xfffffffe;
                    uVar28 = 0;
                    if (uVar30 == 0) goto LAB_01e322a4;
                    piVar36 = (int *)(lVar22 + 4);
                    while (piVar36[-1] != -0x11f69e06) {
                      piVar36 = piVar36 + 2;
                      uVar30 = uVar30 - 1;
                      if (uVar30 == 0) {
                        uVar28 = 0;
                        goto LAB_01e322a4;
                      }
                    }
                    iVar18 = 0;
                    if (*piVar36 != -1) {
                      iVar18 = *piVar36;
                    }
                    *(int *)(puVar9 + 0x98) = iVar18;
                  } while (*puVar38 != 0);
                  uVar28 = 0;
                }
LAB_01e322a4:
                local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar28);
                if (*(int *)(param_1 + 0x418) < (int)uVar28) goto LAB_01e31a60;
                if (local_b0 != 0) goto LAB_01e322c4;
                iVar18 = *(int *)(param_2 + 0x14);
                if (*puVar38 != 0) {
                  cVar26 = *PTR_DAT_04bc1560;
                  do {
                    puVar10 = PTR_DAT_04bc1560;
                    if (cVar26 == '\0') {
                      cVar26 = '\x01';
                      *(undefined8 *)puVar9 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                      *puVar10 = 1;
                      *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
                    }
                    else {
                      uVar28 = *(uint *)(puVar9 + 0x38);
                      if (-1 < (int)uVar28) {
                        if ((byte *)((ulong)uVar28 + (long)puVar38) != (byte *)0x0) {
                          uVar28 = (uint)*(byte *)((ulong)uVar28 + (long)puVar38);
                          goto LAB_01e32834;
                        }
                        break;
                      }
                      if (uVar28 != 0xffffffff) break;
                    }
                    puVar35 = (uint *)(ulong)*puVar38;
                    uVar28 = 3;
                    if ((*puVar38 == 0) || (puVar38 == puVar35)) goto LAB_01e32834;
                    lVar22 = 0xc;
                    if (*(char *)((long)puVar38 + (10 - (long)puVar35)) != '\0') {
                      lVar22 = 0x1c;
                    }
                    lVar22 = (long)puVar38 + (lVar22 - (long)puVar35);
                    if (lVar22 == 0) break;
                    uVar30 = (ulong)*(ushort *)((long)puVar38 + (8 - (long)puVar35));
                    *(undefined4 *)(puVar9 + 0x38) = 0xfffffffe;
                    if (uVar30 == 0) break;
                    piVar36 = (int *)(lVar22 + 4);
                    while (piVar36[-1] != 0x38954eb6) {
                      piVar36 = piVar36 + 2;
                      uVar30 = uVar30 - 1;
                      if (uVar30 == 0) goto LAB_01e32830;
                    }
                    iVar21 = 0;
                    if (*piVar36 != -1) {
                      iVar21 = *piVar36;
                    }
                    *(int *)(puVar9 + 0x38) = iVar21;
                    if (*puVar38 == 0) break;
                  } while( true );
                }
LAB_01e32830:
                uVar28 = 3;
LAB_01e32834:
                fVar40 = 1.0;
                if (2 < uVar28) {
                  uVar28 = 3;
                }
                local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar28);
                local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar28);
                if (iVar18 < (int)uVar28) goto LAB_01e31a60;
              }
              if (*param_3 == 0) {
                ppuVar31 = &PTR_LAB_04a71cd8;
              }
              else {
                ppuVar31 = &PTR_LAB_04a71d38;
              }
              iVar21 = (*(code *)ppuVar31[(long)*param_4 * 2])(puVar38);
              local_98 = (undefined *)CONCAT44(local_98._4_4_,iVar21);
              iVar18 = *(int *)(param_2 + 0x48);
              fVar42 = 0.4;
              if (iVar21 != 1) {
                fVar42 = 0.0;
              }
              fVar41 = 1.0;
              if (iVar21 != 0) {
                fVar41 = fVar42;
              }
              fVar40 = fVar40 * fVar41;
              bVar11 = false;
              bVar12 = true;
              bVar13 = false;
              if (fVar40 < 1.0) {
                bVar11 = false;
                bVar12 = false;
                bVar13 = true;
                if (!NAN(fVar40)) {
                  bVar11 = fVar40 < 0.0;
                  bVar12 = fVar40 == 0.0;
                  bVar13 = false;
                }
              }
              fVar42 = 0.4;
              if (bVar12 || bVar11 != bVar13) {
                fVar42 = fVar40;
              }
              if (iVar18 != 0) {
                iVar21 = 0;
                do {
                  iVar1 = iVar18 + *(int *)(param_2 + 0x44) + -1 + iVar21;
                  iVar4 = 0;
                  if (*(int *)(param_2 + 0x40) <= iVar1) {
                    iVar4 = *(int *)(param_2 + 0x40);
                  }
                  piVar36 = (int *)(*(long *)(param_2 + 0x38) + (long)(iVar1 - iVar4) * 0x14);
                  if ((*(char *)((long)piVar36 + 0x11) != '\0') && (*piVar36 == local_ac)) {
                    fVar40 = powf(0.9,(float)(1 - iVar21) + -1.0);
                    fVar42 = fVar42 * (fVar40 * -0.85 + 1.0);
                    break;
                  }
                  iVar21 = iVar21 + -1;
                } while (-iVar18 != iVar21);
              }
              fVar40 = 1.0;
              if ((bVar25) || (fVar40 = fVar42, 0.0 < fVar42)) {
                if (param_7 != (long *)0x0) {
                  plVar6 = param_7 + (ulong)local_b0 * 0x9c;
                  if (2 < local_b0) {
                    plVar6 = param_7;
                  }
                  if ((int)plVar6[2] < (int)plVar6[5]) {
                    plVar32 = (long *)plVar6[3];
                    if (plVar32 != (long *)0x0) {
                      plVar6[3] = *plVar32;
                    }
                    *(float *)((long)plVar32 + 4) = fVar40;
                    plVar32[2] = 0;
                    *(int *)plVar32 = local_ac;
                    plVar34 = plVar32 + 1;
                    *plVar34 = 0;
                    lVar22 = *plVar6;
                    *plVar6 = (long)plVar34;
                    plVar32[2] = (long)plVar6;
                    *plVar34 = lVar22;
                    if (lVar22 != 0) {
                      *(long **)(lVar22 + 8) = plVar34;
                    }
                    *(int *)(plVar6 + 2) = (int)plVar6[2] + 1;
                  }
                }
                if (param_8 != 0) {
                  uVar30 = (ulong)local_b0;
                  if (2 < local_b0) {
                    uVar30 = 0;
                  }
                  if (*(float *)(param_8 + uVar30 * 4) < fVar40) {
                    uVar30 = (ulong)local_b0;
                    if (2 < local_b0) {
                      uVar30 = 0;
                    }
                    *(float *)(param_8 + uVar30 * 4) = fVar40;
                  }
                }
                if (param_9 != 0) {
                  uVar30 = (ulong)local_b0;
                  if (2 < local_b0) {
                    uVar30 = 0;
                  }
                  *(float *)(param_9 + uVar30 * 4) = fVar40 + *(float *)(param_9 + uVar30 * 4);
                }
              }
            }
          }
          else {
LAB_01e31cec:
            if ((local_f4 & 1) == 0) {
              if ((local_104 & 1) == 0) {
                if (*param_3 == 0) {
                  if (bVar14) {
                    if (local_ac == 0x19) goto LAB_01e31d00;
                  }
                  else {
                    if (!bVar15) {
                      if (bVar39) goto LAB_01e31cdc;
                      goto LAB_01e32060;
                    }
                    if (local_ac == 0x18) goto LAB_01e31d00;
                  }
                  goto LAB_01e31a60;
                }
              }
              else {
                if (*puVar38 != 0) {
                  cVar26 = *PTR_DAT_04bc1560;
                  do {
                    puVar10 = PTR_DAT_04bc1560;
                    if (cVar26 == '\0') {
                      cVar26 = '\x01';
                      *(undefined8 *)puVar9 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                      *puVar10 = 1;
                      *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
                    }
                    else {
                      uVar28 = *(uint *)(puVar9 + 100);
                      if (-1 < (int)uVar28) {
                        puVar2 = (undefined2 *)((ulong)uVar28 + (long)puVar38);
                        if (puVar2 != (undefined2 *)0x0) {
                          local_b4 = *puVar2;
                          local_b2 = *(undefined1 *)(puVar2 + 1);
                          goto LAB_01e31f98;
                        }
                        break;
                      }
                      if (uVar28 != 0xffffffff) break;
                    }
                    lVar22 = (long)puVar38 - (ulong)*puVar38;
                    if ((*puVar38 == 0) || (lVar22 == 0)) break;
                    lVar5 = 0xc;
                    if (*(char *)(lVar22 + 10) != '\0') {
                      lVar5 = 0x1c;
                    }
                    if (lVar5 + lVar22 == 0) break;
                    uVar30 = (ulong)*(ushort *)(lVar22 + 8);
                    *(undefined4 *)(puVar9 + 100) = 0xfffffffe;
                    if (uVar30 == 0) break;
                    piVar36 = (int *)(lVar5 + lVar22 + 4);
                    while (piVar36[-1] != -0x6437a430) {
                      piVar36 = piVar36 + 2;
                      uVar30 = uVar30 - 1;
                      if (uVar30 == 0) goto LAB_01e31f90;
                    }
                    iVar18 = 0;
                    if (*piVar36 != -1) {
                      iVar18 = *piVar36;
                    }
                    *(int *)(puVar9 + 100) = iVar18;
                    if (*puVar38 == 0) break;
                  } while( true );
                }
LAB_01e31f90:
                local_b2 = 0;
                local_b4 = 0;
LAB_01e31f98:
                local_a8 = (undefined *)CONCAT44(local_a8._4_4_,7);
                local_98 = (undefined *)CONCAT44(local_98._4_4_,7);
                if ((char)local_b4 < '\0') {
                  uVar28 = 0;
                  iVar18 = 0;
                  do {
                    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,uVar28);
                    if (uVar28 < 0x11) {
                      local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar28);
                      uVar33 = uVar28 + 7;
                      if (-1 < (int)uVar28) {
                        uVar33 = uVar28;
                      }
                      if (2 < (uint)((int)uVar33 >> 3)) goto LAB_01e31ff4;
                      local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar28);
                      uVar33 = *(byte *)((long)&local_b4 + (ulong)(uint)((int)uVar33 >> 3)) >>
                               (ulong)(uVar28 & 7) & 1;
                    }
                    else {
LAB_01e31ff4:
                      uVar33 = 0;
                    }
                    uVar28 = uVar28 + 1;
                    iVar18 = iVar18 + uVar33;
                  } while (uVar28 != 0x11);
                  if (iVar18 == 1) goto LAB_01e31a60;
                }
              }
LAB_01e32060:
              if (local_ac == 0x12) {
                if ((uVar19 & 1) == 0) {
LAB_01e32088:
                  bVar25 = false;
                  goto LAB_01e3208c;
                }
              }
              else {
                if (local_ac != 5) {
                  bVar25 = false;
                  goto LAB_01e31d04;
                }
                if ((uVar17 & 1) != 0) goto LAB_01e32088;
              }
            }
            else if (local_ac == 7) goto LAB_01e31d00;
          }
        }
        else if (*puVar38 != 0) {
          cVar26 = *PTR_DAT_04bc1560;
          do {
            puVar10 = PTR_DAT_04bc1560;
            if (cVar26 == '\0') {
              cVar26 = '\x01';
              *(undefined8 *)puVar9 = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
              *puVar10 = 1;
              *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
              *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
            }
            else {
              uVar28 = *(uint *)(puVar9 + 0x48);
              if (-1 < (int)uVar28) {
                if (((char *)((ulong)uVar28 + (long)puVar38) != (char *)0x0) &&
                   (*(char *)((ulong)uVar28 + (long)puVar38) == '\0')) goto LAB_01e31c6c;
                break;
              }
              if (uVar28 != 0xffffffff) break;
            }
            lVar22 = (long)puVar38 - (ulong)*puVar38;
            if ((*puVar38 == 0) || (lVar22 == 0)) break;
            lVar5 = 0xc;
            if (*(char *)(lVar22 + 10) != '\0') {
              lVar5 = 0x1c;
            }
            if (lVar5 + lVar22 == 0) break;
            uVar30 = (ulong)*(ushort *)(lVar22 + 8);
            *(undefined4 *)(puVar9 + 0x48) = 0xfffffffe;
            if (uVar30 == 0) break;
            piVar36 = (int *)(lVar5 + lVar22 + 4);
            while (piVar36[-1] != -0xe691fac) {
              piVar36 = piVar36 + 2;
              uVar30 = uVar30 - 1;
              if (uVar30 == 0) goto LAB_01e31a60;
            }
            iVar18 = 0;
            if (*piVar36 != -1) {
              iVar18 = *piVar36;
            }
            *(int *)(puVar9 + 0x48) = iVar18;
            if (*puVar38 == 0) break;
          } while( true );
        }
      }
    }
LAB_01e31a60:
    uVar24 = uVar24 + 1;
  } while( true );
}

