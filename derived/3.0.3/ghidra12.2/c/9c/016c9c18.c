
void FUN_016c9c18(undefined1 *param_1,byte *param_2)

{
  undefined1 uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  byte local_4c [4];
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_4c[0] = *param_2;
  if (7 < local_4c[0]) {
    local_4c[0] = 0xff;
  }
  lVar2 = FUN_02583354(DAT_055021a0,local_4c,1);
  if (lVar2 == 0) {
    return;
  }
  lVar6 = lVar2 + 0x194b0;
  if (*(long *)(lVar2 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar2 = *(long *)(lVar6 + 0x2d128);
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar2 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar6 + 0x2d128) == 0) goto LAB_016c9cf4;
      plVar4 = *(long **)(*(long *)(lVar6 + 0x2d128) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(long *)(lVar6 + 0x2d108);
      local_40 = *(undefined8 *)(lVar6 + 0x2d110);
      uStack_38 = 0x790;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_016c9cf4:
  lVar2 = *(long *)(lVar6 + 0x2d110) + *(long *)(lVar6 + 0x2d108);
  *(undefined1 *)(lVar2 + 0x78c) = *param_1;
  *(undefined1 *)(lVar2 + 0x78d) = param_1[1];
  uVar1 = FUN_020fd7d8(param_1);
  *(undefined1 *)(lVar2 + 0x78e) = uVar1;
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x2d128) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x2d128) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

