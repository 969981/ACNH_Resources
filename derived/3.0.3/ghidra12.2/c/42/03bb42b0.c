
void _INIT_8619(void)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  DAT_05aec020 = PTR_DAT_04bb2020 + 0x10;
  DAT_05aec050 = 0;
  DAT_05aec058 = 0;
  DAT_05aec028 = "Default";
  DAT_05aec060 = &DAT_05aec030;
  DAT_05aec068 = 0;
  DAT_05aec030 = PTR_DAT_04bd0d40 + 0x10;
  DAT_05aec038 = 0;
  DAT_05aec040 = 0;
  DAT_05aec048 = 0;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar3 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,&DAT_05aec030);
    DAT_05aec038 = lVar3;
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
      plVar1 = (long *)((long)&DAT_05aec030 + (long)iVar2);
      *plVar5 = (long)plVar1;
      *plVar1 = lVar4;
      *(long **)((long)&DAT_05aec038 + (long)iVar2) = plVar5;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar1;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  DAT_05aec084 = 0;
  DAT_05aec080 = 0x20;
  DAT_05aec0a3 = 0;
  DAT_05aec070 = PTR_DAT_04bb2028 + 0x10;
  DAT_05aec078 = &DAT_05aec084;
  DAT_05aec030 = PTR_DAT_04bbd640 + 0x10;
  FUN_001001d0(PTR_FUN_04bb4ac8,&DAT_05aec030,&__DT_FINI_ARRAY);
  return;
}

