
/* WARNING: Type propagation algorithm not settling */

long * FUN_0194b7fc(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  switch((int)param_1[2]) {
  case 0:
    uVar9 = *(uint *)(param_1 + 1);
    uVar1 = *(uint *)((long)param_1 + 0xc);
    if (*(uint *)(*param_1 + 0x288) <= uVar9) {
      uVar9 = 0;
    }
    lVar7 = *(long *)(*param_1 + 0x290) + (long)(int)uVar9 * 0x30;
    if (*(uint *)(lVar7 + 0x10) <= uVar1) {
      uVar1 = 0;
    }
    puVar6 = (uint *)(*(long *)(lVar7 + 0x18) + (long)(int)uVar1 * 4);
    break;
  case 1:
    puVar6 = (uint *)(*param_1 + 2000);
    break;
  case 2:
    puVar6 = (uint *)(*param_1 + 0x860);
    break;
  case 3:
    puVar6 = (uint *)(*param_1 + 0x8c4);
    break;
  case 4:
    puVar6 = (uint *)(*param_1 + 0x8c8);
    break;
  default:
    puVar6 = (uint *)PTR_DAT_04bb3238;
  }
  uVar9 = *puVar6;
  if (uVar9 == 0) {
    return (long *)0x0;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return (long *)0x0;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 0;
      goto joined_r0x0194b948;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 5U >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0194b948;
    }
  }
  uVar9 = 1;
joined_r0x0194b948:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb3fe0 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3fe0), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3fd8 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3fe0);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb3fd8);
    if ((int)lVar7 != 1) {
      uVar9 = 1;
    }
    if (((uVar5 & 1) != 0) && (uVar9 == 0)) {
      return plVar8;
    }
  }
  return (long *)0x0;
}

