
void FUN_0253b9d0(byte *param_1)

{
  byte bVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  ushort uVar7;
  ulong uVar8;
  ushort local_16e4 [2];
  undefined *local_16e0;
  char *local_16d8;
  long lStack_16d0;
  ushort local_28;
  undefined1 auStack_26 [2];
  byte local_24 [2];
  undefined1 auStack_22 [2];
  
  local_24[0] = *param_1;
  if (7 < local_24[0]) {
    local_24[0] = 0xff;
  }
  FUN_0266aaf0(local_24);
  if ((((*param_1 < 8) && (uVar5 = FUN_02582d8c(param_1,1), uVar5 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d6) != '\0')) {
    local_16e0 = PTR_DAT_04bb2020 + 0x10;
    local_16d8 = "HotelIsRentalFromOtherIsland";
    FUN_0274bfe8(param_1,&local_16e0,0);
  }
  puVar3 = PTR_DAT_04bb3128;
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0))
  {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  puVar2 = PTR_DAT_04bb3120;
  if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
    uVar8 = 0;
    do {
      if (*(int *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar8 * 4) == 0x19) goto LAB_0253badc;
      uVar8 = uVar8 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar8);
  }
  uVar8 = 0;
LAB_0253badc:
  bVar1 = *param_1;
  local_28 = 0;
  uVar7 = bVar1 & 0x7f;
  if ((*puVar3 & 1) == 0) {
    iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    if (iVar6 != 0) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
  }
  uVar5 = (uint)uVar8;
  if (*(uint *)puVar2 <= uVar5) {
    uVar5 = 0;
  }
  if (7 < bVar1) {
    uVar7 = 0x7f;
  }
  local_28 = uVar7 | (ushort)(*(int *)(*(long *)(puVar2 + 8) + (long)(int)uVar5 * 4) << 0xb) | 0x100
  ;
  FUN_007ef010(auStack_22,&local_28);
  FUN_007e4920(&local_16e0,auStack_22);
  puVar4 = PTR_DAT_04bb3170;
  if (((short)local_16e0 != *(short *)PTR_DAT_04bb3170) &&
     (lStack_16d0 != 0 || local_16d8 != (char *)0x0)) {
    FUN_007e80d0(&local_16e0);
  }
  if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  if (0 < (int)*(uint *)puVar2) {
    uVar8 = 0;
    do {
      if (*(int *)(*(long *)(puVar2 + 8) + uVar8 * 4) == 0x19) goto LAB_0253bb9c;
      uVar8 = uVar8 + 1;
    } while (*(uint *)puVar2 != uVar8);
  }
  uVar8 = 0;
LAB_0253bb9c:
  local_16e4[0] = 0;
  bVar1 = *param_1;
  if (((*puVar3 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar5 = (uint)uVar8;
  if (*(uint *)puVar2 <= uVar5) {
    uVar5 = 0;
  }
  uVar7 = (ushort)bVar1;
  if (7 < bVar1) {
    uVar7 = 0x7f;
  }
  local_16e4[0] =
       uVar7 | (ushort)(*(int *)(*(long *)(puVar2 + 8) + (long)(int)uVar5 * 4) << 0xb) | 0x180;
  FUN_007ef010(auStack_26,local_16e4);
  FUN_007e4920(&local_16e0,auStack_26);
  if (((short)local_16e0 != *(short *)puVar4) && (lStack_16d0 != 0 || local_16d8 != (char *)0x0)) {
    FUN_007e80d0(&local_16e0);
  }
  return;
}

