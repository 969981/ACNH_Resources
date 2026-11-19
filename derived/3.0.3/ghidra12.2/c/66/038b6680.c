
undefined8 FUN_038b6680(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *__dest;
  void *__src;
  long lVar4;
  undefined *local_50;
  char *local_48;
  
  if ((int)param_1[2] < 1) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  else {
    *(undefined1 *)param_1[1] = 0;
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = ":";
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar3 = 0;
  while (*(char *)(param_2[1] + lVar3) != '\0') {
    lVar4 = param_2[1] + lVar3;
    if (*(char *)(lVar4 + 1) == '\0') {
      lVar3 = lVar3 + 1;
      break;
    }
    if (*(char *)(lVar4 + 2) == '\0') {
      lVar3 = lVar3 + 2;
      iVar2 = (int)lVar3;
      goto joined_r0x038b6734;
    }
    lVar3 = lVar3 + 3;
    if (lVar3 == 0x80001) {
      return 0;
    }
  }
  iVar2 = (int)lVar3;
joined_r0x038b6734:
  if (iVar2 < 1) {
    return 0;
  }
  lVar4 = 0;
  while( true ) {
    lVar1 = param_2[1];
    (**(code **)(local_50 + 0x18))(&local_50);
    if (((char *)(lVar1 + lVar4) == local_48) || (*(char *)(lVar1 + lVar4) == *local_48)) break;
    lVar4 = lVar4 + 1;
    if (lVar3 == lVar4) {
      return 0;
    }
  }
  if ((int)lVar4 == -1) {
    return 0;
  }
  __dest = (void *)param_1[1];
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest == __src) {
    return 1;
  }
  if ((int)lVar4 < 0) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_038b67c0;
      lVar3 = param_2[1] + lVar4;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_038b67c0;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_038b67c0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
  }
LAB_038b67c0:
  iVar2 = (int)lVar4;
  if ((int)param_1[2] <= (int)lVar4) {
    iVar2 = (int)param_1[2] + -1;
  }
  memcpy(__dest,__src,(long)iVar2);
  *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  return 1;
}

