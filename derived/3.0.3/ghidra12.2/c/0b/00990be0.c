
void FUN_00990be0(long *param_1)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  
  if ((char)param_1[0x51] != '\0') {
    (**(code **)(*param_1 + 0x100))();
    puVar5 = PTR_DAT_04bb3350;
    puVar4 = PTR_DAT_04bb27c0;
    lVar3 = param_1[0x4f];
    if ((int)lVar3 != 0) {
      lVar14 = param_1[0x50];
      uVar11 = 0;
      do {
        uVar9 = *(uint *)(lVar14 + (-(uVar11 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2));
        if ((uVar9 != 0) && (lVar10 = *(long *)puVar4, lVar10 != 0)) {
          lVar12 = *(long *)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar9 >> 0x11) & 0x7ff8));
          if ((lVar12 == 0) ||
             (((*(uint *)(lVar12 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar12 + 0x230) != uVar9))))
          {
            lVar12 = 0;
          }
          if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
            plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
            lVar10 = *(long *)puVar4;
            iVar6 = (**(code **)(*plVar8 + 0x60))();
            if (iVar6 < 0x11) {
              uVar9 = 1;
            }
            else {
              if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_00990ce8;
              uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
            }
          }
          else {
LAB_00990ce8:
            uVar9 = 0;
          }
          if (lVar12 != 0) {
            uVar9 = uVar9 ^ 1;
            if (*(int *)(lVar12 + 0x150) != 1) {
              uVar9 = 1;
            }
            if (uVar9 == 0) {
              FUN_006fb3d0(lVar12);
            }
          }
        }
        uVar1 = uVar11 + 1;
        uVar11 = uVar1 & 0xffffffff;
      } while ((int)lVar3 != (int)uVar1);
    }
    lVar3 = param_1[0x52];
    if ((int)lVar3 != 0) {
      iVar6 = 0;
      lVar14 = param_1[0x53];
      do {
        lVar10 = lVar14 + (long)iVar6 * 0x18;
        iVar2 = *(int *)(lVar10 + 8);
        if (iVar2 != 0) {
          lVar10 = *(long *)(lVar10 + 0x10);
          uVar11 = 0;
          do {
            uVar9 = *(uint *)(lVar10 + (-(uVar11 >> 0x1f) & 0xfffffffc00000000 | uVar11 << 2));
            if ((uVar9 != 0) && (lVar12 = *(long *)puVar4, lVar12 != 0)) {
              lVar13 = *(long *)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                                ((ulong)(uVar9 >> 0x11) & 0x7ff8));
              if ((lVar13 == 0) ||
                 (((*(uint *)(lVar13 + 0x248) >> 1 & 1) != 0 || (*(uint *)(lVar13 + 0x230) != uVar9)
                  ))) {
                lVar13 = 0;
              }
              if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
                plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
                lVar12 = *(long *)puVar4;
                iVar7 = (**(code **)(*plVar8 + 0x60))();
                if (iVar7 < 0x11) {
                  uVar9 = 1;
                }
                else {
                  if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_00990e18;
                  uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
                }
              }
              else {
LAB_00990e18:
                uVar9 = 0;
              }
              if (lVar13 != 0) {
                uVar9 = uVar9 ^ 1;
                if (*(int *)(lVar13 + 0x150) != 1) {
                  uVar9 = 1;
                }
                if (uVar9 == 0) {
                  FUN_006fb3d0(lVar13);
                }
              }
            }
            uVar1 = uVar11 + 1;
            uVar11 = uVar1 & 0xffffffff;
          } while (iVar2 != (int)uVar1);
        }
        iVar6 = iVar6 + 1;
      } while ((int)lVar3 != iVar6);
    }
    (**(code **)(*param_1 + 0xf8))(param_1);
    *(undefined1 *)(param_1 + 0x51) = 0;
  }
  return;
}

