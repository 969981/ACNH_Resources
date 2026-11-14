
void FUN_01d87ff0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  int iVar8;
  uint uVar9;
  long lVar10;
  undefined8 *puVar11;
  long *plVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  int *piVar17;
  int iVar18;
  uint uVar19;
  long lVar20;
  ulong uVar21;
  
  lVar15 = 0;
  if (*(long *)PTR_DAT_04bb46b0 != 0) {
    lVar10 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x38))();
    lVar15 = 0;
    if (lVar10 != 0) {
      lVar15 = lVar10 + 0x276cb0;
    }
  }
  plVar2 = (long *)(lVar15 + 0x8930);
  if ((*(long **)(lVar15 + 0x8950) == (long *)0x0) ||
     (puVar11 = (undefined8 *)**(long **)(lVar15 + 0x8950), puVar11 == (undefined8 *)0x0)) {
    uVar9 = 1;
  }
  else {
    uVar9 = (**(code **)*puVar11)();
    uVar9 = uVar9 ^ 1;
  }
  uVar21 = 0;
  lVar10 = param_1 + 0x10;
  puVar1 = PTR_DAT_04bb2bc0 + 0x10;
  do {
    lVar4 = DAT_05ae7600;
    lVar16 = *(long *)(lVar15 + 0x8938) + *plVar2;
    if (*(char *)(lVar16 + uVar21 * 0x14) != '\0') {
      iVar6 = *(int *)(lVar16 + uVar21 * 0x14 + 4);
      if (*(long *)(param_1 + 0x18) != lVar10) {
        lVar16 = (long)*(int *)(param_1 + 0x24);
        piVar17 = (int *)(*(long *)(param_1 + 0x18) - lVar16);
        do {
          if (((*(byte *)(piVar17 + 0x26) >> 2 & 1) == 0) && (*piVar17 == iVar6)) goto LAB_01d880b0;
          piVar17 = (int *)(*(long *)((long)piVar17 + lVar16 + 8) - lVar16);
        } while (piVar17 != (int *)(lVar10 - lVar16));
      }
      if (DAT_05ae7600 == 0) {
        piVar17 = malloc(0xb0);
      }
      else {
        plVar12 = *(long **)(param_1 + 8);
        if (plVar12 == (long *)0x0) {
          lVar16 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar12 = (long *)(lVar4 + 8);
          if (lVar16 != 0) {
            plVar12 = (long *)(lVar16 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_01d880b0;
        }
        piVar17 = (int *)(**(code **)(*plVar12 + 0x30))(plVar12,0xb0,8);
      }
      if (piVar17 != (int *)0x0) {
        *piVar17 = iVar6;
        *(undefined1 *)(piVar17 + 7) = 0;
        *(int **)(piVar17 + 4) = piVar17 + 7;
        *(undefined1 *)((long)piVar17 + 0x5b) = 0;
        piVar17[0x28] = 0;
        piVar17[0x29] = 0;
        piVar17[0x2a] = 0;
        piVar17[0x2b] = 0;
        piVar17[0x23] = 0;
        piVar17[0x24] = 0;
        *(undefined8 *)((long)piVar17 + 0x91) = 0;
        *(undefined **)(piVar17 + 2) = puVar1;
        piVar17[6] = 0x40;
        piVar17[0x18] = 0x7b2;
        piVar17[0x19] = 1;
        piVar17[0x1a] = 1;
        piVar17[0x1b] = 4;
        piVar17[0x1c] = 0;
        piVar17[0x1d] = 0;
        piVar17[0x1e] = 0;
        piVar17[0x1f] = 0x7b2;
        piVar17[0x20] = 1;
        piVar17[0x21] = 1;
        piVar17[0x22] = 4;
        (**(code **)(DAT_05374a60 + 0x18))(&DAT_05374a60);
        FUN_038d1270(piVar17 + 2,"%s%03d",DAT_05374a68,iVar6);
        lVar16 = *(long *)(lVar15 + 0x8938) + *plVar2;
        lVar20 = uVar21 * 0x14;
        lVar4 = lVar16 + lVar20;
        if ((uVar21 & 0xffffffe0) != 0) {
          lVar4 = lVar16;
        }
        uVar13 = nn::time::IsValidDate
                           ((uint)*(ushort *)(lVar4 + 8),(uint)*(byte *)(lVar4 + 10),
                            (uint)*(byte *)(lVar4 + 0xb));
        uVar19 = (uint)*(ushort *)(lVar4 + 8);
        if ((uVar13 & 1) == 0) {
          uVar19 = 2000;
        }
        uVar13 = nn::time::IsValidDate
                           ((uint)*(ushort *)(lVar4 + 8),(uint)*(byte *)(lVar4 + 10),
                            (uint)*(byte *)(lVar4 + 0xb));
        uVar5 = (uint)*(byte *)(lVar4 + 10);
        if ((uVar13 & 1) == 0) {
          uVar5 = 1;
        }
        uVar13 = nn::time::IsValidDate
                           ((uint)*(ushort *)(lVar4 + 8),(uint)*(byte *)(lVar4 + 10),
                            (uint)*(byte *)(lVar4 + 0xb));
        bVar7 = *(byte *)(lVar4 + 0xb);
        piVar17[0x18] = uVar19;
        piVar17[0x19] = uVar5;
        uVar14 = (uint)bVar7;
        if ((uVar13 & 1) == 0) {
          uVar14 = 1;
        }
        uVar3 = uVar5 + 0xc;
        if (uVar5 >= 3) {
          uVar3 = uVar5;
        }
        iVar8 = uVar19 - (uVar5 < 3);
        iVar6 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar6 = iVar8;
        }
        iVar18 = (int)((ulong)((long)iVar8 * -0x51eb851f) >> 0x20);
        piVar17[0x1a] = uVar14;
        piVar17[0x1b] =
             (int)(uVar14 + iVar8 + (iVar6 >> 2) + ((iVar18 >> 5) - (iVar18 >> 0x1f)) + iVar8 / 400
                  + (uVar3 * 0x1a + 0x10) / 10) % 7;
        lVar16 = *(long *)(lVar15 + 0x8938) + *plVar2;
        lVar4 = lVar16 + lVar20;
        if ((uVar21 & 0xffffffe0) != 0) {
          lVar4 = lVar16;
        }
        uVar13 = nn::time::IsValidDate
                           ((uint)*(ushort *)(lVar4 + 0xc),(uint)*(byte *)(lVar4 + 0xe),
                            (uint)*(byte *)(lVar4 + 0xf));
        uVar19 = (uint)*(ushort *)(lVar4 + 0xc);
        if ((uVar13 & 1) == 0) {
          uVar19 = 2000;
        }
        uVar13 = nn::time::IsValidDate
                           ((uint)*(ushort *)(lVar4 + 0xc),(uint)*(byte *)(lVar4 + 0xe),
                            (uint)*(byte *)(lVar4 + 0xf));
        uVar5 = (uint)*(byte *)(lVar4 + 0xe);
        if ((uVar13 & 1) == 0) {
          uVar5 = 1;
        }
        uVar13 = nn::time::IsValidDate
                           ((uint)*(ushort *)(lVar4 + 0xc),(uint)*(byte *)(lVar4 + 0xe),
                            (uint)*(byte *)(lVar4 + 0xf));
        bVar7 = *(byte *)(lVar4 + 0xf);
        piVar17[0x1f] = uVar19;
        piVar17[0x20] = uVar5;
        uVar14 = (uint)bVar7;
        if ((uVar13 & 1) == 0) {
          uVar14 = 1;
        }
        uVar3 = uVar5 + 0xc;
        if (uVar5 >= 3) {
          uVar3 = uVar5;
        }
        iVar8 = uVar19 - (uVar5 < 3);
        iVar6 = iVar8 + 3;
        if (-1 < iVar8) {
          iVar6 = iVar8;
        }
        iVar18 = (int)((ulong)((long)iVar8 * -0x51eb851f) >> 0x20);
        piVar17[0x21] = uVar14;
        piVar17[0x22] =
             (int)(uVar14 + iVar8 + (iVar6 >> 2) + ((iVar18 >> 5) - (iVar18 >> 0x1f)) + iVar8 / 400
                  + (uVar3 * 0x1a + 0x10) / 10) % 7;
        bVar7 = *(byte *)(piVar17 + 0x26) & 0xfe |
                *(byte *)(*(long *)(lVar15 + 0x8938) + *plVar2 + lVar20 + 1);
        *(byte *)(piVar17 + 0x26) = bVar7;
        *(byte *)(piVar17 + 0x26) =
             bVar7 & 0xfd | *(char *)(*(long *)(lVar15 + 0x8938) + *plVar2 + lVar20 + 2) << 1;
        lVar16 = *(long *)(param_1 + 0x10);
        plVar12 = (long *)((long)*(int *)(param_1 + 0x24) + (long)piVar17);
        *(long **)(param_1 + 0x10) = plVar12;
        *plVar12 = lVar16;
        plVar12[1] = lVar10;
        if (lVar16 != 0) {
          *(long **)(lVar16 + 8) = plVar12;
        }
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
    }
LAB_01d880b0:
    uVar21 = uVar21 + 1;
    if (uVar21 == 0x20) {
      if ((((uVar9 & 1) == 0) && (*(long *)(lVar15 + 0x8950) != 0)) &&
         (puVar11 = *(undefined8 **)(*(long *)(lVar15 + 0x8950) + 8), puVar11 != (undefined8 *)0x0))
      {
                    /* WARNING: Could not recover jumptable at 0x01d884e4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)*puVar11)();
        return;
      }
      return;
    }
  } while( true );
}

