
bool FUN_0035dd30(long param_1,long param_2,long param_3)

{
  long *plVar1;
  int *piVar2;
  byte *pbVar3;
  int iVar4;
  ushort uVar5;
  ushort uVar6;
  byte bVar7;
  byte bVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  byte bVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  byte bVar16;
  ulong uVar17;
  ulong uVar18;
  
  uVar5 = *(ushort *)(param_1 + 0x38);
  uVar6 = *(ushort *)(param_1 + 0x3a);
  uVar13 = (uint)uVar5;
  if (uVar13 < uVar6) {
    if (param_3 != 0) {
      if ((*(char *)(param_3 + 0x1d) == '\x04') || (*(char *)(param_3 + 0x1d) == '\x02')) {
        uVar14 = (ulong)*(uint *)(param_3 + 0x20);
        bVar16 = *(byte *)(param_3 + 0x1c);
      }
      else {
        uVar14 = 0x20;
        bVar16 = *(byte *)(param_3 + 0x1c);
      }
      if (bVar16 != 0) {
        uVar15 = (ulong)bVar16;
        uVar17 = 0;
        bVar16 = 1;
        do {
          piVar2 = (int *)(param_3 + (ulong)*(uint *)(param_3 + uVar14 + uVar17 * 4));
          bVar12 = *(byte *)(piVar2 + 1);
          if (bVar12 != 0) {
            uVar15 = 0;
            do {
              pbVar3 = (byte *)((long)piVar2 + (ulong)(uint)piVar2[uVar15 + 2]);
              iVar4 = *piVar2;
              if (iVar4 < 0x50544c46) {
                if (iVar4 < 0x434d4c46) {
                  if (iVar4 == 0x41475646) {
                    bVar7 = 0;
                    if (*pbVar3 < 3) {
                      bVar7 = bVar16;
                    }
                    bVar16 = bVar7;
                    if (((*(uint *)(param_2 + 0x10) >> 0x12 & 3) <= (uint)*pbVar3 || pbVar3[1] != 0)
                        || pbVar3[2] != 2) {
                      bVar16 = 0;
                    }
                  }
                  else if (iVar4 == 0x43414c46) {
                    bVar10 = pbVar3[1] == 0 && pbVar3[2] == 2;
                    bVar16 = bVar16 & (char)(*(char *)(param_2 + 0x11) << 6) >> 7;
                    goto LAB_0035de64;
                  }
                }
                else {
                  if (iVar4 == 0x434d4c46) {
                    bVar9 = 0x36 < pbVar3[1];
                    bVar10 = pbVar3[1] == 0x37;
                  }
                  else {
                    if (iVar4 != 0x4d494c46) goto LAB_0035de68;
                    bVar10 = (*(byte *)(param_2 + 0x11) & 0x10) != 0;
                    bVar9 = !bVar10 || 1 < pbVar3[1];
                    bVar10 = bVar10 && pbVar3[1] == 2;
                  }
LAB_0035de58:
                  bVar8 = 0;
                  if (!bVar9 || bVar10) {
                    bVar8 = bVar16;
                  }
LAB_0035de5c:
                  bVar16 = bVar8;
                  bVar10 = pbVar3[2] == 2;
LAB_0035de64:
                  if (!bVar10) {
                    bVar16 = 0;
                  }
                }
              }
              else if (iVar4 < 0x53464c46) {
                if (iVar4 == 0x50544c46) {
                  bVar7 = 0;
                  if (*(long *)(param_1 + 0x28) != 0) {
                    bVar7 = bVar16;
                  }
                  bVar16 = bVar7;
                  if (((*(uint *)(param_2 + 0x14) & 3) <= (uint)*pbVar3 || pbVar3[2] != 1) ||
                      pbVar3[1] != 0) {
                    bVar16 = 0;
                  }
                  if (*(short *)(*(long *)(param_1 + 0x18) + 0xc) != 0) {
                    uVar18 = 0;
                    do {
                      uVar11 = (**(code **)(**(long **)(*(long *)(param_1 + 0x28) + uVar18 * 8) +
                                           0x30))();
                      if ((uVar11 & 1) == 0) {
                        bVar16 = 0;
                        break;
                      }
                      uVar18 = uVar18 + 1;
                    } while (uVar18 < *(ushort *)(*(long *)(param_1 + 0x18) + 0xc));
                    bVar12 = *(byte *)(piVar2 + 1);
                  }
                }
                else if (iVar4 == 0x52425446) {
                  bVar7 = 0;
                  if (*pbVar3 < 3) {
                    bVar7 = bVar16;
                  }
                  if ((*(uint *)(param_2 + 0x10) >> 0x14 & 3) <= (uint)*pbVar3) {
                    bVar7 = 0;
                  }
                  bVar8 = 0;
                  if (pbVar3[1] < 7) {
                    bVar8 = bVar7;
                  }
                  goto LAB_0035de5c;
                }
              }
              else {
                if (iVar4 == 0x53464c46) {
                  bVar10 = (*(byte *)(param_2 + 0x11) & 0x80) != 0;
                  bVar9 = !bVar10 || 5 < pbVar3[1];
                  bVar10 = bVar10 && pbVar3[1] == 6;
                  goto LAB_0035de58;
                }
                if (iVar4 == 0x53544c46) {
                  bVar7 = 0;
                  if (*pbVar3 < 3) {
                    bVar7 = bVar16;
                  }
                  if ((*(uint *)(param_2 + 0x10) >> 2 & 3) <= (uint)*pbVar3) {
                    bVar7 = 0;
                  }
                  bVar8 = 0;
                  if (pbVar3[1] < 5) {
                    bVar8 = bVar7;
                  }
                  goto LAB_0035de5c;
                }
              }
LAB_0035de68:
              uVar15 = uVar15 + 1;
            } while (uVar15 < bVar12);
            uVar15 = (ulong)*(byte *)(param_3 + 0x1c);
          }
          uVar17 = uVar17 + 1;
        } while (uVar17 < uVar15);
        if (bVar16 == 0) goto LAB_0035e0ac;
      }
      uVar13 = (uint)*(ushort *)(param_1 + 0x38);
    }
    *(short *)(param_1 + 0x38) = (short)uVar13 + 1;
    plVar1 = (long *)(*(long *)(param_1 + 0x30) + (ulong)uVar13 * 0x10);
    *plVar1 = param_2;
    plVar1[1] = param_3;
  }
LAB_0035e0ac:
  return uVar5 < uVar6;
}

