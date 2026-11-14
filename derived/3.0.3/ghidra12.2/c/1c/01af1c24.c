
void FUN_01af1c24(undefined8 param_1)

{
  undefined4 uVar1;
  ulong uVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 local_24 [4];
  
  local_24[0] = 0;
  lVar3 = *(long *)PTR_DAT_04bb46b0;
  if (lVar3 != 0) {
    puVar4 = *(undefined8 **)(lVar3 + 0x10);
    if ((*(byte *)(lVar3 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar3 == 0) goto LAB_01af1cf8;
      lVar3 = lVar3 + 0x70;
    }
    else if (((puVar4 == (undefined8 *)0x0) || ((long *)puVar4[0x26] == (long *)0x0)) ||
            (lVar3 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar3 == 0)) goto LAB_01af1cf8;
    if ((*(long **)(lVar3 + 0x1c2520) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x1c2520), puVar4 == (undefined8 *)0x0)) {
      local_24[0] = *(undefined1 *)(*(long *)(lVar3 + 0x1c2508) + *(long *)(lVar3 + 0x1c2500) + 1);
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      local_24[0] = *(undefined1 *)(*(long *)(lVar3 + 0x1c2508) + *(long *)(lVar3 + 0x1c2500) + 1);
      if ((((uVar2 & 1) != 0) && (*(long *)(lVar3 + 0x1c2520) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x1c2520) + 8), puVar4 != (undefined8 *)0x0))
      {
        (**(code **)*puVar4)();
      }
    }
  }
LAB_01af1cf8:
  uVar1 = FUN_01af1f60(param_1,local_24,0);
  FUN_01af1d20(param_1,uVar1);
  return;
}

