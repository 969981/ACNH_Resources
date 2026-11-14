
/* WARNING: Type propagation algorithm not settling */

bool FUN_014f1918(undefined8 param_1,long param_2,uint *param_3,long param_4)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  uint uVar9;
  undefined8 *puVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined8 local_58;
  
  puVar3 = PTR_DAT_04bb27c0;
  uVar9 = *param_3;
  if (uVar9 == 0) {
    return false;
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return false;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) + ((ulong)(uVar9 >> 0x11) & 0x7ff8));
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != uVar9)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar9 = 1;
      goto joined_r0x014f19f0;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x014f19f0;
    }
  }
  uVar9 = 0;
joined_r0x014f19f0:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar7 == 1) {
      uVar1 = uVar9;
    }
    if ((uVar6 & 1) == 0) {
      return false;
    }
    if (uVar1 == 0) {
      return false;
    }
    puVar10 = (undefined8 *)plVar8[0x77];
    if (((*PTR_DAT_04bb6728 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb6728), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb6720 = PTR_DAT_04bb4100 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6728);
    }
    if ((puVar10 != (undefined8 *)0x0) &&
       (uVar6 = (**(code **)*puVar10)(puVar10,PTR_DAT_04bb6720), (uVar6 & 1) != 0)) {
      iVar12 = *(int *)(param_4 + 0x20);
      iVar13 = *(int *)(param_4 + 0x24);
      iVar4 = *(int *)(param_4 + 0x10);
      iVar11 = *(int *)(param_4 + 0x14);
      uVar2 = *(undefined4 *)(plVar8[0xd] + 0x2b4);
      if (*(int *)(puVar10[1] + 0x750) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = (uint)(*(int *)(puVar10[1] + 0x750) != 2);
      }
      local_58 = 0x2b56;
      FUN_0277d4ac(&local_58);
      *(float *)(param_2 + 0x28) = ((float)iVar4 * 5.0 + (float)iVar12 * 5.0 + 5.0) * 0.5;
      *(undefined4 *)(param_2 + 0x2c) = 0;
      *(float *)(param_2 + 0x30) = ((float)iVar11 * 5.0 + (float)iVar13 * 5.0 + 5.0) * 0.5;
      *(undefined4 *)(param_2 + 0x34) = uVar2;
      *(uint *)(param_2 + 0x38) = uVar9;
      *(undefined4 *)(param_2 + 0x60) = (undefined4)local_58;
      *(undefined4 *)(param_2 + 100) = local_58._4_4_;
      *(uint *)(param_2 + 0x8c) = *param_3;
      *(undefined4 *)(param_2 + 0x18) = 3;
      return *(int *)(param_2 + 0x18) != 0;
    }
  }
  return false;
}

