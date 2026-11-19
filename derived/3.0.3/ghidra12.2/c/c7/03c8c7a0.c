
bool FUN_03c8c7a0(long param_1,void *param_2,ulong param_3)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  
  uVar7 = param_3 & 0xffffffff;
  plVar8 = (long *)(param_1 + 0x10);
  iVar3 = *(int *)(param_1 + 0x20);
  (**(code **)(*plVar8 + 0x18))(plVar8);
  lVar9 = *(long *)(param_1 + 0x18);
  lVar4 = 0;
  uVar5 = 0xffffffff;
  do {
    if (*(char *)(lVar9 + lVar4) == '\0') {
LAB_03c8c828:
      uVar5 = ~(uint)lVar4;
      break;
    }
    if (*(char *)(lVar9 + lVar4 + 1) == '\0') {
      lVar4 = lVar4 + 1;
      goto LAB_03c8c828;
    }
    if (*(char *)(lVar9 + lVar4 + 2) == '\0') {
      lVar4 = lVar4 + 2;
      goto LAB_03c8c828;
    }
    lVar4 = lVar4 + 3;
  } while (lVar4 != 0x80001);
  iVar3 = uVar5 + iVar3;
  iVar6 = (int)param_3;
  if (iVar3 < iVar6) {
    (**(code **)(**(long **)(param_1 + 8) + 0x28))(*(long **)(param_1 + 8),0xb);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x18))(plVar8);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x18) + lVar4) == '\0') goto LAB_03c8c8a4;
      lVar1 = *(long *)(param_1 + 0x18) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03c8c8a4;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_03c8c8a4;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_03c8c8a4:
    uVar5 = (uint)lVar4 & ((int)(uint)lVar4 >> 0x1f ^ 0xffffffffU);
    if (iVar6 < 0) {
      uVar7 = 0;
      do {
        if (*(char *)((long)param_2 + uVar7) == '\0') goto LAB_03c8c8b0;
        if (*(char *)((long)param_2 + uVar7 + 1) == '\0') {
          uVar7 = uVar7 + 1;
          goto LAB_03c8c8b0;
        }
        if (*(char *)((long)param_2 + uVar7 + 2) == '\0') {
          uVar7 = uVar7 + 2;
          goto LAB_03c8c8b0;
        }
        uVar7 = uVar7 + 3;
      } while (uVar7 != 0x80001);
      uVar7 = 0;
    }
LAB_03c8c8b0:
    uVar2 = (uint)uVar7;
    if ((int)(*(int *)(param_1 + 0x20) - uVar5) <= (int)(uint)uVar7) {
      uVar2 = *(int *)(param_1 + 0x20) + ~uVar5;
    }
    if (0 < (int)uVar2) {
      memcpy((void *)(lVar9 + (ulong)uVar5),param_2,(ulong)uVar2);
      *(undefined1 *)(lVar9 + (int)(uVar2 + uVar5)) = 0;
    }
  }
  return iVar6 <= iVar3;
}

