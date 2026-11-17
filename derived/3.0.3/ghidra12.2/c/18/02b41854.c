
void FUN_02b41854(uint *param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined2 uVar5;
  undefined2 uVar6;
  undefined2 uVar7;
  undefined *puVar8;
  int iVar9;
  long *plVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  uint uVar14;
  
  puVar8 = PTR_DAT_04bb27c0;
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return;
  }
  uVar14 = *param_1;
  if ((((uVar14 == 0) ||
       (plVar13 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) +
                            ((ulong)(uVar14 >> 0x11) & 0x7ff8)), plVar13 == (long *)0x0)) ||
      ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar13 + 0x46) != uVar14)) {
    plVar13 = (long *)0x0;
  }
  if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
    plVar10 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar8;
    iVar9 = (**(code **)(*plVar10 + 0x60))();
    if (iVar9 < 0x11) {
      uVar14 = 1;
      goto joined_r0x02b41914;
    }
    if (*(uint *)(lVar12 + 0x5e8) < 5) {
      uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02b41914;
    }
  }
  uVar14 = 0;
joined_r0x02b41914:
  if (plVar13 != (long *)0x0) {
    lVar12 = plVar13[0x2a];
    if (((*PTR_DAT_04bc4a20 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bc4a20), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bc4a18 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4a20);
    }
    uVar11 = (**(code **)(*plVar13 + 0x20))(plVar13,PTR_DAT_04bc4a18);
    uVar1 = 0;
    if ((int)lVar12 == 1) {
      uVar1 = uVar14;
    }
    if (((uVar11 & 1) != 0) && (uVar1 != 0)) {
      uVar5 = param_2[1];
      uVar6 = param_2[2];
      uVar7 = param_2[4];
      uVar3 = *(undefined1 *)(param_2 + 5);
      uVar4 = *(undefined1 *)((long)param_2 + 0xb);
      uVar2 = *(undefined4 *)(param_2 + 6);
      if (*(int *)((long)plVar13 + 0x174) == 2) {
        *(undefined2 *)(plVar13 + 0x89) = *param_2;
        *(undefined2 *)((long)plVar13 + 0x44a) = uVar5;
        *(undefined2 *)((long)plVar13 + 0x44c) = uVar6;
        *(undefined2 *)(plVar13 + 0x8a) = uVar7;
        *(undefined1 *)((long)plVar13 + 0x452) = uVar3;
        *(undefined1 *)((long)plVar13 + 0x453) = uVar4;
        *(undefined4 *)((long)plVar13 + 0x454) = uVar2;
      }
    }
  }
  return;
}

