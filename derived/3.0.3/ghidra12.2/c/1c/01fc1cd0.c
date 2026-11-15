
void FUN_01fc1cd0(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) goto LAB_01fc201c;
  uVar13 = *(uint *)(param_1 + 0xf00);
  if ((((uVar13 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                            ((ulong)(uVar13 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar13)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar13 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_01fc1d9c;
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01fc1d9c:
    uVar13 = 0;
  }
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
    puVar2 = PTR_DAT_04bb6710;
    uVar1 = 0;
    if ((int)lVar8 == 1) {
      uVar1 = uVar13;
    }
    if (((uVar6 & 1) != 0) && (uVar1 != 0)) {
      plVar5 = (long *)plVar11[0x77];
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
            lVar9 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
            lVar8 = 0;
            lVar10 = (long)iVar4 << 3;
            do {
              if (*(short *)(*(long *)(lVar9 + lVar8 * 8) + 0x38) ==
                  *(short *)((long)plVar5 + 0x12184)) {
                if ((*(ushort *)(*(long *)(lVar9 + lVar8 * 8) + 0x114) >> 5 & 1) != 0)
                goto LAB_01fc201c;
                break;
              }
              lVar8 = lVar8 + 1;
              lVar10 = lVar10 + -8;
            } while (lVar10 != 0);
          }
        }
        if (((((*(int *)((long)plVar5 + 0xaf8c) == 2) || (*(int *)((long)plVar5 + 0xaf8c) == 3)) ||
             (*(int *)((long)plVar5 + 0xaf8c) == 4)) || (*(int *)((long)plVar5 + 0xaf8c) == 5)) &&
           (uVar6 = (**(code **)(*plVar5 + 0x608))(plVar5), (uVar6 & 1) == 0)) {
          lVar8 = plVar5[0xef6];
          uVar13 = (int)lVar8 - 0x23;
          if (((((uVar13 < 0x33) && ((1L << ((ulong)uVar13 & 0x3f) & 0x4000804000001U) != 0)) ||
               (uVar6 = FUN_01e5a8c0(plVar5[2]), (uVar6 & 1) != 0)) ||
              (((int)lVar8 == 0x3e &&
               (((int)plVar5[0x240a] == 0x46 || ((int)plVar5[0x240a] == 0x3d)))))) &&
             ((2 < *(int *)((long)plVar5 + 0xaf8c) - 2U || ((short)plVar5[0x23f9] != -2)))) {
            lVar8 = param_1[1];
            uVar13 = *(uint *)(lVar8 + 0x288);
            *(undefined4 *)(lVar8 + 0x288) = *(undefined4 *)(lVar8 + 0x28c);
            uVar13 = uVar13 ^ uVar13 << 0xb;
            *(undefined4 *)(lVar8 + 0x28c) = *(undefined4 *)(lVar8 + 0x290);
            uVar1 = *(uint *)(lVar8 + 0x294);
            *(uint *)(lVar8 + 0x290) = uVar1;
            uVar13 = uVar13 >> 8 ^ uVar1 >> 0x13 ^ uVar13 ^ uVar1;
            *(uint *)(lVar8 + 0x294) = uVar13;
            puVar7 = (uint *)(**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x17850) + 0xf0))();
            if ((uint)((ulong)uVar13 * 100 >> 0x20) < *puVar7) {
              puVar12 = (undefined8 *)plVar11[0x77];
              if (((*puVar2 & 1) == 0) &&
                 (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar4 != 0)) {
                *(undefined **)puVar3 = PTR_DAT_04bb6718 + 0x10;
                __cxa_guard_release(PTR_DAT_04bb6710);
              }
              if (((puVar12 != (undefined8 *)0x0) &&
                  (uVar6 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bb6708), (uVar6 & 1) != 0)) &&
                 (uVar6 = FUN_01fbd8e0(param_1,puVar12), (uVar6 & 1) != 0)) {
                *(undefined4 *)((long)param_1 + 0xaf8c) = 6;
                return;
              }
            }
          }
        }
      }
    }
  }
LAB_01fc201c:
                    /* WARNING: Could not recover jumptable at 0x01fc2040. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x538))(param_1);
  return;
}

