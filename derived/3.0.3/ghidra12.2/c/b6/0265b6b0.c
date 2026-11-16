
long FUN_0265b6b0(undefined4 param_1)

{
  long lVar1;
  undefined8 *puVar2;
  
  if (DAT_05574040 == 0) {
switchD_0265b734_default:
    lVar1 = 0;
  }
  else {
    puVar2 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar1 = (**(code **)(*(long *)*puVar2 + 0x38))();
      if (lVar1 == 0) {
        return 0;
      }
      lVar1 = lVar1 + 0x70;
    }
    else {
      if (puVar2 == (undefined8 *)0x0) goto switchD_0265b734_default;
      if ((long *)puVar2[0x26] == (long *)0x0) {
        return 0;
      }
      lVar1 = (**(code **)(*(long *)puVar2[0x26] + 0x38))();
      if (lVar1 == 0) {
        return 0;
      }
    }
    switch(param_1) {
    case 0:
      lVar1 = lVar1 + 0xe6c48;
      break;
    case 1:
      lVar1 = lVar1 + 0xe6cf0;
      break;
    case 2:
      lVar1 = lVar1 + 0xe6d60;
      break;
    case 3:
      lVar1 = lVar1 + 0xe6dd0;
      break;
    case 4:
      lVar1 = lVar1 + 0xe6e40;
      break;
    case 5:
      lVar1 = lVar1 + 0xe6eb0;
      break;
    case 6:
      lVar1 = lVar1 + 0xe6f20;
      break;
    default:
      goto switchD_0265b734_default;
    }
  }
  return lVar1;
}

