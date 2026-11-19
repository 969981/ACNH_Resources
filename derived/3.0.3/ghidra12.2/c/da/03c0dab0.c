
void _INIT_8642(void)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  DAT_05aec688 = 0;
  DAT_05aec690 = 0;
  DAT_05aec678 = PTR_DAT_04bd0d40 + 0x10;
  DAT_05aec680 = 0;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar3 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,&DAT_05aec678);
    DAT_05aec680 = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar5 = (long *)(lVar3 + 0x70);
      lVar4 = *plVar5;
      iVar2 = *(int *)(lVar3 + 0x84);
      plVar1 = (long *)((long)&DAT_05aec678 + (long)iVar2);
      *plVar5 = (long)plVar1;
      *plVar1 = lVar4;
      *(long **)((long)&DAT_05aec680 + (long)iVar2) = plVar5;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar1;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  DAT_05aec698 = 0;
  DAT_05aec6a0 = 0;
  DAT_05aec6a8 = &DAT_05aec678;
  DAT_05aec6b0 = 0;
  DAT_05aec6b8 = &PTR_LAB_04b7cc80;
  DAT_05aec6c0 = &DAT_05aec678;
  DAT_05aec678 = PTR_DAT_04bd2d50 + 0x10;
  DAT_05aec6d8 = PTR_DAT_04bd0b58 + 0x10;
  DAT_05aec6e0 = &DAT_05aec6e0;
  DAT_05aec6e8 = &DAT_05aec6e0;
  DAT_05aec6c8 = &LAB_03c0d730;
  DAT_05aec6f0 = 0;
  DAT_05aec6d0 = 0;
  FUN_001001d0(&LAB_03c0d8f0,&DAT_05aec678,&__DT_FINI_ARRAY);
  return;
}

