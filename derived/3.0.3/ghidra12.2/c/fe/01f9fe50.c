
undefined8 FUN_01f9fe50(long *param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  uint uVar12;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  uVar12 = *param_2;
  if ((((uVar12 == 0) ||
       (plVar10 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar10 == (long *)0x0)) ||
      ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar10 + 0x46) != uVar12)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar12 = 1;
      goto joined_r0x01f9ff1c;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01f9ff1c;
    }
  }
  uVar12 = 0;
joined_r0x01f9ff1c:
  if (plVar10 != (long *)0x0) {
    lVar7 = plVar10[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    puVar2 = PTR_DAT_04bb6710;
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar12;
    }
    if ((uVar6 & 1) == 0) {
      return 0;
    }
    if (uVar1 == 0) {
      return 0;
    }
    plVar5 = (long *)plVar10[0x77];
    if (((*PTR_DAT_04bb6710 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6710);
    }
    puVar3 = PTR_DAT_04bb6708;
    if ((plVar5 != (long *)0x0) &&
       (uVar6 = (**(code **)*plVar5)(plVar5,PTR_DAT_04bb6708), (uVar6 & 1) != 0)) {
      if (*(short *)((long)plVar5 + 0x12184) != -1) {
        iVar4 = *(int *)(*(long *)PTR_DAT_04bb4e28 + 0xe0);
        if (iVar4 != 0) {
          lVar8 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
          lVar7 = 0;
          lVar9 = (long)iVar4 << 3;
          do {
            if (*(short *)(*(long *)(lVar8 + lVar7 * 8) + 0x38) ==
                *(short *)((long)plVar5 + 0x12184)) {
              if ((*(ushort *)(*(long *)(lVar8 + lVar7 * 8) + 0x114) >> 5 & 1) != 0) {
                return 0;
              }
              break;
            }
            lVar7 = lVar7 + 1;
            lVar9 = lVar9 + -8;
          } while (lVar9 != 0);
        }
      }
      if (((((*(int *)((long)plVar5 + 0xaf8c) == 2) || (*(int *)((long)plVar5 + 0xaf8c) == 3)) ||
           (*(int *)((long)plVar5 + 0xaf8c) == 4)) || (*(int *)((long)plVar5 + 0xaf8c) == 5)) &&
         (uVar6 = (**(code **)(*plVar5 + 0x608))(plVar5), (uVar6 & 1) == 0)) {
        lVar7 = plVar5[0xef6];
        uVar12 = (int)lVar7 - 0x23;
        if (((((uVar12 < 0x33) && ((1L << ((ulong)uVar12 & 0x3f) & 0x4000804000001U) != 0)) ||
             (uVar6 = FUN_01e5a8c0(plVar5[2]), (uVar6 & 1) != 0)) ||
            (((int)lVar7 == 0x3e && (((int)plVar5[0x240a] == 0x46 || ((int)plVar5[0x240a] == 0x3d)))
             ))) && ((2 < *(int *)((long)plVar5 + 0xaf8c) - 2U || ((short)plVar5[0x23f9] != -2)))) {
          puVar11 = (undefined8 *)plVar10[0x77];
          if (((*puVar2 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar4 != 0)) {
            *(undefined **)puVar3 = PTR_DAT_04bb6718 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb6710);
          }
          if (((puVar11 != (undefined8 *)0x0) &&
              (uVar6 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bb6708), (uVar6 & 1) != 0)) &&
             (uVar6 = FUN_01fbd8e0(param_1,puVar11), (uVar6 & 1) != 0)) {
            (**(code **)(*param_1 + 0x630))(param_1,param_2);
            return 1;
          }
        }
      }
    }
  }
  return 0;
}

