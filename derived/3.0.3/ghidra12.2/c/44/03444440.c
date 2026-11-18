
void FUN_03444440(byte *param_1)

{
  ushort *puVar1;
  ushort *puVar2;
  bool bVar3;
  long lVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  byte bVar9;
  ulong uVar10;
  ushort *puVar11;
  long local_38;
  undefined8 local_30;
  undefined8 uStack_28;
  
  bVar9 = *param_1;
  if (7 < bVar9) {
    bVar9 = 0xff;
  }
  local_38 = CONCAT71(local_38._1_7_,bVar9);
  lVar4 = FUN_02583354(DAT_055021a0,&local_38,1);
  if (lVar4 == 0) {
    return;
  }
  lVar8 = lVar4 + 0x194b0;
  if (*(long *)(lVar4 + 0x194b8) == 0) {
    lVar8 = *(long *)(DAT_05574040 + 0x20);
  }
  lVar4 = *(long *)(lVar8 + 0x2c600);
  if (lVar4 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
      uVar5 = 0;
      plVar6 = *(long **)(lVar4 + 0x20);
    }
    else {
      uVar5 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
      uVar5 = uVar5 & 0xffffffff;
      if (*(long *)(lVar8 + 0x2c600) == 0) goto LAB_03444514;
      plVar6 = *(long **)(*(long *)(lVar8 + 0x2c600) + 0x20);
    }
    if (plVar6 != (long *)0x0) {
      local_38 = *(long *)(lVar8 + 0x2c5e0);
      local_30 = *(undefined8 *)(lVar8 + 0x2c5e8);
      uStack_28 = 0x328;
      (**(code **)(*plVar6 + 0x20))(plVar6,&local_38);
    }
  }
LAB_03444514:
  puVar1 = (ushort *)(*(long *)(lVar8 + 0x2c5e8) + *(long *)(lVar8 + 0x2c5e0));
  if (puVar1[400] != 0) {
    uVar10 = 0;
    puVar11 = puVar1;
    do {
      bVar3 = 99 < uVar10;
      uVar10 = uVar10 + 1;
      puVar2 = puVar11;
      if (bVar3) {
        puVar2 = puVar1;
      }
      puVar11 = puVar11 + 4;
      *puVar2 = *puVar2 & 0xfffe;
    } while (uVar10 < puVar1[400]);
  }
  if ((((uVar5 & 1) != 0) && (*(long *)(lVar8 + 0x2c600) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar8 + 0x2c600) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

