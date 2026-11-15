
void FUN_0202e1d0(long param_1)

{
  void *__dest;
  long lVar1;
  int iVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  void *__src;
  int *piVar6;
  undefined *local_70;
  void *pvStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined5 local_50;
  undefined3 uStack_4b;
  undefined5 uStack_48;
  undefined1 local_43;
  undefined2 uStack_42;
  undefined4 local_24;
  
  puVar3 = PTR_DAT_04bb29d0;
  piVar6 = *(int **)PTR_DAT_04bb47d0;
  if (piVar6 != (int *)0x0) {
    if (*piVar6 != 0 || piVar6[2] != 0) {
      do {
        nn::os::ConvertToTimeSpan(*(long *)puVar3 / 100);
        nn::os::SleepThread();
      } while (*piVar6 != 0 || piVar6[2] != 0);
    }
    puVar3 = PTR_PTR_04bb2238;
    local_24 = 0;
    __dest = (void *)((long)&local_60 + 4);
    uStack_58 = 0;
    local_60 = 8;
    local_50 = 0;
    uStack_4b = 0;
    uStack_48 = 0;
    local_43 = 0;
    uStack_42 = 0;
    local_70 = PTR_DAT_04bb6a30 + 0x10;
    pvStack_68 = __dest;
    (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
    __src = *(void **)(puVar3 + 8);
    if (__dest != __src) {
      (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
      lVar5 = 0;
      do {
        if (*(char *)(*(long *)(puVar3 + 8) + lVar5) == '\0') goto LAB_0202e2fc;
        lVar1 = *(long *)(puVar3 + 8) + lVar5;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar5 = lVar5 + 1;
          goto LAB_0202e2fc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar5 = lVar5 + 2;
          goto LAB_0202e2fc;
        }
        lVar5 = lVar5 + 3;
      } while (lVar5 != 0x80001);
      lVar5 = 0;
LAB_0202e2fc:
      iVar2 = (int)lVar5;
      if ((int)local_60 <= (int)lVar5) {
        iVar2 = (int)local_60 + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      *(undefined1 *)((long)__dest + (long)iVar2) = 0;
    }
    local_50 = 0;
    uStack_4b = 0;
    uStack_48 = 0;
    local_70 = PTR_DAT_04bb3768 + 0x10;
    local_43 = 0xff;
    uVar4 = FUN_02042ba0(param_1,&local_24,&local_70);
    puVar3 = PTR_DAT_04bb29d0;
    if (((uVar4 & 1) != 0) && (*piVar6 == *(int *)(param_1 + 0x230))) {
      iVar2 = piVar6[2];
      while (iVar2 != 2) {
        nn::os::ConvertToTimeSpan(*(long *)puVar3 / 100);
        nn::os::SleepThread();
        iVar2 = piVar6[2];
      }
    }
  }
  return;
}

