
undefined8
FUN_01e5ab70(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,undefined4 param_5)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  void *__dest;
  void *__src;
  
  FUN_01e5a930(0x40000000,param_1,4,&DAT_0419b56c,param_2,param_3,&DAT_04178e00,param_5);
  if ((*(char *)param_4[1] == '\0') && (*(int *)(param_1 + 0x570) != 0)) {
    iVar3 = *(int *)(param_1 + 0x570);
    __dest = *(void **)(param_1 + 0x3b8);
    plVar1 = &DAT_05390480 + (long)iVar3 * 2;
    (**(code **)(*plVar1 + 0x18))(plVar1);
    __src = (void *)(&DAT_05390488)[(long)iVar3 * 2];
    if (__dest == __src) {
      return 1;
    }
    (**(code **)(*plVar1 + 0x18))(plVar1);
    lVar5 = (&DAT_05390488)[(long)iVar3 * 2];
    lVar4 = 0;
    do {
      if (*(char *)(lVar5 + lVar4) == '\0') goto LAB_01e5acd0;
      lVar2 = lVar5 + lVar4;
      if (*(char *)(lVar2 + 1) == '\0') goto LAB_01e5acc4;
      if (*(char *)(lVar2 + 2) == '\0') goto LAB_01e5accc;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  else {
    __dest = *(void **)(param_1 + 0x3b8);
    (**(code **)(*param_4 + 0x18))(param_4);
    __src = (void *)param_4[1];
    if (__dest == __src) {
      return 1;
    }
    (**(code **)(*param_4 + 0x18))(param_4);
    lVar4 = 0;
    do {
      if (*(char *)(param_4[1] + lVar4) == '\0') goto LAB_01e5acd0;
      lVar5 = param_4[1] + lVar4;
      if (*(char *)(lVar5 + 1) == '\0') goto LAB_01e5acc4;
      if (*(char *)(lVar5 + 2) == '\0') goto LAB_01e5accc;
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
  }
  lVar4 = 0;
LAB_01e5acd0:
  iVar3 = (int)lVar4;
  if (*(int *)(param_1 + 0x3c0) <= (int)lVar4) {
    iVar3 = *(int *)(param_1 + 0x3c0) + -1;
  }
  memcpy(__dest,__src,(long)iVar3);
  *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  return 1;
LAB_01e5acc4:
  lVar4 = lVar4 + 1;
  goto LAB_01e5acd0;
LAB_01e5accc:
  lVar4 = lVar4 + 2;
  goto LAB_01e5acd0;
}

