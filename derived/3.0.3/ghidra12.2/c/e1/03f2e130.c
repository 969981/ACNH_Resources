
void FUN_03f2e130(long param_1)

{
  void *__dest;
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  char *pcVar5;
  void *__src;
  long lVar6;
  undefined8 local_c8;
  undefined1 local_45;
  
  local_45 = 0;
  lVar6 = *(long *)(param_1 + 0x10);
  __dest = (void *)((long)&local_c8 + 4);
  local_c8 = 0x2a2a2a00000080;
  if (lVar6 != 0) {
    (**(code **)(*(long *)(lVar6 + 0x360) + 0x18))(lVar6 + 0x360);
    __src = *(void **)(lVar6 + 0x368);
    if (__dest != __src) {
      (**(code **)(*(long *)(lVar6 + 0x360) + 0x18))(lVar6 + 0x360);
      lVar4 = 0;
      do {
        if (*(char *)(*(long *)(lVar6 + 0x368) + lVar4) == '\0') goto LAB_03f2e1fc;
        lVar1 = *(long *)(lVar6 + 0x368) + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_03f2e1fc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_03f2e1fc;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_03f2e1fc:
      iVar2 = (int)lVar4;
      if ((int)local_c8 <= (int)lVar4) {
        iVar2 = (int)local_c8 + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      *(undefined1 *)((long)__dest + (long)iVar2) = 0;
    }
  }
  if (*(int *)(param_1 + 0xc) != 7) {
    return;
  }
  if (*(long *)(param_1 + 0x10) == 0) {
    return;
  }
  lVar6 = *(long *)(*(long *)(param_1 + 0x10) + 0x18);
  if (lVar6 == 0) {
    return;
  }
  if ((*(byte *)(lVar6 + 0x18) >> 2 & 1) == 0) {
    return;
  }
  pcVar5 = *(char **)(*(long *)(lVar6 + 0x20) + 0x28);
  if (*pcVar5 == 'A') {
    if ((pcVar5[1] == 'u') && (pcVar5[2] == 'd')) {
      uVar3 = 0x2800;
      if ((pcVar5[3] == 'i') && (uVar3 = 0x1000, pcVar5[4] != 'o')) {
        uVar3 = 0x2800;
      }
      goto LAB_03f2e2e4;
    }
  }
  else if ((((*pcVar5 == 'S') && (pcVar5[1] == 'o')) && (pcVar5[2] == 'u')) &&
          ((pcVar5[3] == 'n' && (pcVar5[4] == 'd')))) {
    uVar3 = 0x1000;
    goto LAB_03f2e2e4;
  }
  uVar3 = 0x2800;
LAB_03f2e2e4:
  *(uint *)(DAT_05b05848 + 8) = *(uint *)(DAT_05b05848 + 8) | uVar3;
  return;
}

