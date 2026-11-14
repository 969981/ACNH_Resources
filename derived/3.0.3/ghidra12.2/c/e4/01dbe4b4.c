
undefined8 FUN_01dbe4b4(long param_1,byte *param_2,undefined8 *param_3)

{
  long *plVar1;
  ulong uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  int local_40;
  undefined4 uStack_3c;
  long lStack_38;
  byte local_14 [4];
  
  local_14[0] = *param_2;
  if ((((7 < local_14[0]) || (uVar2 = FUN_007b36c8(&local_40,local_14), (uVar2 & 1) == 0)) ||
      (**(long **)(DAT_053719b8 + 8) != CONCAT44(uStack_3c,local_40) ||
       (*(long **)(DAT_053719b8 + 8))[1] != lStack_38)) ||
     ((lVar7 = *(long *)(param_1 + 0x10), lVar7 == 0 || (*(int *)(lVar7 + 0x380) != 3)))) {
    if (param_3 == (undefined8 *)0x0) {
      return 0;
    }
    param_3[1] = 0x32ffffffff;
    param_3[2] = 0;
    return 0;
  }
  plVar1 = (long *)(lVar7 + 0x3f0);
  if (param_3 != (undefined8 *)0x0) {
    *plVar1 = (long)param_3;
    *param_3 = plVar1;
    lVar3 = *plVar1;
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
  }
  *(undefined4 *)(lVar7 + 0x3e0) = 3;
  local_40 = 4;
  FUN_03ebb160(lVar7 + 0x378,4);
  if (local_40 == *(int *)(lVar7 + 0x3e0)) {
    lVar3 = *(long *)(lVar7 + 0x3f0);
    if (*(int *)(lVar7 + 1000) == 0) {
      if (lVar3 == 0) {
        return 1;
      }
      uVar4 = 0;
      uVar5 = 0;
      uVar6 = 1;
    }
    else {
      if (lVar3 == 0) {
        return 1;
      }
      uVar4 = *(undefined4 *)(lVar7 + 1000);
      uVar6 = 0xffffffff;
      uVar5 = *(undefined4 *)(lVar7 + 0x3ec);
    }
    *(undefined4 *)(lVar3 + 8) = uVar6;
    *(undefined4 *)(lVar3 + 0xc) = uVar4;
    *(undefined4 *)(lVar3 + 0x10) = uVar5;
    *(undefined4 *)(lVar3 + 0x14) = 0;
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      *(undefined8 *)*plVar1 = 0;
      *plVar1 = 0;
    }
  }
  return 1;
}

