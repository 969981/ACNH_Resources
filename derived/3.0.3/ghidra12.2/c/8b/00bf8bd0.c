
/* WARNING: Type propagation algorithm not settling */

uint FUN_00bf8bd0(long param_1,uint *param_2)

{
  uint uVar1;
  char cVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  char *pcVar8;
  ulong uVar9;
  long *plVar10;
  uint uVar11;
  char *pcVar12;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  uVar11 = *param_2;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar11 = 1;
      goto joined_r0x00bf8c8c;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00bf8c8c;
    }
  }
  uVar11 = 0;
joined_r0x00bf8c8c:
  if (plVar10 == (long *)0x0) {
    return 0;
  }
  lVar7 = plVar10[0x2a];
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
  uVar1 = 0;
  if ((int)lVar7 == 1) {
    uVar1 = uVar11;
  }
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  if (uVar1 == 0) {
    return 0;
  }
  plVar5 = *(long **)(param_1 + 8);
  (**(code **)(plVar10[0x7c] + 0x18))(plVar10 + 0x7c);
  (**(code **)(plVar10[0x7c] + 0x18))(plVar10 + 0x7c);
  pcVar12 = (char *)plVar10[0x7d];
  (**(code **)(*plVar5 + 0x18))(plVar5);
  pcVar8 = (char *)plVar5[1];
  if (pcVar12 != pcVar8) {
    cVar2 = *(char *)plVar10[0x7d];
    if (cVar2 != *pcVar8) {
      return 0;
    }
    if (cVar2 != '\0') {
      pcVar12 = (char *)plVar10[0x7d] + 2;
      uVar6 = 0;
      do {
        uVar9 = uVar6;
        if (uVar9 == 0x80000) goto LAB_00bf8dcc;
        if (pcVar12[uVar9 - 1] != pcVar8[uVar9 + 1]) {
          pcVar12 = (char *)0x0;
          goto LAB_00bf8dcc;
        }
        if (pcVar12[uVar9 - 1] == '\0') goto LAB_00bf8d94;
        if (pcVar12[uVar9] != pcVar8[uVar9 + 2]) {
          pcVar12 = (char *)0x0;
          uVar9 = uVar9 | 1;
          goto LAB_00bf8dcc;
        }
        uVar6 = uVar9 + 2;
      } while (pcVar12[uVar9] != '\0');
      uVar9 = uVar9 + 1;
LAB_00bf8d94:
      pcVar12 = (char *)0x1;
LAB_00bf8dcc:
      return (uint)(uVar9 < 0x80000) & (uint)pcVar12;
    }
  }
  return 1;
}

