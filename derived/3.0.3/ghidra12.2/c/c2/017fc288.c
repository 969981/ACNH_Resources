
void FUN_017fc288(uint param_1)

{
  ulong uVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  uVar1 = FUN_01810f30();
  if ((uVar1 & 1) == 0) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  lVar2 = FUN_026f480c();
  if (lVar2 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar2 + 0x103d0);
  if (lVar5 == 0) {
    uVar1 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar1 = 0;
      plVar3 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar1 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar1 = uVar1 & 0xffffffff;
      if (*(long *)(lVar2 + 0x103d0) == 0) goto LAB_017fc334;
      plVar3 = *(long **)(*(long *)(lVar2 + 0x103d0) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(long *)(lVar2 + 0x103b0);
      local_40 = *(undefined8 *)(lVar2 + 0x103b8);
      uStack_38 = 0x20;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_017fc334:
  if (param_1 < 0x30) {
    lVar5 = *(long *)(lVar2 + 0x103b8) + *(long *)(lVar2 + 0x103b0) + (ulong)(param_1 >> 3);
    *(byte *)(lVar5 + 0x18) = *(byte *)(lVar5 + 0x18) | (byte)(1 << (ulong)(param_1 & 7));
  }
  if ((((uVar1 & 1) != 0) && (*(long *)(lVar2 + 0x103d0) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar2 + 0x103d0) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

