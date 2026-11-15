
undefined4 FUN_02119c7c(long param_1,int *param_2)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  undefined4 uVar5;
  int *piVar6;
  ulong uVar7;
  byte *pbVar8;
  long *plVar9;
  long lVar10;
  
  lVar10 = *(long *)PTR_DAT_04bb39b0;
  if (lVar10 == 0) {
    uVar7 = (ulong)(byte)*PTR_DAT_04bb32e0;
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_02119ce8;
LAB_02119d54:
    if (*(long *)PTR_DAT_04bb4718 != 0) {
      piVar6 = (int *)(*(long *)PTR_DAT_04bb4718 + uVar7 * 4 + 0xde8);
      goto LAB_02119d70;
    }
  }
  else {
    pbVar8 = PTR_DAT_04bb32e0;
    if (*(int *)(lVar10 + 0x15c) != 0) {
      pbVar8 = (byte *)(lVar10 + 0x158);
    }
    uVar7 = (ulong)*pbVar8;
    if ((*pbVar8 < 8) ||
       (((*(int *)(lVar10 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (bVar4 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), uVar7 = (ulong)bVar4, bVar4 < 8))))
    goto LAB_02119d54;
LAB_02119ce8:
    if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
      lVar10 = **(long **)PTR_DAT_04bb27d0;
      bVar4 = *(byte *)(lVar10 + 0x473);
      pbVar8 = PTR_DAT_04bb5038;
      if ((long)(char)bVar4 != 0xffffffffffffffff) {
        puVar1 = (uint *)(lVar10 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
        if (7 < bVar4) {
          puVar1 = (uint *)(lVar10 + 0x48);
        }
        if ((*puVar1 & 8) != 0) {
          pbVar8 = (byte *)(lVar10 + 0x471);
        }
      }
      uVar7 = (ulong)*pbVar8;
      if (*pbVar8 < 8) goto LAB_02119d54;
    }
    uVar7 = (ulong)(byte)*PTR_DAT_04bb5038;
    if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_02119d54;
  }
  piVar6 = (int *)PTR_DAT_04bb3238;
LAB_02119d70:
  iVar2 = *param_2;
  if (*piVar6 == iVar2) {
    return 0xfffffffe;
  }
  if ((*(ushort *)(param_1 + 0x1528) >> 5 & 1) != 0) {
    return *(undefined4 *)(param_1 + 0x1600);
  }
  if (iVar2 != 0) {
    if (iVar2 == *(int *)(param_1 + 0xf0)) {
      return 0xfffffffe;
    }
    uVar3 = *(uint *)(param_1 + 0x1e8);
    if (0 < (int)uVar3) {
      plVar9 = *(long **)(param_1 + 0x1f0);
      if (*(int *)(*plVar9 + 0xe8) == iVar2) {
        return 0;
      }
      uVar3 = uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU);
      if (uVar3 != 1) {
        if (*(int *)(plVar9[1] + 0xe8) == iVar2) {
          return 1;
        }
        if (uVar3 != 2) {
          if (*(int *)(plVar9[2] + 0xe8) == iVar2) {
            return 2;
          }
          if (uVar3 != 3) {
            if (*(int *)(plVar9[3] + 0xe8) == iVar2) {
              return 3;
            }
            if (uVar3 != 4) {
              if (*(int *)(plVar9[4] + 0xe8) == iVar2) {
                return 4;
              }
              if (uVar3 != 5) {
                if (*(int *)(plVar9[5] + 0xe8) == iVar2) {
                  return 5;
                }
                if (uVar3 != 6) {
                  if (*(int *)(plVar9[6] + 0xe8) == iVar2) {
                    return 6;
                  }
                  if (uVar3 != 7) {
                    if (*(int *)(plVar9[7] + 0xe8) == iVar2) {
                      return 7;
                    }
                    if (uVar3 != 8) {
                      if (*(int *)(plVar9[8] + 0xe8) == iVar2) {
                        return 8;
                      }
                      if (uVar3 != 9) {
                        uVar5 = 9;
                        if (*(int *)(plVar9[9] + 0xe8) != iVar2) {
                          uVar5 = 0xffffffff;
                        }
                        return uVar5;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0xffffffff;
}

