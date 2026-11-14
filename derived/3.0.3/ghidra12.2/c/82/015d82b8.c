
bool FUN_015d82b8(long param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  void *__s;
  void *pvVar2;
  size_t unaff_x19;
  void *unaff_x20;
  char cVar3;
  
  if (param_4 == 0) {
    cVar3 = *(char *)(param_1 + 0x16d);
    if (cVar3 == '\0') goto LAB_015d839c;
  }
  else {
    unaff_x19 = (size_t)*(uint *)(param_4 + 0x34);
    unaff_x20 = (void *)(param_4 + 0x400);
    cVar3 = *(char *)(param_1 + 0x16d);
    if (cVar3 == '\0') {
      cVar3 = '\0';
      goto LAB_015d839c;
    }
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x990));
  if (param_2 < *(uint *)(param_1 + 0x760)) {
    pvVar2 = *(void **)(*(long *)(param_1 + 0x768) + (long)(int)param_2 * 8);
  }
  else {
    pvVar2 = (void *)0x0;
  }
  *(undefined1 *)((long)pvVar2 + 0x32820) = 1;
  __s = (void *)((long)pvVar2 + (ulong)param_3 * 0x19410);
  if (1 < param_3) {
    __s = pvVar2;
  }
  memset(__s,0,0x19400);
  *(undefined4 *)((long)__s + 0x30) = 1;
  *(undefined4 *)((long)__s + 0x38) = 0xffffffff;
  *(undefined1 *)((long)__s + 0x19400) = 1;
  memcpy((void *)((long)__s + 0x400),unaff_x20,unaff_x19);
  uVar1 = (uint)unaff_x19;
  if (0x18fff < (uint)unaff_x19) {
    uVar1 = 0x19000;
  }
  *(uint *)((long)__s + 0x34) = uVar1;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x990));
LAB_015d839c:
  return cVar3 != '\0';
}

