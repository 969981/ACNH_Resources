
void FUN_0308ad80(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  ushort uVar11;
  uint uVar12;
  ulong uVar13;
  ushort local_58 [2];
  ushort local_54 [2];
  ushort local_50 [2];
  ushort local_4c [2];
  ushort local_48 [2];
  ushort local_44 [2];
  
  puVar5 = PTR_DAT_04bb3128;
  if ((*(long *)(param_1 + 0x1670) != 0) && (*(long *)(*(long *)(param_1 + 0x1670) + 0x590) != 0)) {
    uVar12 = *(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80);
    uVar11 = 0;
    if (*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) {
      uVar11 = **(ushort **)PTR_DAT_04bc3a48 & 1;
    }
    uVar10 = 0;
    if (uVar12 == 1) {
      uVar10 = (ushort)(*(long *)(*(long *)PTR_DAT_04bb27d0 + 0x28) != 0);
    }
    uVar10 = uVar10 | uVar11;
    if (1 < uVar12) {
      uVar10 = 1;
    }
    iVar9 = 4;
    if (uVar10 == 0) {
      iVar9 = 0;
    }
    if (((*PTR_DAT_04bb3128 & 1) == 0) &&
       (iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar8 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    puVar3 = PTR_DAT_04bb5ce0;
    puVar6 = PTR_DAT_04bb3170;
    puVar4 = PTR_DAT_04bb3120;
    if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
      uVar13 = 0;
      do {
        if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar13 * 4) == iVar9) goto LAB_0308ae4c;
        uVar13 = uVar13 + 1;
      } while (*(uint *)PTR_DAT_04bb3120 != uVar13);
    }
    uVar13 = 0;
LAB_0308ae4c:
    uVar12 = (uint)uVar13;
    if (*(int *)(param_1 + 0x23fc) == 4) {
      puVar3 = PTR_DAT_04bb3170;
      if (*(long *)PTR_DAT_04bb5ce0 != 0) {
        puVar3 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe5c);
      }
      FUN_007ef010(local_54,puVar3);
      if (local_54[0] == *(ushort *)puVar6) {
        FUN_007ef010(local_58,local_54);
        local_54[0] = local_58[0];
      }
      else {
        local_58[0] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0)) {
          FUN_00706e58(PTR_DAT_04bb3120);
          __cxa_guard_release(PTR_DAT_04bb3128);
        }
        if (*(uint *)puVar4 <= uVar12) {
          uVar12 = 0;
        }
        local_54[0] = local_54[0] & 0x7f |
                      (ushort)(*(int *)(*(long *)(puVar4 + 8) + (long)(int)uVar12 * 4) << 0xb);
      }
      uVar7 = FUN_03087f70(param_1,local_54);
      *(undefined4 *)(param_1 + 0x16a4) = uVar7;
    }
    else if (*(int *)(param_1 + 0x23fc) == 3) {
      puVar2 = PTR_DAT_04bb3170;
      if (*(long *)PTR_DAT_04bb5ce0 != 0) {
        puVar2 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe78);
      }
      FUN_007ef010(local_44,puVar2);
      puVar2 = puVar6;
      if (*(long *)puVar3 != 0) {
        puVar2 = (undefined *)(*(long *)puVar3 + 0xe9c);
      }
      FUN_007ef010(local_48,puVar2);
      if (local_44[0] == *(ushort *)puVar6) {
        FUN_007ef010(local_4c,local_44);
        local_44[0] = local_4c[0];
      }
      else {
        local_4c[0] = 0;
        if ((*puVar5 & 1) == 0) {
          iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128);
          if (iVar9 != 0) {
            FUN_00706e58(PTR_DAT_04bb3120);
            __cxa_guard_release(PTR_DAT_04bb3128);
          }
        }
        uVar1 = uVar12;
        if (*(uint *)puVar4 <= uVar12) {
          uVar1 = 0;
        }
        local_44[0] = local_44[0] & 0x7f |
                      (ushort)(*(int *)(*(long *)(puVar4 + 8) + (long)(int)uVar1 * 4) << 0xb);
      }
      if (local_48[0] == *(ushort *)puVar6) {
        FUN_007ef010(local_50,local_48);
        local_48[0] = local_50[0];
      }
      else {
        local_50[0] = 0;
        if (((*puVar5 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0)) {
          FUN_00706e58(PTR_DAT_04bb3120);
          __cxa_guard_release(PTR_DAT_04bb3128);
        }
        if (*(uint *)puVar4 <= uVar12) {
          uVar12 = 0;
        }
        local_48[0] = local_48[0] & 0x7f |
                      (ushort)(*(int *)(*(long *)(puVar4 + 8) + (long)(int)uVar12 * 4) << 0xb);
      }
      uVar7 = FUN_03087f70(param_1,local_44);
      *(undefined4 *)(param_1 + 0x16a4) = uVar7;
      uVar7 = FUN_03087f70(param_1,local_48);
      *(undefined4 *)(param_1 + 0x16a8) = uVar7;
    }
    FUN_03078810(param_1);
  }
  return;
}

