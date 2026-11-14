
uint FUN_01503da8(void)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  
  puVar4 = PTR_DAT_04bb27c0;
  uVar2 = *(uint *)(DAT_0520f098 + 0x10);
  uVar9 = DAT_0520f098;
  if (uVar2 != 0) {
    lVar8 = *(long *)PTR_DAT_04bb27c0;
    uVar9 = 0;
    if (lVar8 != 0) {
      plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                          ((ulong)(uVar2 >> 0x11) & 0x7ff8));
      if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
         (*(uint *)(plVar10 + 0x46) != uVar2)) {
        plVar10 = (long *)0x0;
      }
      if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
        plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar8 = *(long *)puVar4;
        iVar5 = (**(code **)(*plVar7 + 0x60))();
        if (iVar5 < 0x11) {
          uVar3 = 1;
        }
        else {
          uVar3 = 0;
          if (*(uint *)(lVar8 + 0x5e8) < 5) {
            uVar3 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
          }
        }
      }
      else {
        uVar3 = 0;
      }
      if (plVar10 == (long *)0x0) {
        uVar9 = 0;
      }
      else {
        lVar8 = plVar10[0x2a];
        if (((*PTR_DAT_04bb7d58 & 1) == 0) &&
           (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb7d58), iVar5 != 0)) {
          *(undefined **)PTR_DAT_04bb7d50 = PTR_DAT_04bb2e50 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb7d58);
        }
        uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb7d50);
        uVar1 = 0;
        if ((int)lVar8 == 1) {
          uVar1 = uVar3 & uVar6;
        }
        uVar9 = (ulong)uVar1;
      }
    }
  }
  return (uint)(uVar2 != 0) & (uint)uVar9;
}

