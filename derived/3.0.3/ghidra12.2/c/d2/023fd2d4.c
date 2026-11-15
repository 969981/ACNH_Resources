
void FUN_023fd2d4(byte *param_1,long param_2)

{
  long lVar1;
  ulong uVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  byte bVar7;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  bVar7 = *param_1;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  local_48 = CONCAT71(local_48._1_7_,bVar7);
  lVar1 = FUN_02583354(DAT_055021a0,&local_48,1);
  if (lVar1 == 0) {
    return;
  }
  lVar5 = *(long *)(lVar1 + 0x108);
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
      if (*(long *)(lVar1 + 0x108) == 0) goto LAB_023fd388;
      plVar3 = *(long **)(*(long *)(lVar1 + 0x108) + 0x20);
    }
    if (plVar3 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar1 + 0xe8);
      uStack_40 = *(undefined8 *)(lVar1 + 0xf0);
      local_38 = 0x1fc8;
      (**(code **)(*plVar3 + 0x20))(plVar3,&local_48);
    }
  }
LAB_023fd388:
  lVar5 = *(long *)(lVar1 + 0xf0) + *(long *)(lVar1 + 0xe8);
  local_48 = 0xfffe;
  FUN_0277d4ac(&local_48);
  uVar6 = *(undefined8 *)(param_2 + 0x34);
  *(short *)(lVar5 + 0x1a50) = (short)uVar6;
  *(char *)(lVar5 + 0x1a52) = (char)((ulong)uVar6 >> 0x10);
  *(char *)(lVar5 + 0x1a53) = (char)((ulong)uVar6 >> 0x18);
  *(int *)(lVar5 + 0x1a54) = (int)((ulong)uVar6 >> 0x20);
  if ((((uVar2 & 1) != 0) && (*(long *)(lVar1 + 0x108) != 0)) &&
     (puVar4 = *(undefined8 **)(*(long *)(lVar1 + 0x108) + 0x18), puVar4 != (undefined8 *)0x0)) {
    (**(code **)*puVar4)();
  }
  return;
}

