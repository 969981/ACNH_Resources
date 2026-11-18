
undefined8 FUN_035217f0(long param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  
  if (*(long *)(param_1 + 0x210) != 0) {
    plVar3 = *(long **)(**(long **)(*(long *)(param_1 + 0x210) + 0x3f8) + 0x1b0);
    if (plVar3 == (long *)0x0) {
      return 0;
    }
    uVar4 = (**(code **)(*plVar3 + 0x60))();
    if ((uVar4 & 1) == 0) {
      return 0;
    }
  }
  uVar5 = 0;
  if (((*(int *)(param_1 + 0x1f0) == -1) && (*(int *)(param_1 + 500) == -1)) &&
     (*(int *)(param_1 + 0x1b0) == 4)) {
    pvVar7 = *(void **)(param_1 + 0x298);
    *(undefined4 *)(param_1 + 0x288) = *param_2;
    *(undefined4 *)(param_1 + 0x28c) = param_2[1];
    plVar3 = (long *)(param_2 + 2);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    pvVar8 = *(void **)(param_2 + 4);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_2 + 2) + 0x18))(plVar3);
      lVar6 = 0;
      do {
        if (*(char *)(*(long *)(param_2 + 4) + lVar6) == '\0') goto LAB_035218f8;
        lVar1 = *(long *)(param_2 + 4) + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_035218f8;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_035218f8;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_035218f8:
      iVar2 = (int)lVar6;
      if (*(int *)(param_1 + 0x2a0) <= (int)lVar6) {
        iVar2 = *(int *)(param_1 + 0x2a0) + -1;
      }
      memcpy(pvVar7,pvVar8,(long)iVar2);
      *(undefined1 *)((long)pvVar7 + (long)iVar2) = 0;
    }
    pvVar7 = *(void **)(param_1 + 0x2c8);
    *(undefined4 *)(param_1 + 0x2b0) = param_2[10];
    *(undefined4 *)(param_1 + 0x2b4) = param_2[0xb];
    *(undefined1 *)(param_1 + 0x2b8) = *(undefined1 *)(param_2 + 0xc);
    plVar3 = (long *)(param_2 + 0xe);
    (**(code **)(*plVar3 + 0x18))(plVar3);
    pvVar8 = *(void **)(param_2 + 0x10);
    if (pvVar7 != pvVar8) {
      (**(code **)(*(long *)(param_2 + 0xe) + 0x18))(plVar3);
      lVar6 = 0;
      do {
        if (*(char *)(*(long *)(param_2 + 0x10) + lVar6) == '\0') goto LAB_035219bc;
        lVar1 = *(long *)(param_2 + 0x10) + lVar6;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_035219bc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_035219bc;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_035219bc:
      iVar2 = (int)lVar6;
      if (*(int *)(param_1 + 0x2d0) <= (int)lVar6) {
        iVar2 = *(int *)(param_1 + 0x2d0) + -1;
      }
      memcpy(pvVar7,pvVar8,(long)iVar2);
      *(undefined1 *)((long)pvVar7 + (long)iVar2) = 0;
    }
    if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
      *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 6;
    }
    uVar5 = 1;
  }
  return uVar5;
}

