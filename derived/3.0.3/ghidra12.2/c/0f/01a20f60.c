
void FUN_01a20f60(byte *param_1)

{
  long *plVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  byte local_3c [4];
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  local_3c[0] = *param_1;
  if (7 < local_3c[0]) {
    local_3c[0] = 0xff;
  }
  lVar2 = FUN_02583354(DAT_055021a0,local_3c,1);
  if (lVar2 == 0) {
    return;
  }
  lVar6 = lVar2 + 0x194b0;
  if (*(long *)(lVar2 + 0x194b8) == 0) {
    lVar6 = *(long *)(DAT_05574040 + 0x20);
  }
  plVar1 = (long *)(lVar6 + 0x2d060);
  lVar2 = *(long *)(lVar6 + 0x2d080);
  if (lVar2 == 0) {
    *(ushort *)(*(long *)(lVar6 + 0x2d068) + *plVar1) =
         *(ushort *)(*(long *)(lVar6 + 0x2d068) + *plVar1) & 0xfffd;
    return;
  }
  if (*(undefined8 **)(lVar2 + 0x10) == (undefined8 *)0x0) {
    uVar3 = 0;
    plVar4 = *(long **)(lVar2 + 0x20);
  }
  else {
    uVar3 = (**(code **)**(undefined8 **)(lVar2 + 0x10))();
    uVar3 = uVar3 & 0xffffffff;
    if (*(long *)(lVar6 + 0x2d080) == 0) goto LAB_01a2101c;
    plVar4 = *(long **)(*(long *)(lVar6 + 0x2d080) + 0x20);
  }
  if (plVar4 != (long *)0x0) {
    local_38 = *plVar1;
    local_30 = *(undefined8 *)(lVar6 + 0x2d068);
    uStack_28 = 2;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
  }
LAB_01a2101c:
  *(ushort *)(*(long *)(lVar6 + 0x2d068) + *plVar1) =
       *(ushort *)(*(long *)(lVar6 + 0x2d068) + *plVar1) & 0xfffd;
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar6 + 0x2d080) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x2d080) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

