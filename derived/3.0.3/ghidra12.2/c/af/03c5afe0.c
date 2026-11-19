
void FUN_03c5afe0(undefined8 param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  void *__dest;
  void *__src;
  undefined1 auStack_50 [24];
  long *local_38;
  
  puVar2 = PTR_DAT_04bd3850;
  if (((*PTR_DAT_04bd3858 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bd3858), iVar3 != 0))
  {
    *(undefined ***)(puVar2 + 0x28) = &PTR_LAB_04b81850;
    *(undefined ***)puVar2 = &PTR_LAB_04b817f8;
    *(undefined ***)(puVar2 + 8) = &PTR_FUN_04b81828;
    *(undefined ***)(puVar2 + 0x48) = &PTR_LAB_04b81878;
    *(undefined ***)(puVar2 + 0x68) = &PTR_FUN_04b818a0;
    __cxa_guard_release(PTR_DAT_04bd3858);
  }
  plVar4 = (long *)(*(code *)**(undefined8 **)(puVar2 + 0x68))(puVar2 + 0x68,auStack_50);
  __dest = *(void **)(param_2 + 8);
  local_38 = plVar4;
  (**(code **)(*plVar4 + 0x18))();
  __src = (void *)plVar4[1];
  if (__dest != __src) {
    (**(code **)(*plVar4 + 0x18))(plVar4);
    lVar5 = 0;
    do {
      if (*(char *)(plVar4[1] + lVar5) == '\0') goto LAB_03c5b0ac;
      lVar1 = plVar4[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03c5b0ac;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03c5b0ac;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03c5b0ac:
    iVar3 = (int)lVar5;
    if (*(int *)(param_2 + 0x10) <= (int)lVar5) {
      iVar3 = *(int *)(param_2 + 0x10) + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  (**(code **)*local_38)();
  return;
}

