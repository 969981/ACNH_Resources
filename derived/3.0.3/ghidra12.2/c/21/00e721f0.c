
void FUN_00e721f0(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  undefined8 *puVar10;
  uint uVar11;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  uVar11 = *param_2;
  if ((((uVar11 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar11 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar11)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar11 = 1;
      goto joined_r0x00e722b4;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar11 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00e722b4;
    }
  }
  uVar11 = 0;
joined_r0x00e722b4:
  if (plVar9 != (long *)0x0) {
    lVar6 = plVar9[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar11;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      puVar10 = (undefined8 *)plVar9[0x77];
      if (((*PTR_DAT_04bb7480 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb7480), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb7478 = PTR_DAT_04bb6d20 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb7480);
      }
      if (((puVar10 == (undefined8 *)0x0) ||
          (uVar5 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb7478), (uVar5 & 1) == 0)) ||
         ((*(ushort *)((long)puVar10 + 0x1242c) >> 4 & 1) == 0)) {
        iVar3 = *(int *)(*(long *)PTR_DAT_04bb4e28 + 0xe0);
        if (iVar3 != 0) {
          lVar7 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
          lVar6 = 0;
          lVar8 = (long)iVar3 << 3;
          do {
            if (*param_2 == *(uint *)(*(long *)(lVar7 + lVar6 * 8) + 8)) {
              if (*(int *)(*(long *)(lVar7 + lVar6 * 8) + 0xd8) == 2) {
                FUN_00e70ea0(*(undefined8 *)(param_1 + 0x10),**(undefined8 **)(param_1 + 0x18),
                             (*(undefined8 **)(param_1 + 0x18))[1],param_2,0);
                return;
              }
              return;
            }
            lVar6 = lVar6 + 1;
            lVar8 = lVar8 + -8;
          } while (lVar8 != 0);
        }
      }
    }
  }
  return;
}

