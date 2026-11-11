
undefined8
FUN_003d9ec0(long param_1,long param_2,undefined8 param_3,undefined4 param_4,long param_5,
            long param_6,long param_7)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  long lVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined2 uVar6;
  byte bVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  undefined2 *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  ulong uVar17;
  undefined2 *puVar18;
  ulong uVar19;
  undefined2 *puVar20;
  int iVar21;
  long lVar22;
  ulong uVar23;
  long lVar24;
  long lVar25;
  ulong uVar26;
  long local_128;
  ulong local_108;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  long local_e8;
  long local_e0;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_b0 = nn::os::GetSystemTick();
  bVar8 = param_6 == 0;
  if (param_6 == 0 && param_5 == 0) {
    iVar21 = 0;
    bVar9 = false;
  }
  else {
    lVar22 = *(long *)(param_1 + 0x368);
    lVar24 = param_6 + param_5;
    lVar25 = *(long *)(param_1 + 0x378);
    if (lVar22 + lVar24 < lVar25) {
      iVar21 = 0;
    }
    else {
      iVar21 = 0;
      do {
        uVar23 = FUN_003dc0a8(param_1 + 0x340,param_1,*(undefined8 *)(param_1 + 0x30));
        if ((uVar23 & 1) == 0) {
          *(undefined1 *)(param_1 + 0x339) = 1;
          *(undefined8 *)(param_2 + 0x28) = 0;
          return 1;
        }
        lVar13 = lVar22 - lVar25;
        lVar22 = *(long *)(param_1 + 0x368);
        iVar21 = iVar21 + 1;
        lVar25 = *(long *)(param_1 + 0x378);
        lVar24 = lVar13 + lVar24;
      } while (lVar25 <= lVar22 + lVar24);
    }
    FUN_003dc144(param_1 + 0x340,lVar24);
    uVar17 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x38);
    uVar23 = 0;
    if (uVar17 != 0) {
      uVar23 = *(ulong *)(param_1 + 0x368) / uVar17;
    }
    *(int *)(param_1 + 0x310) = (int)uVar23;
    (**(code **)(**(long **)(param_1 + 0x28) + 0x30))
              (*(long **)(param_1 + 0x28),
               *(long *)(param_1 + 800) +
               *(long *)(*(long *)(param_1 + 0x30) + 0x40) * (uVar23 & 0xffffffff) *
               (long)*(int *)(param_1 + 0x50),0);
    bVar9 = *(int *)(param_1 + 0x27c8) == 2;
  }
  local_128 = 0;
  lVar22 = *(long *)(param_1 + 0x368);
  uVar23 = 0;
  lVar24 = 0;
  bVar7 = 1;
  *(undefined1 *)(param_2 + 0xb1) = 0;
  do {
    bVar10 = *(int *)(param_1 + 0x310) != *(int *)(param_1 + 0x314);
    lVar13 = *(long *)(param_1 + 0x30);
    uVar17 = *(ulong *)(lVar13 + 0x38);
    lVar25 = 0x48;
    if (bVar10) {
      lVar25 = 0x40;
    }
    lVar3 = 0x50;
    if (bVar10) {
      lVar3 = 0x38;
    }
    uVar26 = *(ulong *)(lVar13 + lVar25);
    lVar25 = *(long *)(lVar13 + lVar3);
    uVar19 = 0;
    if (uVar17 != 0) {
      uVar19 = *(ulong *)(param_1 + 0x368) / uVar17;
    }
    uVar17 = *(ulong *)(param_1 + 0x368) - uVar19 * uVar17;
    local_f0 = uVar17;
    if (*(int *)(param_1 + 0x27c8) == 2) {
      local_f0 = (ulong)((int)(uVar17 / 0xe) * 0xe);
    }
    uVar19 = local_f0;
    local_108 = uVar26;
    local_f8 = uVar17;
    local_e8 = FUN_003b81b0(local_f0);
    local_100 = lVar25 - uVar17;
    local_e0 = uVar26 - local_e8;
    if ((*(long *)(param_1 + 0x378) < (long)(*(long *)(param_1 + 0x368) + local_100)) &&
       (local_100 = *(long *)(param_1 + 0x378) - *(long *)(param_1 + 0x368), local_100 < 0x480)) {
      local_e0 = 0x900;
    }
    lVar25 = local_e0;
    uVar26 = local_100;
    if ((bVar8) && (local_128 = uVar17 - uVar19, bVar9 != false)) {
      uVar11 = (**(code **)(**(long **)(param_1 + 0x28) + 0x38))();
      uVar17 = FUN_003db490(param_1,&local_88,&local_a8,*(undefined4 *)(param_1 + 0x310),
                            *(undefined4 *)(param_1 + 0x50));
      if ((uVar17 & 1) == 0) {
        return 0;
      }
      (**(code **)(**(long **)(param_1 + 0x28) + 0x30))(*(long **)(param_1 + 0x28),uVar11,0);
      uVar4 = *(uint *)(param_1 + 0x50);
      if (0 < (int)uVar4) {
        if (uVar4 < 4) {
          lVar13 = 0;
        }
        else {
          lVar13 = 0;
          puVar14 = (undefined2 *)((long)&local_88 + 4);
          puVar18 = (undefined2 *)((long)&local_a8 + 4);
          puVar20 = (undefined2 *)(param_1 + 0x484);
          do {
            lVar13 = lVar13 + -4;
            puVar20[-0x61] = puVar14[-2];
            puVar20[-0x60] = puVar18[-2];
            puVar20[-0x41] = puVar14[-1];
            puVar20[-0x40] = puVar18[-1];
            puVar20[-0x21] = *puVar14;
            puVar20[-0x20] = *puVar18;
            puVar1 = puVar14 + 1;
            puVar14 = puVar14 + 4;
            puVar20[-1] = *puVar1;
            puVar1 = puVar18 + 1;
            puVar18 = puVar18 + 4;
            *puVar20 = *puVar1;
            puVar20 = puVar20 + 0x80;
          } while (-lVar13 != ((ulong)uVar4 & 0xfffffffc));
          lVar13 = -lVar13;
        }
        if ((uVar4 & 3) != 0) {
          uVar17 = (ulong)uVar4 & 3;
          puVar14 = (undefined2 *)((long)&local_a8 + lVar13 * 2);
          puVar18 = (undefined2 *)(param_1 + 0x3c4 + lVar13 * 0x40);
          puVar20 = (undefined2 *)((long)&local_88 + lVar13 * 2);
          do {
            uVar17 = uVar17 - 1;
            uVar6 = *puVar14;
            puVar18[-1] = *puVar20;
            *puVar18 = uVar6;
            puVar14 = puVar14 + 1;
            puVar18 = puVar18 + 0x20;
            puVar20 = puVar20 + 1;
          } while (uVar17 != 0);
        }
      }
    }
    if ((*(long *)(param_1 + 0x300) == 0) || (*(long *)(param_1 + 0x308) == 0)) {
      uVar17 = FUN_003dad20(param_1,param_3,&local_108,lVar24,bVar8,bVar9);
    }
    else {
      uVar17 = FUN_003dab50(param_1,param_3,&local_108,lVar24,bVar8,bVar9);
    }
    if ((uVar17 & 1) == 0) {
      return 0;
    }
    uVar23 = uVar26 + uVar23;
    lVar24 = lVar25 + lVar24;
    FUN_003dc144(param_1 + 0x340,uVar26);
    *(int *)(param_1 + 0x310) = *(int *)(param_1 + 0x310) + 1;
    if (*(long *)(param_1 + 0x368) == *(long *)(param_1 + 0x378)) {
      uVar17 = FUN_003dc0a8(param_1 + 0x340,param_1,*(undefined8 *)(param_1 + 0x30));
      if ((uVar17 & 1) == 0) {
        *(undefined1 *)(param_1 + 0x339) = 1;
        if (param_6 == 0 && param_5 == 0) break;
      }
      else {
        iVar21 = iVar21 + 1;
        uVar19 = *(ulong *)(*(long *)(param_1 + 0x30) + 0x38);
        uVar17 = 0;
        if (uVar19 != 0) {
          uVar17 = *(ulong *)(param_1 + 0x368) / uVar19;
        }
        *(int *)(param_1 + 0x310) = (int)uVar17;
        (**(code **)(**(long **)(param_1 + 0x28) + 0x30))
                  (*(long **)(param_1 + 0x28),
                   *(long *)(param_1 + 800) +
                   *(long *)(*(long *)(param_1 + 0x30) + 0x40) * (uVar17 & 0xffffffff) *
                   (long)*(int *)(param_1 + 0x50),0);
        if (param_6 == 0 && param_5 == 0) break;
      }
      if ((bool)(bVar7 & uVar23 < 0x480)) {
        *(undefined1 *)(param_2 + 0xb1) = 1;
      }
      break;
    }
    bVar8 = false;
    bVar7 = 0;
  } while ((uVar23 < 0x480) ||
          ((ulong)(*(long *)(param_1 + 0x378) - *(long *)(param_1 + 0x368)) < 0x480));
  *(undefined1 *)(param_2 + 0x48) = 0;
  if (*(int *)(param_1 + 0x27c8) == 2) {
    if (lVar22 == 0) {
      if (0 < *(int *)(param_1 + 0x50)) {
        lVar25 = 0;
        puVar15 = (undefined4 *)(param_1 + 0x2840);
        puVar16 = (undefined4 *)(param_2 + 0x4a);
        do {
          uVar5 = *puVar15;
          lVar25 = lVar25 + 1;
          puVar2 = puVar15 + 1;
          puVar15 = puVar15 + 0x30;
          *(undefined2 *)(puVar16 + 1) = *(undefined2 *)puVar2;
          *puVar16 = uVar5;
          puVar16 = (undefined4 *)((long)puVar16 + 6);
        } while (lVar25 < *(int *)(param_1 + 0x50));
      }
    }
    else if ((*(char *)(*(long *)(param_1 + 0x30) + 8) == '\0') ||
            (lVar22 != *(long *)(*(long *)(param_1 + 0x30) + 0x10))) {
      if (lVar22 != *(long *)(param_1 + 0x388)) goto LAB_003da4a0;
      if (0 < *(int *)(param_1 + 0x50)) {
        lVar25 = 0;
        puVar15 = (undefined4 *)(param_1 + 0x3c0);
        puVar16 = (undefined4 *)(param_2 + 0x4a);
        do {
          uVar5 = *puVar15;
          lVar25 = lVar25 + 1;
          puVar2 = puVar15 + 1;
          puVar15 = puVar15 + 0x10;
          *(undefined2 *)(puVar16 + 1) = *(undefined2 *)puVar2;
          *puVar16 = uVar5;
          puVar16 = (undefined4 *)((long)puVar16 + 6);
        } while (lVar25 < *(int *)(param_1 + 0x50));
      }
    }
    else if (0 < *(int *)(param_1 + 0x50)) {
      lVar25 = 0;
      puVar15 = (undefined4 *)(param_1 + 0x2880);
      puVar16 = (undefined4 *)(param_2 + 0x4a);
      do {
        uVar5 = *puVar15;
        lVar25 = lVar25 + 1;
        puVar2 = puVar15 + 1;
        puVar15 = puVar15 + 0x30;
        *(undefined2 *)(puVar16 + 1) = *(undefined2 *)puVar2;
        *puVar16 = uVar5;
        puVar16 = (undefined4 *)((long)puVar16 + 6);
      } while (lVar25 < *(int *)(param_1 + 0x50));
    }
    *(undefined1 *)(param_2 + 0x48) = 1;
  }
LAB_003da4a0:
  *(ulong *)(param_2 + 0x28) = uVar23;
  *(long *)(param_2 + 0x30) = lVar22;
  *(int *)(param_2 + 0xac) = iVar21;
  *(undefined4 *)(param_2 + 0x20) = param_4;
  *(long *)(param_2 + 0x38) = local_128;
  *(long *)(param_2 + 0x40) = lVar24;
  *(undefined1 *)(param_2 + 0xb0) = *(undefined1 *)(param_1 + 0x339);
  if (*(char *)(param_7 + 0x30) == '\0') {
    return 1;
  }
  local_a8 = nn::os::GetSystemTick();
  local_108 = local_108 & 0xffffffff00000000;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = 0;
  local_80 = 0;
  if ((*(long *)(param_1 + 0x300) == 0) || (*(long *)(param_1 + 0x308) == 0)) goto LAB_003da5b4;
  if (*(long **)(param_1 + 0x28) == (long *)0x0) {
LAB_003da564:
    local_78 = 0;
    local_80 = 0;
  }
  else {
    uVar23 = (**(code **)(**(long **)(param_1 + 0x28) + 0x80))();
    if ((uVar23 & 1) == 0) {
      plVar12 = *(long **)(param_1 + 0x28);
      local_88 = 0;
    }
    else {
      local_88 = (**(code **)(**(long **)(param_1 + 0x28) + 0xa0))();
      plVar12 = *(long **)(param_1 + 0x28);
    }
    if (plVar12 == (long *)0x0) goto LAB_003da564;
    uVar23 = (**(code **)(*plVar12 + 0x80))();
    if ((uVar23 & 1) == 0) {
      plVar12 = *(long **)(param_1 + 0x28);
      local_80 = 0;
      if (plVar12 != (long *)0x0) goto LAB_003da580;
LAB_003da5a8:
      local_78 = 0;
    }
    else {
      local_80 = (**(code **)(**(long **)(param_1 + 0x28) + 0xa8))();
      plVar12 = *(long **)(param_1 + 0x28);
      if (plVar12 == (long *)0x0) goto LAB_003da5a8;
LAB_003da580:
      uVar23 = (**(code **)(*plVar12 + 0x80))(plVar12);
      if ((uVar23 & 1) == 0) goto LAB_003da5a8;
      local_78 = (**(code **)(**(long **)(param_1 + 0x28) + 0x38))();
    }
  }
  uStack_70 = *(undefined8 *)(param_1 + 0x20);
LAB_003da5b4:
  FUN_003c9e14(&local_100,&local_b0,&local_a8,&local_88);
  FUN_003c9ee0(param_7,&local_108);
  return 1;
}

