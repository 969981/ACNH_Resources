
void FUN_029f62a0(long param_1)

{
  MutexType *pMVar1;
  undefined8 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  long lVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  byte *pbVar13;
  long *plVar14;
  undefined8 *puVar15;
  long *plVar16;
  long lVar17;
  byte bVar18;
  byte bVar19;
  long *plVar20;
  long lVar21;
  undefined8 uVar22;
  
  pMVar1 = (MutexType *)(param_1 + 0x20);
  nn::os::LockMutex(pMVar1);
  puVar15 = *(undefined8 **)(param_1 + 0x19a0);
  puVar2 = (undefined8 *)(param_1 + 0x1998);
  if (puVar15 != puVar2) {
    lVar10 = (long)*(int *)(param_1 + 0x19ac);
    plVar14 = (long *)(param_1 + 0x6a8);
    lVar17 = (long)puVar15 - lVar10;
    bVar19 = DAT_055f0d81;
    bVar18 = DAT_055f0d82;
    do {
      if ((*(byte *)(lVar17 + 1) & 1) == 0) {
        if (((*(byte *)(lVar17 + 1) >> 1 & 1) != 0) &&
           (plVar20 = *(long **)(lVar17 + 0x10), plVar20 != (long *)0x0)) {
          *(undefined8 *)(lVar17 + 0x10) = 0;
          lVar21 = *plVar20;
          *(byte *)(lVar21 + 1) = *(byte *)(lVar21 + 1) | 2;
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 0x60);
        if (iVar3 == 0) {
          bVar8 = bVar19 & 1;
          bVar19 = 1;
          if (bVar8 == 0) {
            DAT_055f0d81 = 1;
          }
        }
        else {
          if (iVar3 < 1) {
            lVar21 = 0;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x58);
            iVar7 = *(int *)(param_1 + 0x5c);
            iVar4 = 0;
            if (iVar6 <= iVar7) {
              iVar4 = iVar6;
            }
            lVar21 = *(long *)(*(long *)(param_1 + 0x50) + (long)(iVar7 - iVar4) * 8);
            iVar4 = 0;
            if (iVar7 + 1 < iVar6) {
              iVar4 = iVar7 + 1;
            }
            *(int *)(param_1 + 0x5c) = iVar4;
            *(int *)(param_1 + 0x60) = iVar3 + -1;
          }
          if (*(int *)(param_1 + 0x6b8) < *(int *)(param_1 + 0x6d0)) {
            plVar20 = *(long **)(param_1 + 0x6c0);
            if (plVar20 != (long *)0x0) {
              *(long *)(param_1 + 0x6c0) = *plVar20;
            }
            *plVar20 = lVar21;
            plVar20[2] = 0;
            plVar12 = plVar20 + 1;
            *plVar12 = 0;
            lVar9 = *plVar14;
            *plVar14 = (long)plVar12;
            plVar20[2] = (long)plVar14;
            *plVar12 = lVar9;
            if (lVar9 != 0) {
              *(long **)(lVar9 + 8) = plVar12;
            }
            *(int *)(param_1 + 0x6b8) = *(int *)(param_1 + 0x6b8) + 1;
          }
          else {
            plVar20 = (long *)0x0;
          }
          *(byte *)(lVar21 + 1) = *(byte *)(lVar21 + 1) | 1;
          *(long **)(lVar17 + 0x10) = plVar20;
        }
      }
      if ((*(byte *)(lVar17 + 1) >> 2 & 1) != 0) {
        if (*(long **)(lVar17 + 0x10) == (long *)0x0) {
          bVar8 = bVar18 & 1;
          bVar18 = 1;
          if (bVar8 == 0) {
            DAT_055f0d82 = 1;
          }
        }
        else {
          uVar5 = *(uint *)(lVar17 + 0xc);
          uVar22 = *(undefined8 *)(lVar17 + 4);
          lVar21 = **(long **)(lVar17 + 0x10);
          *(byte *)(lVar21 + 1) = *(byte *)(lVar21 + 1) | 4;
          *(ulong *)(lVar21 + 0x18) = (ulong)uVar5;
          *(undefined8 *)(lVar21 + 0x10) = uVar22;
        }
      }
      *(undefined1 *)(lVar17 + 1) = 0;
      lVar17 = *(long *)(lVar17 + lVar10 + 8) - lVar10;
    } while (lVar17 != (long)puVar2 - lVar10);
    puVar15 = *(undefined8 **)(param_1 + 0x19a0);
  }
  while (puVar15 != puVar2) {
    puVar11 = (undefined8 *)puVar15[1];
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15 = puVar11;
  }
  *(undefined4 *)(param_1 + 0x19a8) = 0;
  *(undefined8 **)(param_1 + 0x19a0) = puVar2;
  *(long *)(param_1 + 0x1998) = param_1 + 0x1998;
  nn::os::UnlockMutex(pMVar1);
  plVar14 = *(long **)(param_1 + 0x6b0);
  if (plVar14 != (long *)(param_1 + 0x6a8)) {
    plVar20 = plVar14 + -1;
    do {
      pbVar13 = (byte *)plVar14[-1];
      plVar12 = (long *)plVar14[1];
      bVar19 = pbVar13[1];
      if ((bVar19 >> 1 & 1) == 0) {
        bVar18 = bVar19;
        if ((bVar19 & 1) != 0) {
          pbVar13[1] = bVar19 & 0xfe;
          *pbVar13 = *pbVar13 | 1;
          bVar18 = bVar19 & 0xfe;
        }
        if ((bVar19 >> 2 & 1) == 0) {
          bVar19 = *pbVar13;
        }
        else {
          pbVar13[1] = bVar18 & 0xfb;
          bVar19 = *pbVar13;
        }
      }
      else {
        pbVar13[1] = 0;
        *pbVar13 = *pbVar13 & 0xfe;
        bVar19 = *pbVar13;
      }
      if ((bVar19 & 1) == 0) {
        plVar16 = (long *)plVar14[1];
        if (*plVar14 != 0) {
          *(long **)(*plVar14 + 8) = plVar16;
          plVar16 = (long *)plVar14[1];
        }
        if (plVar16 != (long *)0x0) {
          *plVar16 = *plVar14;
        }
        *plVar14 = 0;
        plVar14[1] = 0;
        *(int *)(param_1 + 0x6b8) = *(int *)(param_1 + 0x6b8) + -1;
        *plVar20 = *(long *)(param_1 + 0x6c0);
        *(long **)(param_1 + 0x6c0) = plVar20;
        iVar3 = *(int *)(param_1 + 0x60);
        iVar4 = *(int *)(param_1 + 0x58);
        if (iVar3 < iVar4) {
          *(int *)(param_1 + 0x60) = iVar3 + 1;
          iVar3 = *(int *)(param_1 + 0x5c) + iVar3;
          iVar6 = 0;
          if (iVar4 <= iVar3) {
            iVar6 = iVar4;
          }
          *(byte **)(*(long *)(param_1 + 0x50) + (long)(iVar3 - iVar6) * 8) = pbVar13;
        }
      }
      plVar20 = plVar12 + -1;
      plVar14 = plVar12;
    } while (plVar20 != (long *)(param_1 + 0x6a0));
  }
  nn::os::LockMutex(pMVar1);
  puVar15 = *(undefined8 **)(param_1 + 0x3310);
  puVar2 = (undefined8 *)(param_1 + 0x3308);
  if (puVar15 != puVar2) {
    lVar10 = (long)*(int *)(param_1 + 0x331c);
    plVar14 = (long *)(param_1 + 0x2018);
    lVar17 = (long)puVar15 - lVar10;
    bVar19 = DAT_055f0d83;
    bVar18 = DAT_055f0d84;
    do {
      if ((*(byte *)(lVar17 + 1) & 1) == 0) {
        if (((*(byte *)(lVar17 + 1) >> 1 & 1) != 0) &&
           (plVar20 = *(long **)(lVar17 + 0x20), plVar20 != (long *)0x0)) {
          *(undefined8 *)(lVar17 + 0x20) = 0;
          lVar21 = *plVar20;
          *(byte *)(lVar21 + 1) = *(byte *)(lVar21 + 1) | 2;
        }
      }
      else {
        iVar3 = *(int *)(param_1 + 0x19d0);
        if (iVar3 == 0) {
          bVar8 = bVar19 & 1;
          bVar19 = 1;
          if (bVar8 == 0) {
            DAT_055f0d83 = 1;
          }
        }
        else {
          if (iVar3 < 1) {
            lVar21 = 0;
          }
          else {
            iVar6 = *(int *)(param_1 + 0x19cc);
            iVar7 = *(int *)(param_1 + 0x19c8);
            iVar4 = 0;
            if (iVar7 <= iVar6) {
              iVar4 = iVar7;
            }
            lVar21 = *(long *)(*(long *)(param_1 + 0x19c0) + (long)(iVar6 - iVar4) * 8);
            *(int *)(param_1 + 0x19d0) = iVar3 + -1;
            iVar3 = 0;
            if (iVar6 + 1 < iVar7) {
              iVar3 = iVar6 + 1;
            }
            *(int *)(param_1 + 0x19cc) = iVar3;
          }
          if (*(int *)(param_1 + 0x2028) < *(int *)(param_1 + 0x2040)) {
            plVar20 = *(long **)(param_1 + 0x2030);
            if (plVar20 != (long *)0x0) {
              *(long *)(param_1 + 0x2030) = *plVar20;
            }
            *plVar20 = lVar21;
            plVar20[2] = 0;
            plVar12 = plVar20 + 1;
            *plVar12 = 0;
            lVar9 = *plVar14;
            *plVar14 = (long)plVar12;
            plVar20[2] = (long)plVar14;
            *plVar12 = lVar9;
            if (lVar9 != 0) {
              *(long **)(lVar9 + 8) = plVar12;
            }
            *(int *)(param_1 + 0x2028) = *(int *)(param_1 + 0x2028) + 1;
          }
          else {
            plVar20 = (long *)0x0;
          }
          *(byte *)(lVar21 + 1) = *(byte *)(lVar21 + 1) | 1;
          *(long **)(lVar17 + 0x20) = plVar20;
        }
      }
      if ((*(byte *)(lVar17 + 1) >> 2 & 1) != 0) {
        if (*(long **)(lVar17 + 0x20) == (long *)0x0) {
          bVar8 = bVar18 & 1;
          bVar18 = 1;
          if (bVar8 == 0) {
            DAT_055f0d84 = 1;
          }
        }
        else {
          uVar22 = *(undefined8 *)(lVar17 + 4);
          lVar21 = **(long **)(lVar17 + 0x20);
          *(ulong *)(lVar21 + 0x18) = (ulong)*(uint *)(lVar17 + 0xc);
          *(undefined8 *)(lVar21 + 0x10) = uVar22;
          uVar5 = *(uint *)(lVar17 + 0x18);
          uVar22 = *(undefined8 *)(lVar17 + 0x10);
          *(byte *)(lVar21 + 1) = *(byte *)(lVar21 + 1) | 4;
          *(ulong *)(lVar21 + 0x28) = (ulong)uVar5;
          *(undefined8 *)(lVar21 + 0x20) = uVar22;
        }
      }
      *(undefined1 *)(lVar17 + 1) = 0;
      lVar17 = *(long *)(lVar17 + lVar10 + 8) - lVar10;
    } while (lVar17 != (long)puVar2 - lVar10);
    puVar15 = *(undefined8 **)(param_1 + 0x3310);
  }
  while (puVar15 != puVar2) {
    puVar11 = (undefined8 *)puVar15[1];
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15 = puVar11;
  }
  *(undefined4 *)(param_1 + 0x3318) = 0;
  *(undefined8 **)(param_1 + 0x3310) = puVar2;
  *(long *)(param_1 + 0x3308) = param_1 + 0x3308;
  nn::os::UnlockMutex(pMVar1);
  plVar14 = *(long **)(param_1 + 0x2020);
  if (plVar14 != (long *)(param_1 + 0x2018)) {
    plVar20 = plVar14 + -1;
    do {
      pbVar13 = (byte *)plVar14[-1];
      plVar12 = (long *)plVar14[1];
      bVar19 = pbVar13[1];
      if ((bVar19 >> 1 & 1) == 0) {
        bVar18 = bVar19;
        if ((bVar19 & 1) != 0) {
          pbVar13[1] = bVar19 & 0xfe;
          *pbVar13 = *pbVar13 | 1;
          bVar18 = bVar19 & 0xfe;
        }
        if ((bVar19 >> 2 & 1) == 0) {
          bVar19 = *pbVar13;
        }
        else {
          pbVar13[1] = bVar18 & 0xfb;
          bVar19 = *pbVar13;
        }
      }
      else {
        pbVar13[1] = 0;
        *pbVar13 = *pbVar13 & 0xfe;
        bVar19 = *pbVar13;
      }
      if ((bVar19 & 1) == 0) {
        plVar16 = (long *)plVar14[1];
        if (*plVar14 != 0) {
          *(long **)(*plVar14 + 8) = plVar16;
          plVar16 = (long *)plVar14[1];
        }
        if (plVar16 != (long *)0x0) {
          *plVar16 = *plVar14;
        }
        *plVar14 = 0;
        plVar14[1] = 0;
        *(int *)(param_1 + 0x2028) = *(int *)(param_1 + 0x2028) + -1;
        *plVar20 = *(long *)(param_1 + 0x2030);
        *(long **)(param_1 + 0x2030) = plVar20;
        iVar3 = *(int *)(param_1 + 0x19d0);
        iVar4 = *(int *)(param_1 + 0x19c8);
        if (iVar3 < iVar4) {
          *(int *)(param_1 + 0x19d0) = iVar3 + 1;
          iVar3 = *(int *)(param_1 + 0x19cc) + iVar3;
          iVar6 = 0;
          if (iVar4 <= iVar3) {
            iVar6 = iVar4;
          }
          *(byte **)(*(long *)(param_1 + 0x19c0) + (long)(iVar3 - iVar6) * 8) = pbVar13;
        }
      }
      plVar20 = plVar12 + -1;
      plVar14 = plVar12;
    } while (plVar20 != (long *)(param_1 + 0x2010));
  }
  return;
}

