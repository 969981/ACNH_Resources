
void FUN_02629c40(long param_1,long param_2,byte *param_3,ulong param_4,uint param_5)

{
  long lVar1;
  uint *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  ushort uVar5;
  undefined2 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  undefined8 *puVar12;
  short *psVar13;
  ulong uVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  long *plVar18;
  undefined8 *puVar19;
  undefined8 uVar20;
  long lVar21;
  undefined4 *puVar22;
  long lVar23;
  short *psVar24;
  ushort *puVar25;
  uint local_b4;
  byte local_7c [4];
  undefined *local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  long local_68;
  
  puVar4 = PTR_DAT_04bb43c0;
  lVar1 = param_2 + 0x2c;
  param_4 = param_4 & 0xff;
  puVar22 = (undefined4 *)(lVar1 + param_4 * 0x18);
  puVar25 = (ushort *)(puVar22 + 2);
  if (*puVar25 == 0) {
    return;
  }
  local_68 = 0;
  local_78 = PTR_DAT_04bc0510 + 0x10;
  local_70 = *puVar22;
  uStack_6c = puVar22[1];
  lVar23 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar4 != 0) {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar23 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar23 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(puVar22);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if (uVar7 < *(uint *)(lVar23 + 0x1d8)) {
        lVar23 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar7 * 8);
        if (lVar23 != 0) {
          local_68 = lVar23;
        }
      }
    }
  }
  uVar11 = FUN_01af3520(&local_78);
  if ((uVar11 & 1) != 0) {
    uVar5 = FUN_0267f5b0(param_3,puVar22);
    *(ushort *)(lVar1 + param_4 * 0x18 + 0x14) = uVar5;
    if (*puVar25 <= uVar5) {
      return;
    }
    goto LAB_0262a3c8;
  }
  local_7c[0] = *param_3;
  if (7 < local_7c[0]) {
    local_7c[0] = 0xff;
  }
  lVar23 = FUN_025830c0(DAT_055021a0,local_7c,1);
  if ((lVar23 != 0) && (*(char *)(param_1 + 8) == '\0')) {
    lVar21 = lVar23 + 0x194b0;
    plVar18 = (long *)(lVar23 + 0x194b8);
    lVar23 = lVar21;
    if (*plVar18 == 0) {
      lVar23 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar23 + 0x108) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar23 + 0x108), puVar12 == (undefined8 *)0x0)) {
      local_b4 = 0;
    }
    else {
      local_b4 = (**(code **)*puVar12)();
    }
    psVar24 = (short *)(param_1 + 0x20);
    lVar15 = *(long *)(lVar23 + 0xf0) + *(long *)(lVar23 + 0xe8);
    FUN_0263d5ac(psVar24,lVar15);
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(lVar15 + 0xa0);
    uVar17 = *(undefined8 *)(lVar15 + 0xa4);
    uVar3 = *(undefined4 *)(lVar15 + 0xb4);
    *(undefined8 *)(param_1 + 0xcc) = *(undefined8 *)(lVar15 + 0xac);
    *(undefined8 *)(param_1 + 0xc4) = uVar17;
    *(undefined4 *)(param_1 + 0xd4) = uVar3;
    *(undefined4 *)(param_1 + 0xd8) = 0;
    if (0 < *(int *)(param_1 + 0xe0)) {
      lVar15 = 0;
      puVar12 = *(undefined8 **)(param_1 + 0xf0);
      do {
        puVar19 = *(undefined8 **)(*(long *)(param_1 + 0xe8) + lVar15 * 8);
        lVar15 = lVar15 + 1;
        *puVar19 = puVar12;
        *(undefined8 **)(param_1 + 0xf0) = puVar19;
        puVar12 = puVar19;
      } while (lVar15 < *(int *)(param_1 + 0xe0));
    }
    *(undefined4 *)(param_1 + 0xe0) = 0;
    memset((void *)(param_1 + 0x308),0,60000);
    uVar11 = 0;
    do {
      uVar7 = *(uint *)(param_1 + 0xc0);
      if (0x13 < uVar7) {
        uVar7 = 0x14;
      }
      if (uVar11 < uVar7) {
        psVar13 = psVar24;
        if (*psVar24 != -2) {
          lVar15 = *(long *)puVar4;
          uVar7 = FUN_0277d6c4(psVar24);
          if (*(long *)puVar4 == 0) {
            psVar13 = &DAT_05586008;
          }
          else {
            lVar15 = *(long *)(lVar15 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
            psVar13 = (short *)PTR_DAT_04bb37e0;
            if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
               (psVar13 = &DAT_05586008,
               *(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
              psVar13 = psVar24;
            }
          }
        }
        uVar6 = FUN_0277d6c4(psVar13);
        *(undefined2 *)(param_1 + 0x2e0 + uVar11 * 2) = uVar6;
      }
      uVar11 = uVar11 + 1;
      psVar24 = psVar24 + 4;
    } while (uVar11 != 0x14);
    (**(code **)(*(long *)(param_1 + 0x10) + 0x40))();
    lVar15 = lVar21;
    if (*plVar18 == 0) {
      lVar15 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar15 + 0xd0) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar15 + 0xd0), puVar12 == (undefined8 *)0x0)) {
      uVar7 = 0;
    }
    else {
      uVar7 = (**(code **)*puVar12)();
    }
    psVar24 = (short *)(param_1 + 0xed78);
    lVar16 = *(long *)(lVar15 + 0xb8) + *(long *)(lVar15 + 0xb0);
    FUN_0263d5ac(psVar24,lVar16);
    *(undefined4 *)(param_1 + 0xee18) = *(undefined4 *)(lVar16 + 0xa0);
    uVar17 = *(undefined8 *)(lVar16 + 0xac);
    uVar20 = *(undefined8 *)(lVar16 + 0xa4);
    uVar3 = *(undefined4 *)(lVar16 + 0xb4);
    *(undefined4 *)(param_1 + 0xee30) = 0;
    *(undefined8 *)(param_1 + 0xee24) = uVar17;
    *(undefined4 *)(param_1 + 0xee2c) = uVar3;
    *(undefined8 *)(param_1 + 0xee1c) = uVar20;
    if (0 < *(int *)(param_1 + 0xee38)) {
      lVar16 = 0;
      puVar12 = *(undefined8 **)(param_1 + 61000);
      do {
        puVar19 = *(undefined8 **)(*(long *)(param_1 + 0xee40) + lVar16 * 8);
        lVar16 = lVar16 + 1;
        *puVar19 = puVar12;
        *(undefined8 **)(param_1 + 61000) = puVar19;
        puVar12 = puVar19;
      } while (lVar16 < *(int *)(param_1 + 0xee38));
    }
    *(undefined4 *)(param_1 + 0xee38) = 0;
    memset((void *)(param_1 + 0xf060),0,60000);
    uVar11 = 0;
    do {
      uVar8 = *(uint *)(param_1 + 0xee18);
      if (0x13 < uVar8) {
        uVar8 = 0x14;
      }
      if (uVar11 < uVar8) {
        psVar13 = psVar24;
        if (*psVar24 != -2) {
          lVar16 = *(long *)puVar4;
          uVar8 = FUN_0277d6c4(psVar24);
          if (*(long *)puVar4 == 0) {
            psVar13 = &DAT_05586008;
          }
          else {
            lVar16 = *(long *)(lVar16 + 0x57e58);
            uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
            psVar13 = (short *)PTR_DAT_04bb37e0;
            if ((uVar8 < *(uint *)(lVar16 + 0x1d8)) &&
               (psVar13 = &DAT_05586008,
               *(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
              psVar13 = psVar24;
            }
          }
        }
        uVar6 = FUN_0277d6c4(psVar13);
        *(undefined2 *)(param_1 + 0xf038 + uVar11 * 2) = uVar6;
      }
      uVar11 = uVar11 + 1;
      psVar24 = psVar24 + 4;
    } while (uVar11 != 0x14);
    (**(code **)(*(long *)(param_1 + 0xed68) + 0x40))((long *)(param_1 + 0xed68));
    if (*plVar18 == 0) {
      lVar21 = *(long *)(DAT_05574040 + 0x20);
    }
    if ((*(long **)(lVar21 + 0x178) == (long *)0x0) ||
       (puVar12 = (undefined8 *)**(long **)(lVar21 + 0x178), puVar12 == (undefined8 *)0x0)) {
      FUN_0262a3f0(param_1 + 0x1dac0,*(long *)(lVar21 + 0x160) + *(long *)(lVar21 + 0x158));
      *(undefined1 *)(param_1 + 8) = 1;
    }
    else {
      uVar11 = (**(code **)*puVar12)();
      FUN_0262a3f0(param_1 + 0x1dac0,*(long *)(lVar21 + 0x160) + *(long *)(lVar21 + 0x158));
      *(undefined1 *)(param_1 + 8) = 1;
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar21 + 0x178) != 0)) &&
         (puVar12 = *(undefined8 **)(*(long *)(lVar21 + 0x178) + 8), puVar12 != (undefined8 *)0x0))
      {
        (**(code **)*puVar12)();
      }
    }
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar15 + 0xd0) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar15 + 0xd0) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
    if ((((local_b4 & 1) != 0) && (*(long *)(lVar23 + 0x108) != 0)) &&
       (puVar12 = *(undefined8 **)(*(long *)(lVar23 + 0x108) + 8), puVar12 != (undefined8 *)0x0)) {
      (**(code **)*puVar12)();
    }
  }
  lVar23 = *(long *)puVar4;
  uVar8 = FUN_0277d6c4(puVar22);
  uVar7 = 0;
  if (*(long *)puVar4 != 0) {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if (uVar8 < *(uint *)(lVar23 + 0x1d8)) {
      uVar7 = 0;
      if (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar8 * 8) != 0) {
        iVar9 = FUN_0277d6c4(puVar22);
        if (14999 < iVar9) goto LAB_0262a278;
        uVar11 = FUN_0277d6c4(puVar22);
        puVar2 = (uint *)(param_1 + 0x308) + (uVar11 & 0xffffffff);
        if (0x752 < ((uint)(uVar11 >> 3) & 0x1fffffff)) {
          puVar2 = (uint *)(param_1 + 0x308);
        }
        uVar7 = *puVar2;
      }
    }
    else {
LAB_0262a278:
      uVar7 = 0;
    }
  }
  *(short *)(lVar1 + param_4 * 0x18 + 0x10) = (short)uVar7;
  lVar23 = *(long *)puVar4;
  uVar10 = FUN_0277d6c4(puVar22);
  uVar8 = 0;
  if (*(long *)puVar4 != 0) {
    lVar23 = *(long *)(lVar23 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
    if (uVar10 < *(uint *)(lVar23 + 0x1d8)) {
      uVar8 = 0;
      if (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar10 * 8) != 0) {
        iVar9 = FUN_0277d6c4(puVar22);
        if (14999 < iVar9) goto LAB_0262a30c;
        uVar14 = FUN_0277d6c4(puVar22);
        uVar11 = uVar14 & 0xffffffff;
        if (0x752 < ((uint)(uVar14 >> 3) & 0x1fffffff)) {
          uVar11 = 0;
        }
        uVar8 = *(uint *)(param_1 + 0xf060 + uVar11 * 4);
      }
    }
    else {
LAB_0262a30c:
      uVar8 = 0;
    }
  }
  uVar7 = (uVar7 & 0xffff) + (uVar8 & 0xffff);
  *(short *)(lVar1 + param_4 * 0x18 + 0x12) = (short)uVar8;
  if ((param_5 & 1) != 0) {
    lVar23 = *(long *)puVar4;
    uVar8 = FUN_0277d6c4(puVar22);
    iVar9 = 0;
    if (*(long *)puVar4 != 0) {
      lVar23 = *(long *)(lVar23 + 0x57e58);
      uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
      if (uVar8 < *(uint *)(lVar23 + 0x1d8)) {
        iVar9 = 0;
        if (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar8 * 8) != 0) {
          iVar9 = FUN_0277d6c4(puVar22);
          if (14999 < iVar9) goto LAB_0262a3a8;
          uVar14 = FUN_0277d6c4(puVar22);
          uVar11 = uVar14 & 0xffffffff;
          if (0x752 < ((uint)(uVar14 >> 3) & 0x1fffffff)) {
            uVar11 = 0;
          }
          iVar9 = *(int *)(param_1 + 0x68ab0 + uVar11 * 4);
        }
      }
      else {
LAB_0262a3a8:
        iVar9 = 0;
      }
    }
    uVar7 = iVar9 + uVar7;
    *(int *)(lVar1 + param_4 * 0x18 + 0xc) = iVar9;
  }
  if (*puVar25 <= uVar7) {
    return;
  }
LAB_0262a3c8:
  *(undefined1 *)(param_2 + 0x25) = 0;
  return;
}

