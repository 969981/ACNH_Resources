
undefined8 FUN_03ad4570(long *param_1,long param_2,undefined8 param_3)

{
  undefined4 *puVar1;
  ushort uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  ushort *puVar14;
  long lVar15;
  undefined8 *puVar16;
  undefined8 *puVar17;
  bool bVar18;
  long lVar19;
  long lVar20;
  
  uVar4 = (**(code **)(*param_1 + 0x218))();
  if ((int)uVar4 < 1) {
    uVar11 = 0;
  }
  else {
    lVar15 = 0;
    lVar19 = *(long *)(param_2 + 8) + *(long *)(param_2 + 0x10);
    uVar11 = lVar19 + 7U & 0xfffffffffffffff8;
    *(ulong *)(param_2 + 0x10) =
         ((*(long *)(param_2 + 0x10) + (ulong)uVar4 * 0x58) - lVar19) + uVar11;
    do {
      lVar19 = uVar11 + lVar15;
      lVar15 = lVar15 + 0x58;
      *(undefined2 *)(lVar19 + 0x48) = 0;
      *(undefined4 *)(lVar19 + 0x38) = 0xffffffff;
      *(undefined8 *)(lVar19 + 0x4c) = 0x3f800000;
      *(undefined2 **)(lVar19 + 0x40) = (undefined2 *)(lVar19 + 0x48);
    } while ((ulong)uVar4 * 0x58 != lVar15);
  }
  param_1[9] = uVar11;
  iVar5 = (**(code **)(*param_1 + 0x218))(param_1);
  if (0 < iVar5) {
    lVar15 = 0;
    do {
      puVar17 = (undefined8 *)(param_1[9] + lVar15 * 0x58);
      *(undefined4 *)(puVar17 + 6) = 0;
      *(undefined8 *)((long)puVar17 + 0x14) = 0x3e0000003e800000;
      puVar17[4] = 0;
      puVar17[5] = 0;
      *(undefined4 *)((long)puVar17 + 0x1c) = 0x3d800000;
      iVar5 = (**(code **)(*param_1 + 0x218))(param_1);
      if (0 < iVar5) {
        lVar20 = 0;
        lVar19 = 0;
        do {
          lVar12 = param_1[9];
          lVar19 = lVar19 + 1;
          *(undefined4 *)(lVar12 + lVar20 + 0x10) = 0x40aaaaab;
          *(undefined8 *)(lVar12 + lVar20 + 8) = 0x3d8000003e800000;
          iVar5 = (**(code **)(*param_1 + 0x218))(param_1);
          lVar20 = lVar20 + 0x58;
        } while (lVar19 < iVar5);
      }
      uVar4 = (**(code **)(*param_1 + 0x1e0))(param_1);
      if ((int)uVar4 < 1) {
        puVar13 = (undefined8 *)0x0;
      }
      else {
        lVar19 = *(long *)(param_2 + 8) + *(long *)(param_2 + 0x10);
        puVar13 = (undefined8 *)(lVar19 + 7U & 0xfffffffffffffff8);
        *(ulong *)(param_2 + 0x10) =
             ((*(long *)(param_2 + 0x10) + (ulong)uVar4 * 0x48) - lVar19) + (long)puVar13;
        if (uVar4 < 8) {
          lVar19 = 0;
        }
        else {
          lVar19 = 0;
          puVar16 = puVar13;
          do {
            lVar19 = lVar19 + -8;
            puVar16[6] = 0;
            puVar16[7] = 0;
            puVar16[0x47] = 0;
            puVar16[0x46] = 0;
            puVar16[0x45] = 0;
            puVar16[0x44] = 0;
            puVar16[0x43] = 0;
            puVar16[0x42] = 0;
            puVar16[0x41] = 0;
            puVar16[0x3e] = 0;
            puVar16[4] = 0;
            puVar16[5] = 0;
            puVar16[2] = 0;
            puVar16[3] = 0;
            *puVar16 = 0;
            puVar16[1] = 0;
            puVar16[8] = 0;
            puVar16[9] = 0;
            puVar16[10] = 0;
            puVar16[0xb] = 0;
            puVar16[0xc] = 0;
            puVar16[0xd] = 0;
            puVar16[0xe] = 0;
            puVar16[0xf] = 0;
            puVar16[0x10] = 0;
            puVar16[0x11] = 0;
            puVar16[0x18] = 0;
            puVar16[0x19] = 0;
            puVar16[0x16] = 0;
            puVar16[0x17] = 0;
            puVar16[0x14] = 0;
            puVar16[0x15] = 0;
            puVar16[0x12] = 0;
            puVar16[0x13] = 0;
            puVar16[0x22] = 0;
            puVar16[0x23] = 0;
            puVar16[0x20] = 0;
            puVar16[0x21] = 0;
            puVar16[0x1e] = 0;
            puVar16[0x1f] = 0;
            puVar16[0x1c] = 0;
            puVar16[0x1d] = 0;
            puVar16[0x1a] = 0;
            puVar16[0x1b] = 0;
            puVar16[0x2a] = 0;
            puVar16[0x2b] = 0;
            puVar16[0x28] = 0;
            puVar16[0x29] = 0;
            puVar16[0x26] = 0;
            puVar16[0x27] = 0;
            puVar16[0x24] = 0;
            puVar16[0x25] = 0;
            puVar16[0x34] = 0;
            puVar16[0x35] = 0;
            puVar16[0x32] = 0;
            puVar16[0x33] = 0;
            puVar16[0x30] = 0;
            puVar16[0x31] = 0;
            puVar16[0x2e] = 0;
            puVar16[0x2f] = 0;
            puVar16[0x2c] = 0;
            puVar16[0x2d] = 0;
            puVar16[0x3c] = 0;
            puVar16[0x3d] = 0;
            puVar16[0x3a] = 0;
            puVar16[0x3b] = 0;
            puVar16[0x38] = 0;
            puVar16[0x39] = 0;
            puVar16[0x36] = 0;
            puVar16[0x37] = 0;
            puVar16[0x3f] = 0;
            puVar16[0x40] = 0;
            puVar16 = puVar16 + 0x48;
          } while (-lVar19 != ((ulong)uVar4 & 0xfffffff8));
          lVar19 = -lVar19;
        }
        if ((uVar4 & 7) != 0) {
          uVar11 = (ulong)uVar4 & 7;
          lVar19 = lVar19 * 0x48;
          do {
            puVar16 = (undefined8 *)((long)puVar13 + lVar19);
            lVar19 = lVar19 + 0x48;
            *puVar16 = 0;
            uVar11 = uVar11 - 1;
            puVar16[7] = 0;
            puVar16[8] = 0;
            puVar16[5] = 0;
            puVar16[6] = 0;
            puVar16[3] = 0;
            puVar16[4] = 0;
            puVar16[1] = 0;
            puVar16[2] = 0;
          } while (uVar11 != 0);
        }
      }
      *puVar17 = puVar13;
      lVar15 = lVar15 + 1;
      iVar5 = (**(code **)(*param_1 + 0x218))(param_1);
    } while (lVar15 < iVar5);
  }
  uVar4 = (**(code **)(*param_1 + 0xb8))(param_1);
  if ((int)uVar4 < 1) {
    uVar11 = 0;
  }
  else {
    lVar15 = 0;
    lVar19 = *(long *)(param_2 + 8) + *(long *)(param_2 + 0x10);
    uVar11 = lVar19 + 7U & 0xfffffffffffffff8;
    *(ulong *)(param_2 + 0x10) =
         ((*(long *)(param_2 + 0x10) + (ulong)uVar4 * 0xc) - lVar19) + uVar11;
    do {
      puVar1 = (undefined4 *)(uVar11 + lVar15);
      lVar15 = lVar15 + 0xc;
      *puVar1 = 0;
      *(undefined4 *)((long)puVar1 + 6) = 0;
      *(undefined1 *)((long)puVar1 + 10) = 0;
    } while ((ulong)uVar4 * 0xc != lVar15);
  }
  param_1[10] = uVar11;
  iVar5 = (**(code **)(*param_1 + 0xb8))(param_1);
  iVar6 = (**(code **)(*param_1 + 0x218))(param_1);
  uVar4 = iVar6 * iVar5;
  if ((int)uVar4 < 1) {
    uVar11 = 0;
  }
  else {
    lVar15 = 0;
    lVar19 = *(long *)(param_2 + 8) + *(long *)(param_2 + 0x10);
    uVar11 = lVar19 + 7U & 0xfffffffffffffff8;
    *(ulong *)(param_2 + 0x10) =
         ((*(long *)(param_2 + 0x10) + (ulong)uVar4 * 0xc) - lVar19) + uVar11;
    do {
      puVar1 = (undefined4 *)(uVar11 + lVar15);
      lVar15 = lVar15 + 0xc;
      *puVar1 = 0;
      *(undefined1 *)(puVar1 + 1) = 0;
      puVar1[2] = 0;
    } while ((ulong)uVar4 * 0xc != lVar15);
  }
  param_1[8] = uVar11;
  uVar4 = (**(code **)(*param_1 + 0x1e0))(param_1);
  if ((int)uVar4 < 1) {
    uVar11 = 0;
  }
  else {
    lVar15 = *(long *)(param_2 + 8) + *(long *)(param_2 + 0x10);
    uVar11 = lVar15 + 7U & 0xfffffffffffffff8;
    *(ulong *)(param_2 + 0x10) = ((*(long *)(param_2 + 0x10) + (ulong)uVar4 * 8) - lVar15) + uVar11;
  }
  param_1[1] = uVar11;
  iVar5 = (**(code **)(*param_1 + 0xb8))(param_1);
  if (0 < iVar5) {
    uVar11 = 0;
    do {
      puVar17 = (undefined8 *)(param_1[10] + uVar11 * 0xc);
      *(undefined1 *)((long)puVar17 + 10) = 0;
      *puVar17 = 0;
      iVar5 = (**(code **)(*param_1 + 0x218))(param_1);
      if (0 < iVar5) {
        iVar6 = 0;
        do {
          lVar15 = param_1[8];
          iVar7 = (**(code **)(*param_1 + 0x218))(param_1);
          puVar17 = (undefined8 *)(lVar15 + (long)(iVar6 + (int)uVar11 * iVar7) * 0xc);
          *puVar17 = 0;
          *(undefined4 *)(puVar17 + 1) = 0;
          uVar8 = (**(code **)(*param_1 + 0x198))(0x3f800000,param_1,uVar11 & 0xffffffff,iVar6);
          if ((uVar8 & 1) != 0) {
            *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
            lVar15 = param_1[10] + uVar11 * 0xc;
            *(ushort *)(lVar15 + 6) = *(ushort *)(lVar15 + 6) | 2;
          }
          iVar6 = iVar6 + 1;
        } while (iVar5 != iVar6);
      }
      uVar8 = FUN_03ad4e60(param_1,uVar11 & 0xffffffff,param_3);
      if ((uVar8 & 1) == 0) {
        return 0;
      }
      iVar5 = (**(code **)(*param_1 + 0x218))(param_1);
      if (0 < iVar5) {
        bVar18 = false;
        iVar5 = 0;
        do {
          lVar15 = param_1[8];
          iVar6 = (**(code **)(*param_1 + 0x218))(param_1);
          puVar14 = (ushort *)(lVar15 + (long)(iVar5 + (int)uVar11 * iVar6) * 0xc + 2);
          uVar2 = *puVar14;
          if ((uVar2 >> 4 & 1) == 0) {
            bVar18 = true;
            *puVar14 = uVar2 | 0x10;
          }
          iVar5 = iVar5 + 1;
          iVar6 = (**(code **)(*param_1 + 0x218))(param_1);
        } while (iVar5 < iVar6);
        if (bVar18) {
          *(byte *)((long)param_1 + 0xae) = *(byte *)((long)param_1 + 0xae) | 1;
          lVar15 = param_1[10] + uVar11 * 0xc;
          *(ushort *)(lVar15 + 6) = *(ushort *)(lVar15 + 6) | 2;
        }
      }
      uVar11 = uVar11 + 1;
      iVar5 = (**(code **)(*param_1 + 0xb8))(param_1);
    } while ((long)uVar11 < (long)iVar5);
  }
  *(undefined2 *)((long)param_1 + 0xb6) = 0;
  iVar5 = (**(code **)(*param_1 + 0x1e0))(param_1);
  if (0 < iVar5) {
    iVar5 = 0;
    do {
      plVar9 = (long *)(**(code **)(*param_1 + 0x1e8))(param_1,iVar5);
      uVar11 = (**(code **)(*plVar9 + 0x28))();
      if ((uVar11 & 1) != 0) {
        uVar10 = (**(code **)(*param_1 + 0x1e8))(param_1,iVar5);
        uVar2 = *(ushort *)((long)param_1 + 0xb6);
        *(ushort *)((long)param_1 + 0xb6) = uVar2 + 1;
        *(undefined8 *)(param_1[1] + (ulong)uVar2 * 8) = uVar10;
      }
      iVar5 = iVar5 + 1;
      iVar6 = (**(code **)(*param_1 + 0x1e0))(param_1);
    } while (iVar5 < iVar6);
  }
  *(undefined4 *)(param_1[7] + 0xc) = 0x3f800000;
  uVar3 = (**(code **)(*param_1 + 0x1e0))(param_1);
  *(undefined2 *)((long)param_1 + 0xb4) = uVar3;
  return 1;
}

