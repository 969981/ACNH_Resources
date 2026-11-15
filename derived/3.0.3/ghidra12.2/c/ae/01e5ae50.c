
undefined8 FUN_01e5ae50(long param_1,undefined8 param_2,undefined8 param_3)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  void *__dest;
  void *__src;
  int local_4c [3];
  undefined4 local_24;
  
  local_4c[0] = *(int *)(param_1 + 0x558);
  local_24 = 0;
  local_4c[1] = 0;
  local_4c[2] = -0x40800000;
  FUN_01e5a930(param_1,8,param_2,&local_24,param_3,local_4c,6);
  local_4c[0] = *(int *)(param_1 + 0x570);
  if (local_4c[0] != 0) {
    iVar3 = *(int *)(param_1 + 0x570);
    __dest = *(void **)(param_1 + 0x3b8);
    plVar1 = &DAT_05390480 + (long)iVar3 * 2;
    (**(code **)(*plVar1 + 0x18))(plVar1);
    __src = (void *)(&DAT_05390488)[(long)iVar3 * 2];
    if (__dest != __src) {
      (**(code **)(*plVar1 + 0x18))(plVar1);
      lVar5 = (&DAT_05390488)[(long)iVar3 * 2];
      lVar4 = 0;
      do {
        if (*(char *)(lVar5 + lVar4) == '\0') goto LAB_01e5af3c;
        lVar2 = lVar5 + lVar4;
        if (*(char *)(lVar2 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_01e5af3c;
        }
        if (*(char *)(lVar2 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_01e5af3c;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_01e5af3c:
      iVar3 = (int)lVar4;
      if (*(int *)(param_1 + 0x3c0) <= (int)lVar4) {
        iVar3 = *(int *)(param_1 + 0x3c0) + -1;
      }
      memcpy(__dest,__src,(long)iVar3);
      *(undefined1 *)((long)__dest + (long)iVar3) = 0;
    }
  }
  return 1;
}

