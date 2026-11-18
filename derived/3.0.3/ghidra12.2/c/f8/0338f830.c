
/* WARNING: Removing unreachable block (ram,0x0338f888) */
/* WARNING: Removing unreachable block (ram,0x0338f8a4) */

void FUN_0338f830(long param_1,int param_2,long param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  void *__dest;
  void *__src;
  long *plVar5;
  
  if ((param_2 == 0) && (DAT_05739db8 != 0)) {
    lVar4 = DAT_05739da8;
    if (DAT_05739db8 < 1) {
      lVar4 = 0;
    }
    if (*(char *)(lVar4 + 0x70) != '\0') {
      *(undefined1 *)(lVar4 + 0x71) = 1;
    }
  }
  *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_3 + 8);
  __dest = *(void **)(param_1 + 0x90);
  uVar3 = *(undefined8 *)(param_3 + 0xc);
  *(undefined1 *)(param_1 + 0x84) = *(undefined1 *)(param_3 + 0x14);
  *(undefined8 *)(param_1 + 0x7c) = uVar3;
  plVar5 = (long *)(param_3 + 0x18);
  (**(code **)(*plVar5 + 0x18))(plVar5);
  __src = *(void **)(param_3 + 0x20);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_3 + 0x18) + 0x18))(plVar5);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(param_3 + 0x20) + lVar4) == '\0') goto LAB_0338f94c;
      lVar1 = *(long *)(param_3 + 0x20) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0338f94c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0338f94c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0338f94c:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x98) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x98) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(undefined1 *)(param_1 + 0xa8) = *(undefined1 *)(param_3 + 0x38);
  return;
}

