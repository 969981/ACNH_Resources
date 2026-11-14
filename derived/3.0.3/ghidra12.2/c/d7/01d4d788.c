
undefined8 FUN_01d4d788(long param_1,undefined8 *param_2)

{
  long *plVar1;
  long lVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  if (0x10 < *(uint *)(param_1 + 0x380) ||
      (1 << (ulong)(*(uint *)(param_1 + 0x380) & 0x1f) & 0x11089U) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x3e4) != 1) {
    return 0;
  }
  plVar1 = (long *)(param_1 + 0x3f0);
  if (param_2 != (undefined8 *)0x0) {
    *plVar1 = (long)param_2;
    *param_2 = plVar1;
    lVar2 = *plVar1;
    *(undefined8 *)(lVar2 + 8) = 0;
    *(undefined8 *)(lVar2 + 0x10) = 0;
  }
  if (*(int *)(*DAT_0537d558 + 0x508) == 4 && *(char *)(*DAT_0537d558 + 0x55f) != '\0') {
    lVar2 = *plVar1;
    if (lVar2 != 0) {
      *(undefined8 *)(lVar2 + 8) = 1;
      *(undefined8 *)(lVar2 + 0x10) = 0;
      if ((undefined8 *)*plVar1 == (undefined8 *)0x0) {
        return 1;
      }
      *(undefined8 *)*plVar1 = 0;
      *plVar1 = 0;
      return 1;
    }
  }
  else {
    FUN_03ebb160(param_1 + 0x378,9);
    if (*(int *)(param_1 + 0x3e0) == 9) {
      lVar2 = *(long *)(param_1 + 0x3f0);
      if (*(int *)(param_1 + 1000) == 0) {
        if (lVar2 == 0) {
          return 1;
        }
        uVar3 = 0;
        uVar4 = 0;
        uVar5 = 1;
      }
      else {
        if (lVar2 == 0) {
          return 1;
        }
        uVar3 = *(undefined4 *)(param_1 + 1000);
        uVar5 = 0xffffffff;
        uVar4 = *(undefined4 *)(param_1 + 0x3ec);
      }
      *(undefined4 *)(lVar2 + 8) = uVar5;
      *(undefined4 *)(lVar2 + 0xc) = uVar3;
      *(undefined4 *)(lVar2 + 0x10) = uVar4;
      *(undefined4 *)(lVar2 + 0x14) = 0;
      if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
        *(undefined8 *)*plVar1 = 0;
        *plVar1 = 0;
      }
    }
  }
  return 1;
}

