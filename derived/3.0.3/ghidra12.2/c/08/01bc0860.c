
long FUN_01bc0860(long param_1,uint *param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  
  lVar1 = param_1 + 0x18;
  uVar2 = *param_2;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  lVar7 = -(long)*(int *)(param_1 + 0x2c);
  lVar8 = lVar1;
  do {
    lVar8 = *(long *)(lVar8 + 8);
    if (lVar8 == lVar1) {
      lVar8 = 0;
      break;
    }
    lVar6 = lVar8 + lVar7;
    uVar9 = 0xffffffff;
    uVar5 = *(uint *)(lVar6 + 0x18);
    if (uVar2 <= uVar5) {
      if (uVar5 == uVar2) {
        uVar9 = 0xffffffff;
        if ((uVar3 <= *(uint *)(lVar6 + 0x1c) || uVar3 == 0xffffffff) &&
           ((*(uint *)(lVar6 + 0x1c) == 0xffffffff ||
            (uVar9 = 0xffffffff, *(uint *)(lVar6 + 0x1c) <= uVar3)))) goto LAB_01bc08ec;
      }
      else {
        uVar9 = 0xffffffff;
        if (uVar5 <= uVar2) {
LAB_01bc08ec:
          uVar9 = 0xffffffff;
          if (uVar4 <= *(uint *)(lVar6 + 0x20)) {
            uVar9 = (uint)(uVar4 < *(uint *)(lVar6 + 0x20));
          }
        }
      }
    }
  } while (uVar9 != 0);
  lVar6 = 0;
  if (lVar8 != 0) {
    lVar6 = lVar8 + lVar7;
  }
  if ((lVar6 == 0) && ((param_3 & 1) != 0)) {
    if (uVar4 >> 0x18 == 0) {
      return 0;
    }
    lVar8 = lVar1;
    do {
      lVar8 = *(long *)(lVar8 + 8);
      if (lVar8 == lVar1) {
        lVar8 = 0;
        break;
      }
      lVar6 = lVar8 + lVar7;
      uVar9 = 0xffffffff;
      uVar5 = *(uint *)(lVar6 + 0x18);
      if (uVar2 <= uVar5) {
        if (uVar5 == uVar2) {
          if (((uVar3 == 0xffffffff) || (uVar9 = 0xffffffff, uVar3 <= *(uint *)(lVar6 + 0x1c))) &&
             ((*(uint *)(lVar6 + 0x1c) == 0xffffffff ||
              (uVar9 = 0xffffffff, *(uint *)(lVar6 + 0x1c) <= uVar3)))) goto LAB_01bc09ac;
        }
        else {
          uVar9 = 0xffffffff;
          if (uVar5 <= uVar2) {
LAB_01bc09ac:
            uVar9 = 0xffffffff;
            if ((uVar4 & 0xffffff) <= *(uint *)(lVar6 + 0x20)) {
              uVar9 = (uint)((uVar4 & 0xffffff) < *(uint *)(lVar6 + 0x20));
            }
          }
        }
      }
    } while (uVar9 != 0);
    lVar6 = 0;
    if (lVar8 != 0) {
      lVar6 = lVar8 + lVar7;
    }
  }
  return lVar6;
}

