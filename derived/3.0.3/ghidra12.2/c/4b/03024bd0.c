
/* WARNING: Removing unreachable block (ram,0x03024e0c) */
/* WARNING: Removing unreachable block (ram,0x03024df8) */
/* WARNING: Removing unreachable block (ram,0x03024f10) */

void FUN_03024bd0(long param_1,char *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  long lVar5;
  code *pcVar6;
  uint *puVar7;
  ulong uVar8;
  long *plVar9;
  long *plVar10;
  undefined4 uVar11;
  long lVar12;
  
  if (((param_2 == (char *)0x0) || (*param_2 != '\0')) || (*(int *)(param_1 + 0x23c) != 4)) {
    lVar12 = *(long *)(param_1 + 0x638);
    if ((*(int *)(lVar12 + 0x8f8) == 0x12) && (lVar5 = *(long *)(param_1 + 0x230), lVar5 != 0)) {
      plVar10 = (long *)(lVar12 + 0x900) + *(uint *)(lVar12 + 0x8f8);
      if (0x12 < *(uint *)(lVar12 + 0x8f8)) {
        plVar10 = (long *)(lVar12 + 0x900);
      }
      if ((long *)*plVar10 != (long *)0x0) {
        (**(code **)(*(long *)*plVar10 + 0x28))();
      }
      *(undefined4 *)(lVar12 + 0x8f8) = *(undefined4 *)(lVar12 + 0x8fc);
      FUN_0310a61c(lVar5);
      return;
    }
  }
  else {
    lVar12 = *(long *)(param_1 + 0x230);
    iVar2 = *(int *)(param_1 + 0x528);
    plVar10 = *(long **)(lVar12 + 0x270);
    (**(code **)(*plVar10 + 0x28))(plVar10);
    (**(code **)(*plVar10 + 0x30))(plVar10);
    iVar3 = (**(code **)(**(long **)(lVar12 + 0x278) + 0x20))
                      (*(undefined4 *)((long)plVar10 + 0x1c),1.0 - *(float *)(plVar10 + 4));
    if (((iVar2 != iVar3) && (lVar12 = *(long *)(param_1 + 0x8a0), lVar12 != 0)) &&
       (*(long *)(lVar12 + 0x18) == 0 && *(long *)(lVar12 + 0x10) == 0)) {
      lVar5 = *(long *)(lVar12 + 0x38);
      plVar10 = (long *)(*(int *)(lVar5 + 0x54) + lVar12);
      plVar9 = (long *)(lVar5 + 0x40);
      lVar12 = *plVar9;
      *plVar9 = (long)plVar10;
      *plVar10 = lVar12;
      plVar10[1] = (long)plVar9;
      if (lVar12 != 0) {
        *(long **)(lVar12 + 8) = plVar10;
      }
      *(int *)(lVar5 + 0x50) = *(int *)(lVar5 + 0x50) + 1;
    }
    lVar12 = *(long *)(param_1 + 0x230);
    plVar10 = *(long **)(lVar12 + 0x270);
    (**(code **)(*plVar10 + 0x28))(plVar10);
    (**(code **)(*plVar10 + 0x30))(plVar10);
    uVar4 = (**(code **)(**(long **)(lVar12 + 0x278) + 0x20))
                      (*(undefined4 *)((long)plVar10 + 0x1c),1.0 - *(float *)(plVar10 + 4));
    if ((-1 < (int)uVar4) && (uVar4 < *(uint *)(param_1 + 0x520))) {
      iVar2 = *(int *)(param_1 + 0x52c);
      iVar3 = uVar4 - iVar2;
      if (iVar3 != 0) {
        uVar4 = *(uint *)(param_1 + 0x528);
        uVar11 = 0xffffffff;
        if ((-1 < (int)uVar4) && ((int)uVar4 < *(int *)(param_1 + 0x510))) {
          lVar12 = param_1 + 0x500;
          uVar1 = uVar4 + 1 & 3;
          if (2 < uVar4) {
            uVar4 = uVar4 + 1 & 0xfffffffc;
            do {
              uVar4 = uVar4 - 4;
              lVar12 = *(long *)(*(long *)(*(long *)(*(long *)(lVar12 + 8) + 8) + 8) + 8);
            } while (uVar4 != 0);
          }
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            lVar12 = *(long *)(lVar12 + 8);
          }
          uVar11 = 0xffffffff;
          if ((lVar12 != 0) && (lVar12 = lVar12 - *(int *)(param_1 + 0x514), lVar12 != 0)) {
            uVar11 = *(undefined4 *)(lVar12 + 0x270);
          }
        }
        FUN_03137830(param_1 + 0x4f8,iVar3);
        FUN_031379f0(param_1 + 0x4f8,uVar11,iVar2,0);
      }
    }
    if (*(int *)(param_1 + 0x830) == -1) {
      *(undefined4 *)(param_1 + 0x830) = 5;
      if (*(long *)(param_1 + 0x7f8) != 0) {
        uVar8 = *(ulong *)(param_1 + 0x808) & 1;
        pcVar6 = *(code **)(param_1 + 0x800);
        if (uVar8 != 0 || pcVar6 != (code *)0x0) {
          if (uVar8 != 0) {
            pcVar6 = *(code **)(pcVar6 + *(long *)(*(long *)(param_1 + 0x7f8) +
                                                  ((long)*(ulong *)(param_1 + 0x808) >> 1)));
          }
          (*pcVar6)();
        }
      }
    }
    *param_2 = '\x01';
    lVar5 = *(long *)(param_1 + 0x638);
    lVar12 = *(long *)(param_1 + 0x230);
    if (((lVar5 != 0) && (lVar12 != 0)) && (*(int *)(lVar5 + 0x8f8) != 0x12)) {
      uVar11 = 0x12;
      if (*(long *)(lVar5 + 0xa28) != 0) {
        puVar7 = *(uint **)(lVar5 + 0xa28);
        uVar4 = puVar7[4];
        if (*puVar7 <= uVar4) {
          uVar4 = 0;
        }
        uVar11 = *(undefined4 *)(*(long *)(puVar7 + 2) + (long)(int)uVar4 * 4);
      }
      *(int *)(lVar5 + 0x8fc) = *(int *)(lVar5 + 0x8f8);
      plVar10 = (long *)(lVar5 + 0x900) + *(uint *)(lVar5 + 0x8fc);
      if (0x12 < *(uint *)(lVar5 + 0x8fc)) {
        plVar10 = (long *)(lVar5 + 0x900);
      }
      if ((long *)*plVar10 != (long *)0x0) {
        (**(code **)(*(long *)*plVar10 + 0x28))();
      }
      *(undefined4 *)(lVar5 + 0x8f8) = uVar11;
      FUN_0310a61c(lVar12,uVar11);
    }
  }
  return;
}

