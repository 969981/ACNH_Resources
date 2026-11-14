
void FUN_016c88ec(byte *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  void *__src;
  undefined8 *puVar5;
  long lVar6;
  byte local_4c [4];
  long local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_4c[0] = *param_1;
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
  lVar2 = *(long *)(lVar6 + 0x2d2e8);
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
      if (*(long *)(lVar6 + 0x2d2e8) == 0) goto LAB_016c89c8;
      plVar4 = *(long **)(*(long *)(lVar6 + 0x2d2e8) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(long *)(lVar6 + 0x2d2c8);
      local_40 = *(undefined8 *)(lVar6 + 0x2d2d0);
      uStack_38 = 0x754;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_016c89c8:
  lVar2 = *(long *)(lVar6 + 0x2d2c8);
  lVar1 = *(long *)(lVar6 + 0x2d2d0);
  __src = (void *)(**(code **)(*param_2 + 0x20))(param_2);
  memcpy((void *)(lVar1 + lVar2),__src,0x754);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x2d2e8) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x2d2e8) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

