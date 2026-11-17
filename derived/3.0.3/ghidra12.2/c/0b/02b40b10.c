
void FUN_02b40b10(uint *param_1,undefined2 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined2 uVar10;
  undefined2 uVar11;
  undefined *puVar12;
  int iVar13;
  long *plVar14;
  ulong uVar15;
  long lVar16;
  long *plVar17;
  uint uVar18;
  
  puVar12 = PTR_DAT_04bb27c0;
  lVar16 = *(long *)PTR_DAT_04bb27c0;
  if (lVar16 == 0) {
    return;
  }
  uVar18 = *param_1;
  if ((((uVar18 == 0) ||
       (plVar17 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) +
                            ((ulong)(uVar18 >> 0x11) & 0x7ff8)), plVar17 == (long *)0x0)) ||
      ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar17 + 0x46) != uVar18)) {
    plVar17 = (long *)0x0;
  }
  if (*(int *)(lVar16 + 0x288) == 1 || *(int *)(lVar16 + 0x288) == -1) {
    plVar14 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar16 = *(long *)puVar12;
    iVar13 = (**(code **)(*plVar14 + 0x60))();
    if (iVar13 < 0x11) {
      uVar18 = 1;
      goto joined_r0x02b40bd0;
    }
    if (*(uint *)(lVar16 + 0x5e8) < 5) {
      uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x02b40bd0;
    }
  }
  uVar18 = 0;
joined_r0x02b40bd0:
  if (plVar17 != (long *)0x0) {
    lVar16 = plVar17[0x2a];
    if (((*PTR_DAT_04bc4a20 & 1) == 0) &&
       (iVar13 = __cxa_guard_acquire(PTR_DAT_04bc4a20), iVar13 != 0)) {
      *(undefined **)PTR_DAT_04bc4a18 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc4a20);
    }
    uVar15 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bc4a18);
    uVar1 = 0;
    if ((int)lVar16 == 1) {
      uVar1 = uVar18;
    }
    if (((uVar15 & 1) != 0) && (uVar1 != 0)) {
      uVar8 = param_2[1];
      uVar9 = param_2[2];
      uVar10 = param_2[4];
      uVar4 = *(undefined1 *)(param_2 + 5);
      uVar5 = *(undefined1 *)((long)param_2 + 0xb);
      uVar2 = *(undefined4 *)(param_2 + 6);
      uVar11 = param_2[8];
      uVar6 = *(undefined1 *)(param_2 + 9);
      uVar7 = *(undefined1 *)((long)param_2 + 0x13);
      uVar3 = *(undefined4 *)(param_2 + 10);
      if (*(int *)((long)plVar17 + 0x174) == 1) {
        *(undefined2 *)(plVar17 + 0x89) = *param_2;
        *(undefined2 *)((long)plVar17 + 0x44a) = uVar8;
        *(undefined2 *)((long)plVar17 + 0x44c) = uVar9;
        *(undefined2 *)(plVar17 + 0x8a) = uVar10;
        *(undefined1 *)((long)plVar17 + 0x452) = uVar4;
        *(undefined1 *)((long)plVar17 + 0x453) = uVar5;
        *(undefined4 *)((long)plVar17 + 0x454) = uVar2;
        *(undefined2 *)(plVar17 + 0x8b) = uVar11;
        *(undefined1 *)((long)plVar17 + 0x45a) = uVar6;
        *(undefined1 *)((long)plVar17 + 0x45b) = uVar7;
        *(undefined4 *)((long)plVar17 + 0x45c) = uVar3;
      }
    }
  }
  return;
}

