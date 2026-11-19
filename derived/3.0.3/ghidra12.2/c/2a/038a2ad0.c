
/* WARNING: Removing unreachable block (ram,0x038a30bc) */
/* WARNING: Removing unreachable block (ram,0x038a2e3c) */
/* WARNING: Removing unreachable block (ram,0x038a319c) */
/* WARNING: Removing unreachable block (ram,0x038a2de0) */
/* WARNING: Removing unreachable block (ram,0x038a2c9c) */
/* WARNING: Removing unreachable block (ram,0x038a2b60) */
/* WARNING: Removing unreachable block (ram,0x038a2bbc) */
/* WARNING: Removing unreachable block (ram,0x038a2d54) */
/* WARNING: Removing unreachable block (ram,0x038a2fd4) */
/* WARNING: Removing unreachable block (ram,0x038a32e0) */
/* WARNING: Removing unreachable block (ram,0x038a34d0) */
/* WARNING: Removing unreachable block (ram,0x038a2f1c) */
/* WARNING: Removing unreachable block (ram,0x038a3060) */
/* WARNING: Removing unreachable block (ram,0x038a3250) */
/* WARNING: Removing unreachable block (ram,0x038a333c) */
/* WARNING: Removing unreachable block (ram,0x038a341c) */

void FUN_038a2ad0(long param_1)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  
  uVar7 = *(uint *)(param_1 + 8);
  if (0 < (int)uVar7) {
    uVar14 = 0;
    plVar12 = (long *)PTR_DAT_04bcb7d8;
    do {
      lVar15 = *(long *)(param_1 + 0x10);
      uVar2 = uVar14;
      if (uVar7 <= uVar14) {
        uVar2 = 0;
      }
      uVar13 = *(ulong *)(param_1 + 0xaf8);
      if (uVar13 != 0) {
        lVar8 = *(long *)(uVar13 + 8);
        while (lVar8 != 0) {
          *(ulong *)(lVar8 + 0x18) = *(ulong *)(lVar8 + 0x18) & 1 | uVar13;
          uVar13 = *(ulong *)(uVar13 + 8);
          lVar8 = *(long *)(uVar13 + 8);
        }
        lVar8 = lVar15 + (ulong)uVar2 * 400 + 0xc0;
        lVar9 = *plVar12;
LAB_038a2ba0:
        uVar7 = *(uint *)(uVar13 + 0x20);
        for (lVar10 = *(long *)(*(long *)(lVar9 + 0x70) + 0xaf8); lVar10 != 0;
            lVar10 = *(long *)(lVar10 + 8)) {
          while (*(uint *)(lVar10 + 0x20) <= uVar7) {
            if (uVar7 <= *(uint *)(lVar10 + 0x20)) {
              uVar3 = *(uint *)(lVar10 + 0x24);
              uVar11 = (ulong)uVar3;
              if (uVar3 == 0xffffffff) goto LAB_038a2bfc;
              if (0xf < uVar3) {
                uVar11 = 0;
              }
              iVar4 = *(int *)(lVar8 + uVar11 * 4);
              if (iVar4 == 0) goto LAB_038a2bfc;
              lVar9 = *(long *)(*(long *)(lVar9 + 0x70) + 0xaf8);
              goto joined_r0x038a2ca4;
            }
            lVar10 = *(long *)(lVar10 + 0x10);
            if (lVar10 == 0) goto LAB_038a2bfc;
          }
        }
        goto LAB_038a2bfc;
      }
LAB_038a2dd0:
      uVar13 = *(ulong *)(param_1 + 0x758);
      if (uVar13 != 0) {
        lVar8 = *(long *)(uVar13 + 8);
        while (lVar8 != 0) {
          *(ulong *)(lVar8 + 0x18) = *(ulong *)(lVar8 + 0x18) & 1 | uVar13;
          uVar13 = *(ulong *)(uVar13 + 8);
          lVar8 = *(long *)(uVar13 + 8);
        }
        lVar8 = lVar15 + (ulong)uVar2 * 400 + 0x80;
        lVar9 = *plVar12;
LAB_038a2e20:
        uVar7 = *(uint *)(uVar13 + 0x20);
        for (lVar10 = *(long *)(*(long *)(lVar9 + 0x70) + 0x758); lVar10 != 0;
            lVar10 = *(long *)(lVar10 + 8)) {
          while (*(uint *)(lVar10 + 0x20) <= uVar7) {
            if (uVar7 <= *(uint *)(lVar10 + 0x20)) {
              uVar3 = *(uint *)(lVar10 + 0x24);
              uVar11 = (ulong)uVar3;
              if (uVar3 == 0xffffffff) goto LAB_038a2e7c;
              if (0xf < uVar3) {
                uVar11 = 0;
              }
              iVar4 = *(int *)(lVar8 + uVar11 * 4);
              if (iVar4 == 0) goto LAB_038a2e7c;
              lVar9 = *(long *)(*(long *)(lVar9 + 0x70) + 0x758);
              goto joined_r0x038a2f24;
            }
            lVar10 = *(long *)(lVar10 + 0x10);
            if (lVar10 == 0) goto LAB_038a2e7c;
          }
        }
        goto LAB_038a2e7c;
      }
LAB_038a3050:
      uVar13 = *(ulong *)(param_1 + 0x3b8);
      if (uVar13 != 0) {
        lVar8 = *(long *)(uVar13 + 8);
        while (lVar8 != 0) {
          *(ulong *)(lVar8 + 0x18) = *(ulong *)(lVar8 + 0x18) & 1 | uVar13;
          uVar13 = *(ulong *)(uVar13 + 8);
          lVar8 = *(long *)(uVar13 + 8);
        }
        lVar8 = lVar15 + (ulong)uVar2 * 400 + 0x40;
        lVar9 = *plVar12;
LAB_038a30a0:
        uVar7 = *(uint *)(uVar13 + 0x20);
        for (lVar10 = *(long *)(*(long *)(lVar9 + 0x70) + 0x3b8); lVar10 != 0;
            lVar10 = *(long *)(lVar10 + 8)) {
          while (*(uint *)(lVar10 + 0x20) <= uVar7) {
            if (uVar7 <= *(uint *)(lVar10 + 0x20)) {
              uVar3 = *(uint *)(lVar10 + 0x24);
              uVar11 = (ulong)uVar3;
              if (uVar3 == 0xffffffff) goto LAB_038a30fc;
              if (0xf < uVar3) {
                uVar11 = 0;
              }
              iVar4 = *(int *)(lVar8 + uVar11 * 4);
              if (iVar4 == 0) goto LAB_038a30fc;
              lVar9 = *(long *)(*(long *)(lVar9 + 0x70) + 0x3b8);
              goto joined_r0x038a31a4;
            }
            lVar10 = *(long *)(lVar10 + 0x10);
            if (lVar10 == 0) goto LAB_038a30fc;
          }
        }
        goto LAB_038a30fc;
      }
LAB_038a32d0:
      uVar13 = *(ulong *)(param_1 + 0x18);
      if (uVar13 != 0) {
        lVar8 = *(long *)(uVar13 + 8);
        while (lVar8 != 0) {
          *(ulong *)(lVar8 + 0x18) = *(ulong *)(lVar8 + 0x18) & 1 | uVar13;
          uVar13 = *(ulong *)(uVar13 + 8);
          lVar8 = *(long *)(uVar13 + 8);
        }
        lVar8 = *plVar12;
        lVar15 = lVar15 + (ulong)uVar2 * 400;
LAB_038a3320:
        plVar1 = (long *)(*(long *)(lVar8 + 0x70) + 0x18);
        uVar7 = *(uint *)(uVar13 + 0x20);
        for (lVar9 = *plVar1; lVar9 != 0; lVar9 = *(long *)(lVar9 + 8)) {
          while (*(uint *)(lVar9 + 0x20) <= uVar7) {
            if (uVar7 <= *(uint *)(lVar9 + 0x20)) {
              uVar2 = *(uint *)(lVar9 + 0x24);
              uVar11 = (ulong)uVar2;
              if (uVar2 == 0xffffffff) goto LAB_038a337c;
              if (0xf < uVar2) {
                uVar11 = 0;
              }
              iVar4 = *(int *)(lVar15 + uVar11 * 4);
              if (iVar4 == 0) goto LAB_038a337c;
              lVar8 = *plVar1;
              goto joined_r0x038a3424;
            }
            lVar9 = *(long *)(lVar9 + 0x10);
            if (lVar9 == 0) goto LAB_038a337c;
          }
        }
        goto LAB_038a337c;
      }
LAB_038a2b30:
      uVar14 = uVar14 + 1;
      uVar7 = *(uint *)(param_1 + 8);
    } while ((int)uVar14 < (int)uVar7);
  }
  return;
joined_r0x038a2ca4:
  if (lVar9 != 0) {
    if (uVar7 < *(uint *)(lVar9 + 0x20)) {
      lVar9 = *(long *)(lVar9 + 8);
    }
    else {
      if (uVar7 <= *(uint *)(lVar9 + 0x20)) {
        uVar3 = *(uint *)(lVar9 + 0x24);
        uVar11 = (ulong)uVar3;
        if (uVar3 != 0xffffffff) {
          if (0xf < uVar3) {
            uVar11 = 0;
          }
          uVar6 = *(undefined4 *)(lVar8 + uVar11 * 4);
          goto LAB_038a2d00;
        }
        goto LAB_038a2cfc;
      }
      lVar9 = *(long *)(lVar9 + 0x10);
    }
    goto joined_r0x038a2ca4;
  }
LAB_038a2cfc:
  uVar6 = 0;
LAB_038a2d00:
  lVar9 = FUN_002ab090(DAT_04c61168 + 0x10,uVar6,0x81);
  if (lVar9 != 0) {
    thunk_FUN_002a4a20();
    FUN_002aafe0(*(long *)PTR_DAT_04bc1510 + 0x10,iVar4);
  }
  plVar12 = (long *)PTR_DAT_04bcb7d8;
  lVar9 = *(long *)PTR_DAT_04bcb7d8;
  for (lVar10 = *(long *)(*(long *)(lVar9 + 0x70) + 0xaf8); lVar10 != 0;
      lVar10 = *(long *)(lVar10 + 8)) {
    while (*(uint *)(lVar10 + 0x20) <= uVar7) {
      if (uVar7 <= *(uint *)(lVar10 + 0x20)) {
        uVar7 = *(uint *)(lVar10 + 0x24);
        uVar11 = (ulong)uVar7;
        if (uVar7 != 0xffffffff) {
          if (0xf < uVar7) {
            uVar11 = 0;
          }
          *(undefined4 *)(lVar8 + uVar11 * 4) = 0;
          lVar9 = *plVar12;
        }
        goto LAB_038a2bfc;
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if (lVar10 == 0) goto LAB_038a2bfc;
    }
  }
LAB_038a2bfc:
  lVar10 = *(long *)(uVar13 + 0x10);
  if (lVar10 == 0) {
    uVar11 = uVar13;
    do {
      uVar13 = *(ulong *)(uVar11 + 0x18) & 0xfffffffffffffffe;
      if (uVar13 == 0) goto LAB_038a2dd0;
      bVar5 = *(ulong *)(uVar13 + 8) != uVar11;
      uVar11 = uVar13;
    } while (bVar5);
  }
  else {
    *(ulong *)(lVar10 + 0x18) = *(ulong *)(lVar10 + 0x18) & 1 | uVar13;
    uVar13 = *(ulong *)(uVar13 + 0x10);
    lVar10 = *(long *)(uVar13 + 8);
    while (lVar10 != 0) {
      *(ulong *)(lVar10 + 0x18) = *(ulong *)(lVar10 + 0x18) & 1 | uVar13;
      uVar13 = *(ulong *)(uVar13 + 8);
      lVar10 = *(long *)(uVar13 + 8);
    }
  }
  goto LAB_038a2ba0;
joined_r0x038a2f24:
  if (lVar9 != 0) {
    if (uVar7 < *(uint *)(lVar9 + 0x20)) {
      lVar9 = *(long *)(lVar9 + 8);
    }
    else {
      if (uVar7 <= *(uint *)(lVar9 + 0x20)) {
        uVar3 = *(uint *)(lVar9 + 0x24);
        uVar11 = (ulong)uVar3;
        if (uVar3 != 0xffffffff) {
          if (0xf < uVar3) {
            uVar11 = 0;
          }
          uVar6 = *(undefined4 *)(lVar8 + uVar11 * 4);
          goto LAB_038a2f80;
        }
        goto LAB_038a2f7c;
      }
      lVar9 = *(long *)(lVar9 + 0x10);
    }
    goto joined_r0x038a2f24;
  }
LAB_038a2f7c:
  uVar6 = 0;
LAB_038a2f80:
  lVar9 = FUN_002ab090(DAT_04c61168 + 0x10,uVar6,0x80);
  if (lVar9 != 0) {
    FUN_002a4a20();
    FUN_002aafe0(*(long *)PTR_DAT_04bc1510 + 0x10,iVar4);
  }
  plVar12 = (long *)PTR_DAT_04bcb7d8;
  lVar9 = *(long *)PTR_DAT_04bcb7d8;
  for (lVar10 = *(long *)(*(long *)(lVar9 + 0x70) + 0x758); lVar10 != 0;
      lVar10 = *(long *)(lVar10 + 8)) {
    while (*(uint *)(lVar10 + 0x20) <= uVar7) {
      if (uVar7 <= *(uint *)(lVar10 + 0x20)) {
        uVar7 = *(uint *)(lVar10 + 0x24);
        uVar11 = (ulong)uVar7;
        if (uVar7 != 0xffffffff) {
          if (0xf < uVar7) {
            uVar11 = 0;
          }
          *(undefined4 *)(lVar8 + uVar11 * 4) = 0;
          lVar9 = *plVar12;
        }
        goto LAB_038a2e7c;
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if (lVar10 == 0) goto LAB_038a2e7c;
    }
  }
LAB_038a2e7c:
  lVar10 = *(long *)(uVar13 + 0x10);
  if (lVar10 == 0) {
    uVar11 = uVar13;
    do {
      uVar13 = *(ulong *)(uVar11 + 0x18) & 0xfffffffffffffffe;
      if (uVar13 == 0) goto LAB_038a3050;
      bVar5 = *(ulong *)(uVar13 + 8) != uVar11;
      uVar11 = uVar13;
    } while (bVar5);
  }
  else {
    *(ulong *)(lVar10 + 0x18) = *(ulong *)(lVar10 + 0x18) & 1 | uVar13;
    uVar13 = *(ulong *)(uVar13 + 0x10);
    lVar10 = *(long *)(uVar13 + 8);
    while (lVar10 != 0) {
      *(ulong *)(lVar10 + 0x18) = *(ulong *)(lVar10 + 0x18) & 1 | uVar13;
      uVar13 = *(ulong *)(uVar13 + 8);
      lVar10 = *(long *)(uVar13 + 8);
    }
  }
  goto LAB_038a2e20;
joined_r0x038a31a4:
  if (lVar9 != 0) {
    if (uVar7 < *(uint *)(lVar9 + 0x20)) {
      lVar9 = *(long *)(lVar9 + 8);
    }
    else {
      if (uVar7 <= *(uint *)(lVar9 + 0x20)) {
        uVar3 = *(uint *)(lVar9 + 0x24);
        uVar11 = (ulong)uVar3;
        if (uVar3 != 0xffffffff) {
          if (0xf < uVar3) {
            uVar11 = 0;
          }
          uVar6 = *(undefined4 *)(lVar8 + uVar11 * 4);
          goto LAB_038a3200;
        }
        goto LAB_038a31fc;
      }
      lVar9 = *(long *)(lVar9 + 0x10);
    }
    goto joined_r0x038a31a4;
  }
LAB_038a31fc:
  uVar6 = 0;
LAB_038a3200:
  lVar9 = FUN_002ab090(DAT_04c61168 + 0x10,uVar6,0x7c);
  if (lVar9 != 0) {
    FUN_002aca60();
    FUN_002aafe0(*(long *)PTR_DAT_04bc1510 + 0x10,iVar4);
  }
  plVar12 = &DAT_05ae6a60;
  for (lVar10 = *(long *)(*(long *)(DAT_05ae6a60 + 0x70) + 0x3b8); lVar9 = DAT_05ae6a60, lVar10 != 0
      ; lVar10 = *(long *)(lVar10 + 8)) {
    while (*(uint *)(lVar10 + 0x20) <= uVar7) {
      if (uVar7 <= *(uint *)(lVar10 + 0x20)) {
        uVar7 = *(uint *)(lVar10 + 0x24);
        uVar11 = (ulong)uVar7;
        if (uVar7 != 0xffffffff) {
          if (0xf < uVar7) {
            uVar11 = 0;
          }
          *(undefined4 *)(lVar8 + uVar11 * 4) = 0;
          lVar9 = DAT_05ae6a60;
        }
        goto LAB_038a30fc;
      }
      lVar10 = *(long *)(lVar10 + 0x10);
      if (lVar10 == 0) goto LAB_038a30fc;
    }
  }
LAB_038a30fc:
  lVar10 = *(long *)(uVar13 + 0x10);
  if (lVar10 == 0) {
    uVar11 = uVar13;
    do {
      uVar13 = *(ulong *)(uVar11 + 0x18) & 0xfffffffffffffffe;
      if (uVar13 == 0) goto LAB_038a32d0;
      bVar5 = *(ulong *)(uVar13 + 8) != uVar11;
      uVar11 = uVar13;
    } while (bVar5);
  }
  else {
    *(ulong *)(lVar10 + 0x18) = *(ulong *)(lVar10 + 0x18) & 1 | uVar13;
    uVar13 = *(ulong *)(uVar13 + 0x10);
    lVar10 = *(long *)(uVar13 + 8);
    while (lVar10 != 0) {
      *(ulong *)(lVar10 + 0x18) = *(ulong *)(lVar10 + 0x18) & 1 | uVar13;
      uVar13 = *(ulong *)(uVar13 + 8);
      lVar10 = *(long *)(uVar13 + 8);
    }
  }
  goto LAB_038a30a0;
joined_r0x038a3424:
  if (lVar8 != 0) {
    if (uVar7 < *(uint *)(lVar8 + 0x20)) {
      lVar8 = *(long *)(lVar8 + 8);
    }
    else {
      if (uVar7 <= *(uint *)(lVar8 + 0x20)) {
        uVar2 = *(uint *)(lVar8 + 0x24);
        uVar11 = (ulong)uVar2;
        if (uVar2 != 0xffffffff) {
          if (0xf < uVar2) {
            uVar11 = 0;
          }
          uVar6 = *(undefined4 *)(lVar15 + uVar11 * 4);
          goto LAB_038a3480;
        }
        goto LAB_038a347c;
      }
      lVar8 = *(long *)(lVar8 + 0x10);
    }
    goto joined_r0x038a3424;
  }
LAB_038a347c:
  uVar6 = 0;
LAB_038a3480:
  lVar8 = FUN_002ab090(DAT_04c61168 + 0x10,uVar6,0x68);
  if (lVar8 != 0) {
    FUN_002bc4b8();
    FUN_002aafe0(*(long *)PTR_DAT_04bc1510 + 0x10,iVar4);
  }
  plVar12 = &DAT_05ae6a60;
  for (lVar9 = *(long *)(*(long *)(DAT_05ae6a60 + 0x70) + 0x18); lVar8 = DAT_05ae6a60, lVar9 != 0;
      lVar9 = *(long *)(lVar9 + 8)) {
    while (*(uint *)(lVar9 + 0x20) <= uVar7) {
      if (uVar7 <= *(uint *)(lVar9 + 0x20)) {
        uVar7 = *(uint *)(lVar9 + 0x24);
        uVar11 = (ulong)uVar7;
        if (uVar7 != 0xffffffff) {
          if (0xf < uVar7) {
            uVar11 = 0;
          }
          *(undefined4 *)(lVar15 + uVar11 * 4) = 0;
          lVar8 = DAT_05ae6a60;
        }
        goto LAB_038a337c;
      }
      lVar9 = *(long *)(lVar9 + 0x10);
      if (lVar9 == 0) goto LAB_038a337c;
    }
  }
LAB_038a337c:
  lVar9 = *(long *)(uVar13 + 0x10);
  if (lVar9 == 0) {
    uVar11 = uVar13;
    do {
      uVar13 = *(ulong *)(uVar11 + 0x18) & 0xfffffffffffffffe;
      if (uVar13 == 0) goto LAB_038a2b30;
      bVar5 = *(ulong *)(uVar13 + 8) != uVar11;
      uVar11 = uVar13;
    } while (bVar5);
  }
  else {
    *(ulong *)(lVar9 + 0x18) = *(ulong *)(lVar9 + 0x18) & 1 | uVar13;
    uVar13 = *(ulong *)(uVar13 + 0x10);
    lVar9 = *(long *)(uVar13 + 8);
    while (lVar9 != 0) {
      *(ulong *)(lVar9 + 0x18) = *(ulong *)(lVar9 + 0x18) & 1 | uVar13;
      uVar13 = *(ulong *)(uVar13 + 8);
      lVar9 = *(long *)(uVar13 + 8);
    }
  }
  goto LAB_038a3320;
}

