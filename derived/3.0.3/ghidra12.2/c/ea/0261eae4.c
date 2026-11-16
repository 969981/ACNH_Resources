
void FUN_0261eae4(ulong param_1,byte *param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  byte bVar6;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  bVar6 = *param_2;
  if (7 < bVar6) {
    bVar6 = 0xff;
  }
  local_48 = CONCAT71(local_48._1_7_,bVar6);
  lVar1 = FUN_02583354(DAT_055021a0,&local_48,1);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = lVar1 + 0x194b0;
  if (*(long *)(lVar1 + 0x194b8) == 0) {
    lVar5 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar1 = *(long *)(lVar5 + 0x86b0);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar1 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar1 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar1 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar5 + 0x86b0) == 0) goto LAB_0261ebc0;
      plVar3 = *(long **)(*(long *)(lVar5 + 0x86b0) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(long *)(lVar5 + 0x8690);
      local_40 = *(undefined8 *)(lVar5 + 0x8698);
      uStack_38 = 0x1400;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_0261ebc0:
  if (((uint)param_1 & 0xffff) < 0x800) {
    lVar1 = *(long *)(lVar5 + 0x8698) + *(long *)(lVar5 + 0x8690) + ((param_1 & 0xfff8) >> 3);
    *(byte *)(lVar1 + 0x100) = *(byte *)(lVar1 + 0x100) | (byte)(1 << (param_1 & 7));
  }
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar5 + 0x86b0) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x86b0) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

