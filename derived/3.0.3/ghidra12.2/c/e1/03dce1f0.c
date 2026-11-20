
void FUN_03dce1f0(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  void *__dest;
  char local_44 [31];
  undefined1 local_25;
  
  local_44[0] = '\0';
  __dest = *(void **)(param_2 + 8);
  lVar2 = 0;
  local_25 = 0;
  do {
    if (local_44[lVar2] == '\0') goto LAB_03dce260;
    if (local_44[lVar2 + 1] == '\0') {
      lVar2 = lVar2 + 1;
      goto LAB_03dce260;
    }
    if (local_44[lVar2 + 2] == '\0') {
      lVar2 = lVar2 + 2;
      goto LAB_03dce260;
    }
    lVar2 = lVar2 + 3;
  } while (lVar2 != 0x80001);
  lVar2 = 0;
LAB_03dce260:
  iVar1 = (int)lVar2;
  if (*(int *)(param_2 + 0x10) <= (int)lVar2) {
    iVar1 = *(int *)(param_2 + 0x10) + -1;
  }
  memcpy(__dest,local_44,(long)iVar1);
  *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  return;
}

