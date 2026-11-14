
long FUN_01860940(void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  undefined *local_30;
  undefined *puStack_28;
  
  puVar3 = PTR_DAT_04bbe890;
  lVar7 = *(long *)PTR_DAT_04bbe890;
  if (lVar7 == 0) {
    if (((DAT_05ae7668 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05ae7668), iVar6 != 0)) {
      FUN_038e18e4(&DAT_05ae7628);
      FUN_001001d0(PTR_FUN_04bb29f8,&DAT_05ae7628,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_05ae7668);
    }
    nn::os::LockMutex((MutexType *)&DAT_05ae7648);
    if (*(long *)puVar3 == 0) {
      if (((*PTR_DAT_04bbe8a0 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbe8a0), iVar6 != 0)) {
        local_30 = PTR_DAT_04bb2020 + 0x10;
        puStack_28 = &DAT_040f9ba3;
        FUN_00c353d0(PTR_DAT_04bbe898,&local_30);
        __cxa_guard_release(PTR_DAT_04bbe8a0);
      }
      puVar4 = PTR_DAT_04bbe898;
      (**(code **)(*(long *)PTR_DAT_04bbe898 + 0x18))(PTR_DAT_04bbe898);
      puVar5 = PTR_DAT_04bbe8a8;
      pbVar8 = *(byte **)(puVar4 + 8);
      bVar2 = *pbVar8;
      if (bVar2 != 0) {
        while (bVar2 < 0x2d) {
          if ((1L << ((ulong)bVar2 & 0x3f) & 0x100100000600U) == 0) {
            if ((ulong)bVar2 == 0) goto LAB_01860a9c;
            break;
          }
          pbVar8 = pbVar8 + 1;
          bVar2 = *pbVar8;
        }
        lVar7 = 0;
        *(byte **)PTR_DAT_04bbe8a8 = pbVar8;
        for (; bVar2 = *pbVar8,
            0x3d < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x2000100000000001U) == 0;
            pbVar8 = pbVar8 + 1) {
          lVar7 = lVar7 + 1;
        }
        pbVar10 = pbVar8;
        do {
          pbVar9 = pbVar10;
          pbVar10 = pbVar9 + -1;
          bVar1 = *pbVar10;
          if (0x20 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x100000600U) == 0) break;
          lVar7 = lVar7 + -1;
        } while (0 < lVar7);
        *pbVar9 = 0;
        if (bVar2 == 0x3d) {
          lVar7 = 1;
          do {
            pbVar10 = pbVar8 + lVar7;
            lVar7 = lVar7 + 1;
          } while (0x3d < *pbVar10 || (1L << ((ulong)*pbVar10 & 0x3f) & 0x2000100000000001U) == 0);
        }
      }
LAB_01860a9c:
      *(undefined **)puVar3 = puVar5;
    }
    nn::os::UnlockMutex((MutexType *)&DAT_05ae7648);
    lVar7 = *(long *)puVar3;
  }
  return lVar7;
}

