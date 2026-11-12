
void FUN_007d9170(byte *param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  byte bVar11;
  long *plVar12;
  uint uVar13;
  byte local_44 [4];
  
  puVar3 = PTR_DAT_04bb27c0;
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 != 0) {
    uVar13 = *(uint *)(param_1 + 4);
    if ((((uVar13 == 0) ||
         (plVar12 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                              ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
        ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar13)) {
      plVar12 = (long *)0x0;
    }
    if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
      plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar10 = *(long *)puVar3;
      iVar6 = (**(code **)(*plVar8 + 0x60))();
      if (iVar6 < 0x11) {
        uVar13 = 1;
      }
      else {
        if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_007d9234;
        uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
      }
    }
    else {
LAB_007d9234:
      uVar13 = 0;
    }
    if (plVar12 != (long *)0x0) {
      lVar10 = plVar12[0x2a];
      uVar2 = *(uint *)(plVar12 + 0x49);
      if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3ff0);
      }
      uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3fe8);
      puVar5 = PTR_DAT_04bbe600;
      puVar4 = PTR_DAT_04bbe5f8;
      if ((((int)lVar10 == 1) && ((uVar7 & uVar13) != 0)) && ((uVar2 >> 4 & 1) != 0)) {
        plVar8 = (long *)plVar12[0x60];
        if (plVar8 == (long *)0x0) {
          if ((long *)plVar12[0x16] != plVar12 + 0x15) {
            lVar10 = (long)*(int *)((long)plVar12 + 0xbc);
            plVar8 = (long *)(plVar12[0x16] - lVar10);
            puVar1 = PTR_DAT_04bbe608 + 0x10;
            do {
              if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
                *(undefined **)puVar4 = puVar1;
                __cxa_guard_release(puVar5);
              }
              if ((plVar8 != (long *)0x0) &&
                 (uVar9 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar4), (uVar9 & 1) != 0))
              goto LAB_007d9294;
              plVar8 = (long *)(*(long *)((long)plVar8 + lVar10 + 8) - lVar10);
            } while (plVar8 != (long *)((long)(plVar12 + 0x15) - lVar10));
          }
        }
        else {
LAB_007d9294:
          bVar11 = *param_1;
          if (7 < bVar11) {
            bVar11 = 0xff;
          }
          *(byte *)((long)plVar8 + 0x2ea) = bVar11;
        }
      }
    }
  }
  if (*(long *)PTR_DAT_04bb4790 != 0) {
    local_44[0] = *param_1;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
    FUN_018dbdac(*(long *)PTR_DAT_04bb4790,local_44,*(undefined4 *)(param_1 + 4));
    goto LAB_007d92d8;
  }
  lVar10 = *(long *)puVar3;
  if (lVar10 == 0) goto LAB_007d92d8;
  uVar13 = *(uint *)(param_1 + 4);
  if ((((uVar13 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
      ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar13)) {
    plVar12 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar3;
    iVar6 = (**(code **)(*plVar8 + 0x60))();
    if (iVar6 < 0x11) {
      uVar13 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_007d9394;
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_007d9394:
    uVar13 = 0;
  }
  if (plVar12 != (long *)0x0) {
    lVar10 = plVar12[0x2a];
    uVar2 = *(uint *)(plVar12 + 0x49);
    if (((*PTR_DAT_04bb3ff0 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3ff0), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb3fe8 = PTR_DAT_04bb3fd0 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3ff0);
    }
    uVar7 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3fe8);
    if ((((int)lVar10 == 1) && ((uVar7 & uVar13) != 0)) && ((uVar2 >> 4 & 1) != 0)) {
      FUN_01947ba0(plVar12);
    }
  }
LAB_007d92d8:
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  return;
}

