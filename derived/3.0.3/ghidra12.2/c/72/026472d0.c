
bool FUN_026472d0(long param_1,long *param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  
  lVar11 = *(long *)(param_1 + 8);
  if (lVar11 != 0) {
    if ((*(long **)(lVar11 + 0x28) == (long *)0x0) ||
       (puVar7 = (undefined8 *)**(long **)(lVar11 + 0x28), puVar7 == (undefined8 *)0x0)) {
      uVar8 = 0;
    }
    else {
      uVar8 = (**(code **)*puVar7)();
      uVar8 = uVar8 & 0xffffffff;
    }
    lVar12 = 0;
    plVar1 = (long *)(*(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8));
    do {
      uVar6 = *(uint *)((long)plVar1 + lVar12 * 4 + 0xaf00);
      plVar3 = plVar1 + (ulong)uVar6 * 0xe;
      if (399 < uVar6) {
        plVar3 = plVar1;
      }
      if ((*plVar3 != 0) &&
         ((*(int *)((long)plVar3 + 0x2c) != 0 && (int)plVar3[2] != 0) && *plVar3 == *param_2)) {
        if (-1 < (int)(uint)lVar12) {
          lVar10 = *(long *)(param_1 + 8);
          if (lVar10 == 0) {
            bVar5 = false;
          }
          else {
            if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
               (puVar7 = (undefined8 *)**(long **)(lVar10 + 0x28), puVar7 == (undefined8 *)0x0)) {
              uVar6 = 1;
            }
            else {
              uVar6 = (**(code **)*puVar7)();
              uVar6 = uVar6 ^ 1;
            }
            lVar2 = *(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8);
            lVar9 = lVar2;
            if (((uint)lVar12 < 400) &&
               (uVar4 = *(uint *)(lVar2 + lVar12 * 4 + 0xaf00), lVar9 = lVar2 + (ulong)uVar4 * 0x70,
               399 < uVar4)) {
              lVar9 = lVar2;
            }
            bVar5 = ((*(byte *)(lVar9 + 0x6e) ^ 0xff) & 6) == 0;
            if ((((uVar6 & 1) == 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
               (puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar7 != (undefined8 *)0x0
               )) {
              (**(code **)*puVar7)();
            }
          }
          if ((uVar8 & 1) == 0) {
            return bVar5;
          }
          lVar11 = *(long *)(lVar11 + 0x28);
          if (lVar11 == 0) {
            return bVar5;
          }
          goto LAB_02647450;
        }
        break;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 != 400);
    if (((uVar8 & 1) != 0) && (lVar11 = *(long *)(lVar11 + 0x28), lVar11 != 0)) {
      bVar5 = false;
LAB_02647450:
      if (*(undefined8 **)(lVar11 + 8) == (undefined8 *)0x0) {
        return bVar5;
      }
      (**(code **)**(undefined8 **)(lVar11 + 8))();
      return bVar5;
    }
  }
  return false;
}

