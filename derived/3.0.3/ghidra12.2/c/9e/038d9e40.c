
void FUN_038d9e40(long param_1,long param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  char *pcVar4;
  long lVar5;
  void *__dest;
  undefined *puVar6;
  void *__src;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  (**(code **)(*param_3 + 0x18))(param_3);
  puVar6 = (undefined *)param_3[1];
  (**(code **)(PTR_PTR_04c4b980 + 0x18))(&PTR_PTR_04c4b980);
  if (puVar6 != PTR_DAT_04c4b988) {
    pcVar4 = (char *)param_3[1];
    if (*pcVar4 == *PTR_DAT_04c4b988) {
      if (*pcVar4 != '\0') {
        lVar5 = 0;
        do {
          if (lVar5 == 0x80000) goto LAB_038d9f04;
          if (pcVar4[lVar5 + 1] != PTR_DAT_04c4b988[lVar5 + 1]) goto LAB_038d9f04;
          if (pcVar4[lVar5 + 1] == '\0') break;
          lVar1 = lVar5 + 2;
          if (pcVar4[lVar1] != PTR_DAT_04c4b988[lVar5 + 2]) goto LAB_038d9f04;
          lVar5 = lVar5 + 2;
        } while (pcVar4[lVar1] != '\0');
      }
    }
    else {
LAB_038d9f04:
      __dest = *(void **)(param_2 + 0x48);
      (**(code **)(*param_3 + 0x18))(param_3);
      __src = (void *)param_3[1];
      if (__dest != __src) {
        (**(code **)(*param_3 + 0x18))(param_3);
        lVar5 = 0;
        do {
          if (*(char *)(param_3[1] + lVar5) == '\0') goto LAB_038d9f80;
          lVar1 = param_3[1] + lVar5;
          if (*(char *)(lVar1 + 1) == '\0') {
            lVar5 = lVar5 + 1;
            goto LAB_038d9f80;
          }
          if (*(char *)(lVar1 + 2) == '\0') {
            lVar5 = lVar5 + 2;
            goto LAB_038d9f80;
          }
          lVar5 = lVar5 + 3;
        } while (lVar5 != 0x80001);
        lVar5 = 0;
LAB_038d9f80:
        iVar2 = (int)lVar5;
        if (*(int *)(param_2 + 0x50) <= (int)lVar5) {
          iVar2 = *(int *)(param_2 + 0x50) + -1;
        }
        memcpy(__dest,__src,(long)iVar2);
        *(undefined1 *)((long)__dest + (long)iVar2) = 0;
      }
    }
  }
  plVar3 = (long *)0x0;
  if (param_2 != 0) {
    plVar3 = (long *)(param_2 + 0x20);
  }
  lVar5 = plVar3[3];
  if (lVar5 != 0) {
    plVar3[3] = 0;
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar5 + 0x10) = *(int *)(lVar5 + 0x10) + -1;
  }
  plVar3[3] = param_1 + 0x18;
  lVar5 = *(long *)(param_1 + 0x18);
  *(long **)(param_1 + 0x18) = plVar3;
  *plVar3 = lVar5;
  plVar3[1] = param_1 + 0x18;
  if (lVar5 != 0) {
    *(long **)(lVar5 + 8) = plVar3;
  }
  *(int *)(param_1 + 0x28) = *(int *)(param_1 + 0x28) + 1;
  return;
}

