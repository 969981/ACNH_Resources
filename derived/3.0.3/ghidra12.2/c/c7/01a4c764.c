
void FUN_01a4c764(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 local_14 [4];
  
  lVar2 = *(long *)PTR_DAT_04bb46b0;
  if (lVar2 == 0) {
LAB_01a4c820:
    local_14[0] = 0;
  }
  else {
    puVar3 = *(undefined8 **)(lVar2 + 0x10);
    if ((*(byte *)(lVar2 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar3 + 0x38))();
      if (lVar2 == 0) goto LAB_01a4c820;
      lVar2 = lVar2 + 0x70;
    }
    else if (((puVar3 == (undefined8 *)0x0) || ((long *)puVar3[0x26] == (long *)0x0)) ||
            (lVar2 = (**(code **)(*(long *)puVar3[0x26] + 0x38))(), lVar2 == 0)) goto LAB_01a4c820;
    if ((*(long **)(lVar2 + 0x1c2520) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x1c2520), puVar3 == (undefined8 *)0x0)) {
      local_14[0] = *(undefined1 *)(*(long *)(lVar2 + 0x1c2508) + *(long *)(lVar2 + 0x1c2500) + 1);
    }
    else {
      uVar1 = (**(code **)*puVar3)();
      local_14[0] = *(undefined1 *)(*(long *)(lVar2 + 0x1c2508) + *(long *)(lVar2 + 0x1c2500) + 1);
      if ((((uVar1 & 1) != 0) && (*(long *)(lVar2 + 0x1c2520) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x1c2520) + 8), puVar3 != (undefined8 *)0x0))
      {
        (**(code **)*puVar3)();
      }
    }
  }
  FUN_01af193c(param_2,local_14,PTR_LAB_04bc0420);
  return;
}

