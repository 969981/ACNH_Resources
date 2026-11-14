
undefined8 FUN_01d4cda8(long param_1,ulong param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x380);
  if (0x29 < uVar2) {
    return 0;
  }
  if ((1L << ((ulong)uVar2 & 0x3f) & 0x210011089U) == 0) {
    if ((1L << ((ulong)uVar2 & 0x3f) & 0x20000100000U) == 0) {
      return 0;
    }
    if (param_3 != (undefined8 *)0x0) {
      param_3[1] = 0xcffffffff;
      param_3[2] = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x3e4) != 2) {
      return 0;
    }
    puVar1 = (undefined8 *)(param_1 + 0x3f0);
    uVar4 = 0;
    if ((param_2 & 1) == 0) {
      uVar4 = 0x18;
    }
    *(undefined4 *)(param_1 + 0x3e0) = uVar4;
    if (param_3 != (undefined8 *)0x0) {
      *(undefined8 **)(param_1 + 0x3f0) = param_3;
      *param_3 = puVar1;
      lVar3 = *(long *)(param_1 + 0x3f0);
      *(undefined8 *)(lVar3 + 8) = 0;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      uVar2 = *(uint *)(param_1 + 0x380);
    }
    if ((0x10 < uVar2) || ((1 << (ulong)(uVar2 & 0x1f) & 0x11089U) == 0)) {
      *(undefined8 *)(param_1 + 0x3c8) = 0;
      *(undefined4 *)(param_1 + 0x3d8) = 0;
    }
    FUN_03ebb160(param_1 + 0x378,0x16);
    if (*(int *)(param_1 + 0x3e0) == 0x16) {
      lVar3 = *(long *)(param_1 + 0x3f0);
      if (*(int *)(param_1 + 1000) == 0) {
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
        uVar4 = *(undefined4 *)(param_1 + 1000);
        uVar6 = 0xffffffff;
        uVar5 = *(undefined4 *)(param_1 + 0x3ec);
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
  }
  return 1;
}

