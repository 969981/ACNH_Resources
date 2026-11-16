
void FUN_0264d310(byte *param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  byte bVar8;
  uint uVar9;
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  bVar8 = *param_1;
  if (7 < bVar8) {
    bVar8 = 0xff;
  }
  local_38 = CONCAT71(local_38._1_7_,bVar8);
  lVar3 = FUN_02583354(DAT_055021a0,&local_38,1);
  if (lVar3 == 0) {
    return;
  }
  lVar7 = lVar3 + 0x194b0;
  if (*(long *)(lVar3 + 0x194b8) == 0) {
    lVar7 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar3 = *(long *)(lVar7 + 0x2c600);
  if (lVar3 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar3 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar3 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar3 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar7 + 0x2c600) == 0) goto LAB_0264d3e4;
      plVar5 = *(long **)(*(long *)(lVar7 + 0x2c600) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_38 = *(long *)(lVar7 + 0x2c5e0);
      local_30 = *(undefined8 *)(lVar7 + 0x2c5e8);
      uStack_28 = 0x328;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_38);
    }
  }
LAB_0264d3e4:
  lVar3 = *(long *)(lVar7 + 0x2c5e8) + *(long *)(lVar7 + 0x2c5e0);
  if ((*(short *)(lVar3 + 800) != 0) && (*(int *)(lVar3 + 0x324) == 0)) {
    uVar9 = 0;
    do {
      if (*(int *)(lVar3 + ((long)((ulong)uVar9 << 0x20) >> 0x1d) + 4) != 0) goto LAB_0264d444;
      uVar9 = uVar9 + 1;
    } while (uVar9 != 100);
    uVar9 = 0;
    do {
      iVar1 = *(int *)(lVar3 + 0x324);
      uVar2 = (ulong)uVar9;
      uVar9 = uVar9 + 1;
      *(int *)(lVar3 + 0x324) = iVar1 + 1;
      *(int *)(lVar3 + ((long)(uVar2 << 0x20) >> 0x1d) + 4) = iVar1;
    } while (uVar9 != 100);
  }
LAB_0264d444:
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar7 + 0x2c600) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x2c600) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return;
}

