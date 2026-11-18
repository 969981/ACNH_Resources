
void FUN_0375fe90(void)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  lVar1 = FUN_03775a30();
  if (lVar1 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar1 + 0xa00);
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
      uVar2 = 0;
      plVar3 = *(long **)(lVar5 + 0x20);
    }
    else {
      uVar2 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
      uVar2 = uVar2 & 0xffffffff;
      if (*(long *)(lVar1 + 0xa00) == 0) goto LAB_0375ff18;
      plVar3 = *(long **)(*(long *)(lVar1 + 0xa00) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_38 = *(ulong *)(lVar1 + 0x9e0);
      uStack_30 = *(undefined8 *)(lVar1 + 0x9e8);
      local_28 = 0x155c;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_38);
    }
  }
LAB_0375ff18:
  local_38 = local_38 & 0xffffffff00000000;
  lVar5 = *(long *)(lVar1 + 0x9e8) + *(long *)(lVar1 + 0x9e0);
  *(ushort *)(lVar5 + 0x153c) = *(ushort *)(lVar5 + 0x153c) | 1;
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0xa00) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0xa00) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

