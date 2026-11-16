
int FUN_02643d60(void)

{
  long *plVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  int iVar9;
  long local_48;
  long local_40;
  undefined8 uStack_38;
  
  lVar8 = DAT_05574040;
  switch(DAT_0555c1d8) {
  case 0:
    if (DAT_05574040 != 0) {
      lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
      lVar8 = 0;
      if (lVar4 != 0) {
        lVar8 = lVar4 + 0x276cb0;
      }
    }
    lVar4 = 0x8a48;
    break;
  case 1:
    if (DAT_05574040 != 0) {
      lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
      lVar8 = 0;
      if (lVar4 != 0) {
        lVar8 = lVar4 + 0x276cb0;
      }
    }
    lVar4 = 0x8a80;
    break;
  case 2:
    if (DAT_05574040 != 0) {
      lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
      lVar8 = 0;
      if (lVar4 != 0) {
        lVar8 = lVar4 + 0x276cb0;
      }
    }
    lVar4 = 0x8ab8;
    break;
  case 3:
    if (DAT_05574040 != 0) {
      lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
      lVar8 = 0;
      if (lVar4 != 0) {
        lVar8 = lVar4 + 0x276cb0;
      }
    }
    lVar4 = 0x8af0;
    break;
  case 4:
    if (DAT_05574040 != 0) {
      lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
      lVar8 = 0;
      if (lVar4 != 0) {
        lVar8 = lVar4 + 0x276cb0;
      }
    }
    lVar4 = 0x8b28;
    break;
  case 5:
    if (DAT_05574040 != 0) {
      lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
      lVar8 = 0;
      if (lVar4 != 0) {
        lVar8 = lVar4 + 0x276cb0;
      }
    }
    lVar4 = 0x8b60;
    break;
  case 6:
    if (DAT_05574040 != 0) {
      lVar4 = (**(code **)(*(long *)**(undefined8 **)(DAT_05574040 + 0x10) + 0x30))();
      lVar8 = 0;
      if (lVar4 != 0) {
        lVar8 = lVar4 + 0x276cb0;
      }
    }
    lVar4 = 0x8b98;
    break;
  default:
    return 0;
  }
  plVar1 = (long *)(lVar8 + lVar4);
  lVar8 = plVar1[4];
  if (lVar8 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar8 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (plVar1[4] == 0) goto LAB_02643fb4;
      plVar6 = *(long **)(plVar1[4] + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_48 = *plVar1;
      local_40 = plVar1[1];
      uStack_38 = 8;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
    }
  }
LAB_02643fb4:
  iVar9 = 100000;
  puVar2 = (uint *)(plVar1[1] + *plVar1);
  uVar3 = *puVar2;
  if ((*(byte *)((long)puVar2 + 7) != 0 ||
       (((ulong)uVar3 != 0 || (ushort)puVar2[1] != 0) || *(byte *)((long)puVar2 + 6) != 0)) &&
     ((uint)*(byte *)((long)puVar2 + 7) ==
      ((uVar3 + (uVar3 >> 0x10) + (uVar3 >> 0x18) + (uVar3 >> 8)) - 0x2d & 0xff))) {
    lVar8 = (ulong)uVar3 << ((ulong)(0x1d - *(byte *)((long)puVar2 + 6)) & 0x3f);
    iVar9 = (100000 - (int)((ulong)lVar8 >> 0x20)) -
            (((int)lVar8 - (uint)(ushort)puVar2[1]) + -0x7f1cd4ef);
  }
  if ((((uVar5 & 1) != 0) && (plVar1[4] != 0)) &&
     (puVar7 = *(undefined8 **)(plVar1[4] + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return iVar9;
}

