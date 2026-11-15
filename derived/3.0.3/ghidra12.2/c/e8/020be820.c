
void FUN_020be820(long param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  int iVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  uint uVar13;
  
  puVar4 = PTR_DAT_04bb27c0;
  uVar13 = *param_2;
  if (uVar13 == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) goto LAB_020be978;
  plVar11 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + ((ulong)(uVar13 >> 0x11) & 0x7ff8))
  ;
  if (((plVar11 == (long *)0x0) || ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar11 + 0x46) != uVar13)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar4;
    iVar5 = (**(code **)(*plVar6 + 0x60))();
    if (iVar5 < 0x11) {
      uVar13 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_020be8e0;
      uVar13 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_020be8e0:
    uVar13 = 0;
  }
  if (plVar11 != (long *)0x0) {
    lVar8 = plVar11[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar5 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bb37d0);
    uVar2 = 0;
    if ((int)lVar8 == 1) {
      uVar2 = uVar13;
    }
    if (((uVar7 & 1) != 0) && (uVar2 != 0)) {
      puVar12 = (undefined8 *)plVar11[0x77];
      if (((*PTR_DAT_04bb7480 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb7480), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb7478 = PTR_DAT_04bb6d20 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb7480);
      }
      if (((puVar12 != (undefined8 *)0x0) &&
          (uVar7 = (**(code **)*puVar12)(puVar12,PTR_DAT_04bb7478), (uVar7 & 1) != 0)) &&
         ((*(ushort *)((long)puVar12 + 0x1242c) >> 4 & 1) != 0)) {
        return;
      }
    }
  }
LAB_020be978:
  iVar5 = *(int *)(*(long *)PTR_DAT_04bb4e28 + 0xe0);
  if (iVar5 != 0) {
    lVar9 = *(long *)(*(long *)PTR_DAT_04bb4e28 + 0xe8);
    lVar10 = (long)iVar5 << 3;
    lVar8 = 0;
    do {
      if (*param_2 == *(uint *)(*(long *)(lVar9 + lVar8 * 8) + 8)) {
        if (*(int *)(*(long *)(lVar9 + lVar8 * 8) + 0xd8) != 2) {
          return;
        }
        puVar1 = (uint *)(*(long *)(param_1 + 8) + 0xa20);
        puVar3 = puVar1 + **(uint **)(param_1 + 0x10);
        if (0x11 < **(uint **)(param_1 + 0x10)) {
          puVar3 = puVar1;
        }
        *puVar3 = *param_2;
        **(int **)(param_1 + 0x10) = **(int **)(param_1 + 0x10) + 1;
        return;
      }
      lVar8 = lVar8 + 1;
      lVar10 = lVar10 + -8;
    } while (lVar10 != 0);
  }
  return;
}

