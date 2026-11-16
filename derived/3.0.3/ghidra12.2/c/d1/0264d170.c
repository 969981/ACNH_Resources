
void FUN_0264d170(int *param_1,int param_2,byte *param_3)

{
  uint uVar1;
  undefined8 *puVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  byte local_14 [4];
  
  if (0 < *param_1) {
    lVar5 = 0;
    puVar2 = *(undefined8 **)(param_1 + 4);
    do {
      puVar7 = *(undefined8 **)(*(long *)(param_1 + 2) + lVar5 * 8);
      lVar5 = lVar5 + 1;
      *puVar7 = puVar2;
      *(undefined8 **)(param_1 + 4) = puVar7;
      puVar2 = puVar7;
    } while (lVar5 < *param_1);
  }
  *param_1 = 0;
  local_14[0] = *param_3;
  if (7 < local_14[0]) {
    local_14[0] = 0xff;
  }
  lVar5 = FUN_025830c0(DAT_055021a0,local_14,1);
  if (lVar5 != 0) {
    lVar6 = lVar5 + 0x194b0;
    if (*(long *)(lVar5 + 0x194b8) == 0) {
      lVar6 = *(long *)(DAT_05574040 + 0x20);
    }
    if (*(long **)(lVar6 + 0x2c600) == (long *)0x0) {
      uVar3 = 0;
    }
    else {
      puVar2 = (undefined8 *)**(long **)(lVar6 + 0x2c600);
      uVar3 = 0;
      if (puVar2 != (undefined8 *)0x0) {
        uVar3 = (**(code **)*puVar2)();
      }
    }
    if (0 < param_2) {
      iVar4 = 0;
      do {
        lVar5 = *(long *)(lVar6 + 0x2c5e8) + *(long *)(lVar6 + 0x2c5e0);
        if ((lVar5 == 0) || (uVar1 = (iVar4 + (uint)*(ushort *)(lVar5 + 800)) - 1, 99 < uVar1))
        break;
        if (*param_1 < param_1[1]) {
          puVar2 = *(undefined8 **)(param_1 + 4);
          if (puVar2 != (undefined8 *)0x0) {
            *(undefined8 *)(param_1 + 4) = *puVar2;
          }
          *puVar2 = *(undefined8 *)(lVar5 + (ulong)uVar1 * 8);
          if (*param_1 < param_1[1]) {
            *(undefined8 **)(*(long *)(param_1 + 2) + (long)*param_1 * 8) = puVar2;
            *param_1 = *param_1 + 1;
          }
        }
        iVar4 = iVar4 + -1;
      } while (-param_2 != iVar4);
    }
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x2c600) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar6 + 0x2c600) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  return;
}

