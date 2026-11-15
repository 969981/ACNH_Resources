
void FUN_01e22790(long *param_1)

{
  char *pcVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  long *plVar5;
  undefined8 *puVar6;
  ulong uVar7;
  uint uVar8;
  undefined1 *puVar9;
  char cVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  long lVar20;
  undefined4 *puVar21;
  uint uVar22;
  bool bVar23;
  long lVar24;
  char *pcVar25;
  
  if (*(char *)(*(long *)*param_1 + 8) == '\0') {
    return;
  }
  iVar3 = (int)param_1[3];
  if (iVar3 == 6) {
    if (*(char *)(*(long *)(DAT_05aec868 + 0x330) + 0x104) != '\0' ||
        *(int *)(DAT_05aec868 + 0x32c) != 0) goto LAB_01e22ac4;
    *(uint *)(DAT_05aec9a0 + 0x330) = *(uint *)(DAT_05aec9a0 + 0x330) & 0xffffffdf;
    uVar8 = *(uint *)((long)param_1 + 0x8c);
    if (*(uint *)(param_1 + 1) <= uVar8) {
      uVar8 = 0;
    }
    *(undefined1 *)(param_1[2] + (long)(int)uVar8 * 0xd8 + 0x25) = 1;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  else {
    if (iVar3 == 5) {
      iVar3 = *(int *)(DAT_05aec868 + 0x32c);
      cVar10 = *(char *)(*(long *)(DAT_05aec868 + 0x330) + 0x104);
      uVar7 = (**(code **)(**(long **)PTR_DAT_04bb2638 + 0x10))();
      if ((cVar10 == '\0' && iVar3 == 0) && ((uVar7 & 1) != 0)) {
        lVar24 = param_1[0x10];
        *(int *)(lVar24 + 0x20) = (int)param_1[0x11];
        lVar11 = DAT_05aec868;
        *(undefined4 *)(lVar24 + 0x38) = 0;
        plVar5 = *(long **)(lVar11 + 0x330);
        plVar5[0x21] = lVar24;
        *(undefined1 *)((long)plVar5 + 0x104) = 1;
        (**(code **)(*plVar5 + 0x18))(plVar5,1,0);
        *(undefined4 *)(param_1 + 3) = 6;
      }
      goto LAB_01e22ac4;
    }
    if (iVar3 == 4) {
      if (((*(uint *)(DAT_05aec9a0 + 0x330) | *(uint *)(DAT_05aec9a0 + 0x32c)) >> 5 & 1) == 0) {
        *(uint *)(DAT_05aec9a0 + 0x330) = *(uint *)(DAT_05aec9a0 + 0x330) | 0x20;
        *(undefined4 *)(param_1 + 3) = 5;
      }
      goto LAB_01e22ac4;
    }
  }
  uVar8 = *(uint *)(param_1 + 1);
  if (uVar8 == 0) {
    bVar23 = false;
    uVar22 = 0xffffffff;
  }
  else {
    lVar11 = param_1[2];
    uVar13 = 0;
    bVar23 = false;
    uVar22 = 0xffffffff;
    do {
      piVar15 = (int *)(lVar11 + (long)(int)uVar13 * 0xd8 + 0x1c);
      if (*piVar15 != 0) {
        if (*(char *)(lVar11 + (long)(int)uVar13 * 0xd8 + 0x24) == '\0') {
          uVar12 = uVar13;
          if (uVar22 != 0xffffffff) {
            uVar12 = uVar22;
          }
          uVar22 = uVar12;
        }
        else {
          bVar23 = true;
          *piVar15 = 0;
          *(undefined2 *)(lVar11 + (long)(int)uVar13 * 0xd8 + 0x25) = 1;
        }
      }
      uVar13 = uVar13 + 1;
    } while (uVar8 != uVar13);
  }
  *(bool *)(*param_1 + 400) = uVar22 != 1 && uVar22 != 0xffffffff;
  uVar8 = *(uint *)(param_1 + 0x12);
  if (uVar22 != uVar8) {
    if (uVar8 != 0xffffffff) {
      uVar12 = *(uint *)(param_1 + 1);
      lVar11 = param_1[2];
      uVar13 = uVar8;
      if (uVar12 <= uVar8) {
        uVar13 = 0;
      }
      if (*(char *)(lVar11 + (long)(int)uVar13 * 0xd8 + 0x29) != '\0') {
        puVar6 = *(undefined8 **)(lVar11 + (long)(int)uVar13 * 0xd8 + 0xd0);
        if (puVar6 != (undefined8 *)0x0) {
          (**(code **)*puVar6)();
          uVar8 = *(uint *)(param_1 + 0x12);
          uVar12 = *(uint *)(param_1 + 1);
          lVar11 = param_1[2];
        }
        if (uVar12 <= uVar8) {
          uVar8 = 0;
        }
        *(undefined1 *)(lVar11 + (long)(int)uVar8 * 0xd8 + 0x29) = 0;
      }
    }
    *(uint *)(param_1 + 0x12) = uVar22;
    *(undefined4 *)(param_1 + 3) = 0;
    *(undefined1 *)((long)param_1 + 0x1c) = 0;
    if (bVar23) {
      *(undefined1 *)(*param_1 + 0x192) = 1;
    }
    lVar11 = *param_1;
    if (*(long *)(lVar11 + 0x80) == 0) goto LAB_01e22a18;
LAB_01e22a0c:
    *(undefined1 *)(lVar11 + 0xc9) = 1;
    goto LAB_01e22ac4;
  }
LAB_01e22a18:
  if (uVar22 != 0xffffffff) {
    lVar24 = param_1[2];
    uVar8 = uVar22;
    if (*(uint *)(param_1 + 1) <= uVar22) {
      uVar8 = 0;
    }
    if (lVar24 != 0) {
      iVar3 = (int)param_1[3];
      if (iVar3 - 2U < 2) {
        if (*(char *)(*param_1 + 0x17c) != '\0') {
          lVar20 = lVar24 + (long)(int)uVar8 * 0xd8;
          *(undefined4 *)(lVar20 + 0x1c) = 1;
          lVar11 = *param_1;
          iVar3 = 0x20;
          if (*(int *)(lVar20 + 0x18) != 8) {
            iVar3 = *(int *)(lVar20 + 0x18);
          }
          *(undefined2 *)(lVar11 + 200) = 1;
          *(undefined1 *)(lVar11 + 0xd8) = 0;
          *(undefined1 *)(lVar11 + 0x134) = 0;
          *(undefined4 *)(lVar11 + 0x178) = 0;
          *(int *)(lVar11 + 0xcc) = iVar3;
          *(undefined4 *)(lVar11 + 0xd0) = 0;
          *(undefined4 *)(param_1 + 3) = 1;
          *(undefined2 *)(lVar20 + 0x25) = 0;
          *(undefined1 *)(lVar20 + 0x27) = 0;
          if (*(char *)(lVar20 + 0x29) != '\0') {
            puVar6 = *(undefined8 **)(lVar24 + (long)(int)uVar8 * 0xd8 + 0xd0);
            if (puVar6 != (undefined8 *)0x0) {
              (**(code **)*puVar6)();
            }
            *(char *)(lVar20 + 0x29) = '\0';
          }
          *(undefined1 *)(*param_1 + 0x17c) = 0;
        }
        goto LAB_01e22ac4;
      }
      if (iVar3 != 1) {
        if (iVar3 != 0) goto LAB_01e22ac4;
        lVar11 = *param_1;
        if (*(int *)(lVar11 + 0xd0) == 0) {
          if (*(char *)(lVar11 + 0x17e) == '\0') {
            iVar4 = *(int *)(lVar24 + (long)(int)uVar8 * 0xd8 + 0x18);
            *(undefined2 *)(lVar11 + 200) = 1;
            *(undefined1 *)(lVar11 + 0xd8) = 0;
            *(undefined1 *)(lVar11 + 0x134) = 0;
            *(undefined4 *)(lVar11 + 0x178) = 0;
            iVar3 = 0x20;
            if (iVar4 != 8) {
              iVar3 = iVar4;
            }
            *(int *)(lVar11 + 0xcc) = iVar3;
            *(undefined4 *)(lVar11 + 0xd0) = 0;
            *(undefined4 *)(param_1 + 3) = 1;
          }
          goto LAB_01e22ac4;
        }
        goto LAB_01e22a0c;
      }
      pcVar25 = (char *)(lVar24 + (long)(int)uVar8 * 0xd8);
      lVar11 = *param_1;
      if (*(char *)(lVar11 + 0x17e) == '\0') {
        if (*(int *)(lVar11 + 0xd0) == 0) {
          if (*(long *)(lVar11 + 0x80) == 0) {
            iVar4 = *(int *)(lVar24 + (long)(int)uVar8 * 0xd8 + 0x18);
            *(undefined2 *)(lVar11 + 200) = 1;
            *(undefined1 *)(lVar11 + 0xd8) = 0;
            *(undefined1 *)(lVar11 + 0x134) = 0;
            *(undefined4 *)(lVar11 + 0x178) = 0;
            iVar3 = 0x20;
            if (iVar4 != 8) {
              iVar3 = iVar4;
            }
            *(int *)(lVar11 + 0xcc) = iVar3;
            *(undefined4 *)(lVar11 + 0xd0) = 0;
          }
          goto LAB_01e22ac4;
        }
        lVar20 = lVar24 + (long)(int)uVar8 * 0xd8;
        puVar21 = (undefined4 *)(lVar20 + 0x20);
        *puVar21 = *(undefined4 *)(lVar11 + 0xd4);
        pcVar1 = (char *)(lVar20 + 0x26);
        *(undefined2 *)(lVar20 + 0x25) = 0x101;
        *(char *)(lVar20 + 0x27) = '\0';
        if (*(int *)(pcVar25 + 0x10) < 2) {
          lVar11 = *param_1;
          cVar10 = *(char *)(lVar11 + 0xd8);
          if (cVar10 != '\0') {
            uVar16 = *(undefined8 *)(lVar11 + 0xdc);
            uVar17 = *(undefined8 *)(lVar11 + 0xe4);
            lVar14 = lVar24 + (long)(int)uVar8 * 0xd8;
            *(undefined8 *)(lVar14 + 0x3c) = *(undefined8 *)(lVar11 + 0xec);
            *(undefined8 *)(lVar14 + 0x34) = uVar17;
            *(undefined8 *)(lVar14 + 0x2c) = uVar16;
            uVar17 = *(undefined8 *)(lVar11 + 0xf4);
            uVar16 = *(undefined8 *)(lVar11 + 0xfc);
            uVar18 = *(undefined8 *)(lVar11 + 0x104);
            *(undefined8 *)(lVar14 + 0x5c) = *(undefined8 *)(lVar11 + 0x10c);
            *(undefined8 *)(lVar14 + 0x54) = uVar18;
            *(undefined8 *)(lVar14 + 0x4c) = uVar16;
            *(undefined8 *)(lVar14 + 0x44) = uVar17;
            uVar16 = *(undefined8 *)(lVar11 + 0x114);
            uVar18 = *(undefined8 *)(lVar11 + 0x11c);
            uVar19 = *(undefined8 *)(lVar11 + 0x124);
            uVar17 = *(undefined8 *)(lVar11 + 300);
            *pcVar1 = cVar10;
            *(undefined8 *)(lVar14 + 0x7c) = uVar17;
            *(undefined8 *)(lVar14 + 0x74) = uVar19;
            *(undefined8 *)(lVar14 + 0x6c) = uVar18;
            *(undefined8 *)(lVar14 + 100) = uVar16;
            goto LAB_01e22c74;
          }
          *pcVar1 = '\0';
          if (*(int *)(pcVar25 + 0x10) < 1) {
LAB_01e22d8c:
            cVar10 = '\0';
            goto LAB_01e22d90;
          }
        }
        else {
LAB_01e22c74:
          if (*(int *)(pcVar25 + 0x10) < 1) {
            lVar11 = *param_1;
            if (*(char *)(lVar11 + 0x134) == '\0') goto LAB_01e22d8c;
            uVar16 = *(undefined8 *)(lVar11 + 0x136);
            uVar17 = *(undefined8 *)(lVar11 + 0x13e);
            lVar14 = lVar24 + (long)(int)uVar8 * 0xd8;
            uVar18 = *(undefined8 *)(lVar11 + 0x146);
            *(undefined8 *)(lVar14 + 0x9c) = *(undefined8 *)(lVar11 + 0x14e);
            *(undefined8 *)(lVar14 + 0x94) = uVar18;
            *(undefined8 *)(lVar14 + 0x8c) = uVar17;
            *(undefined8 *)(lVar14 + 0x84) = uVar16;
            uVar16 = *(undefined8 *)(lVar11 + 0x156);
            uVar17 = *(undefined8 *)(lVar11 + 0x15e);
            uVar18 = *(undefined8 *)(lVar11 + 0x166);
            *(undefined8 *)(lVar14 + 0xbc) = *(undefined8 *)(lVar11 + 0x16e);
            cVar10 = '\x01';
            *(undefined8 *)(lVar14 + 0xb4) = uVar18;
            *(undefined8 *)(lVar14 + 0xac) = uVar17;
            *(undefined8 *)(lVar14 + 0xa4) = uVar16;
LAB_01e22d90:
            *pcVar1 = cVar10;
            *(char *)(lVar20 + 0x27) = cVar10;
          }
        }
        if (*(char *)(lVar24 + (long)(int)uVar8 * 0xd8 + 0x28) == '\0') {
          *(undefined4 *)(lVar24 + (long)(int)uVar8 * 0xd8 + 0x1c) = 0;
LAB_01e22e18:
          *(undefined4 *)(param_1 + 3) = 0;
          puVar9 = (undefined1 *)(*param_1 + 0xc9);
LAB_01e22e24:
          *puVar9 = 1;
        }
        else {
          puVar2 = (undefined4 *)(lVar24 + (long)(int)uVar8 * 0xd8 + 0x1c);
          if (*(int *)(*param_1 + 0xd0) != 1) {
            *puVar2 = 0;
            goto LAB_01e22e18;
          }
          *puVar2 = 2;
          *(undefined4 *)(param_1 + 3) = 2;
          if (*pcVar1 != '\0') {
            puVar6 = *(undefined8 **)(lVar24 + (long)(int)uVar8 * 0xd8 + 200);
            if (puVar6 != (undefined8 *)0x0) {
              (**(code **)*puVar6)();
            }
            puVar9 = (undefined1 *)(lVar24 + (long)(int)uVar8 * 0xd8 + 0x29);
            goto LAB_01e22e24;
          }
        }
        if ((*pcVar25 == '\0') ||
           (uVar7 = FUN_01e22e80(puVar21,*(undefined8 *)(pcVar25 + 8)), (uVar7 & 1) == 0)) {
LAB_01e22e6c:
          if (*pcVar1 == '\0') goto LAB_01e22e78;
        }
        else if (*pcVar1 == '\0') {
          *(undefined1 *)(*param_1 + 0x192) = 1;
          *(undefined4 *)(param_1 + 3) = 4;
          *(undefined4 *)(param_1 + 0x11) = *puVar21;
          *(uint *)((long)param_1 + 0x8c) = uVar22;
          *(undefined1 *)(lVar20 + 0x25) = 0;
          goto LAB_01e22e6c;
        }
        *puVar21 = 0;
      }
      else {
        lVar24 = lVar24 + (long)(int)uVar8 * 0xd8;
        piVar15 = (int *)(lVar24 + 0x20);
        *piVar15 = *(int *)(lVar11 + 0xd4);
        *(undefined1 *)(lVar24 + 0x27) = 0;
        *(undefined2 *)(lVar24 + 0x25) = 1;
        if (*(char *)(lVar24 + 0x28) == '\0') {
          *(undefined4 *)(lVar24 + 0x1c) = 0;
          *(undefined4 *)(param_1 + 3) = 0;
          if (*piVar15 == 0) {
            *piVar15 = 0xa073;
          }
        }
        else {
          *(undefined4 *)(lVar24 + 0x1c) = 1;
          *(undefined4 *)(param_1 + 3) = 0;
        }
        if (((*pcVar25 != '\0') &&
            (uVar7 = FUN_01e22e80(piVar15,*(undefined8 *)(pcVar25 + 8)), (uVar7 & 1) != 0)) &&
           (*(char *)(lVar24 + 0x26) == '\0')) {
          *(undefined1 *)(*param_1 + 0x192) = 1;
          *(undefined4 *)(param_1 + 3) = 4;
          *(int *)(param_1 + 0x11) = *piVar15;
          *(uint *)((long)param_1 + 0x8c) = uVar22;
          *(undefined1 *)(lVar24 + 0x25) = 0;
        }
      }
LAB_01e22e78:
      *(undefined1 *)(param_1 + 4) = 0;
      goto LAB_01e22ac4;
    }
  }
  lVar11 = *param_1;
  if (*(long *)(lVar11 + 0x80) != 0) {
    *(undefined1 *)(lVar11 + 0xc9) = 1;
    lVar11 = *param_1;
  }
  *(undefined1 *)(lVar11 + 0x17c) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1c) = 0;
LAB_01e22ac4:
  FUN_01e240b0(*param_1);
  *(bool *)((long)param_1 + 0x1c) = *(long *)(*param_1 + 0x80) != 0;
  return;
}

