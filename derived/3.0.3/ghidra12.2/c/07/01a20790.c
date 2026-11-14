
void FUN_01a20790(byte *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
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
  plVar1 = (long *)(lVar6 + 0x2d060);
  lVar2 = *(long *)(lVar6 + 0x2d0b8);
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
      if (*(long *)(lVar6 + 0x2d0b8) == 0) goto LAB_01a20868;
      plVar4 = *(long **)(*(long *)(lVar6 + 0x2d0b8) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(long *)(lVar6 + 0x2d098);
      local_40 = *(undefined8 *)(lVar6 + 0x2d0a0);
      uStack_38 = 0xb8;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_01a20868:
  puVar5 = (undefined8 *)(*(long *)(lVar6 + 0x2d0a0) + *(long *)(lVar6 + 0x2d098));
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  *puVar5 = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  FUN_012ca808(puVar5);
  FUN_027f9454(puVar5);
  *(undefined4 *)((long)puVar5 + 0xb4) = 0;
  *(undefined8 *)((long)puVar5 + 0xac) = 0;
  *(undefined8 *)((long)puVar5 + 0xa4) = 0;
  FUN_027f9454(puVar5);
  *(undefined4 *)(puVar5 + 0x14) = 0;
  *(undefined4 *)((long)puVar5 + 0xb4) = 0xffffffff;
  *(undefined8 *)((long)puVar5 + 0xac) = 0xffffffffffffffff;
  *(undefined8 *)((long)puVar5 + 0xa4) = 0xffffffffffffffff;
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x2d0b8) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x2d0b8) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  lVar2 = *(long *)(lVar6 + 0x2d0f0);
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
      if (*(long *)(lVar6 + 0x2d0f0) == 0) goto LAB_01a20964;
      plVar4 = *(long **)(*(long *)(lVar6 + 0x2d0f0) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *(long *)(lVar6 + 0x2d0d0);
      local_40 = *(undefined8 *)(lVar6 + 0x2d0d8);
      uStack_38 = 0xb8;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_01a20964:
  puVar5 = (undefined8 *)(*(long *)(lVar6 + 0x2d0d8) + *(long *)(lVar6 + 0x2d0d0));
  puVar5[0x15] = 0;
  puVar5[0x16] = 0;
  puVar5[0x13] = 0;
  puVar5[0x14] = 0;
  *puVar5 = 0;
  puVar5[0x11] = 0;
  puVar5[0x12] = 0;
  puVar5[0xf] = 0;
  puVar5[0x10] = 0;
  puVar5[0xd] = 0;
  puVar5[0xe] = 0;
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[9] = 0;
  puVar5[10] = 0;
  puVar5[7] = 0;
  puVar5[8] = 0;
  puVar5[5] = 0;
  puVar5[6] = 0;
  puVar5[3] = 0;
  puVar5[4] = 0;
  puVar5[1] = 0;
  puVar5[2] = 0;
  FUN_012ca808(puVar5);
  FUN_02806a0c(puVar5);
  *(undefined4 *)((long)puVar5 + 0xb4) = 0;
  *(undefined8 *)((long)puVar5 + 0xac) = 0;
  *(undefined8 *)((long)puVar5 + 0xa4) = 0;
  FUN_02806a0c(puVar5);
  *(undefined4 *)((long)puVar5 + 0xb4) = 0xffffffff;
  *(undefined8 *)((long)puVar5 + 0xac) = 0xffffffffffffffff;
  *(undefined8 *)((long)puVar5 + 0xa4) = 0xffffffffffffffff;
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x2d0f0) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x2d0f0) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  lVar2 = *(long *)(lVar6 + 0x2d080);
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
      if (*(long *)(lVar6 + 0x2d080) == 0) goto LAB_01a20a58;
      plVar4 = *(long **)(*(long *)(lVar6 + 0x2d080) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_48 = *plVar1;
      local_40 = *(undefined8 *)(lVar6 + 0x2d068);
      uStack_38 = 2;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
    }
  }
LAB_01a20a58:
  *(ushort *)(*(long *)(lVar6 + 0x2d068) + *plVar1) =
       *(ushort *)(*(long *)(lVar6 + 0x2d068) + *plVar1) & 0xfffe;
  if ((*(long *)(lVar6 + 0x2d080) != 0) &&
     (plVar4 = *(long **)(*(long *)(lVar6 + 0x2d080) + 0x20), plVar4 != (long *)0x0)) {
    local_48 = *plVar1;
    local_40 = *(undefined8 *)(lVar6 + 0x2d068);
    uStack_38 = 2;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
  *(ushort *)(*(long *)(lVar6 + 0x2d068) + *plVar1) =
       *(ushort *)(*(long *)(lVar6 + 0x2d068) + *plVar1) & 0xfffd;
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x2d080) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x2d080) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

