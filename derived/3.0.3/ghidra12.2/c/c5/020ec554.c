
void FUN_020ec554(char *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte bVar3;
  char cVar4;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  undefined8 *puVar8;
  long lVar9;
  ushort uVar10;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  cVar4 = *param_1;
  bVar3 = param_1[1];
  if (9 < (ulong)(long)cVar4 || 7 < bVar3) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  puVar8 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar5 = (**(code **)(*(long *)*puVar8 + 0x38))();
    if (lVar5 == 0) {
      return;
    }
    lVar5 = lVar5 + 0x70;
  }
  else {
    if (puVar8 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar8[0x26] == (long *)0x0) {
      return;
    }
    lVar5 = (**(code **)(*(long *)puVar8[0x26] + 0x38))();
    if (lVar5 == 0) {
      return;
    }
  }
  if (*(short *)(param_1 + 2) < 0) {
    return;
  }
  lVar5 = lVar5 + ((long)cVar4 & 0xffffffffU) * 0x10798 + (ulong)(uint)(int)(char)bVar3 * 0x700;
  lVar9 = *(long *)(lVar5 + 0x1e8);
  if (lVar9 == 0) {
    uVar6 = 0;
  }
  else {
    if (*(undefined8 **)(lVar9 + 0x10) == (undefined8 *)0x0) {
      uVar6 = 0;
    }
    else {
      uVar6 = (**(code **)**(undefined8 **)(lVar9 + 0x10))();
      lVar9 = *(long *)(lVar5 + 0x1e8);
      uVar6 = uVar6 & 0xffffffff;
      if (lVar9 == 0) goto LAB_020ec664;
    }
    plVar7 = *(long **)(lVar9 + 0x20);
    if (plVar7 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar5 + 0x1c8);
      local_40 = *(undefined8 *)(lVar5 + 0x1d0);
      uStack_38 = 0x100;
      (**(code **)(*plVar7 + 0x20))(plVar7,&local_48);
    }
  }
LAB_020ec664:
  uVar10 = *(ushort *)(param_1 + 4);
  puVar1 = (undefined1 *)(*(long *)(lVar5 + 0x1d0) + *(long *)(lVar5 + 0x1c8));
  if (0xfe < uVar10) {
    uVar10 = 0xff;
  }
  puVar2 = puVar1 + ((long)(short)*(ushort *)(param_1 + 2) & 0xffffffff);
  if (0xff < *(ushort *)(param_1 + 2)) {
    puVar2 = puVar1;
  }
  *puVar2 = (char)uVar10;
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar5 + 0x1e8) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar5 + 0x1e8) + 0x18), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
  return;
}

