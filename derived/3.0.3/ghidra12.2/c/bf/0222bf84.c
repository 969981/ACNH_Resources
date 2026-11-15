
void FUN_0222bf84(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  uint uVar8;
  
  puVar2 = PTR_DAT_04bb27c0;
  uVar8 = *param_2;
  if (uVar8 == 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
LAB_0222c0e0:
    if (*(int *)(param_1 + 0x2cc) == 0) {
LAB_0222c130:
      lVar6 = 0;
      goto LAB_0222c134;
    }
    if (*(int *)(param_1 + 0x2d0) != 0) {
      return;
    }
  }
  else {
    plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(uVar8 >> 0x11) & 0x7ff8))
    ;
    if (((plVar7 == (long *)0x0) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar7 + 0x46) != uVar8)) {
      plVar7 = (long *)0x0;
    }
    if (*(int *)(lVar6 + 0x288) != 1 && *(int *)(lVar6 + 0x288) != -1) {
LAB_0222c044:
      uVar8 = 0;
      if (plVar7 != (long *)0x0) goto LAB_0222c058;
      goto LAB_0222c0e0;
    }
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_0222c044;
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
    if (plVar7 == (long *)0x0) goto LAB_0222c0e0;
LAB_0222c058:
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bc2cb0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc2cb0), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bc2ca8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2cb0);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bc2ca8);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar8;
    }
    if (((uVar5 & 1) == 0) || (uVar1 == 0)) goto LAB_0222c0e0;
    if (*(int *)((long)plVar7 + 0x17c) == 0) goto LAB_0222c0e0;
    if (*(int *)((long)plVar7 + 0x17c) == 1) {
      if (*(int *)(param_1 + 0x2d4) == 0) {
LAB_0222c150:
        lVar6 = 2;
        goto LAB_0222c134;
      }
      if (*(int *)(param_1 + 0x2d8) == 0) {
LAB_0222c158:
        lVar6 = 3;
        goto LAB_0222c134;
      }
      if (*(int *)(param_1 + 0x2dc) == 0) {
LAB_0222c160:
        lVar6 = 4;
        goto LAB_0222c134;
      }
      iVar3 = *(int *)(param_1 + 0x2e0);
joined_r0x0222c124:
      if (iVar3 == 0) {
        lVar6 = 5;
      }
      else {
        if (*(int *)(param_1 + 0x2e4) != 0) {
          return;
        }
        lVar6 = 6;
      }
      goto LAB_0222c134;
    }
    if (*(int *)(param_1 + 0x2cc) == 0) goto LAB_0222c130;
    if (*(int *)(param_1 + 0x2d0) != 0) {
      if (*(int *)(param_1 + 0x2d4) == 0) goto LAB_0222c150;
      if (*(int *)(param_1 + 0x2d8) == 0) goto LAB_0222c158;
      if (*(int *)(param_1 + 0x2dc) == 0) goto LAB_0222c160;
      iVar3 = *(int *)(param_1 + 0x2e0);
      goto joined_r0x0222c124;
    }
  }
  lVar6 = 1;
LAB_0222c134:
  *(uint *)(param_1 + 0x2cc + lVar6 * 4) = *param_2;
  return;
}

