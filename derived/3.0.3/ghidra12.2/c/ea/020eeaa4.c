
void FUN_020eeaa4(char *param_1)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  lVar1 = FUN_0265c3e0((long)*param_1);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar1 + 0x28);
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
      if (*(long *)(lVar1 + 0x28) == 0) goto LAB_020eeb38;
      plVar3 = *(long **)(*(long *)(lVar1 + 0x28) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar1 + 8);
      uStack_40 = *(undefined8 *)(lVar1 + 0x10);
      local_38 = 0x13230;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_020eeb38:
  local_48 = CONCAT44(local_48._4_4_,(int)param_1[1]);
  *(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x1315b) = param_1[1];
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

