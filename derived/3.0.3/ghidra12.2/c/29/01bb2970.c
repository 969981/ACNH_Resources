
void FUN_01bb2970(long *param_1,long param_2)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar2 = DAT_0533ec08;
  uVar4 = *(uint *)(param_2 + 0x18);
  uVar3 = *(uint *)(param_2 + 0x1c);
  lVar5 = **(long **)(DAT_0533ec08 + 0x29d0);
  if (lVar5 != 0) {
    lVar7 = lVar5;
    do {
      uVar1 = *(uint *)(lVar7 + 0x20);
      if ((uVar4 < uVar1) ||
         (((uVar4 == uVar1 && (uVar3 < *(uint *)(lVar7 + 0x24))) &&
          (*(uint *)(lVar7 + 0x24) != 0xffffffff)))) {
        plVar6 = (long *)(lVar7 + 8);
      }
      else {
        if ((uVar4 <= uVar1) && ((uVar3 == 0xffffffff || (uVar3 <= *(uint *)(lVar7 + 0x24))))) {
          if ((*(byte *)(lVar7 + 0x60) >> 1 & 1) != 0) {
            *param_1 = param_2;
            lVar5 = **(long **)(lVar2 + 0x29d0);
            uVar4 = *(uint *)(param_2 + 0x18);
            uVar3 = *(uint *)(param_2 + 0x1c);
          }
          break;
        }
        plVar6 = (long *)(lVar7 + 0x10);
      }
      lVar7 = *plVar6;
    } while (lVar7 != 0);
    do {
      if (lVar5 == 0) break;
      uVar1 = *(uint *)(lVar5 + 0x20);
      if ((uVar4 < uVar1) ||
         (((uVar4 == uVar1 && (uVar3 < *(uint *)(lVar5 + 0x24))) &&
          (*(uint *)(lVar5 + 0x24) != 0xffffffff)))) {
        plVar6 = (long *)(lVar5 + 8);
      }
      else {
        if ((uVar4 <= uVar1) && ((uVar3 == 0xffffffff || (uVar3 <= *(uint *)(lVar5 + 0x24))))) {
          if ((*(byte *)(lVar5 + 0x60) >> 2 & 1) != 0) {
            param_1[1] = param_2;
            uVar4 = *(uint *)(param_2 + 0x18);
            uVar3 = *(uint *)(param_2 + 0x1c);
          }
          break;
        }
        plVar6 = (long *)(lVar5 + 0x10);
      }
      lVar5 = *plVar6;
    } while( true );
  }
  if (uVar4 == 0x73) {
    if (uVar3 < 2) {
LAB_01bb2a9c:
      param_1[2] = param_2;
      uVar4 = *(uint *)(param_2 + 0x18);
      uVar3 = *(uint *)(param_2 + 0x1c);
      goto LAB_01bb2aa4;
    }
    uVar4 = 0x73;
LAB_01bb2b00:
    if ((uVar4 == 0x73) && (uVar3 == 2)) goto LAB_01bb2b10;
  }
  else {
    if (uVar4 == 0x6e) {
      if ((uVar3 < 0x28) && ((1L << ((ulong)uVar3 & 0x3f) & 0x808001180aU) != 0)) goto LAB_01bb2a9c;
    }
    else {
LAB_01bb2aa4:
      if (uVar4 == 0x5a) {
        if (((uVar3 != 0x1f) && (uVar3 != 0x26)) && (8 < uVar3)) {
          return;
        }
        param_1[3] = param_2;
        uVar4 = *(uint *)(param_2 + 0x18);
        uVar3 = *(uint *)(param_2 + 0x1c);
        if ((uVar4 == 0x5a) && (uVar3 < 9)) {
          param_1[4] = param_2;
          uVar4 = *(uint *)(param_2 + 0x18);
          uVar3 = *(uint *)(param_2 + 0x1c);
        }
      }
      if (uVar4 != 0x6e) goto LAB_01bb2b00;
    }
    if ((uVar3 & 0xfffffffe) == 8) {
LAB_01bb2b10:
      param_1[5] = param_2;
      return;
    }
  }
  return;
}

