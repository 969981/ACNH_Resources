
void FUN_01640a40(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  char *__dest;
  long lVar6;
  void *__dest_00;
  void *__src;
  
  lVar4 = param_1 + 0x150;
  (**(code **)(*(long *)(param_1 + 0x150) + 0x18))(lVar4);
  (**(code **)(*(long *)(param_1 + 0x150) + 0x18))(lVar4);
  lVar6 = *(long *)(param_1 + 0x158);
  (**(code **)(*param_2 + 0x18))(param_2);
  if (lVar6 != param_2[1]) {
    __dest_00 = *(void **)(param_1 + 0x158);
    uVar5 = 0;
    bVar3 = true;
    do {
      if (*(char *)((long)__dest_00 + uVar5) != *(char *)(param_2[1] + uVar5)) break;
      if (*(char *)((long)__dest_00 + uVar5) == '\0') {
        if (bVar3) {
          return;
        }
        break;
      }
      bVar3 = uVar5 < 0x80000;
      uVar5 = uVar5 + 1;
    } while (uVar5 != 0x80001);
    *(undefined4 *)(param_1 + 0x148) = 0xffffffff;
    (**(code **)(*param_2 + 0x18))(param_2);
    __src = (void *)param_2[1];
    if (__dest_00 != __src) {
      (**(code **)(*param_2 + 0x18))(param_2);
      lVar6 = 0;
      do {
        if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_01640b6c;
        lVar1 = param_2[1] + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_01640b6c;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_01640b6c;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_01640b6c:
      iVar2 = (int)lVar6;
      if (*(int *)(param_1 + 0x160) <= (int)lVar6) {
        iVar2 = *(int *)(param_1 + 0x160) + -1;
      }
      memcpy(__dest_00,__src,(long)iVar2);
      *(undefined1 *)((long)__dest_00 + (long)iVar2) = 0;
    }
    lVar4 = FUN_015ff440(*(undefined8 *)(param_1 + 0x1d0),*(undefined4 *)(param_1 + 0x148),lVar4,
                         param_1 + 0x148);
    if (lVar4 == 0) {
      __dest = *(char **)(param_1 + 0x158);
      if (__dest != "ModelOnUI") {
        iVar2 = 9;
        if (*(int *)(param_1 + 0x160) < 10) {
          iVar2 = *(int *)(param_1 + 0x160) + -1;
        }
        memcpy(__dest,"ModelOnUI",(long)iVar2);
        __dest[iVar2] = '\0';
      }
    }
    else {
      *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x80) + 0x60) = 1;
    }
  }
  return;
}

