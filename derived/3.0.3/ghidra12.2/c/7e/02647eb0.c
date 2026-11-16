
bool FUN_02647eb0(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  undefined8 *puVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  
  lVar8 = *(long *)(param_1 + 8);
  if (lVar8 != 0) {
    if (*(long **)(lVar8 + 0x28) == (long *)0x0) {
      uVar4 = 0;
    }
    else {
      puVar3 = (undefined8 *)**(long **)(lVar8 + 0x28);
      uVar4 = 0;
      if (puVar3 != (undefined8 *)0x0) {
        uVar4 = (**(code **)*puVar3)();
      }
    }
    lVar6 = 0;
    plVar1 = (long *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
    do {
      uVar2 = *(uint *)((long)plVar1 + lVar6 * 4 + 0xaf00);
      plVar5 = plVar1 + (ulong)uVar2 * 0xe;
      if (399 < uVar2) {
        plVar5 = plVar1;
      }
      if ((*plVar5 != 0) &&
         ((*(int *)((long)plVar5 + 0x2c) != 0 && (int)plVar5[2] != 0) && *plVar5 == *param_2)) {
        if (-1 < (int)(uint)lVar6) {
          plVar5 = plVar1;
          if (((uint)lVar6 < 400) &&
             (uVar2 = *(uint *)((long)plVar1 + lVar6 * 4 + 0xaf00),
             plVar5 = plVar1 + (ulong)uVar2 * 0xe, 399 < uVar2)) {
            plVar5 = plVar1;
          }
          bVar7 = 1 < *(byte *)((long)plVar5 + 0x6d);
          if ((uVar4 & 1) == 0) {
            return bVar7;
          }
          lVar8 = *(long *)(lVar8 + 0x28);
          if (lVar8 == 0) {
            return bVar7;
          }
          goto LAB_02647f98;
        }
        break;
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 400);
    if (((uVar4 & 1) != 0) && (lVar8 = *(long *)(lVar8 + 0x28), lVar8 != 0)) {
      bVar7 = false;
LAB_02647f98:
      if (*(undefined8 **)(lVar8 + 8) == (undefined8 *)0x0) {
        return bVar7;
      }
      (**(code **)**(undefined8 **)(lVar8 + 8))();
      return bVar7;
    }
  }
  return false;
}

