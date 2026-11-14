
void FUN_01af1ae4(undefined8 param_1)

{
  undefined *puVar1;
  uint uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 local_14 [4];
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar5 = *(long *)PTR_DAT_04bb43c0;
  uVar2 = FUN_0277d6c4();
  if (*(long *)puVar1 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar5 + 0x57e58);
  uVar2 = (uVar2 & 0xffff) - (uint)*(ushort *)(lVar5 + 0x1f8);
  if (*(uint *)(lVar5 + 0x1d8) <= uVar2) {
    return;
  }
  if (*(long *)(*(long *)(lVar5 + 0x1e0) + (long)(int)uVar2 * 8) == 0) {
    return;
  }
  if (DAT_05574040 == 0) {
LAB_01af1be8:
    local_14[0] = 0;
  }
  else {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar5 == 0) goto LAB_01af1be8;
      lVar5 = lVar5 + 0x70;
    }
    else if (((puVar4 == (undefined8 *)0x0) || ((long *)puVar4[0x26] == (long *)0x0)) ||
            (lVar5 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar5 == 0)) goto LAB_01af1be8;
    if ((*(long **)(lVar5 + 0x1c2520) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar5 + 0x1c2520), puVar4 == (undefined8 *)0x0)) {
      local_14[0] = *(undefined1 *)(*(long *)(lVar5 + 0x1c2508) + *(long *)(lVar5 + 0x1c2500) + 1);
    }
    else {
      uVar3 = (**(code **)*puVar4)();
      local_14[0] = *(undefined1 *)(*(long *)(lVar5 + 0x1c2508) + *(long *)(lVar5 + 0x1c2500) + 1);
      if ((((uVar3 & 1) != 0) && (*(long *)(lVar5 + 0x1c2520) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x1c2520) + 8), puVar4 != (undefined8 *)0x0))
      {
        (**(code **)*puVar4)();
      }
    }
  }
  FUN_01af193c(param_1,local_14,&LAB_01af1ad4);
  return;
}

