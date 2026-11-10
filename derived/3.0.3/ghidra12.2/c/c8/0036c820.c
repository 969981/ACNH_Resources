
void FUN_0036c820(undefined8 param_1,long param_2,long param_3)

{
  long *plVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  ushort *puVar6;
  ulong uVar7;
  long *plVar8;
  ushort uVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  int iVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  
  puVar4 = PTR_DAT_04bd0810;
  puVar3 = PTR_DAT_04bd0800;
  if (*(short *)(param_3 + 0x78) != 0) {
    uVar16 = 0;
    plVar1 = (long *)(param_2 + 0x28);
    do {
      lVar17 = *(long *)(param_3 + 0x68);
      plVar5 = (long *)(**(code **)puVar3)(0x28,4,*(undefined8 *)puVar4);
      if (plVar5 != (long *)0x0) {
        *plVar5 = (long)plVar5;
        plVar5[1] = (long)plVar5;
        plVar5[4] = (long)(plVar5 + 3);
        plVar5[2] = 0;
        plVar5[3] = (long)(plVar5 + 3);
      }
      FUN_0036d620(plVar5,lVar17 + uVar16 * 0x38,param_2 + 0x38);
      puVar6 = (ushort *)(lVar17 + uVar16 * 0x38 + 0x30);
      uVar9 = *puVar6;
      if ((uVar9 != 0) && (plVar2 = plVar5 + 3, (long *)plVar5[4] != plVar2)) {
        uVar7 = 0;
        do {
          plVar8 = (long *)plVar5[4];
          if (plVar8 != plVar2) {
            uVar10 = 0;
            lVar11 = *(long *)(lVar17 + uVar16 * 0x38 + 0x20) + uVar7 * 0x38;
            uVar18 = *(undefined4 *)(lVar11 + 0x24);
            uVar19 = *(undefined4 *)(lVar11 + 0x28);
            uVar20 = *(undefined4 *)(lVar11 + 0x2c);
            uVar21 = *(undefined4 *)(lVar11 + 0x30);
            do {
              if ((uVar7 == uVar10) && (iVar14 = (int)plVar8[2], 0 < iVar14)) {
                lVar12 = plVar8[3];
                lVar11 = 0;
                do {
                  lVar13 = lVar11 * 0x10;
                  if (0 < *(int *)(lVar12 + lVar13)) {
                    **(undefined4 **)(lVar12 + lVar13 + 8) = uVar18;
                    lVar12 = plVar8[3];
                    if (1 < *(int *)(lVar12 + lVar13)) {
                      *(undefined4 *)(*(long *)(lVar12 + lVar13 + 8) + 4) = uVar19;
                      lVar12 = plVar8[3];
                      if (2 < *(int *)(lVar12 + lVar13)) {
                        *(undefined4 *)(*(long *)(lVar12 + lVar13 + 8) + 8) = uVar20;
                        lVar12 = plVar8[3];
                        if (3 < *(int *)(lVar12 + lVar13)) {
                          *(undefined4 *)(*(long *)(lVar12 + lVar13 + 8) + 0xc) = uVar21;
                          lVar12 = plVar8[3];
                          if (4 < *(int *)(lVar12 + lVar13)) {
                            lVar15 = 4;
                            do {
                              *(undefined4 *)(*(long *)(lVar12 + lVar13 + 8) + lVar15 * 4) = 0;
                              lVar15 = lVar15 + 1;
                              lVar12 = plVar8[3];
                            } while (lVar15 < *(int *)(lVar12 + lVar13));
                          }
                        }
                      }
                    }
                    iVar14 = (int)plVar8[2];
                  }
                  lVar11 = lVar11 + 1;
                } while (lVar11 < iVar14);
              }
              plVar8 = (long *)plVar8[1];
              uVar10 = uVar10 + 1;
            } while (plVar8 != plVar2);
            uVar9 = *puVar6;
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < uVar9);
      }
      lVar17 = *plVar5;
      uVar16 = uVar16 + 1;
      *plVar5 = *plVar1;
      *(long **)(lVar17 + 8) = plVar1;
      *(long **)(*plVar1 + 8) = plVar5;
      *plVar1 = lVar17;
    } while (uVar16 < *(ushort *)(param_3 + 0x78));
  }
  return;
}

