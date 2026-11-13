
/* WARNING: Removing unreachable block (ram,0x0125ccb4) */
/* WARNING: Removing unreachable block (ram,0x0125ccc4) */
/* WARNING: Removing unreachable block (ram,0x0125ccd0) */

void FUN_0125c8c0(long param_1)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  uint uVar5;
  ushort uVar6;
  short sVar7;
  uint *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined8 *puVar16;
  undefined8 uVar17;
  uint uVar18;
  ulong uVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  long lVar23;
  int iVar24;
  int iVar25;
  char cVar26;
  int *piVar27;
  long lVar28;
  undefined **local_140;
  undefined **ppuStack_138;
  undefined4 local_130;
  undefined8 local_12c;
  uint local_124;
  undefined4 uStack_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined *local_110;
  undefined1 *puStack_108;
  undefined4 local_100;
  undefined1 local_fc [127];
  undefined1 local_7d;
  undefined4 local_78;
  undefined2 local_74;
  undefined8 local_70;
  undefined *local_68;
  uint local_60 [4];
  
  puVar9 = PTR_DAT_04bb3238;
  FUN_0125dae0(param_1 + 8,PTR_DAT_04bb3238);
  puVar10 = PTR_DAT_04bb6298;
  *(undefined4 *)(param_1 + 0x128) = *(undefined4 *)puVar9;
  uVar6 = *(ushort *)puVar10;
  uVar19 = (ulong)(short)uVar6;
  if (uVar19 != 0xffffffffffffffff) {
    puVar20 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar6 * 8);
    if (0xff < (uint)(int)(short)uVar6) {
      puVar20 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar20 >> 0x12 & 1) != 0) {
      return;
    }
    puVar20 = (uint *)(PTR_DAT_04bc39f8 + (uVar19 & 0xffffffff) * 8);
    if (0xff < uVar6) {
      puVar20 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar20 >> 0x10 & 1) != 0) {
      return;
    }
    local_140 = (undefined **)CONCAT44(local_140._4_4_,0x1c);
    puVar20 = (uint *)(PTR_DAT_04bc39f8 + (uVar19 & 0xffffffff) * 8);
    if (0xff < uVar6) {
      puVar20 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar20 >> 0x1c & 1) != 0) {
      return;
    }
  }
  uVar19 = FUN_01367060();
  puVar11 = PTR_DAT_04bc3a80;
  puVar9 = PTR_DAT_04bb27a8;
  if ((uVar19 & 1) == 0) {
    sVar7 = *(short *)puVar10;
    if (sVar7 != -1) {
      local_140 = (undefined **)CONCAT44(local_140._4_4_,0x20);
      puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
      if (0xff < (uint)(int)sVar7) {
        puVar3 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar3 + 4) & 1) != 0) goto LAB_0125c9dc;
      goto LAB_0125cc20;
    }
LAB_0125cca4:
    local_140 = (undefined **)((ulong)local_140 & 0xffffffff00000000);
    lVar23 = *(long *)(*(long *)puVar9 + 0x1f8);
    if ((lVar23 != 0) && (lVar23 = *(long *)(lVar23 + 0xb8), lVar23 != 0)) {
      lVar28 = FUN_029156e0();
      FUN_0125dd30(param_1,lVar23,*(undefined4 *)(lVar28 + 0x38));
    }
  }
  else {
LAB_0125c9dc:
    if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x7a8de531 ||
        (*(uint *)(*(long *)PTR_DAT_04bb27a8 + 0x4758) & 1) == 0) {
      if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a57de51) {
        local_140 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        ppuStack_138 = (undefined **)0x407e269;
        iVar12 = FUN_02743000(&local_140);
        if ((iVar12 != 0) || (*(long *)(*(long *)PTR_DAT_04bb3728 + 0x50) != 0)) goto LAB_0125cc20;
      }
      sVar7 = *(short *)puVar10;
      if (sVar7 == -1) {
        uVar18 = 1;
      }
      else {
        local_140 = (undefined **)CONCAT44(local_140._4_4_,0x20);
        puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
        if (0xff < (uint)(int)sVar7) {
          puVar3 = PTR_DAT_04bc39f8;
        }
        uVar18 = 0x32;
        if ((*(uint *)(puVar3 + 4) & 1) == 0) {
          uVar18 = 1;
        }
      }
      local_68 = (undefined *)CONCAT44(local_68._4_4_,uVar18);
      lVar23 = *(long *)puVar9;
      if (uVar18 != 0) {
        local_140 = (undefined **)CONCAT44(local_140._4_4_,uVar18);
        if (uVar18 == 0) {
          lVar23 = *(long *)(lVar23 + 0x1f8);
        }
        else {
          plVar1 = (long *)(lVar23 + 0x30);
          plVar4 = plVar1 + uVar18;
          if (0x38 < uVar18) {
            plVar4 = plVar1;
          }
          lVar23 = *plVar4;
        }
        if ((lVar23 != 0) && (lVar23 = *(long *)(lVar23 + 0xb8), lVar23 != 0)) {
          uVar18 = (uint)sVar7;
          if (uVar18 == 0xffffffff) {
LAB_0125cb8c:
            if (*(int *)(puVar11 + 0x38) == -0x24a26848) goto LAB_0125cbac;
            uVar15 = 0x6622bd46;
          }
          else {
            local_140 = (undefined **)CONCAT44(local_140._4_4_,3);
            puVar20 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar18 * 8);
            if (0xff < uVar18) {
              puVar20 = (uint *)PTR_DAT_04bc39f8;
            }
            if ((*puVar20 >> 3 & 1) == 0) goto LAB_0125cb8c;
LAB_0125cbac:
            lVar28 = *(long *)PTR_DAT_04bb2720;
            if (lVar28 == 0) {
              puVar16 = &DAT_055c04a0;
            }
            else {
              puVar16 = &DAT_055c04a0;
              if (*(long *)(lVar28 + 0x330) != 0) {
                puVar16 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar28 + 0x338));
                iVar12 = FUN_006bd550(*puVar16,0);
                puVar16 = (undefined8 *)puVar11;
                if (iVar12 != 0x758f7eaf) {
                  puVar16 = &DAT_055c04a0;
                }
              }
            }
            uVar15 = *(undefined4 *)(puVar16 + 7);
          }
          FUN_0125dd30(param_1,lVar23,uVar15);
        }
      }
    }
LAB_0125cc20:
    sVar7 = *(short *)puVar10;
    if (sVar7 == -1) goto LAB_0125cca4;
    local_140 = (undefined **)CONCAT44(local_140._4_4_,3);
    puVar20 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
    if (0xff < (uint)(int)sVar7) {
      puVar20 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar20 >> 3 & 1) == 0) {
      local_140 = (undefined **)CONCAT44(local_140._4_4_,0x20);
      puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8;
      if (0xff < (uint)(int)sVar7) {
        puVar3 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar3 + 4) & 1) == 0) goto LAB_0125cca4;
    }
  }
  iVar12 = *(int *)(puVar11 + 0x38);
  if (iVar12 == -0x17df00c3) {
    lVar23 = *(long *)PTR_DAT_04bb27f8;
    if ((((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
         ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) || ((*(byte *)(lVar23 + 0x1a71) >> 2 & 1) != 0)
        ) && ((*(long *)PTR_DAT_04bc1530 != 0 &&
              (lVar28 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar28 != 0)))) {
      if ((*(long **)(lVar28 + 0x1790) != (long *)0x0) &&
         (puVar16 = (undefined8 *)**(long **)(lVar28 + 0x1790), puVar16 != (undefined8 *)0x0)) {
        uVar19 = (**(code **)*puVar16)();
        uVar18 = (uint)*(ushort *)(*(long *)(lVar28 + 0x1778) + *(long *)(lVar28 + 6000) + 2);
        if ((((uVar19 & 1) != 0) && (*(long *)(lVar28 + 0x1790) != 0)) &&
           (puVar16 = *(undefined8 **)(*(long *)(lVar28 + 0x1790) + 8), puVar16 != (undefined8 *)0x0
           )) {
          (**(code **)*puVar16)();
        }
        goto LAB_0125d17c;
      }
      lVar23 = *(long *)(lVar28 + 0x1778) + *(long *)(lVar28 + 6000);
    }
    uVar18 = (uint)*(ushort *)(lVar23 + 2);
LAB_0125d17c:
    puVar10 = PTR_DAT_04bcad00;
    puVar9 = PTR_DAT_04bcacf8;
    if (((DAT_05abc358 <= uVar18 - DAT_05abc378) ||
        (puVar20 = *(uint **)(DAT_05abc360 + (long)(int)(uVar18 - DAT_05abc378) * 8),
        puVar20 == (uint *)0x0)) || (uVar18 = *puVar20, uVar18 == 0)) {
      return;
    }
    cVar26 = *PTR_DAT_04bcacf8;
    do {
      if (cVar26 == '\0') {
        cVar26 = '\x01';
        *(undefined8 *)puVar10 = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
        *puVar9 = 1;
        *(undefined8 *)(puVar10 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar10 + 0x68) = 0xffffffffffffffff;
        uVar18 = *puVar20;
      }
      else {
        uVar14 = *(uint *)(puVar10 + 0xc);
        if (-1 < (int)uVar14) {
          if ((ushort *)((ulong)uVar14 + (long)puVar20) == (ushort *)0x0) {
            return;
          }
          local_124 = (uint)*(ushort *)((ulong)uVar14 + (long)puVar20);
          if (local_124 == 0) {
            return;
          }
          uVar17 = *(undefined8 *)PTR_DAT_04bb27c0;
          uStack_120 = 1;
          goto LAB_0125daa8;
        }
        if (uVar14 != 0xffffffff) {
          return;
        }
      }
      puVar8 = (uint *)(ulong)uVar18;
      if (puVar8 == (uint *)0x0) {
        return;
      }
      if (puVar20 == puVar8) {
        return;
      }
      lVar23 = 0xc;
      if (*(char *)((long)puVar20 + (10 - (long)puVar8)) != '\0') {
        lVar23 = 0x1c;
      }
      lVar23 = (long)puVar20 + (lVar23 - (long)puVar8);
      if (lVar23 == 0) {
        return;
      }
      uVar19 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar8));
      *(undefined4 *)(puVar10 + 0xc) = 0xfffffffe;
      if (uVar19 == 0) {
        return;
      }
      piVar27 = (int *)(lVar23 + 4);
      while (piVar27[-1] != 0x539cc0ca) {
        piVar27 = piVar27 + 2;
        uVar19 = uVar19 - 1;
        if (uVar19 == 0) {
          return;
        }
      }
      iVar12 = 0;
      if (*piVar27 != -1) {
        iVar12 = *piVar27;
      }
      *(int *)(puVar10 + 0xc) = iVar12;
      uVar18 = *puVar20;
      if (uVar18 == 0) {
        return;
      }
    } while( true );
  }
  sVar7 = *(short *)puVar10;
  if (sVar7 != -1) {
    local_140 = (undefined **)CONCAT44(local_140._4_4_,3);
    puVar20 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
    if (0xff < (uint)(int)sVar7) {
      puVar20 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar20 >> 3 & 1) != 0) {
      local_124 = FUN_01367280();
      goto LAB_0125da34;
    }
  }
  if (iVar12 == -0x6efba09b) {
    local_60[0] = 0;
    local_60[1] = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    local_68 = PTR_DAT_04bbbfa0 + 0x10;
    ppuStack_138 = &local_68;
    local_140 = &PTR_LAB_0498b748;
    FUN_012a8a70(&local_140);
    uVar18 = local_60[0] - (local_60[0] >> 1 & 0x55555555);
    uVar14 = local_60[1] - (local_60[1] >> 1 & 0x55555555);
    uVar21 = local_60[2] - (local_60[2] >> 1 & 0x55555555);
    uVar22 = local_60[3] - (local_60[3] >> 1 & 0x55555555);
    uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
    uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
    uVar2 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
    uVar18 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 8);
    uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
    uVar14 = uVar14 + (uVar14 >> 8);
    uVar21 = (uVar22 >> 2 & 0x33333333) + (uVar22 & 0x33333333);
    uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
    uVar18 = uVar18 + (uVar18 >> 8);
    uVar21 = uVar21 + (uVar21 >> 4) & 0xf0f0f0f;
    uVar21 = uVar21 + (uVar21 >> 8);
    iVar12 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + (uVar2 + (uVar2 >> 0x10) & 0x3f) +
             (uVar18 + (uVar18 >> 0x10) & 0x3f) + (uVar21 + (uVar21 >> 0x10) & 0x3f);
    uVar14 = FUN_01367280();
    uVar18 = uVar14 >> 5 & 0x7ff;
    if ((uVar14 & 0xffff) < 0x20) {
      iVar25 = 0;
    }
    else {
      iVar25 = 0;
      uVar2 = uVar18;
      if (uVar18 < 2) {
        uVar2 = 1;
      }
      uVar19 = (ulong)uVar2;
      puVar20 = local_60;
      do {
        uVar19 = uVar19 - 1;
        uVar2 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
        uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
        uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
        uVar2 = uVar2 + (uVar2 >> 8);
        iVar25 = (uVar2 + (uVar2 >> 0x10) & 0x3f) + iVar25;
        puVar20 = puVar20 + 1;
      } while (uVar19 != 0);
    }
    uVar18 = local_60[uVar18] & 0xffffffffU >> (ulong)(~(uVar14 & 0xffff) & 0x1f);
    uVar18 = uVar18 - (uVar18 >> 1 & 0x55555555);
    uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
    uVar14 = local_60[0] - (local_60[0] >> 1 & 0x55555555);
    uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
    uVar18 = uVar18 + (uVar18 >> 8);
    iVar25 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + iVar25;
    uVar18 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
    iVar24 = 1;
    if (iVar25 < iVar12) {
      iVar24 = iVar25 + 1;
    }
    iVar25 = 1;
    if (iVar24 < iVar12) {
      iVar25 = iVar24 + 1;
    }
    uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
    uVar18 = uVar18 + (uVar18 >> 8);
    uVar18 = uVar18 + (uVar18 >> 0x10) & 0x3f;
    if ((int)uVar18 < iVar25) {
      uVar14 = local_60[1] - (local_60[1] >> 1 & 0x55555555);
      uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
      uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
      uVar14 = uVar14 + (uVar14 >> 8);
      uVar14 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + uVar18;
      if ((int)uVar14 < iVar25) {
        uVar18 = local_60[2] - (local_60[2] >> 1 & 0x55555555);
        uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
        uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
        uVar18 = uVar18 + (uVar18 >> 8);
        uVar18 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + uVar14;
        if ((int)uVar18 < iVar25) {
          uVar14 = local_60[3] - (local_60[3] >> 1 & 0x55555555);
          uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
          uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
          uVar14 = uVar14 + (uVar14 >> 8);
          if ((int)((uVar14 + (uVar14 >> 0x10) & 0x3f) + uVar18) < iVar25) goto LAB_0125d64c;
          lVar23 = 3;
        }
        else {
          lVar23 = 2;
          uVar18 = uVar14;
        }
      }
      else {
        lVar23 = 1;
      }
    }
    else {
      lVar23 = 0;
      uVar18 = 0;
    }
    uVar14 = local_60[lVar23];
    iVar12 = (int)lVar23;
    if (uVar14 == 0) {
      local_124 = iVar12 * 0x20 - 1;
    }
    else {
      iVar25 = (iVar25 - uVar18) + 1;
      do {
        iVar25 = iVar25 + -1;
        if (iVar25 < 2) {
          uVar18 = uVar14 - 1 & (uVar14 ^ 0xffffffff);
          uVar18 = uVar18 - (uVar18 >> 1 & 0x55555555);
          uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
          uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
          uVar18 = uVar18 + (uVar18 >> 8);
          local_124 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + iVar12 * 0x20;
          goto LAB_0125da34;
        }
        uVar14 = uVar14 - 1 & uVar14;
      } while (uVar14 != 0);
      local_124 = iVar12 * 0x20 - 1;
    }
    goto LAB_0125da34;
  }
  if (iVar12 == -0x10e0fba8) {
    local_60[0] = 0;
    local_60[1] = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    local_68 = PTR_DAT_04bbbfa0 + 0x10;
    ppuStack_138 = &local_68;
    local_140 = &PTR_LAB_0498b748;
    FUN_012a8a70(&local_140);
    uVar18 = local_60[0] - (local_60[0] >> 1 & 0x55555555);
    uVar14 = local_60[1] - (local_60[1] >> 1 & 0x55555555);
    uVar21 = local_60[2] - (local_60[2] >> 1 & 0x55555555);
    uVar22 = local_60[3] - (local_60[3] >> 1 & 0x55555555);
    uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
    uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
    uVar2 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
    uVar18 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 8);
    uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
    uVar14 = uVar14 + (uVar14 >> 8);
    uVar21 = (uVar22 >> 2 & 0x33333333) + (uVar22 & 0x33333333);
    uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
    uVar18 = uVar18 + (uVar18 >> 8);
    uVar21 = uVar21 + (uVar21 >> 4) & 0xf0f0f0f;
    uVar21 = uVar21 + (uVar21 >> 8);
    uVar13 = FUN_01367280();
    uVar22 = uVar13 >> 5 & 0x7ff;
    if ((uVar13 & 0xffff) < 0x20) {
      iVar12 = 0;
    }
    else {
      iVar12 = 0;
      uVar5 = uVar22;
      if (uVar22 < 2) {
        uVar5 = 1;
      }
      uVar19 = (ulong)uVar5;
      puVar20 = local_60;
      do {
        uVar19 = uVar19 - 1;
        uVar5 = *puVar20 - (*puVar20 >> 1 & 0x55555555);
        uVar5 = (uVar5 >> 2 & 0x33333333) + (uVar5 & 0x33333333);
        uVar5 = uVar5 + (uVar5 >> 4) & 0xf0f0f0f;
        uVar5 = uVar5 + (uVar5 >> 8);
        iVar12 = (uVar5 + (uVar5 >> 0x10) & 0x3f) + iVar12;
        puVar20 = puVar20 + 1;
      } while (uVar19 != 0);
    }
    uVar22 = local_60[uVar22] & 0xffffffffU >> (ulong)(~(uVar13 & 0xffff) & 0x1f);
    uVar22 = uVar22 - (uVar22 >> 1 & 0x55555555);
    uVar22 = (uVar22 >> 2 & 0x33333333) + (uVar22 & 0x33333333);
    uVar22 = uVar22 + (uVar22 >> 4) & 0xf0f0f0f;
    uVar22 = uVar22 + (uVar22 >> 8);
    uVar22 = uVar22 + (uVar22 >> 0x10) & 0x3f;
    iVar25 = uVar22 + iVar12;
    if (iVar25 < (int)((uVar14 + (uVar14 >> 0x10) & 0x3f) + (uVar2 + (uVar2 >> 0x10) & 0x3f) +
                      (uVar18 + (uVar18 >> 0x10) & 0x3f) + (uVar21 + (uVar21 >> 0x10) & 0x3f))) {
      uVar18 = local_60[0] - (local_60[0] >> 1 & 0x55555555);
      uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
      uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
      uVar18 = uVar18 + (uVar18 >> 8);
      uVar18 = uVar18 + (uVar18 >> 0x10) & 0x3f;
      if (iVar25 < (int)uVar18) {
        lVar23 = 0;
        uVar18 = 0;
      }
      else {
        uVar14 = local_60[1] - (local_60[1] >> 1 & 0x55555555);
        uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
        uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
        uVar14 = uVar14 + (uVar14 >> 8);
        uVar14 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + uVar18;
        if (iVar25 < (int)uVar14) {
          lVar23 = 1;
        }
        else {
          uVar18 = local_60[2] - (local_60[2] >> 1 & 0x55555555);
          uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
          uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
          uVar18 = uVar18 + (uVar18 >> 8);
          uVar18 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + uVar14;
          if (iVar25 < (int)uVar18) {
            lVar23 = 2;
            uVar18 = uVar14;
          }
          else {
            uVar14 = local_60[3] - (local_60[3] >> 1 & 0x55555555);
            uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
            uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
            uVar14 = uVar14 + (uVar14 >> 8);
            if ((int)((uVar14 + (uVar14 >> 0x10) & 0x3f) + uVar18) <= iVar25) goto LAB_0125dad8;
            lVar23 = 3;
          }
        }
      }
      uVar14 = local_60[lVar23];
      iVar25 = (int)lVar23;
      if (uVar14 == 0) {
        local_124 = iVar25 * 0x20 - 1;
      }
      else {
        iVar12 = ((iVar12 + uVar22) - uVar18) + 2;
        do {
          iVar12 = iVar12 + -1;
          if (iVar12 < 2) {
            uVar18 = uVar14 - 1 & (uVar14 ^ 0xffffffff);
            uVar18 = uVar18 - (uVar18 >> 1 & 0x55555555);
            uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
            uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
            uVar18 = uVar18 + (uVar18 >> 8);
            local_124 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + iVar25 * 0x20;
            goto LAB_0125da34;
          }
          uVar14 = uVar14 - 1 & uVar14;
        } while (uVar14 != 0);
        local_124 = iVar25 * 0x20 - 1;
      }
      goto LAB_0125da34;
    }
    uVar18 = local_60[0] - (local_60[0] >> 1 & 0x55555555);
    uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
    uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
    uVar18 = uVar18 + (uVar18 >> 8);
    if ((uVar18 + (uVar18 >> 0x10) & 0x3f) == 0) {
      uVar18 = local_60[1] - (local_60[1] >> 1 & 0x55555555);
      uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
      uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
      uVar18 = uVar18 + (uVar18 >> 8);
      if ((uVar18 + (uVar18 >> 0x10) & 0x3f) == 0) {
        uVar18 = local_60[2] - (local_60[2] >> 1 & 0x55555555);
        uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
        uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
        uVar18 = uVar18 + (uVar18 >> 8);
        if ((uVar18 + (uVar18 >> 0x10) & 0x3f) == 0) {
          uVar18 = local_60[3] - (local_60[3] >> 1 & 0x55555555);
          uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
          uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
          uVar18 = uVar18 + (uVar18 >> 8);
          if ((uVar18 + (uVar18 >> 0x10) & 0x3f) == 0) {
LAB_0125dad8:
            local_124 = 0xffffffff;
            goto LAB_0125da34;
          }
          lVar23 = 3;
        }
        else {
          lVar23 = 2;
        }
      }
      else {
        lVar23 = 1;
      }
    }
    else {
      lVar23 = 0;
    }
    uVar18 = local_60[lVar23];
    if (uVar18 == 0) goto LAB_0125da2c;
    uVar18 = uVar18 - 1 & (uVar18 ^ 0xffffffff);
    uVar18 = uVar18 - (uVar18 >> 1 & 0x55555555);
    uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
    uVar18 = uVar18 + (uVar18 >> 4);
LAB_0125da1c:
    uVar18 = (uVar18 & 0xf0f0f0f) + ((uVar18 & 0xf0f0f0f) >> 8);
    local_124 = uVar18 + (uVar18 >> 0x10) & 0x3f;
  }
  else {
    if (iVar12 != 0x565b4aba) {
      return;
    }
    ppuStack_138 = &local_68;
    local_60[0] = 0;
    local_60[1] = 0;
    local_60[2] = 0;
    local_60[3] = 0;
    local_68 = PTR_DAT_04bbbfa0 + 0x10;
    local_140 = &PTR_LAB_0498b748;
    FUN_012a8a70(&local_140);
    lVar23 = *(long *)PTR_DAT_04bb46b0;
    if (lVar23 == 0) {
LAB_0125d4fc:
      uVar18 = 0;
    }
    else {
      puVar16 = *(undefined8 **)(lVar23 + 0x10);
      if ((*(byte *)(lVar23 + 0x453) & 1) == 0) {
        lVar23 = (**(code **)(*(long *)*puVar16 + 0x38))();
        if (lVar23 == 0) goto LAB_0125d4fc;
        lVar23 = lVar23 + 0x70;
      }
      else if (((puVar16 == (undefined8 *)0x0) || ((long *)puVar16[0x26] == (long *)0x0)) ||
              (lVar23 = (**(code **)(*(long *)puVar16[0x26] + 0x38))(), lVar23 == 0))
      goto LAB_0125d4fc;
      uVar6 = *(ushort *)(*(long *)PTR_DAT_04bb4928 + 8);
      if ((*(long **)(lVar23 + 0xe7290) == (long *)0x0) ||
         (puVar16 = (undefined8 *)**(long **)(lVar23 + 0xe7290), puVar16 == (undefined8 *)0x0)) {
        uVar14 = 1;
      }
      else {
        uVar14 = (**(code **)*puVar16)();
        uVar14 = uVar14 ^ 1;
      }
      uVar18 = *(int *)(*(long *)(lVar23 + 0xe7278) + *(long *)(lVar23 + 0xe7270)) + (uint)uVar6;
      if ((((uVar14 & 1) == 0) && (*(long *)(lVar23 + 0xe7290) != 0)) &&
         (puVar16 = *(undefined8 **)(*(long *)(lVar23 + 0xe7290) + 8), puVar16 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar16)();
      }
    }
    uVar18 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 1;
    uVar22 = uVar18 ^ uVar18 * 0x800;
    uVar18 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 2;
    uVar18 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 3;
    uVar13 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 4;
    uVar18 = local_60[0] - (local_60[0] >> 1 & 0x55555555);
    uVar14 = local_60[1] - (local_60[1] >> 1 & 0x55555555);
    uVar21 = local_60[2] - (local_60[2] >> 1 & 0x55555555);
    uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
    uVar14 = (uVar14 >> 2 & 0x33333333) + (uVar14 & 0x33333333);
    uVar2 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
    uVar18 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 8);
    uVar14 = uVar14 + (uVar14 >> 4) & 0xf0f0f0f;
    uVar14 = uVar14 + (uVar14 >> 8);
    uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
    uVar18 = uVar18 + (uVar18 >> 8);
    uVar21 = uVar2 + (uVar2 >> 0x10) & 0x3f;
    uVar14 = (uVar14 + (uVar14 >> 0x10) & 0x3f) + uVar21;
    uVar18 = uVar14 + (uVar18 + (uVar18 >> 0x10) & 0x3f);
    uVar2 = local_60[3] - (local_60[3] >> 1 & 0x55555555);
    uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
    uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
    uVar2 = uVar2 + (uVar2 >> 8);
    uVar2 = uVar18 + (uVar2 + (uVar2 >> 0x10) & 0x3f);
    uVar22 = (uint)((ulong)(uVar2 + 1) * (ulong)(uVar22 >> 8 ^ uVar13 >> 0x13 ^ uVar22 ^ uVar13) >>
                   0x20);
    if (uVar2 <= uVar22) {
LAB_0125d64c:
      local_124 = 0xffff;
      goto LAB_0125da34;
    }
    if (uVar22 < uVar21) {
      lVar23 = 0;
      uVar21 = 0;
    }
    else if (uVar22 < uVar14) {
      lVar23 = 1;
    }
    else {
      lVar23 = 2;
      uVar21 = uVar14;
      if (uVar18 <= uVar22) {
        lVar23 = 3;
        uVar21 = uVar18;
      }
    }
    uVar18 = local_60[lVar23];
    if (uVar18 == 0) {
LAB_0125da2c:
      local_124 = 0xffffffff;
    }
    else {
      iVar12 = (uVar22 - uVar21) + 2;
      local_124 = 0xffffffff;
      do {
        iVar12 = iVar12 + -1;
        if (iVar12 < 2) {
          uVar18 = uVar18 - 1 & (uVar18 ^ 0xffffffff);
          uVar18 = uVar18 - (uVar18 >> 1 & 0x55555555);
          uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
          uVar18 = uVar18 + (uVar18 >> 4);
          goto LAB_0125da1c;
        }
        uVar18 = uVar18 - 1 & uVar18;
      } while (uVar18 != 0);
    }
  }
  local_124 = local_124 + (int)lVar23 * 0x20;
LAB_0125da34:
  if (((local_124 ^ 0xffffffff) & 0xffff) == 0) {
    return;
  }
  local_124 = local_124 & 0xffff;
  uStack_120 = 0;
  uVar17 = *(undefined8 *)PTR_DAT_04bb27c0;
LAB_0125daa8:
  local_110 = PTR_DAT_04bb2d88 + 0x10;
  local_70 = 0;
  local_74 = 0;
  local_78 = 7;
  local_7d = 0;
  local_fc[0] = 0;
  local_100 = 0x80;
  puStack_108 = local_fc;
  uStack_118 = 0;
  local_11c = 0;
  local_12c = 0x3f800000;
  local_130 = 0;
  ppuStack_138 = (undefined **)0x0;
  local_140 = (undefined **)0x8d00000000;
  uVar15 = FUN_007402e0(uVar17,&local_140,0,0);
  *(undefined4 *)(param_1 + 0x128) = uVar15;
  return;
}

