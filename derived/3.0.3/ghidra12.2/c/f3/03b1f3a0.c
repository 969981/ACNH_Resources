
void FUN_03b1f3a0(long param_1,long param_2)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  iVar2 = *(int *)(*(long *)(param_1 + 8) + 8);
  if (iVar2 != 0) {
    lVar3 = *(long *)(*(long *)(param_1 + 8) + 0x10);
    uVar4 = 0;
    do {
      lVar5 = *(long *)(lVar3 + (-(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar4 << 3));
      if (lVar5 != 0) {
        if (*(long *)(lVar5 + 0x88) != lVar5 + 0x80) {
          lVar6 = (long)*(int *)(lVar5 + 0x94);
          lVar7 = *(long *)(lVar5 + 0x88) - lVar6;
          do {
            if (*(long *)(lVar7 + 0x28) == param_2) {
              *(undefined8 *)(lVar7 + 0x28) = 0;
            }
            if (*(long *)(lVar7 + 0x30) == param_2) {
              *(undefined8 *)(lVar7 + 0x30) = 0;
            }
            if (*(long *)(lVar7 + 0x38) == param_2) {
              *(undefined8 *)(lVar7 + 0x38) = 0;
            }
            if (*(long *)(lVar7 + 0x40) == param_2) {
              *(undefined8 *)(lVar7 + 0x40) = 0;
            }
            lVar7 = *(long *)(lVar7 + lVar6 + 8) - lVar6;
          } while (lVar7 != (lVar5 + 0x80) - lVar6);
        }
      }
      uVar1 = uVar4 + 1;
      uVar4 = uVar1 & 0xffffffff;
    } while (iVar2 != (int)uVar1);
  }
  lVar3 = *(long *)(param_1 + 0x28);
  if (lVar3 != 0) {
    if ((*(long *)(lVar3 + 0x58) == param_2) && (*(undefined8 *)(lVar3 + 0x58) = 0, param_2 != 0)) {
      (**(code **)(**(long **)(param_2 + 0x18) + 0x140))();
    }
    if (*(long *)(lVar3 + 0x60) == param_2) {
      *(undefined8 *)(lVar3 + 0x60) = 0;
      lVar3 = *(long *)(param_1 + 0x30);
      goto joined_r0x03b1f4e8;
    }
  }
  lVar3 = *(long *)(param_1 + 0x30);
joined_r0x03b1f4e8:
  if (lVar3 != 0) {
    if ((*(long *)(lVar3 + 0x58) == param_2) && (*(undefined8 *)(lVar3 + 0x58) = 0, param_2 != 0)) {
      (**(code **)(**(long **)(param_2 + 0x18) + 0x140))();
    }
    if (*(long *)(lVar3 + 0x60) == param_2) {
      *(undefined8 *)(lVar3 + 0x60) = 0;
    }
  }
  return;
}

