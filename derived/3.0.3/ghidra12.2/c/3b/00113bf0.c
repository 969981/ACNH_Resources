
undefined8 FUN_00113bf0(ushort *param_1,undefined8 param_2,undefined2 *param_3,undefined2 *param_4)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  short sVar4;
  uint uVar5;
  uint uVar6;
  undefined2 uVar7;
  ushort uVar8;
  uint uVar9;
  uint uVar10;
  
  if (*param_1 != 0) {
    uVar6 = *param_1 - 1;
    uVar9 = 0;
    bVar2 = false;
    uVar5 = 0;
    uVar8 = 0;
    uVar10 = uVar6;
    do {
      uVar1 = (uVar10 & 0xffff) - (uVar9 & 0xffff);
      if (((uVar10 & 0xffff) < (uVar9 & 0xffff)) || (uVar8 = uVar8 + 1, 2000 < uVar8)) break;
      if ((int)uVar1 < 0) {
        uVar1 = uVar1 + 1;
      }
      uVar1 = uVar9 + (uVar1 >> 1);
      sVar4 = FUN_00100530(param_2,*(undefined8 *)(param_1 + (ulong)(ushort)uVar1 * 4 + 4),1);
      if (sVar4 < 0) {
LAB_00113c94:
        if ((uVar1 & 0xffff) == 0) break;
        uVar10 = uVar1 - 1;
      }
      else {
        if (sVar4 == 0) {
          bVar2 = true;
          uVar5 = uVar1;
          goto LAB_00113c94;
        }
        uVar9 = uVar1 + 1;
      }
    } while (sVar4 < 1 || (int)(uVar1 & 0xffff) < (int)(*param_1 - 1));
    if (bVar2) {
      uVar8 = 0;
      uVar9 = uVar5;
      uVar10 = uVar6;
      do {
        uVar7 = (undefined2)uVar10;
        uVar1 = (uVar6 & 0xffff) - (uVar9 & 0xffff);
        if (((uVar6 & 0xffff) < (uVar9 & 0xffff)) || (uVar8 = uVar8 + 1, 2000 < uVar8)) break;
        if ((int)uVar1 < 0) {
          uVar1 = uVar1 + 1;
        }
        uVar1 = uVar9 + (uVar1 >> 1);
        sVar4 = FUN_00100530(param_2,*(undefined8 *)(param_1 + (ulong)(ushort)uVar1 * 4 + 4),1);
        if (sVar4 < 0) {
          if ((uVar1 & 0xffff) <= (uVar5 & 0xffff)) break;
          uVar6 = uVar1 - 1;
          uVar3 = uVar10;
        }
        else {
          uVar9 = uVar1 + 1;
          uVar3 = uVar1;
          if (sVar4 != 0) {
            uVar3 = uVar10;
          }
        }
        uVar10 = uVar3;
      } while ((sVar4 < 0) ||
              (uVar7 = (undefined2)uVar10, (int)(uVar1 & 0xffff) < (int)(*param_1 - 1)));
      *param_3 = (short)uVar5;
      *param_4 = uVar7;
      return 1;
    }
  }
  return 0;
}

