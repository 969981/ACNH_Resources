
undefined8 FUN_01dbeee0(long param_1,byte *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  long lVar7;
  int local_40 [4];
  byte local_14 [4];
  
  if (*param_2 < 8) {
    local_14[0] = *param_2;
    FUN_007b36c8(local_40,local_14);
  }
  lVar7 = *(long *)(param_1 + 0x10);
  if (((lVar7 == 0) || (*(int *)(lVar7 + 0x3e4) != 1)) ||
     (uVar2 = *(uint *)(lVar7 + 0x380),
     0x2c < uVar2 || (1L << ((ulong)uVar2 & 0x3f) & 0x180006071089U) == 0)) {
    if (param_3 == (undefined8 *)0x0) {
      return 0;
    }
    param_3[1] = 0x32ffffffff;
    param_3[2] = 0;
    return 0;
  }
  puVar1 = (undefined8 *)(lVar7 + 0x3f0);
  *(undefined4 *)(lVar7 + 0x3e0) = 0x20;
  if (param_3 != (undefined8 *)0x0) {
    *(undefined8 **)(lVar7 + 0x3f0) = param_3;
    *param_3 = puVar1;
    lVar3 = *(long *)(lVar7 + 0x3f0);
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    uVar2 = *(uint *)(lVar7 + 0x380);
  }
  if ((0x10 < uVar2) || ((1 << (ulong)(uVar2 & 0x1f) & 0x11089U) == 0)) {
    *(undefined8 *)(lVar7 + 0x3c8) = 0;
    *(undefined4 *)(lVar7 + 0x3d8) = 0;
  }
  local_40[0] = 0x1e;
  FUN_03ebb160(lVar7 + 0x378,0x1e);
  if (local_40[0] == *(int *)(lVar7 + 0x3e0)) {
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
    if ((undefined8 *)*puVar1 != (undefined8 *)0x0) {
      *(undefined8 *)*puVar1 = 0;
      *puVar1 = 0;
    }
  }
  return 1;
}

