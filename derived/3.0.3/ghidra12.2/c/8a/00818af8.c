
undefined8 FUN_00818af8(long param_1,uint *param_2,undefined4 param_3,int param_4)

{
  long lVar1;
  long lVar2;
  long lVar3;
  byte bVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  long *plVar8;
  undefined *local_50;
  char *pcStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  lVar1 = param_1 + 0x800;
  lVar2 = lVar1 + (ulong)*param_2 * 0x50;
  if (5 < *param_2) {
    lVar2 = lVar1;
  }
  lVar3 = lVar1 + (ulong)*param_2 * 0x50;
  if (5 < *param_2) {
    lVar3 = lVar1;
  }
  if (((*(byte *)(lVar2 + 0x18) >> 1 & 1) == 0) && (*(char *)(lVar2 + 8) == '\0')) {
    *(undefined4 *)(lVar3 + 0x48) = param_3;
    puStack_38 = (&PTR_s_Layout_ExtraResHeap_000_04917690)[(int)*param_2];
    local_50 = PTR_DAT_04bb2020 + 0x10;
    pcStack_48 = "ExtraResHeap";
    plVar8 = *(long **)(*(long *)(param_1 + 0x10) + (long)param_4 * 8);
    local_40 = local_50;
    nn::os::LockMutex((MutexType *)(plVar8 + 0x4d));
    (**(code **)(*plVar8 + 0x30))(plVar8,lVar3,&local_40,&local_50);
    nn::os::UnlockMutex((MutexType *)(plVar8 + 0x4d));
    bVar4 = *(byte *)(lVar3 + 0x18);
  }
  else {
    bVar4 = *(byte *)(lVar3 + 0x18);
  }
  if ((bVar4 >> 1 & 1) != 0) {
    uVar6 = FUN_03f2d924(lVar3 + 0x10);
    if ((uVar6 & 1) != 0) {
      puVar7 = (undefined8 *)FUN_03f2d7f0(lVar3 + 0x10);
      if (((*PTR_DAT_04bb4440 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bb4440), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bb4438 = PTR_DAT_04bb4448 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb4440);
      }
      if ((puVar7 != (undefined8 *)0x0) &&
         (uVar6 = (**(code **)*puVar7)(puVar7,PTR_DAT_04bb4438), (uVar6 & 1) != 0)) {
        return puVar7[5];
      }
    }
  }
  return 0;
}

