
void FUN_010faa20(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  
  puVar2 = PTR_DAT_04bb3350;
  puVar1 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != param_1 + 8) {
    lVar8 = lVar7 + -0x158;
    do {
      lVar6 = *(long *)puVar1;
      if (lVar6 != 0) {
        uVar5 = *(uint *)(lVar8 + 8);
        if ((((uVar5 == 0) ||
             (lVar9 = *(long *)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                               ((ulong)(uVar5 >> 0x11) & 0x7ff8)), lVar9 == 0)) ||
            ((*(uint *)(lVar9 + 0x248) >> 1 & 1) != 0)) || (*(uint *)(lVar9 + 0x230) != uVar5)) {
          lVar9 = 0;
        }
        if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
          plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar2 + 0x68));
          lVar6 = *(long *)puVar1;
          iVar3 = (**(code **)(*plVar4 + 0x60))();
          if (iVar3 < 0x11) {
            uVar5 = 1;
          }
          else {
            uVar5 = *(uint *)(lVar6 + 0x5e8);
            if (4 < uVar5) goto LAB_010fab24;
            uVar5 = 0x1aU >> (ulong)(uVar5 & 0x1f) & 1;
          }
        }
        else {
LAB_010fab24:
          uVar5 = 0;
        }
        if (lVar9 != 0) {
          uVar5 = uVar5 ^ 1;
          if (*(int *)(lVar9 + 0x150) != 1) {
            uVar5 = 1;
          }
          if ((uVar5 == 0) && ((*(byte *)(lVar8 + 0x150) & 3) != 1)) {
            plVar4 = *(long **)(lVar8 + 0x10);
            lVar6 = **(long **)(lVar8 + 0x28);
            if (lVar6 != 0) {
              lVar9 = *(long *)(lVar6 + 0x10);
              if (lVar9 == 0) {
                lVar9 = 0;
                if (*(long **)(lVar6 + 0x20) != (long *)0x0) {
                  lVar9 = **(long **)(lVar6 + 0x20);
                }
              }
              FUN_01bf6fc0(lVar9 + 200,plVar4[0x52]);
              plVar4 = *(long **)(lVar8 + 0x10);
            }
            (**(code **)(*plVar4 + 0xf8))();
          }
        }
      }
      lVar7 = *(long *)(lVar7 + 8);
      lVar8 = lVar7 + -0x158;
    } while (lVar8 != param_1 + -0x150);
  }
  return;
}

