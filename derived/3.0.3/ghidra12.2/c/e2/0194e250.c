
void FUN_0194e250(long param_1,uint *param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  uint uVar11;
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar11 = *param_2;
  if ((((uVar11 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar11)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar3;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar11 = 1;
      goto joined_r0x0194e314;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0194e314;
    }
  }
  uVar11 = 0;
joined_r0x0194e314:
  if (plVar10 != (long *)0x0) {
    lVar8 = plVar10[0x2a];
    if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3ff0);
    }
    uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb3fe8);
    puVar4 = PTR_DAT_04bbe5c0;
    puVar3 = PTR_DAT_04bbe5b8;
    uVar2 = 0;
    if ((int)lVar8 == 1) {
      uVar2 = uVar11;
    }
    if (((uVar7 & 1) != 0) && (uVar2 != 0)) {
      if ((long *)plVar10[0x16] != plVar10 + 0x15) {
        uVar9 = *(undefined8 *)(param_1 + 8);
        lVar8 = (long)*(int *)((long)plVar10 + 0xbc);
        plVar6 = (long *)(plVar10[0x16] - lVar8);
        puVar1 = PTR_DAT_04bbe5c8 + 0x10;
        do {
          if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(puVar4), iVar5 != 0)) {
            *(undefined **)puVar3 = puVar1;
            __cxa_guard_release(puVar4);
          }
          if ((plVar6 != (long *)0x0) &&
             (uVar7 = (**(code **)(*plVar6 + 0x10))(plVar6,puVar3), (uVar7 & 1) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x0194e444. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(*plVar6 + 0x220))(plVar6,uVar9);
            return;
          }
          plVar6 = (long *)(*(long *)((long)plVar6 + lVar8 + 8) - lVar8);
        } while (plVar6 != (long *)((long)(plVar10 + 0x15) - lVar8));
      }
    }
  }
  return;
}

