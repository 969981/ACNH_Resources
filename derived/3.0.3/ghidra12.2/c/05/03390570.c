
/* WARNING: Removing unreachable block (ram,0x033905d8) */
/* WARNING: Removing unreachable block (ram,0x033905f4) */

void FUN_03390570(long param_1,int param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined2 uVar3;
  long lVar4;
  void *__dest;
  void *__src;
  long *plVar5;
  
  if ((param_2 == 0) && (DAT_05739db8 != 0)) {
    lVar4 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar4 = 0;
    }
    if (*(char *)(lVar4 + 200) != '\0') {
      *(undefined1 *)(lVar4 + 0xc9) = 1;
    }
  }
  *(undefined2 *)(param_1 + 0x20a0) = *(undefined2 *)(param_3 + 8);
  if (*(char *)(param_3 + 0x12) == '\0') {
    if (*(char *)(param_1 + 0x20aa) != '\0') {
      *(undefined1 *)(param_1 + 0x20aa) = 0;
    }
  }
  else {
    uVar3 = *(undefined2 *)(param_3 + 0x10);
    if (*(char *)(param_1 + 0x20aa) == '\0') {
      *(undefined1 *)(param_1 + 0x20aa) = 1;
    }
    *(undefined2 *)(param_1 + 0x20a8) = uVar3;
  }
  __dest = *(void **)(param_1 + 0x20b8);
  plVar5 = (long *)(param_3 + 0x18);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  __src = *(void **)(param_3 + 0x20);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_3 + 0x18) + 0x18))(plVar5);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(param_3 + 0x20) + lVar4) == '\0') goto LAB_033906b0;
      lVar1 = *(long *)(param_3 + 0x20) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_033906b0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_033906b0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_033906b0:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x20c0) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x20c0) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(undefined2 *)(param_1 + 0x20d0) = *(undefined2 *)(param_3 + 0x38);
  *(undefined1 *)(param_1 + 0x20d2) = *(undefined1 *)(param_3 + 0x3a);
  *(undefined1 *)(param_1 + 0x20d3) = *(undefined1 *)(param_3 + 0x3b);
  *(undefined4 *)(param_1 + 0x20d4) = *(undefined4 *)(param_3 + 0x3c);
  *(undefined1 *)(param_1 + 0x20d8) = *(undefined1 *)(param_3 + 0x40);
  return;
}

