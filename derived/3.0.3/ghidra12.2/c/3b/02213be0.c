
undefined8 FUN_02213be0(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  void *__dest;
  undefined *local_40;
  char *pcStack_38;
  undefined2 local_2c;
  char local_2a [5];
  undefined1 local_25;
  
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "SNPCAppearCtrl";
  iVar1 = FUN_02758850(&local_40);
  if (iVar1 == 3) {
    local_2a[0] = 'o';
    local_2c = 0x6c73;
  }
  else {
    if (iVar1 != 2) {
      return 0;
    }
    local_2a[0] = 'm';
    local_2c = 0x6863;
  }
  __dest = *(void **)(param_2 + 8);
  lVar2 = 0;
  local_2a[1] = 0;
  local_25 = 0;
  do {
    if (local_2a[lVar2 + -2] == '\0') goto LAB_02213cb4;
    if (local_2a[lVar2 + -1] == '\0') {
      lVar2 = lVar2 + 1;
      goto LAB_02213cb4;
    }
    if (local_2a[lVar2] == '\0') {
      lVar2 = lVar2 + 2;
      goto LAB_02213cb4;
    }
    lVar2 = lVar2 + 3;
  } while (lVar2 != 0x80001);
  lVar2 = 0;
LAB_02213cb4:
  iVar1 = (int)lVar2;
  if (*(int *)(param_2 + 0x10) <= (int)lVar2) {
    iVar1 = *(int *)(param_2 + 0x10) + -1;
  }
  memcpy(__dest,&local_2c,(long)iVar1);
  *(undefined1 *)((long)__dest + (long)iVar1) = 0;
  return 1;
}

