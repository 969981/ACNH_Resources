
void FUN_0160bf50(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  void *__dest;
  void *pvVar6;
  
  (**(code **)(*param_2 + 0x18))(param_2);
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar6 = (void *)param_2[1];
  (**(code **)(*(long *)(param_1 + 0x1ba0) + 0x18))(param_1 + 0x1ba0);
  __dest = *(void **)(param_1 + 0x1ba8);
  if (pvVar6 != __dest) {
    uVar5 = 0;
    bVar3 = true;
    do {
      if (*(char *)(param_2[1] + uVar5) != *(char *)((long)__dest + uVar5)) break;
      if (*(char *)(param_2[1] + uVar5) == '\0') {
        if (bVar3) {
          return;
        }
        break;
      }
      bVar3 = uVar5 < 0x80000;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x80001);
    (**(code **)(*param_2 + 0x18))(param_2);
    pvVar6 = (void *)param_2[1];
    if (__dest != pvVar6) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar4 = 0;
      do {
        if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_0160c070;
        lVar1 = param_2[1] + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_0160c070;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_0160c070;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_0160c070:
      iVar2 = (int)lVar4;
      if (*(int *)(param_1 + 0x1bb0) <= (int)lVar4) {
        iVar2 = *(int *)(param_1 + 0x1bb0) + -1;
      }
      memcpy(__dest,pvVar6,(long)iVar2);
      *(undefined1 *)((long)__dest + (long)iVar2) = 0;
    }
    *(undefined4 *)(param_1 + 0x1bf8) = 0xffffffff;
  }
  return;
}

