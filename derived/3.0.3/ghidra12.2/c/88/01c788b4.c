
void FUN_01c788b4(long *param_1,long param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  byte bVar5;
  
  lVar3 = *param_1;
  nn::os::LockMutex((MutexType *)(lVar3 + 0x48));
  lVar4 = *param_1;
  plVar1 = (long *)(*(int *)(lVar4 + 0x24) + param_2);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(int *)(lVar4 + 0x20) = *(int *)(lVar4 + 0x20) + -1;
  lVar4 = DAT_05351250;
  if (*(int *)(*param_1 + 0x20) == 0) {
    bVar5 = *(byte *)(DAT_05351250 + 0x1a8) & 0xef;
  }
  else {
    bVar5 = *(byte *)(DAT_05351250 + 0x1a8) | 0x10;
  }
  *(byte *)(DAT_05351250 + 0x1a8) = bVar5;
  iVar2 = 0x11;
  if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) < 0x12) {
    iVar2 = 0;
  }
  *(bool *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)iVar2 * 0x38 + 0x30) =
       bVar5 == 0 && *(char *)(lVar4 + 0x1a9) != '\0';
  nn::os::UnlockMutex((MutexType *)(lVar3 + 0x48));
  return;
}

