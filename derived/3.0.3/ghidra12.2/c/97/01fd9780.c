
void FUN_01fd9780(undefined8 *param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  uint uVar9;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  if (((((int)param_2 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + (param_2 >> 0x14 & 0xfff) * 8)
       , plVar7 == (long *)0x0)) || ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) ||
     ((int)plVar7[0x46] != (int)param_2)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x01fd9834;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x01fd9834;
    }
  }
  uVar9 = 0;
joined_r0x01fd9834:
  if (plVar7 != (long *)0x0) {
    lVar6 = plVar7[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar9;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      puVar8 = (undefined8 *)plVar7[0x77];
      if (((*PTR_DAT_04bb7480 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb7480), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb7478 = PTR_DAT_04bb6d20 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb7480);
      }
      if (((puVar8 != (undefined8 *)0x0) &&
          (uVar5 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bb7478), (uVar5 & 1) != 0)) &&
         ((*(ushort *)((long)puVar8 + 0x1242c) >> 2 & 1) == 0)) {
        FUN_01fd7f50(puVar8,*param_1);
        return;
      }
    }
  }
  return;
}

