
void FUN_010faba0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)(param_1 + 0x10);
  if (lVar9 != param_1 + 8) {
    lVar10 = lVar9 + -0x158;
    do {
      lVar7 = *(long *)puVar1;
      if (lVar7 != 0) {
        uVar6 = *(uint *)(lVar10 + 8);
        if ((((uVar6 == 0) ||
             (lVar8 = *(long *)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                               ((ulong)(uVar6 >> 0x11) & 0x7ff8)), lVar8 == 0)) ||
            ((*(uint *)(lVar8 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar8 + 0x230) != uVar6)) {
          lVar8 = 0;
        }
        if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
          plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
          lVar7 = *(long *)puVar1;
          iVar3 = (**(code **)(*plVar4 + 0x60))();
          if (iVar3 < 0x11) {
            uVar6 = 1;
          }
          else {
            uVar6 = *(uint *)(lVar7 + 0x5e8);
            if (4 < uVar6) goto LAB_010fac94;
            uVar6 = 0x1aU >> (ulong)(uVar6 & 0x1f) & 1;
          }
        }
        else {
LAB_010fac94:
          uVar6 = 0;
        }
        if (lVar8 != 0) {
          uVar6 = uVar6 ^ 1;
          if (*(int *)(lVar8 + 0x150) != 1) {
            uVar6 = 1;
          }
          if ((uVar6 == 0) && ((*(byte *)(lVar10 + 0x150) & 3) != 1)) {
            lVar7 = *(long *)(lVar10 + 0xf0);
            if (lVar7 != lVar10 + 0xe8) {
              lVar8 = lVar7 + -0x58;
              do {
                if (*(char *)(lVar8 + 0x50) != '\0') {
                  uVar5 = FUN_010f60e0(lVar8);
                  if ((uVar5 & 1) != 0) {
                    *(long *)(lVar10 + 0x148) = lVar8;
                  }
                  break;
                }
                lVar7 = *(long *)(lVar7 + 8);
                lVar8 = lVar7 + -0x58;
              } while (lVar8 != lVar10 + 0x90);
            }
            if (((*(long *)(lVar10 + 0x148) != 0) &&
                (plVar4 = *(long **)(*(long *)(*(long *)(lVar10 + 0x148) + 0x48) + 0x280),
                plVar4 != (long *)0x0)) && ((int)plVar4[0x16] == 2)) {
              (**(code **)(*plVar4 + 0x48))();
            }
          }
        }
      }
      lVar9 = *(long *)(lVar9 + 8);
      lVar10 = lVar9 + -0x158;
    } while (lVar10 != param_1 + -0x150);
  }
  return;
}

