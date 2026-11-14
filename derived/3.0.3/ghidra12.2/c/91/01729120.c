
void FUN_01729120(int *param_1,long *param_2)

{
  void *__dest;
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  void *__src;
  long *plVar5;
  
  if (*param_1 < param_1[1]) {
    plVar5 = *(long **)(param_1 + 4);
    if (plVar5 != (long *)0x0) {
      *(long *)(param_1 + 4) = *plVar5;
    }
    __dest = (void *)((long)plVar5 + 0x14);
    *(undefined4 *)(plVar5 + 2) = 0x20;
    puVar3 = PTR_DAT_04bb2a08;
    *(undefined1 *)((long)plVar5 + 0x33) = 0;
    *plVar5 = (long)(puVar3 + 0x10);
    plVar5[1] = (long)__dest;
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (void *)param_2[1];
    if (__dest != __src) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar4 = 0;
      do {
        if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_017291f0;
        lVar1 = param_2[1] + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_017291f0;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_017291f0;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_017291f0:
      iVar2 = (int)lVar4;
      if ((int)plVar5[2] <= (int)lVar4) {
        iVar2 = (int)plVar5[2] + -1;
      }
      memcpy(__dest,__src,(long)iVar2);
      *(undefined1 *)((long)__dest + (long)iVar2) = 0;
    }
    *plVar5 = (long)&PTR_LAB_048f9700;
    lVar4 = param_2[7];
    *(int *)(plVar5 + 8) = (int)param_2[8];
    plVar5[7] = lVar4;
    *(undefined2 *)((long)plVar5 + 0x44) = *(undefined2 *)((long)param_2 + 0x44);
    *(undefined1 *)((long)plVar5 + 0x46) = *(undefined1 *)((long)param_2 + 0x46);
    *(undefined1 *)((long)plVar5 + 0x47) = *(undefined1 *)((long)param_2 + 0x47);
    *(int *)(plVar5 + 9) = (int)param_2[9];
    *(undefined4 *)((long)plVar5 + 0x4c) = *(undefined4 *)((long)param_2 + 0x4c);
    if (*param_1 < param_1[1]) {
      *(long **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = plVar5;
      *param_1 = *param_1 + 1;
    }
  }
  return;
}

