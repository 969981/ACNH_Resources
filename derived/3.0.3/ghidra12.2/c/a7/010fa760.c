
undefined8 FUN_010fa760(long param_1)

{
  bool bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  long *plVar9;
  long lVar10;
  byte bVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  
  puVar7 = PTR_DAT_04bb3350;
  puVar6 = PTR_DAT_04bb27c0;
  lVar13 = *(long *)(param_1 + 0x10);
  if (lVar13 != param_1 + 8) {
    lVar12 = param_1 + -0x150;
    lVar10 = *(long *)PTR_DAT_04bb27c0;
    lVar14 = lVar13 + -0x158;
    do {
      if (lVar10 != 0) {
        uVar4 = *(uint *)(lVar14 + 8);
        if ((((uVar4 == 0) ||
             (lVar15 = *(long *)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                                ((ulong)(uVar4 >> 0x11) & 0x7ff8)), lVar15 == 0)) ||
            ((*(uint *)(lVar15 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar15 + 0x230) != uVar4)) {
          lVar15 = 0;
        }
        if ((*(int *)(lVar10 + 0x288) == 1) || (*(int *)(lVar10 + 0x288) == -1)) {
          plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
          lVar16 = *(long *)puVar6;
          iVar8 = (**(code **)(*plVar9 + 0x60))();
          lVar10 = *(long *)puVar6;
          if ((0x10 < iVar8) &&
             (4 < *(uint *)(lVar16 + 0x5e8) ||
              (1 << (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 0x1aU) == 0)) goto LAB_010fa874;
          bVar11 = 1;
        }
        else {
LAB_010fa874:
          bVar11 = 0;
        }
        if (lVar15 != 0) {
          bVar1 = (bool)(bVar11 ^ 1);
          if (*(int *)(lVar15 + 0x150) != 1) {
            bVar1 = true;
          }
          if (((!bVar1) && (*(long *)(*(long *)(lVar14 + 0x10) + 0x2b0) == 0)) &&
             (*(long *)(*(long *)(lVar14 + 0x10) + 0x288) != 0)) {
            return 0;
          }
        }
      }
      lVar13 = *(long *)(lVar13 + 8);
      lVar14 = lVar13 + -0x158;
    } while (lVar14 != lVar12);
    lVar13 = *(long *)(param_1 + 0x10);
    lVar10 = lVar13 + -0x158;
    if (lVar10 != lVar12) {
      lVar14 = *(long *)puVar6;
      do {
        if (lVar14 != 0) {
          uVar4 = *(uint *)(lVar10 + 8);
          if ((((uVar4 == 0) ||
               (lVar15 = *(long *)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                  ((ulong)(uVar4 >> 0x11) & 0x7ff8)), lVar15 == 0)) ||
              ((*(uint *)(lVar15 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar15 + 0x230) != uVar4))
          {
            lVar15 = 0;
          }
          if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
            plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar7 + 0x68));
            lVar16 = *(long *)puVar6;
            iVar8 = (**(code **)(*plVar9 + 0x60))();
            lVar14 = *(long *)puVar6;
            if ((0x10 < iVar8) &&
               (4 < *(uint *)(lVar16 + 0x5e8) ||
                (1 << (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 0x1aU) == 0)) goto LAB_010fa984;
            bVar11 = 1;
          }
          else {
LAB_010fa984:
            bVar11 = 0;
          }
          if (lVar15 != 0) {
            bVar1 = (bool)(bVar11 ^ 1);
            if (*(int *)(lVar15 + 0x150) != 1) {
              bVar1 = true;
            }
            if (!bVar1) {
              lVar15 = *(long *)(lVar10 + 0x10);
              uVar2 = *(undefined8 *)(lVar10 + 0x20);
              uVar3 = *(undefined8 *)(lVar10 + 0x28);
              if ((*(long *)(lVar15 + 0x2b0) != 0) || (*(long *)(lVar15 + 0x288) == 0)) {
                bVar5 = *(byte *)(lVar10 + 0x150);
                bVar11 = *(byte *)(*(long *)(lVar10 + 0x18) + 0xc0);
                *(undefined8 *)(lVar15 + 0x288) = uVar2;
                *(undefined8 *)(lVar15 + 0x2a0) = uVar3;
                if (7 < bVar11) {
                  bVar11 = 0xff;
                }
                *(byte *)(lVar15 + 0x2a8) = bVar11;
                if ((bVar5 & 1) != 0) {
                  *(undefined8 *)(lVar15 + 0x2b0) = uVar2;
                  *(undefined8 *)(lVar15 + 0x2b8) = uVar3;
                  *(byte *)(lVar15 + 0x2c0) = bVar11;
                }
                if (*(long *)(lVar15 + 0x290) != 0) {
                  *(byte *)(*(long *)(lVar15 + 0x290) + 0xc) = bVar11;
                }
              }
            }
          }
        }
        lVar13 = *(long *)(lVar13 + 8);
        lVar10 = lVar13 + -0x158;
      } while (lVar10 != lVar12);
    }
  }
  return 1;
}

