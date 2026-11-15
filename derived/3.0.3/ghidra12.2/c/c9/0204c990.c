
void FUN_0204c990(uint *param_1,undefined8 param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  uVar3 = FUN_006bd550(param_2,0);
  uVar2 = *param_1;
  if (uVar2 != 0) {
    lVar4 = *(long *)(param_1 + 2);
    if ((int)uVar2 < 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      iVar7 = uVar2 - 1;
      do {
        uVar1 = iVar7 + uVar5;
        if ((int)uVar1 < 0 != SCARRY4(iVar7,uVar5)) {
          uVar1 = uVar1 + 1;
        }
        uVar6 = (int)uVar1 >> 1;
        uVar1 = *(uint *)(lVar4 + ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
        if (uVar1 == uVar3) {
          if ((int)uVar6 < 0) {
            return;
          }
          goto LAB_0204ca28;
        }
        if (uVar1 < uVar3) {
          uVar5 = uVar6 + 1;
        }
        else {
          iVar7 = uVar6 - 1;
        }
      } while ((int)uVar5 < iVar7);
    }
    if ((*(uint *)(lVar4 + (long)(int)uVar5 * 0x20 + 0x18) == uVar3) &&
       (uVar6 = uVar5, -1 < (int)uVar5)) {
LAB_0204ca28:
      if (uVar2 <= uVar6) {
        uVar6 = 0;
      }
      *(undefined4 *)(lVar4 + (ulong)uVar6 * 0x20) = param_3;
    }
  }
  return;
}

