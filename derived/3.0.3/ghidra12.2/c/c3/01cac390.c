
void FUN_01cac390(long param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  
  if (*(char *)(param_1 + 0x14c) == '\0' || *(char *)(param_1 + 0x14d) != '\0') {
    if (*(char *)(param_1 + 0x14c) != '\0') {
      *(undefined4 *)(param_1 + 0x150) = 0;
    }
    return;
  }
  uVar1 = *(int *)(param_1 + 0x150) + 1;
  *(uint *)(param_1 + 0x150) = uVar1;
  if ((int)uVar1 % 0x1e == 1) {
    if (*(long *)(param_1 + 0x18) != param_1 + 0x10) {
      lVar3 = (long)*(int *)(param_1 + 0x24);
      lVar4 = *(long *)(param_1 + 0x18) - lVar3;
      do {
        if (*(long *)(lVar4 + 0x18) != lVar4 + 0x10) {
          lVar5 = (long)*(int *)(lVar4 + 0x24);
          lVar6 = *(long *)(lVar4 + 0x18) - lVar5;
          do {
            lVar6 = *(long *)(lVar6 + lVar5 + 8) - lVar5;
          } while (lVar6 != (lVar4 + 0x10) - lVar5);
        }
        lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
      } while (lVar4 != (param_1 + 0x10) - lVar3);
    }
    if (*(long *)(param_1 + 0x30) != param_1 + 0x28) {
      lVar3 = (long)*(int *)(param_1 + 0x3c);
      lVar4 = *(long *)(param_1 + 0x30) - lVar3;
      do {
        if (*(long *)(lVar4 + 0x18) != lVar4 + 0x10) {
          lVar5 = (long)*(int *)(lVar4 + 0x24);
          lVar6 = *(long *)(lVar4 + 0x18) - lVar5;
          do {
            lVar6 = *(long *)(lVar6 + lVar5 + 8) - lVar5;
          } while (lVar6 != (lVar4 + 0x10) - lVar5);
        }
        lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
      } while (lVar4 != (param_1 + 0x28) - lVar3);
    }
    if (*(long *)(param_1 + 0x60) != param_1 + 0x58) {
      lVar3 = (long)*(int *)(param_1 + 0x6c);
      lVar4 = *(long *)(param_1 + 0x60) - lVar3;
      do {
        if (*(long *)(lVar4 + 0x28) != lVar4 + 0x20) {
          lVar5 = (long)*(int *)(lVar4 + 0x34);
          lVar6 = *(long *)(lVar4 + 0x28) - lVar5;
          do {
            lVar6 = *(long *)(lVar6 + lVar5 + 8) - lVar5;
          } while (lVar6 != (lVar4 + 0x20) - lVar5);
        }
        lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
      } while (lVar4 != (param_1 + 0x58) - lVar3);
    }
    if (*(long *)(param_1 + 0x48) != param_1 + 0x40) {
      lVar3 = (long)*(int *)(param_1 + 0x54);
      lVar4 = *(long *)(param_1 + 0x48) - lVar3;
      do {
        if (*(long *)(lVar4 + 0x28) != lVar4 + 0x20) {
          lVar5 = (long)*(int *)(lVar4 + 0x34);
          lVar6 = *(long *)(lVar4 + 0x28) - lVar5;
          do {
            lVar6 = *(long *)(lVar6 + lVar5 + 8) - lVar5;
          } while (lVar6 != (lVar4 + 0x20) - lVar5);
        }
        lVar4 = *(long *)(lVar4 + lVar3 + 8) - lVar3;
      } while (lVar4 != (param_1 + 0x40) - lVar3);
    }
  }
  if ((300 < uVar1) &&
     (*(int *)(DAT_05358908 + 0x38) != 0 && *(char *)(DAT_05358908 + 0xfd8) == '\0')) {
    plVar7 = *(long **)(DAT_05ae6a60 + 0x30);
    uVar2 = (**(code **)(*plVar7 + 0x10))(plVar7);
    if (((uVar2 & 1) == 0) && (uVar2 = (**(code **)(*plVar7 + 0x18))(plVar7), (uVar2 & 1) == 0)) {
      FUN_0387de70(plVar7,&DAT_05b03f00,0xe,0x14,0x10);
    }
  }
  return;
}

