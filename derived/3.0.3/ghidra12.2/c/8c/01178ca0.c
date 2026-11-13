
long FUN_01178ca0(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  void *__dest;
  void *__src;
  long *plVar8;
  undefined1 local_90 [24];
  int local_78;
  undefined4 local_6c [11];
  
  __dest = *(void **)(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_2 + 0x14);
  plVar8 = (long *)(param_2 + 0x18);
  (**(code **)(*plVar8 + 0x18))(plVar8);
  __src = *(void **)(param_2 + 0x20);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_2 + 0x18) + 0x18))(plVar8);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x20) + lVar5) == '\0') goto LAB_01178d4c;
      lVar1 = *(long *)(param_2 + 0x20) + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_01178d4c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_01178d4c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_01178d4c:
    iVar2 = (int)lVar5;
    if (*(int *)(param_1 + 0x28) <= (int)lVar5) {
      iVar2 = *(int *)(param_1 + 0x28) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  uVar3 = *(undefined4 *)(param_2 + 0x40);
  if ((undefined1 *)(param_2 + 0x38) == local_90) {
    uVar6 = 0;
  }
  else {
    uVar4 = *(uint *)(param_2 + 0x58);
    uVar6 = uVar4;
    if (9 < (int)uVar4) {
      uVar6 = 10;
    }
    if (0 < (int)uVar4) {
      uVar7 = 0;
      do {
        iVar2 = 0;
        if (*(int *)(param_2 + 0x50) <= (int)uVar7 + *(int *)(param_2 + 0x54)) {
          iVar2 = *(int *)(param_2 + 0x50);
        }
        local_6c[uVar7] =
             *(undefined4 *)
              (*(long *)(param_2 + 0x48) +
              ((uVar7 - (long)iVar2) + (long)*(int *)(param_2 + 0x54)) * 4);
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
    }
  }
  *(undefined4 *)(param_1 + 0x40) = uVar3;
  if ((undefined1 *)(param_1 + 0x38) != local_90) {
    *(undefined8 *)(param_1 + 0x54) = 0;
    if ((int)*(uint *)(param_1 + 0x50) <= (int)uVar6) {
      uVar6 = *(uint *)(param_1 + 0x50);
    }
    if (0 < (int)uVar6) {
      uVar7 = 0;
      do {
        local_78 = 10;
        iVar2 = 0;
        if (9 < (int)uVar7) {
          iVar2 = local_78;
        }
        *(undefined4 *)(*(long *)(param_1 + 0x48) + uVar7 * 4) = local_6c[uVar7 - (long)iVar2];
        uVar7 = uVar7 + 1;
      } while (uVar6 != uVar7);
    }
    *(uint *)(param_1 + 0x58) = uVar6;
  }
  *(undefined8 *)(param_1 + 0x88) = *(undefined8 *)(param_2 + 0x88);
  return param_1;
}

