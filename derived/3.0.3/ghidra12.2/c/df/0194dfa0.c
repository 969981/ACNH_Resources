
void FUN_0194dfa0(long param_1,uint *param_2)

{
  undefined *puVar1;
  uint uVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  uint uVar11;
  
  puVar4 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar11 = *param_2;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar4;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar11 = 1;
      goto joined_r0x0194e064;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0194e064;
    }
  }
  uVar11 = 0;
joined_r0x0194e064:
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3ff0);
    }
    uVar8 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3fe8);
    puVar5 = PTR_DAT_04bbe5c0;
    puVar4 = PTR_DAT_04bbe5b8;
    uVar2 = 0;
    if ((int)lVar9 == 1) {
      uVar2 = uVar11;
    }
    if (((uVar8 & 1) != 0) && (uVar2 != 0)) {
      if ((long *)plVar10[0x16] != plVar10 + 0x15) {
        lVar9 = (long)*(int *)((long)plVar10 + 0xbc);
        cVar3 = **(char **)(param_1 + 8);
        plVar7 = (long *)(plVar10[0x16] - lVar9);
        puVar1 = PTR_DAT_04bbe5c8 + 0x10;
        do {
          if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
            *(undefined **)puVar4 = puVar1;
            __cxa_guard_release(puVar5);
          }
          if ((plVar7 != (long *)0x0) &&
             (uVar8 = (**(code **)(*plVar7 + 0x10))(plVar7,puVar4), (uVar8 & 1) != 0)) {
            *(byte *)(plVar7 + 0x7c) = *(byte *)(plVar7 + 0x7c) & 0xfb | (cVar3 != '\0') << 2;
            return;
          }
          plVar7 = (long *)(*(long *)((long)plVar7 + lVar9 + 8) - lVar9);
        } while (plVar7 != (long *)((long)(plVar10 + 0x15) - lVar9));
      }
    }
  }
  return;
}

