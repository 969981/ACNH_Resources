
long FUN_00393380(long param_1,long param_2)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  int *piVar17;
  ulong uVar18;
  long lVar19;
  undefined1 *puVar20;
  
  if ((param_2 == 0) || ((*(byte *)(param_1 + 0x91) >> 1 & 1) == 0)) {
    lVar12 = 0x40;
    goto LAB_00393468;
  }
  uVar2 = *(ushort *)(*(long *)(param_2 + 0xa0) + (ulong)*(ushort *)(param_1 + 0x92) * 0x10);
  uVar15 = (ulong)uVar2;
  if (uVar2 == 0) {
LAB_00393460:
    lVar12 = 0;
  }
  else {
    lVar12 = *(long *)(*(long *)(param_2 + 0xa0) + (ulong)*(ushort *)(param_1 + 0x92) * 0x10 + 8);
    if (uVar2 == 1) {
      uVar18 = 0;
      uVar14 = 0;
    }
    else {
      uVar18 = 0;
      uVar14 = 0;
      piVar17 = (int *)(lVar12 + 0x3c);
      do {
        uVar18 = uVar18 + 2;
        if (piVar17[-0xe] != 0) {
          uVar14 = uVar14 + 1;
        }
        if (*piVar17 != 0) {
          uVar14 = uVar14 + 1;
        }
        piVar17 = piVar17 + 0x1c;
      } while ((uVar15 & 0xfffe) != uVar18);
    }
    if (((uVar2 & 1) != 0) && (*(int *)(lVar12 + uVar18 * 0x38 + 4) != 0)) {
      uVar14 = uVar14 + 1;
    }
    if (uVar14 == 0) goto LAB_00393460;
    puVar13 = (uint *)(lVar12 + 8);
    lVar12 = (ulong)uVar14 * 0x88 + 0xd8;
    do {
      if (puVar13[-1] != 0) {
        lVar12 = lVar12 + (ulong)*puVar13 * 0x18;
      }
      uVar15 = uVar15 - 1;
      puVar13 = puVar13 + 0xe;
    } while (uVar15 != 0);
  }
  lVar12 = lVar12 + 0x40;
LAB_00393468:
  uVar14 = *(uint *)(param_1 + 0xa8);
  if (*(ushort *)(param_1 + 0xac) != 0) {
    lVar12 = lVar12 + (ulong)*(ushort *)(param_1 + 0xac) * 0x40 + 0x10;
  }
  lVar12 = lVar12 + (ulong)uVar14 * 0x30;
  if (uVar14 != 0) {
    lVar16 = *(long *)(param_1 + 0xb0);
    uVar15 = 0;
    do {
      uVar2 = *(ushort *)(lVar16 + uVar15 * 0xa0);
      uVar18 = (ulong)uVar2;
      lVar12 = lVar12 + uVar18 * 8;
      if (uVar2 == 0) goto LAB_003934c0;
      lVar19 = *(long *)(lVar16 + uVar15 * 0xa0 + 8);
      if (uVar2 == 1) {
        uVar4 = 0;
      }
      else {
        uVar4 = 0;
        do {
          puVar20 = *(undefined1 **)(lVar19 + uVar4 * 8);
          switch(*puVar20) {
          case 0:
            lVar12 = lVar12 + (ulong)*(uint *)(puVar20 + 0x18) * 0x18 + 0x38;
            break;
          case 1:
            lVar12 = lVar12 + 0x38;
          case 2:
          case 3:
            lVar12 = lVar12 + 0x40;
          }
          puVar20 = *(undefined1 **)(lVar19 + uVar4 * 8 + 8);
          switch(*puVar20) {
          case 0:
            lVar12 = lVar12 + (ulong)*(uint *)(puVar20 + 0x18) * 0x18 + 0x38;
            break;
          case 1:
            lVar12 = lVar12 + 0x38;
          case 2:
          case 3:
            lVar12 = lVar12 + 0x40;
          }
          uVar4 = uVar4 + 2;
        } while ((uVar18 & 0xfffe) != uVar4);
      }
      if ((uVar2 & 1) == 0) goto switchD_0039351c_default;
      puVar20 = *(undefined1 **)(lVar19 + uVar4 * 8);
      switch(*puVar20) {
      case 0:
        lVar12 = lVar12 + (ulong)*(uint *)(puVar20 + 0x18) * 0x18 + 0x38;
        break;
      case 1:
        lVar12 = lVar12 + 0x38;
      case 2:
        lVar12 = lVar12 + 0x40;
      default:
switchD_0039351c_default:
        break;
      case 3:
        lVar12 = lVar12 + 0x40;
      }
      if (uVar2 == 0) {
LAB_003934c0:
        uVar4 = (ulong)*(ushort *)(lVar16 + uVar15 * 0xa0 + 0x10);
      }
      else {
        lVar19 = lVar16 + uVar15 * 0xa0;
        uVar5 = 0;
        uVar6 = 0;
        uVar2 = *(ushort *)(lVar19 + 0x10);
        uVar4 = (ulong)uVar2;
        do {
          uVar1 = *(ushort *)(*(long *)(*(long *)(lVar19 + 8) + uVar5 * 8) + 2);
          uVar7 = (ulong)uVar1;
          if ((uint)uVar1 < (uint)uVar2) {
            uVar3 = (uint)uVar2 - (uint)uVar1;
            uVar11 = (ulong)uVar3 & 3;
            uVar9 = uVar7;
            if ((uVar3 & 3) != 0) {
              do {
                lVar8 = uVar9 * 8;
                uVar9 = uVar9 + 1;
                if (**(byte **)(*(long *)(lVar19 + 0x18) + lVar8) < 2) {
                  uVar6 = uVar6 + 1;
                }
                uVar11 = uVar11 - 1;
              } while (uVar11 != 0);
            }
            if (2 < ~uVar7 + uVar4) {
              lVar8 = uVar4 - uVar9;
              puVar10 = (undefined8 *)(*(long *)(lVar19 + 0x18) + 0x10 + uVar9 * 8);
              do {
                if (*(byte *)puVar10[-2] < 2) {
                  uVar6 = uVar6 + 1;
                }
                if (*(byte *)puVar10[-1] < 2) {
                  uVar6 = uVar6 + 1;
                }
                if (*(byte *)*puVar10 < 2) {
                  uVar6 = uVar6 + 1;
                }
                if (*(byte *)puVar10[1] < 2) {
                  uVar6 = uVar6 + 1;
                }
                lVar8 = lVar8 + -4;
                puVar10 = puVar10 + 4;
              } while (lVar8 != 0);
            }
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar18);
        if (uVar6 != 0) {
          lVar12 = lVar12 + (ulong)uVar6 * 0x18;
        }
      }
      lVar12 = lVar12 + uVar4 * 0x18;
      uVar15 = uVar15 + 1;
    } while (uVar15 != uVar14);
  }
  return lVar12;
}

