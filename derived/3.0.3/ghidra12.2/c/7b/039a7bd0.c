
long FUN_039a7bd0(long *param_1,undefined4 *param_2,long *param_3)

{
  int iVar1;
  char cVar2;
  byte bVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  void *__dest;
  void *__src;
  
  plVar5 = param_3;
  if (param_3 == (long *)0x0) {
    lVar7 = *(long *)PTR_DAT_04bb2698;
    lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar5 = (long *)(lVar7 + 8);
    if (lVar4 != 0) {
      plVar5 = (long *)(lVar4 + 0xa8);
    }
    plVar5 = (long *)*plVar5;
  }
  lVar4 = (**(code **)(*plVar5 + 0x30))(plVar5,0x2a8,8);
  if (lVar4 != 0) {
    FUN_039a8410(lVar4);
    *(undefined8 *)(lVar4 + 0x90) = *(undefined8 *)(param_2 + 4);
    bVar3 = *(byte *)(lVar4 + 0x280) & 0xfd | *(char *)((long)param_2 + 9) << 1;
    *(byte *)(lVar4 + 0x280) = bVar3;
    bVar3 = bVar3 & 0xfb | *(char *)((long)param_2 + 10) << 2;
    *(byte *)(lVar4 + 0x280) = bVar3;
    *(byte *)(lVar4 + 0x280) = bVar3 & 0xdf | *(char *)((long)param_2 + 0xb) << 5;
    FUN_039a7df0(lVar4,*param_2,param_2[1],param_3);
    __dest = *(void **)(lVar4 + 0xb0);
    (**(code **)(*param_1 + 0x18))(param_1);
    __src = (void *)param_1[1];
    if (__dest != __src) {
      (**(code **)(*param_1 + 0x18))(param_1);
      lVar7 = 0;
      do {
        if (*(char *)(param_1[1] + lVar7) == '\0') goto LAB_039a7d1c;
        lVar6 = param_1[1] + lVar7;
        if (*(char *)(lVar6 + 1) == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_039a7d1c;
        }
        if (*(char *)(lVar6 + 2) == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_039a7d1c;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_039a7d1c:
      iVar1 = (int)lVar7;
      if (*(int *)(lVar4 + 0xb8) <= (int)lVar7) {
        iVar1 = *(int *)(lVar4 + 0xb8) + -1;
      }
      memcpy(__dest,__src,(long)iVar1);
      *(undefined1 *)((long)__dest + (long)iVar1) = 0;
    }
    cVar2 = *(char *)(param_2 + 2);
    lVar7 = *(long *)PTR_DAT_04bbdcb8;
    nn::os::LockMutex((MutexType *)(lVar7 + 0x138));
    iVar1 = *(int *)(lVar7 + 0x238);
    *(int *)(lVar7 + 0x238) = iVar1 + 1;
    *(int *)(lVar4 + 0x2a0) = iVar1;
    if (cVar2 != '\0') {
      FUN_039cc3a0(lVar7,lVar4);
    }
    plVar5 = (long *)(*(int *)(lVar7 + 0x16c) + lVar4);
    lVar6 = *(long *)(lVar7 + 0x158);
    *(long **)(lVar7 + 0x158) = plVar5;
    *plVar5 = lVar6;
    plVar5[1] = lVar7 + 0x158;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar5;
    }
    plVar5 = *(long **)(lVar7 + 0x48);
    *(int *)(lVar7 + 0x168) = *(int *)(lVar7 + 0x168) + 1;
    if (plVar5 != (long *)0x0) {
      (**(code **)(*plVar5 + 0x10))(plVar5,lVar4,param_3);
    }
    nn::os::UnlockMutex((MutexType *)(lVar7 + 0x138));
  }
  return lVar4;
}

