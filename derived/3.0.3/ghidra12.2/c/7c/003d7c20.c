
/* WARNING: Type propagation algorithm not settling */

void FUN_003d7c20(long param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  int *piVar9;
  undefined8 *puVar10;
  long *plVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  undefined4 uVar19;
  long local_e0 [16];
  
  if (*(char *)(param_1 + 0x39) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x10c80) == '\0') {
    return;
  }
  if ((*(char *)(param_1 + 0xdb) != '\0') && (*(char *)(param_1 + 0xd9) == '\0')) {
    return;
  }
  if ((DAT_04c64431 != '\0') &&
     (*(undefined1 *)(param_1 + 0xdd) = 1, *(char *)(param_1 + 0xdc) == '\0')) {
    iVar5 = *(int *)(param_1 + 0x468);
    if (0 < iVar5) {
      lVar18 = 0;
      plVar14 = (long *)(param_1 + 0x488);
      do {
        if (*plVar14 != 0) {
          FUN_003c0db0(*plVar14,1);
          iVar5 = *(int *)(param_1 + 0x468);
        }
        lVar18 = lVar18 + 1;
        plVar14 = plVar14 + 0x210;
      } while (lVar18 < iVar5);
    }
    *(undefined1 *)(param_1 + 0xdc) = 1;
  }
  uVar7 = *(uint *)(param_1 + 0x110);
  do {
    uVar8 = (ulong)uVar7;
    uVar7 = *(uint *)(param_1 + 0x468);
    uVar6 = (ulong)uVar7;
    if ((int)uVar7 < 1) {
LAB_003d7dd0:
      *(int *)(param_1 + 0xe4) =
           *(int *)(param_1 + 0xe4) + *(int *)(param_1 + uVar8 * 0x18 + 0x11098);
    }
    else {
      lVar18 = uVar8 * 0x40;
      piVar9 = (int *)(param_1 + 0x4c4 + lVar18);
      uVar15 = uVar6;
      do {
        if (*piVar9 != 3) {
          if (*(char *)(param_1 + 0xdd) != '\0') goto LAB_003d80b0;
          if ((*(char *)(param_1 + 0xd9) == '\0') ||
             (uVar6 = FUN_003d934c(*(undefined8 *)(param_1 + 0xf8)), (uVar6 & 1) == 0))
          goto LAB_003d8040;
          uVar6 = (ulong)*(uint *)(param_1 + 0x108);
          if ((int)*(uint *)(param_1 + 0x108) < 1) goto LAB_003d8048;
          if (*(int *)(param_1 + 0x4c4) - 1U < 2) goto LAB_003d8040;
          uVar8 = 0;
          piVar9 = (int *)(param_1 + 0x504);
          goto LAB_003d8308;
        }
        piVar9 = piVar9 + 0x420;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
      if ((int)uVar7 < 1) goto LAB_003d7dd0;
      if (uVar7 < 4) {
        lVar12 = 0;
      }
      else {
        lVar13 = 0;
        lVar12 = 0;
        do {
          lVar16 = param_1 + lVar18 + lVar13;
          lVar13 = lVar13 + 0x4200;
          *(undefined4 *)(lVar16 + 0x4c4) = 0;
          lVar12 = lVar12 + 4;
          *(undefined8 *)(lVar16 + 0x4c8) = 0;
          *(undefined1 *)(lVar16 + 0x1540) = 0;
          *(undefined1 *)(lVar16 + 0x25c0) = 0;
          *(undefined8 *)(lVar16 + 0x490) = 0;
          *(undefined8 *)(lVar16 + 0x498) = 0;
          *(undefined8 *)(lVar16 + 0x4a0) = 0;
          *(undefined8 *)(lVar16 + 0x4a8) = 0;
          *(undefined8 *)(lVar16 + 0x4b0) = 0;
          *(undefined8 *)(lVar16 + 0x4b8) = 0;
          *(undefined1 *)(lVar16 + 0x4c0) = 0;
          *(undefined4 *)(lVar16 + 0x1544) = 0;
          *(undefined8 *)(lVar16 + 0x1548) = 0;
          *(undefined8 *)(lVar16 + 0x1510) = 0;
          *(undefined8 *)(lVar16 + 0x1518) = 0;
          *(undefined8 *)(lVar16 + 0x1520) = 0;
          *(undefined8 *)(lVar16 + 0x1528) = 0;
          *(undefined8 *)(lVar16 + 0x1530) = 0;
          *(undefined8 *)(lVar16 + 0x1538) = 0;
          *(undefined4 *)(lVar16 + 0x25c4) = 0;
          *(undefined8 *)(lVar16 + 0x25c8) = 0;
          *(undefined8 *)(lVar16 + 0x2590) = 0;
          *(undefined8 *)(lVar16 + 0x2598) = 0;
          *(undefined8 *)(lVar16 + 0x25a0) = 0;
          *(undefined8 *)(lVar16 + 0x25a8) = 0;
          *(undefined8 *)(lVar16 + 0x25b0) = 0;
          *(undefined8 *)(lVar16 + 0x25b8) = 0;
          *(undefined4 *)(lVar16 + 0x3644) = 0;
          *(undefined8 *)(lVar16 + 0x3648) = 0;
          *(undefined8 *)(lVar16 + 0x3610) = 0;
          *(undefined8 *)(lVar16 + 0x3618) = 0;
          *(undefined8 *)(lVar16 + 0x3620) = 0;
          *(undefined8 *)(lVar16 + 0x3628) = 0;
          *(undefined8 *)(lVar16 + 0x3630) = 0;
          *(undefined8 *)(lVar16 + 0x3638) = 0;
          *(undefined1 *)(lVar16 + 0x3640) = 0;
        } while ((ulong)(uVar7 >> 2) * 0x4200 != lVar13);
      }
      uVar15 = uVar6 & 3;
      if ((uVar7 & 3) != 0) {
        puVar10 = (undefined8 *)(param_1 + 0x4c8 + lVar18 + lVar12 * 0x1080);
        do {
          *(undefined4 *)((long)puVar10 + -4) = 0;
          uVar15 = uVar15 - 1;
          *puVar10 = 0;
          *(undefined1 *)(puVar10 + -1) = 0;
          puVar10[-7] = 0;
          puVar10[-6] = 0;
          puVar10[-5] = 0;
          puVar10[-4] = 0;
          puVar10[-3] = 0;
          puVar10[-2] = 0;
          puVar10 = puVar10 + 0x210;
        } while (uVar15 != 0);
      }
      *(int *)(param_1 + 0xe4) =
           *(int *)(param_1 + 0xe4) + *(int *)(param_1 + uVar8 * 0x18 + 0x11098);
      if (0 < (int)uVar7) {
        lVar18 = (*(long *)(param_1 + 0x178) + 0x900) * (ulong)*(uint *)(param_1 + 0x10c);
        if (uVar7 < 4) {
          lVar13 = 0;
        }
        else {
          lVar13 = 0;
          plVar14 = local_e0 + 2;
          lVar12 = param_1;
          do {
            lVar13 = lVar13 + -4;
            lVar16 = *(long *)(lVar12 + 0x1500);
            lVar17 = *(long *)(lVar12 + 0x2580);
            plVar14[-2] = *(long *)(lVar12 + 0x480) + lVar18;
            plVar14[-1] = lVar16 + lVar18;
            lVar16 = *(long *)(lVar12 + 0x3600);
            lVar12 = lVar12 + 0x4200;
            *plVar14 = lVar17 + lVar18;
            plVar14[1] = lVar16 + lVar18;
            plVar14 = plVar14 + 4;
          } while (-lVar13 != (uVar6 & 0xfffffffc));
          lVar13 = -lVar13;
        }
        uVar6 = uVar6 & 3;
        if ((uVar7 & 3) != 0) {
          plVar14 = (long *)(param_1 + 0x480 + lVar13 * 0x1080);
          plVar11 = local_e0 + lVar13;
          do {
            lVar12 = *plVar14;
            plVar14 = plVar14 + 0x210;
            uVar6 = uVar6 - 1;
            *plVar11 = lVar12 + lVar18;
            plVar11 = plVar11 + 1;
          } while (uVar6 != 0);
        }
      }
    }
    if (*(int *)(param_1 + 0x118) == 0) {
      uVar6 = *(ulong *)(param_1 + 0x120);
    }
    else if (*(int *)(param_1 + 0x118) == 1) {
      uVar6 = (ulong)(*(long *)(param_1 + 0x120) * (long)*(int *)(param_1 + 0x13c)) / 1000;
      if (0xfffffffe < uVar6) {
        uVar6 = 0xffffffff;
      }
    }
    else {
      uVar6 = 0;
    }
    *(undefined8 *)(param_1 + 0x120) = 0;
    uVar4 = *(undefined8 *)(param_1 + 0x458);
    *(undefined8 *)(param_1 + 0x458) = 0;
    uVar19 = 1;
    if (*(char *)(param_1 + 0x39) != '\0') {
      uVar19 = 2;
    }
    FUN_003d9160(*(undefined8 *)(param_1 + 0xf8),local_e0,*(undefined4 *)(param_1 + 0x10c),uVar6,
                 uVar4,uVar19);
    iVar5 = 0;
    if (*(int *)(param_1 + 0x10c) + 1U < *(uint *)(param_1 + 0x108)) {
      iVar5 = *(int *)(param_1 + 0x10c) + 1;
    }
    *(int *)(param_1 + 0x10c) = iVar5;
    iVar5 = *(int *)(param_1 + 0x110);
    *(int *)(param_1 + 0x114) = iVar5;
    uVar7 = 0;
    if (iVar5 + 1U < *(uint *)(param_1 + 0x108)) {
      uVar7 = iVar5 + 1;
    }
    *(uint *)(param_1 + 0x110) = uVar7;
  } while( true );
  while( true ) {
    iVar5 = *piVar9;
    uVar8 = uVar8 + 1;
    piVar9 = piVar9 + 0x10;
    if (iVar5 - 1U < 2) break;
LAB_003d8308:
    if (uVar6 - 1 == uVar8) {
      uVar8 = uVar6;
      break;
    }
  }
  if (uVar8 < uVar6) {
LAB_003d8040:
    if (*(char *)(param_1 + 0xe0) != '\0') goto LAB_003d8048;
  }
  else {
LAB_003d8048:
    *(undefined2 *)(param_1 + 0xdf) = 0x101;
    *(undefined1 *)(param_1 + 0xdd) = 1;
    if (*(char *)(param_1 + 0xdc) == '\0') {
      iVar5 = *(int *)(param_1 + 0x468);
      if (0 < iVar5) {
        lVar18 = 0;
        plVar14 = (long *)(param_1 + 0x488);
        do {
          if (*plVar14 != 0) {
            FUN_003c0db0(*plVar14,1);
            iVar5 = *(int *)(param_1 + 0x468);
          }
          lVar18 = lVar18 + 1;
          plVar14 = plVar14 + 0x210;
        } while (lVar18 < iVar5);
      }
      *(undefined1 *)(param_1 + 0xdc) = 1;
    }
  }
LAB_003d80b0:
  uVar7 = *(uint *)(param_1 + 0x108);
  if ((int)uVar7 < 1) {
    bVar3 = *(char *)(param_1 + 0xde) != '\0';
    cVar2 = *(char *)(param_1 + 0xe0);
joined_r0x003d80fc:
    if (cVar2 != '\0') goto LAB_003d8100;
LAB_003d8180:
    if (bVar3) goto LAB_003d81c8;
LAB_003d8184:
    lVar18 = 0;
    if (*(long *)(param_1 + 0x488) != 0) {
      lVar18 = FUN_003c2c10();
    }
    lVar18 = *(long *)(param_1 + (ulong)*(uint *)(param_1 + 0x110) * 0x18 + 0x11088) + lVar18;
    bVar1 = *(byte *)(param_1 + 0x140);
    uVar7 = (uint)bVar1;
  }
  else {
    if (1 < *(int *)(param_1 + 0x4c4) - 1U) {
      piVar9 = (int *)(param_1 + 0x504);
      uVar6 = 1;
      do {
        uVar8 = uVar6;
        if (uVar7 == uVar8) break;
        iVar5 = *piVar9;
        piVar9 = piVar9 + 0x10;
        uVar6 = uVar8 + 1;
      } while (1 < iVar5 - 1U);
      bVar3 = *(char *)(param_1 + 0xde) != '\0' && uVar7 <= uVar8;
      cVar2 = *(char *)(param_1 + 0xe0);
      goto joined_r0x003d80fc;
    }
    bVar3 = false;
    if (*(char *)(param_1 + 0xe0) == '\0') goto LAB_003d8180;
LAB_003d8100:
    if ((*(char *)(param_1 + 0xd9) == '\0') ||
       (uVar6 = FUN_003d934c(*(undefined8 *)(param_1 + 0xf8)), (uVar6 & 1) == 0)) {
joined_r0x003d8130:
      if (!bVar3) goto LAB_003d8184;
LAB_003d8134:
      uVar7 = *(uint *)(param_1 + 0x108);
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x108);
      if (0 < (int)uVar7) {
        if (1 < *(int *)(param_1 + 0x4c4) - 1U) {
          uVar6 = 0;
          piVar9 = (int *)(param_1 + 0x504);
          do {
            if ((ulong)uVar7 - 1 == uVar6) goto LAB_003d8134;
            iVar5 = *piVar9;
            uVar6 = uVar6 + 1;
            piVar9 = piVar9 + 0x10;
          } while (1 < iVar5 - 1U);
          if (uVar7 <= uVar6) {
            bVar3 = true;
          }
        }
        goto joined_r0x003d8130;
      }
    }
LAB_003d81c8:
    if (0 < (int)*(uint *)(param_1 + 0x110)) {
      uVar7 = *(uint *)(param_1 + 0x110);
    }
    lVar18 = param_1 + (long)(int)uVar7 * 0x18;
    lVar18 = *(long *)(lVar18 + 0x11078) + *(long *)(lVar18 + 0x11070);
    bVar1 = *(char *)(param_1 + 0x140);
    uVar7 = 0;
  }
  lVar12 = lVar18;
  if (bVar1 == 0) {
    *(uint *)(param_1 + 0xe8) = uVar7;
    cVar2 = *(char *)(param_1 + 0x38);
  }
  else {
    lVar13 = *(long *)(param_1 + 0x160);
    if (lVar18 - lVar13 == 0 || lVar18 < lVar13) {
      *(undefined4 *)(param_1 + 0xe8) = 0;
      cVar2 = *(char *)(param_1 + 0x38);
    }
    else {
      lVar12 = *(long *)(param_1 + 0x158);
      lVar16 = lVar13 - lVar12;
      if (lVar16 < 0x480) {
        lVar13 = 0;
        if (lVar16 != 0) {
          lVar13 = (lVar18 - lVar12) / lVar16;
        }
        *(int *)(param_1 + 0xe8) = (int)lVar13;
        cVar2 = *(char *)(param_1 + 0x38);
        lVar12 = ((lVar18 - lVar12) - lVar13 * lVar16) + lVar12;
      }
      else {
        lVar12 = (lVar18 - lVar13) + lVar12;
        *(undefined4 *)(param_1 + 0xe8) = 1;
        cVar2 = *(char *)(param_1 + 0x38);
      }
    }
  }
  if ((cVar2 == '\0') || (*(char *)(param_1 + 0x10c80) == '\0')) {
    *(undefined8 *)(param_1 + 0x119f8) = 0xffffffffffffffff;
    *(undefined8 *)(param_1 + 0x11a00) = 0xffffffffffffffff;
  }
  else if (*(char *)(param_1 + 0xd9) == '\0') {
    *(undefined8 *)(param_1 + 0x119f8) = 0;
    *(undefined8 *)(param_1 + 0x11a00) = 0;
  }
  else {
    *(long *)(param_1 + 0x11a00) = lVar12;
    *(long *)(param_1 + 0x119f8) = lVar18;
  }
  return;
}

