
undefined8 FUN_01d4d624(long param_1,long *param_2)

{
  long *plVar1;
  uint uVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  uVar2 = *(uint *)(param_1 + 0x380);
  if (uVar2 - 0x11 < 2) {
    *(undefined1 *)(param_1 + 0xab3) = 1;
    if (param_2 == (long *)0x0) {
      return 1;
    }
    *(long **)(param_1 + 0x3f0) = param_2;
    *param_2 = param_1 + 0x3f0;
    lVar3 = *(long *)(param_1 + 0x3f0);
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
    return 1;
  }
  if ((0x10 < uVar2 || (1 << (ulong)(uVar2 & 0x1f) & 0x11089U) == 0) ||
     (*(int *)(param_1 + 0x3e4) != 1)) {
    return 0;
  }
  plVar1 = (long *)(param_1 + 0x3f0);
  if (param_2 != (long *)0x0) {
    *plVar1 = (long)param_2;
    *param_2 = (long)plVar1;
    lVar3 = *plVar1;
    *(undefined8 *)(lVar3 + 8) = 0;
    *(undefined8 *)(lVar3 + 0x10) = 0;
  }
  if (*(int *)(*DAT_0537d558 + 0x508) == 4 && *(char *)(*DAT_0537d558 + 0x55f) != '\0') {
    FUN_03ebb160(param_1 + 0x378,8);
    if (*(int *)(param_1 + 0x3e0) == 8) {
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
      if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
        *(undefined8 *)*plVar1 = 0;
        *plVar1 = 0;
      }
    }
  }
  else {
    lVar3 = *plVar1;
    if (lVar3 != 0) {
      *(undefined8 *)(lVar3 + 8) = 1;
      *(undefined8 *)(lVar3 + 0x10) = 0;
      if ((undefined8 *)*plVar1 == (undefined8 *)0x0) {
        return 1;
      }
      *(undefined8 *)*plVar1 = 0;
      *plVar1 = 0;
      return 1;
    }
  }
  return 1;
}

