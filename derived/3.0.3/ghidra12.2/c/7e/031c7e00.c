
void FUN_031c7e00(byte *param_1,uint param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  ulong local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  byte local_14 [4];
  
  local_14[0] = *param_1;
  if (7 < local_14[0]) {
    return;
  }
  lVar1 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_14,1);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = lVar1 + 0x194b0;
  if (*(long *)(lVar1 + 0x194b8) == 0) {
    lVar5 = *(long *)(DAT_05574040 + 0x20);
    lVar1 = *(long *)(lVar5 + 0x1170);
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x1a620);
  }
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
      if (*(long *)(lVar5 + 0x1170) == 0) goto LAB_031c7ed8;
      plVar3 = *(long **)(*(long *)(lVar5 + 0x1170) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(ulong *)(lVar5 + 0x1150);
      uStack_40 = *(undefined8 *)(lVar5 + 0x1158);
      local_38 = 0x208;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_031c7ed8:
  local_48 = local_48 & 0xffffffff00000000;
  if (param_2 < 8) {
    *(undefined1 *)(*(long *)(lVar5 + 0x1158) + *(long *)(lVar5 + 0x1150) + (ulong)param_2 + 0x100)
         = 0;
  }
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar5 + 0x1170) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar5 + 0x1170) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

