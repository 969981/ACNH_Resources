
void FUN_020f0980(char *param_1)

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
  long lVar10;
  uint local_5c;
  undefined8 local_58;
  uint *local_50;
  uint *local_48;
  uint local_34;
  
  local_34 = 0;
  local_5c = (uint)*param_1;
  lVar6 = *(long *)PTR_DAT_04bb3968;
  if (lVar6 != 0) {
    local_50 = &local_5c;
    local_58 = &PTR_FUN_04a770e0;
    local_48 = &local_34;
    if (*(int *)(lVar6 + 0xb88) != 0) {
      lVar10 = (long)*(int *)(lVar6 + 0xb88) << 3;
      puVar8 = *(undefined8 **)(lVar6 + 0xb90);
      do {
        (*(code *)*local_58)(&local_58,*puVar8);
        lVar10 = lVar10 + -8;
        puVar8 = puVar8 + 1;
      } while (lVar10 != 0);
    }
  }
  puVar2 = PTR_DAT_04bb27c0;
  local_58 = (undefined **)CONCAT44((float)(int)param_1[5],(float)(int)*(short *)(param_1 + 6));
  local_50 = (uint *)CONCAT44(local_50._4_4_,(float)(int)*(short *)(param_1 + 8));
  if ((local_34 == 0) || (lVar6 = *(long *)PTR_DAT_04bb27c0, lVar6 == 0)) goto LAB_020f0b78;
  plVar7 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + (ulong)(local_34 >> 0x14) * 8);
  if ((plVar7 == (long *)0x0) ||
     (((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar7 + 0x46) != local_34)))) {
    plVar7 = (long *)0x0;
  }
  if ((*(int *)(lVar6 + 0x288) == 1) || (*(int *)(lVar6 + 0x288) == -1)) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
    }
    else {
      if (4 < *(uint *)(lVar6 + 0x5e8)) goto LAB_020f0ac8;
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_020f0ac8:
    uVar9 = 0;
  }
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
      if (((*PTR_DAT_04bb6a70 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb6a70), iVar3 != 0)) {
        *(undefined **)PTR_DAT_04bb6a68 = PTR_DAT_04bb4100 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb6a70);
      }
      if ((puVar8 != (undefined8 *)0x0) &&
         (uVar5 = (**(code **)*puVar8)(puVar8,PTR_DAT_04bb6a68), (uVar5 & 1) != 0)) {
        FUN_01ecaff0(puVar8,(long)param_1[1],param_1[2] != '\0',(long)param_1[3],(long)param_1[4],
                     &local_58,param_1 + 0xc);
      }
    }
  }
LAB_020f0b78:
  if ((local_5c < 10) && ((&DAT_053fee41)[(ulong)local_5c * 0xba0] != '\0')) {
    FUN_0219f190(&DAT_053fe348 + (ulong)local_5c * 0xba0,(long)param_1[1],param_1[2] != '\0',
                 (long)param_1[3],(long)param_1[4],&local_58,param_1 + 0xc);
  }
  return;
}

