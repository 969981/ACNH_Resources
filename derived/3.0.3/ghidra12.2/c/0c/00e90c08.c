
void FUN_00e90c08(long param_1,uint *param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  uint uVar10;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  lVar9 = *(long *)(param_1 + 8);
  uVar10 = *param_2;
  if ((((uVar10 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar10)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
      goto joined_r0x00e90ccc;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x00e90ccc;
    }
  }
  uVar10 = 0;
joined_r0x00e90ccc:
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
      uVar1 = uVar10;
    }
    if (((uVar5 & 1) != 0) && (uVar1 != 0)) {
      puVar8 = (undefined8 *)plVar7[0x77];
      if (((*PTR_DAT_04bb6860 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6860), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb6858 = PTR_DAT_04bb4100 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6860);
      }
      if ((((puVar8 != (undefined8 *)0x0) &&
           (uVar5 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bb6858), (uVar5 & 1) != 0)) &&
          ((*(int *)((long)puVar8 + 0x77f4) == 0x3d || (*(int *)(puVar8 + 0xef6) == 0x3d)))) &&
         (FUN_01e7e004(puVar8,1), *(int *)(puVar8[1] + 0x750) == 0)) {
        *(uint *)(lVar9 + 0xb4) = *param_2;
      }
    }
  }
  return;
}

