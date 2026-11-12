
long FUN_007c3ad0(void)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  long lVar7;
  byte *pbVar8;
  uint uVar9;
  long lVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined *local_30;
  char *pcStack_28;
  
  puVar3 = PTR_DAT_04bb4610;
  lVar7 = *(long *)PTR_DAT_04bb4610;
  if (lVar7 == 0) {
    if (((DAT_05ae7668 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05ae7668), iVar6 != 0)) {
      FUN_038e18e4(&DAT_05ae7628);
      FUN_001001d0(PTR_FUN_04bb29f8,&DAT_05ae7628,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_05ae7668);
    }
    nn::os::LockMutex((MutexType *)&DAT_05ae7648);
    if (*(long *)puVar3 == 0) {
      if (((*PTR_DAT_04bb4620 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb4620), iVar6 != 0)) {
        local_30 = PTR_DAT_04bb2020 + 0x10;
        pcStack_28 = 
        "GulCollapsed , GstSurprised , DodWireless , DodRoger , TkkEh , TkkNodding , TkkQuestionMark , OtgHappy , OtgPretty , MncHappy , ManHappy , MncHappyS"
        ;
        FUN_007c3d10(PTR_DAT_04bb4618,&local_30);
        __cxa_guard_release(PTR_DAT_04bb4620);
      }
      puVar4 = PTR_DAT_04bb4618;
      (**(code **)(*(long *)PTR_DAT_04bb4618 + 0x18))(PTR_DAT_04bb4618);
      puVar5 = PTR_DAT_04bb4628;
      pbVar8 = *(byte **)(puVar4 + 8);
      uVar9 = (uint)*pbVar8;
      if (*pbVar8 != 0) {
        lVar7 = 0;
joined_r0x007c3b7c:
        do {
          if (uVar9 < 0x2d) {
            if ((1L << ((ulong)uVar9 & 0x3f) & 0x100100000600U) != 0) {
              pbVar8 = pbVar8 + 1;
              uVar9 = (uint)*pbVar8;
              goto joined_r0x007c3b7c;
            }
            if ((ulong)uVar9 == 0) break;
          }
          lVar10 = 0;
          *(byte **)(puVar5 + lVar7 * 8) = pbVar8;
          lVar7 = lVar7 + 1;
          for (; bVar2 = *pbVar8,
              0x3d < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x2000100000000001U) == 0;
              pbVar8 = pbVar8 + 1) {
            lVar10 = lVar10 + 1;
          }
          pbVar12 = pbVar8;
          do {
            pbVar11 = pbVar12;
            pbVar12 = pbVar11 + -1;
            bVar1 = *pbVar12;
            if (0x20 < bVar1 || (1L << ((ulong)bVar1 & 0x3f) & 0x100000600U) == 0) break;
            lVar10 = lVar10 + -1;
          } while (0 < lVar10);
          *pbVar11 = 0;
          if (bVar2 == 0x3d) {
            do {
              pbVar8 = pbVar8 + 1;
              bVar2 = *pbVar8;
            } while (0x3d < bVar2 || (1L << ((ulong)bVar2 & 0x3f) & 0x2000100000000001U) == 0);
          }
          if ((bVar2 == 0) || (0xb < (int)lVar7)) break;
          pbVar8 = pbVar8 + 1;
          uVar9 = (uint)*pbVar8;
          if (uVar9 == 0) break;
        } while( true );
      }
      *(undefined **)puVar3 = puVar5;
    }
    nn::os::UnlockMutex((MutexType *)&DAT_05ae7648);
    lVar7 = *(long *)puVar3;
  }
  return lVar7;
}

