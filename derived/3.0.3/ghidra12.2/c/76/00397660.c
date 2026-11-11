
long FUN_00397660(undefined8 param_1,long param_2)

{
  int *piVar1;
  ushort uVar2;
  int *piVar3;
  long lVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  uint *puVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  ulong uVar14;
  int iVar15;
  
  if (*(int *)(param_2 + 0x10) == 0) {
    lVar11 = 0;
  }
  else {
    uVar14 = 0;
    lVar11 = 0;
    puVar12 = (undefined4 *)0x0;
    do {
      puVar13 = *(undefined4 **)(*(long *)(param_2 + 0x18) + uVar14 * 8);
      switch(*puVar13) {
      case 0:
        if ((puVar12 == (undefined4 *)0x0) || ((*(byte *)((long)puVar13 + 0x91) >> 1 & 1) == 0)) {
          lVar11 = lVar11 + 0xe0;
          piVar3 = (int *)nn::util::BinaryFileHeader::GetFirstBlock();
        }
        else {
          uVar2 = *(ushort *)
                   (*(long *)(puVar12 + 0x28) + (ulong)*(ushort *)((long)puVar13 + 0x92) * 0x10);
          uVar5 = (ulong)uVar2;
          if (uVar2 == 0) {
LAB_00397964:
            lVar4 = 0;
          }
          else {
            lVar7 = *(long *)(*(long *)(puVar12 + 0x28) +
                              (ulong)*(ushort *)((long)puVar13 + 0x92) * 0x10 + 8);
            if (uVar2 < 4) {
              uVar8 = 0;
              uVar6 = 0;
            }
            else {
              uVar8 = 0;
              uVar6 = 0;
              piVar3 = (int *)(lVar7 + 0x74);
              do {
                uVar8 = uVar8 + 4;
                if (piVar3[-0x1c] != 0) {
                  uVar6 = uVar6 + 1;
                }
                iVar15 = *piVar3;
                if (piVar3[-0xe] != 0) {
                  uVar6 = uVar6 + 1;
                }
                piVar1 = piVar3 + 0xe;
                piVar3 = piVar3 + 0x38;
                if (iVar15 != 0) {
                  uVar6 = uVar6 + 1;
                }
                if (*piVar1 != 0) {
                  uVar6 = uVar6 + 1;
                }
              } while ((uVar5 & 0xfffc) != uVar8);
            }
            uVar9 = uVar5 & 3;
            if ((uVar2 & 3) != 0) {
              piVar3 = (int *)(lVar7 + uVar8 * 0x38 + 4);
              do {
                if (*piVar3 != 0) {
                  uVar6 = uVar6 + 1;
                }
                uVar9 = uVar9 - 1;
                piVar3 = piVar3 + 0xe;
              } while (uVar9 != 0);
            }
            if (uVar6 == 0) goto LAB_00397964;
            lVar4 = (ulong)uVar6 * 0x88 + 0xd8;
            if (uVar2 == 1) {
              uVar8 = 0;
            }
            else {
              uVar8 = 0;
              puVar10 = (uint *)(lVar7 + 0x40);
              do {
                if (puVar10[-0xf] != 0) {
                  lVar4 = lVar4 + (ulong)puVar10[-0xe] * 0x18;
                }
                if (puVar10[-1] != 0) {
                  lVar4 = lVar4 + (ulong)*puVar10 * 0x18;
                }
                uVar8 = uVar8 + 2;
                puVar10 = puVar10 + 0x1c;
              } while ((uVar5 & 0xfffe) != uVar8);
            }
            if (((uVar2 & 1) != 0) && (*(int *)(lVar7 + uVar8 * 0x38 + 4) != 0)) {
              lVar4 = lVar4 + (ulong)*(uint *)(lVar7 + uVar8 * 0x38 + 8) * 0x18;
            }
          }
          lVar11 = lVar11 + lVar4 + 0xe0;
          piVar3 = (int *)nn::util::BinaryFileHeader::GetFirstBlock();
        }
        if (piVar3 != (int *)0x0) {
          iVar15 = 0;
          do {
            if (*piVar3 == 0x50434756) {
              if (iVar15 == puVar13[0x26]) {
                lVar7 = FUN_00397660(param_1);
                lVar11 = lVar7 + lVar11;
                break;
              }
              iVar15 = iVar15 + 1;
            }
            piVar3 = (int *)nn::util::BinaryBlockHeader::GetNextBlock();
          } while (piVar3 != (int *)0x0);
        }
        break;
      case 1:
      case 2:
      case 3:
      case 5:
        if ((puVar12 == (undefined4 *)0x0) || ((*(byte *)((long)puVar13 + 0x91) >> 1 & 1) == 0)) {
          lVar7 = 0x40;
        }
        else {
          uVar2 = *(ushort *)
                   (*(long *)(puVar12 + 0x28) + (ulong)*(ushort *)((long)puVar13 + 0x92) * 0x10);
          uVar5 = (ulong)uVar2;
          if (uVar2 == 0) {
LAB_00397830:
            lVar7 = 0;
          }
          else {
            lVar4 = *(long *)(*(long *)(puVar12 + 0x28) +
                              (ulong)*(ushort *)((long)puVar13 + 0x92) * 0x10 + 8);
            if (uVar2 < 4) {
              uVar8 = 0;
              uVar6 = 0;
            }
            else {
              uVar8 = 0;
              uVar6 = 0;
              piVar3 = (int *)(lVar4 + 0x74);
              do {
                uVar8 = uVar8 + 4;
                if (piVar3[-0x1c] != 0) {
                  uVar6 = uVar6 + 1;
                }
                iVar15 = *piVar3;
                if (piVar3[-0xe] != 0) {
                  uVar6 = uVar6 + 1;
                }
                piVar1 = piVar3 + 0xe;
                piVar3 = piVar3 + 0x38;
                if (iVar15 != 0) {
                  uVar6 = uVar6 + 1;
                }
                if (*piVar1 != 0) {
                  uVar6 = uVar6 + 1;
                }
              } while ((uVar5 & 0xfffc) != uVar8);
            }
            uVar9 = uVar5 & 3;
            if ((uVar2 & 3) != 0) {
              piVar3 = (int *)(lVar4 + uVar8 * 0x38 + 4);
              do {
                if (*piVar3 != 0) {
                  uVar6 = uVar6 + 1;
                }
                uVar9 = uVar9 - 1;
                piVar3 = piVar3 + 0xe;
              } while (uVar9 != 0);
            }
            if (uVar6 == 0) goto LAB_00397830;
            lVar7 = (ulong)uVar6 * 0x88 + 0xd8;
            if (uVar2 == 1) {
              uVar8 = 0;
            }
            else {
              uVar8 = 0;
              puVar10 = (uint *)(lVar4 + 0x40);
              do {
                if (puVar10[-0xf] != 0) {
                  lVar7 = lVar7 + (ulong)puVar10[-0xe] * 0x18;
                }
                if (puVar10[-1] != 0) {
                  lVar7 = lVar7 + (ulong)*puVar10 * 0x18;
                }
                uVar8 = uVar8 + 2;
                puVar10 = puVar10 + 0x1c;
              } while ((uVar5 & 0xfffe) != uVar8);
            }
            if (((uVar2 & 1) != 0) && (*(int *)(lVar4 + uVar8 * 0x38 + 4) != 0)) {
              lVar7 = lVar7 + (ulong)*(uint *)(lVar4 + uVar8 * 0x38 + 8) * 0x18;
            }
          }
          lVar7 = lVar7 + 0x40;
        }
        lVar11 = lVar11 + 0xa0 + lVar7;
        break;
      case 4:
        lVar7 = FUN_00393380(puVar13,puVar12);
        lVar11 = lVar11 + lVar7 + 0x100;
        break;
      case 6:
        puVar12 = puVar13;
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < *(uint *)(param_2 + 0x10));
  }
  return lVar11;
}

