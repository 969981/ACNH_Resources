
void FUN_020f0728(char *param_1)

{
  short *psVar1;
  short *psVar2;
  char cVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  short sVar9;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  cVar3 = *param_1;
  if (9 < (ulong)(long)cVar3) {
    return;
  }
  if (DAT_05574040 == 0) {
    return;
  }
  puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
  if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
    lVar4 = (**(code **)(*(long *)*puVar7 + 0x38))();
    if (lVar4 == 0) {
      return;
    }
    lVar4 = lVar4 + 0x70;
  }
  else {
    if (puVar7 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar7[0x26] == (long *)0x0) {
      return;
    }
    lVar4 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
    if (lVar4 == 0) {
      return;
    }
  }
  lVar4 = lVar4 + ((long)cVar3 & 0xffffffffU) * 0x10798;
  lVar8 = *(long *)(lVar4 + 0xfa30);
  if (lVar8 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      lVar8 = *(long *)(lVar4 + 0xfa30);
      uVar5 = uVar5 & 0xffffffff;
      if (lVar8 == 0) goto LAB_020f081c;
    }
    plVar6 = *(long **)(lVar8 + 0x20);
    if (plVar6 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar4 + 0xfa10);
      local_40 = *(undefined8 *)(lVar4 + 0xfa18);
      uStack_38 = 0x200;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    }
  }
LAB_020f081c:
  sVar9 = *(short *)(param_1 + 4);
  psVar1 = (short *)(*(long *)(lVar4 + 0xfa18) + *(long *)(lVar4 + 0xfa10));
  if (0xfffe < (uint)(int)sVar9) {
    sVar9 = -1;
  }
  psVar2 = psVar1 + *(ushort *)(param_1 + 2);
  if (0xff < *(ushort *)(param_1 + 2)) {
    psVar2 = psVar1;
  }
  *psVar2 = sVar9;
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar4 + 0xfa30) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar4 + 0xfa30) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

