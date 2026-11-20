
uint FUN_03efa590(long param_1,long *param_2,ulong param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  long lVar7;
  long *plVar8;
  undefined8 *puVar9;
  uint uVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  long lVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  int iVar21;
  
  lVar19 = *(long *)(param_1 + 0x10);
  if ((param_3 & 1) == 0) {
    if ((lVar19 != 0) && (iVar4 = *(int *)(lVar19 + 0x30), 0 < iVar4)) {
      iVar21 = 0;
      do {
        lVar7 = FUN_03ef7da8(lVar19,iVar21,param_2,param_1);
        if (lVar7 != 0) goto LAB_03efa638;
        iVar21 = iVar21 + 1;
      } while (iVar4 != iVar21);
    }
  }
  else if ((lVar19 != 0) && (iVar4 = *(int *)(lVar19 + 0x30), 0 < iVar4)) {
    iVar21 = 0;
    do {
      lVar7 = FUN_03ef7da8(lVar19,iVar21,param_2,0);
      if (lVar7 != 0) goto LAB_03efa638;
      iVar21 = iVar21 + 1;
    } while (iVar4 != iVar21);
  }
LAB_03efa6d4:
  uVar6 = 0;
  *(undefined8 *)(param_1 + 8) = 0;
LAB_03efa6dc:
  return uVar6 & 1;
LAB_03efa638:
  lVar19 = FUN_03ef9510(lVar7,param_2);
  if (lVar19 != 0) {
    *(undefined1 *)(lVar19 + 0x42) = 1;
    *(long *)(param_1 + 8) = lVar19;
    if (*(long *)(lVar19 + 8) == 0) {
LAB_03efa9dc:
      uVar6 = 0;
    }
    else {
      uVar6 = *(uint *)(*(long *)(lVar19 + 8) + 8);
      uVar20 = (ulong)uVar6;
      if (0 < (int)uVar6) {
        lVar19 = *(long *)PTR_DAT_04bb2698;
        if (lVar19 == 0) {
          puVar9 = malloc(uVar20 << 3);
        }
        else {
          plVar8 = param_2;
          if (param_2 == (long *)0x0) {
            lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
            plVar8 = (long *)(lVar19 + 8);
            if (lVar7 != 0) {
              plVar8 = (long *)(lVar7 + 0xa8);
            }
            plVar8 = (long *)*plVar8;
            if (plVar8 == (long *)0x0) goto LAB_03efa9dc;
          }
          puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x30))(plVar8,uVar20 << 3,8);
        }
        if (puVar9 == (undefined8 *)0x0) goto LAB_03efa9dc;
        uVar15 = uVar20 & 3;
        puVar12 = puVar9;
        if ((uVar6 & 3) != 0) {
          puVar11 = puVar9;
          do {
            uVar15 = uVar15 - 1;
            puVar12 = puVar11 + 1;
            *puVar11 = 0xffffffff00000000;
            puVar11 = puVar12;
          } while (uVar15 != 0);
        }
        if (2 < (uVar20 - 1 & 0x1fffffffffffffff)) {
          do {
            *puVar12 = 0xffffffff00000000;
            puVar12[1] = 0xffffffff00000000;
            puVar12[2] = 0xffffffff00000000;
            puVar12[3] = 0xffffffff00000000;
            puVar12 = puVar12 + 4;
          } while (puVar12 != puVar9 + uVar20);
        }
        *(uint *)(param_1 + 0x18) = uVar6;
        *(undefined8 **)(param_1 + 0x20) = puVar9;
        uVar10 = 0;
        lVar19 = *(long *)(*(long *)(param_1 + 8) + 8);
        do {
          uVar1 = uVar10;
          if (*(uint *)(lVar19 + 0x18) <= uVar10) {
            uVar1 = 0;
          }
          uVar14 = uVar10;
          if (*(uint *)(param_1 + 0x18) <= uVar10) {
            uVar14 = 0;
          }
          uVar10 = uVar10 + 1;
          *(int *)(*(long *)(param_1 + 0x20) + (ulong)uVar14 * 8 + 4) =
               (int)*(short *)(*(long *)(lVar19 + 0x20) + (ulong)uVar1 * 2);
        } while (uVar6 != uVar10);
      }
      lVar19 = *(long *)(param_1 + 0x40);
      if (lVar19 == param_1 + 0x38) {
        uVar6 = 1;
      }
      else {
        uVar10 = 0;
        do {
          plVar8 = *(long **)(lVar19 + -8);
          (**(code **)(*plVar8 + 0x30))(plVar8,*(undefined8 *)(param_1 + 8));
          uVar6 = (**(code **)(*plVar8 + 0x28))(plVar8,param_2);
          if ((uVar6 & 1) == 0) goto LAB_03efa9dc;
          iVar4 = *(int *)(param_1 + 0x18);
          uVar1 = 1 << (ulong)(uVar10 & 0x1f);
          uVar5 = (ushort)uVar1;
          if (iVar4 != 0) {
            lVar7 = *(long *)(param_1 + 0x20);
            uVar20 = 0;
            do {
              uVar15 = -(uVar20 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3;
              *(ushort *)(lVar7 + uVar15) = *(ushort *)(lVar7 + uVar15) & ~uVar5;
              uVar15 = uVar20 + 1;
              uVar20 = uVar15 & 0xffffffff;
            } while (iVar4 != (int)uVar15);
            uVar14 = *(uint *)(param_1 + 0x18);
            if (uVar14 != 0) {
              lVar7 = *(long *)(param_1 + 0x20);
              uVar13 = 0;
              do {
                lVar16 = lVar7 + ((long)((ulong)uVar13 << 0x20) >> 0x1d);
                *(ushort *)(lVar16 + 2) = *(ushort *)(lVar16 + 2) & ~uVar5;
                uVar13 = uVar13 + 1;
              } while (uVar14 != uVar13);
            }
          }
          (**(code **)(*plVar8 + 0x18))(plVar8,param_1);
          (**(code **)(*plVar8 + 0x20))(plVar8,param_1);
          uVar14 = *(uint *)(param_1 + 0x18);
          if (uVar14 != 0) {
            lVar16 = *(long *)(param_1 + 0x20);
            uVar20 = 0;
            uVar1 = uVar1 & 0xffff;
            lVar7 = lVar16;
            uVar13 = uVar14;
            do {
              if ((*(ushort *)(lVar16 + (-(uVar20 >> 0x1f) & 0xfffffff800000000 | uVar20 << 3)) &
                  uVar1) != 0) {
                lVar18 = lVar16 + (long)(int)uVar20 * 8;
                while (uVar17 = *(uint *)(lVar18 + 4), uVar17 != 0xffffffff) {
                  uVar2 = uVar17;
                  if (uVar13 <= uVar17) {
                    uVar2 = 0;
                  }
                  uVar15 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
                  *(ushort *)(lVar7 + uVar15) = *(ushort *)(lVar7 + uVar15) | uVar5;
                  uVar13 = *(uint *)(param_1 + 0x18);
                  lVar7 = *(long *)(param_1 + 0x20);
                  if (uVar13 <= uVar17) {
                    uVar17 = 0;
                  }
                  lVar18 = lVar7 + (long)(int)uVar17 * 8;
                }
              }
              uVar15 = uVar20 + 1;
              uVar20 = uVar15 & 0xffffffff;
            } while (uVar14 != (uint)uVar15);
            if (uVar13 != 0) {
              uVar14 = 0;
              lVar16 = lVar7;
              uVar17 = uVar13;
              do {
                if ((*(ushort *)(lVar7 + ((long)((ulong)uVar14 << 0x20) >> 0x1d) + 2) & uVar1) != 0)
                {
                  for (uVar2 = *(uint *)(lVar7 + 4 + (long)(int)uVar14 * 8); uVar2 != 0xffffffff;
                      uVar2 = *(uint *)(lVar16 + (long)(int)uVar2 * 8 + 4)) {
                    uVar3 = uVar2;
                    if (uVar17 <= uVar2) {
                      uVar3 = 0;
                    }
                    lVar16 = lVar16 + (long)(int)uVar3 * 8;
                    *(ushort *)(lVar16 + 2) = *(ushort *)(lVar16 + 2) | uVar5;
                    uVar17 = *(uint *)(param_1 + 0x18);
                    lVar16 = *(long *)(param_1 + 0x20);
                    if (uVar17 <= uVar2) {
                      uVar2 = 0;
                    }
                  }
                }
                uVar14 = uVar14 + 1;
              } while (uVar13 != uVar14);
            }
          }
          lVar19 = *(long *)(lVar19 + 8);
          uVar10 = uVar10 + 1;
        } while (lVar19 + -8 != param_1 + 0x30);
      }
    }
    goto LAB_03efa6dc;
  }
  FUN_03ef7f80(lVar7);
  goto LAB_03efa6d4;
}

