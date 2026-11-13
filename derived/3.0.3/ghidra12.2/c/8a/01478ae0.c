
void FUN_01478ae0(long param_1,int param_2)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  
  if (*(int *)(param_1 + 0x2d0) == 1) {
    uVar2 = FUN_01478db0(param_1);
    puVar1 = PTR_DAT_04bb27c0;
    if (uVar2 == 0) {
      uVar2 = *(uint *)(*(long *)PTR_DAT_04bb4c80 + 0x10);
      goto LAB_01478d34;
    }
    lVar6 = *(long *)PTR_DAT_04bb27c0;
    if (lVar6 == 0) goto LAB_01478d34;
    plVar9 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + (ulong)(uVar2 >> 0x14) * 8);
    if (((plVar9 == (long *)0x0) || ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar9 + 0x46) != uVar2)) {
      plVar9 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
      plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar6 = *(long *)puVar1;
      iVar3 = (**(code **)(*plVar5 + 0x60))();
      if (iVar3 < 0x11) {
        uVar10 = 1;
      }
      else {
        if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_01478be8;
        uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_01478be8:
      uVar10 = 0;
    }
    if (plVar9 == (long *)0x0) goto LAB_01478d34;
    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5928);
    }
    uVar4 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb5920);
    if ((uVar10 & uVar4) != 1) goto LAB_01478d34;
    iVar3 = *(int *)(param_1 + 0x230);
    plVar5 = plVar9 + 0x5e;
    plVar7 = plVar5;
    do {
      plVar7 = (long *)plVar7[1];
      if (plVar7 == plVar5) goto LAB_01478c64;
    } while (iVar3 != (int)plVar7[-1]);
    if (((ulong)plVar7 | 8) != 8) goto LAB_01478d34;
LAB_01478c64:
    if ((int)plVar9[0x60] < (int)plVar9[99]) {
      plVar7 = plVar5;
      do {
        plVar7 = (long *)plVar7[1];
        if (plVar7 == plVar5) goto LAB_01478ca4;
      } while (iVar3 != (int)plVar7[-1]);
      if (((ulong)plVar7 | 8) == 8) {
LAB_01478ca4:
        plVar7 = (long *)plVar9[0x61];
        if (plVar7 != (long *)0x0) {
          plVar9[0x61] = *plVar7;
        }
        *(int *)plVar7 = iVar3;
        plVar7[2] = 0;
        plVar8 = plVar7 + 1;
        *plVar8 = 0;
        lVar6 = *plVar5;
        *plVar5 = (long)plVar8;
        plVar7[2] = (long)plVar5;
        *plVar8 = lVar6;
        if (lVar6 != 0) {
          *(long **)(lVar6 + 8) = plVar8;
        }
        *(int *)(plVar9 + 0x60) = (int)plVar9[0x60] + 1;
      }
    }
    if ((*(uint *)(param_1 + 0x248) >> 4 & 1) == 0) {
LAB_01478d14:
      if (((*(uint *)(param_1 + 0x248) >> 4 & 1) != 0) || (*(int *)(param_1 + 0x2a8) != 3))
      goto LAB_01478d34;
    }
    else {
      if (*(long *)(param_1 + 0x70) == 0) {
        iVar3 = -1;
      }
      else {
        iVar3 = *(int *)(*(long *)(param_1 + 0x70) + 0x280);
      }
      if (iVar3 == 1) goto LAB_01478d14;
    }
    FUN_014858d0(plVar9[0x150]);
  }
  else {
    if (*(int *)(param_1 + 0x2d0) != 0) {
      return;
    }
    if (param_2 != 1) {
      return;
    }
    uVar2 = *(uint *)(*(long *)PTR_DAT_04bb4c80 + 0x10);
  }
  FUN_014858d0(*(undefined8 *)(param_1 + 0xa80));
LAB_01478d34:
  if (((*(uint *)(param_1 + 0x248) >> 4 & 1) == 0) || ((*(uint *)(param_1 + 0x248) >> 1 & 1) != 0))
  {
    return;
  }
  FUN_006fb5f0(param_1,uVar2);
  return;
}

