
void FUN_003c0ca0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  
  if (*(char *)(param_1 + 0x1d8) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x1da) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x1c4) < 1) {
    return;
  }
  if ((*(long *)(param_1 + 0x1e0) == 0) ||
     (0xfffffffd < *(int *)(*(long *)(param_1 + 0x1e0) + 0x34) - 3U)) {
    lVar6 = 0;
    lVar5 = param_1;
    while (uVar1 = FUN_003c2d9c(lVar5), (uVar1 & 1) != 0) {
      lVar6 = lVar6 + 1;
      lVar5 = lVar5 + 0xe0;
      if (*(int *)(param_1 + 0x1c4) <= lVar6) {
        return;
      }
    }
    if (0 < *(int *)(param_1 + 0x1c4)) {
      lVar6 = 0;
      lVar5 = param_1;
      do {
        FUN_003c2e44(lVar5);
        lVar6 = lVar6 + 1;
        lVar5 = lVar5 + 0xe0;
      } while (lVar6 < *(int *)(param_1 + 0x1c4));
    }
    *(undefined4 *)(param_1 + 0x1c4) = 0;
    *(undefined1 *)(param_1 + 0x1d8) = 0;
    uVar2 = FUN_003cb1d8();
    FUN_003cb704(uVar2,param_1);
    pcVar4 = *(code **)(param_1 + 0x1c8);
    if (pcVar4 == (code *)0x0) goto LAB_003c0d98;
    uVar3 = *(undefined8 *)(param_1 + 0x1d0);
    uVar2 = 3;
  }
  else {
    pcVar4 = *(code **)(param_1 + 0x1c8);
    if (pcVar4 == (code *)0x0) goto LAB_003c0d98;
    uVar3 = *(undefined8 *)(param_1 + 0x1d0);
    uVar2 = 0;
  }
  (*pcVar4)(param_1,uVar2,uVar3);
LAB_003c0d98:
  *(undefined2 *)(param_1 + 0x1d9) = 0;
  return;
}

