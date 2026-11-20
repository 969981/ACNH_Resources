
void FUN_03dd5d80(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  void *__dest;
  char local_234 [511];
  undefined1 local_35;
  
  local_234[0] = '\0';
  __dest = *(void **)(param_2 + 8);
  lVar2 = 0;
  local_35 = 0;
  do {
    if (local_234[lVar2] == '\0') goto LAB_03dd5dfc;
    if (local_234[lVar2 + 1] == '\0') {
      lVar2 = lVar2 + 1;
      goto LAB_03dd5dfc;
    }
    if (local_234[lVar2 + 2] == '\0') {
      lVar2 = lVar2 + 2;
      goto LAB_03dd5dfc;
    }
    lVar2 = lVar2 + 3;
  } while (lVar2 != 0x80001);
  lVar2 = 0;
LAB_03dd5dfc:
  iVar1 = (int)lVar2;
  if (*(int *)(param_2 + 0x10) <= (int)lVar2) {
    iVar1 = *(int *)(param_2 + 0x10) + -1;
  }
  memcpy(__dest,local_234,(long)iVar1);
  *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  return;
}

