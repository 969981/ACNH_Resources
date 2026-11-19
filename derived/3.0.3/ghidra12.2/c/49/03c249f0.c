
void FUN_03c249f0(long param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  undefined8 *__src;
  size_t __n;
  undefined8 *__dest;
  long lVar3;
  long *plVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined *local_60;
  char *local_58;
  
  lVar3 = *(long *)(param_2 + 0x20);
  local_60 = PTR_DAT_04bb2020 + 0x10;
  local_58 = ":";
  (**(code **)(*(long *)(lVar3 + 0x20) + 0x18))();
  lVar7 = 0;
  do {
    if (*(char *)(*(long *)(lVar3 + 0x28) + lVar7) == '\0') {
LAB_03c24a80:
      iVar5 = (int)lVar7;
joined_r0x03c24a84:
      if (0 < iVar5) {
        lVar6 = 0;
        goto LAB_03c24aa0;
      }
      break;
    }
    lVar6 = *(long *)(lVar3 + 0x28) + lVar7;
    if (*(char *)(lVar6 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03c24a80;
    }
    if (*(char *)(lVar6 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      iVar5 = (int)lVar7;
      goto joined_r0x03c24a84;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  goto LAB_03c24b40;
  while( true ) {
    lVar2 = lVar3 + lVar7;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03c24ba8;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_03c24ba8;
    }
    lVar7 = lVar7 + 3;
    if (lVar7 == 0x80001) break;
LAB_03c24b10:
    if (*(char *)(lVar3 + lVar7) == '\0') {
LAB_03c24ba8:
      if ((int)lVar7 + -1 == iVar5) goto LAB_03c24b40;
      goto LAB_03c24bb4;
    }
  }
  if (iVar5 == -1) goto LAB_03c24b40;
LAB_03c24bb4:
  lVar7 = *(long *)(param_2 + 0x20);
  plVar4 = (long *)(lVar7 + 0x20);
  (**(code **)(*plVar4 + 0x18))(plVar4);
  lVar3 = *(long *)(lVar7 + 0x28);
  lVar7 = 0;
  do {
    if (*(char *)(lVar3 + lVar7) == '\0') goto LAB_03c24c0c;
    if (*(char *)(lVar3 + lVar7 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03c24c0c;
    }
    if (*(char *)(lVar3 + lVar7 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_03c24c0c;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_03c24c0c:
  __dest = *(undefined8 **)(param_1 + 0x358);
  __src = *(undefined8 **)(PTR_PTR_04bb2238 + 8);
  if (iVar5 < (int)lVar7) {
    __src = (undefined8 *)(lVar3 + lVar6 + 1);
  }
  if (__dest == __src) {
    return;
  }
  lVar7 = 0;
  do {
    if (*(char *)((long)__src + lVar7) == '\0') goto LAB_03c24c70;
    if (*(char *)((long)__src + lVar7 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03c24c70;
    }
    if (*(char *)((long)__src + lVar7 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_03c24c70;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_03c24c70:
  iVar5 = (int)lVar7;
  if (*(int *)(param_1 + 0x360) <= (int)lVar7) {
    iVar5 = *(int *)(param_1 + 0x360) + -1;
  }
  __n = (size_t)iVar5;
  memcpy(__dest,__src,__n);
  goto LAB_03c24b78;
  while (lVar6 = lVar6 + 1, lVar7 != lVar6) {
LAB_03c24aa0:
    pcVar1 = (char *)(*(long *)(lVar3 + 0x28) + lVar6);
    (**(code **)(local_60 + 0x18))(&local_60);
    if ((pcVar1 == local_58) || (*pcVar1 == *local_58)) {
      iVar5 = (int)lVar6;
      if (0 < iVar5) {
        lVar7 = *(long *)(param_2 + 0x20);
        plVar4 = (long *)(lVar7 + 0x20);
        (**(code **)(*plVar4 + 0x18))(plVar4);
        lVar3 = *(long *)(lVar7 + 0x28);
        lVar7 = 0;
        goto LAB_03c24b10;
      }
      break;
    }
  }
LAB_03c24b40:
  __dest = *(undefined8 **)(param_1 + 0x358);
  if (__dest != &DAT_0407ebb1) {
    iVar5 = 0;
    if (*(int *)(param_1 + 0x360) < 1) {
      iVar5 = *(int *)(param_1 + 0x360) + -1;
    }
    __n = (size_t)iVar5;
    memset(__dest,0,__n);
LAB_03c24b78:
    *(undefined1 *)((long)__dest + __n) = 0;
  }
  return;
}

