
void FUN_0262f518(ulong param_1,long param_2)

{
  ulong uVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  long lVar5;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  if (param_2 == 0) {
    return;
  }
  lVar4 = param_2 + 0x194b0;
  if (*(long *)(param_2 + 0x194b8) == 0) {
    lVar4 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar5 = *(long *)(lVar4 + 0x86b0);
  if (lVar5 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar1 = 0;
      plVar2 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar1 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar1 = uVar1 & 0xffffffff;
      if (*(long *)(lVar4 + 0x86b0) == 0) goto LAB_0262f5c8;
      plVar2 = *(long **)(*(long *)(lVar4 + 0x86b0) + 0x20);
    }
    if (plVar2 != (long *)0x0) {
      local_48 = *(long *)(lVar4 + 0x8690);
      local_40 = *(undefined8 *)(lVar4 + 0x8698);
      uStack_38 = 0x1400;
      (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
    }
  }
LAB_0262f5c8:
  if (((uint)param_1 & 0xffff) < 0x800) {
    lVar5 = *(long *)(lVar4 + 0x8698) + *(long *)(lVar4 + 0x8690) + ((param_1 & 0xfff8) >> 3);
    *(byte *)(lVar5 + 0x300) = *(byte *)(lVar5 + 0x300) & ((byte)(1 << (param_1 & 7)) ^ 0xff);
  }
  if ((((uVar1 & 1) != 0) && (*(long *)(lVar4 + 0x86b0) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(lVar4 + 0x86b0) + 0x18), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  return;
}

