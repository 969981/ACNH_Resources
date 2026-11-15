
void FUN_020edbe0(char *param_1)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long *plVar4;
  undefined8 *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  byte *pbVar9;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  lVar2 = FUN_0265c3e0((long)*param_1);
  if (lVar2 == 0) {
    return;
  }
  uVar6 = 0;
  local_40 = 0;
  do {
    if (((byte)param_1[(ulong)(uVar6 >> 3) + 1] >> (ulong)(uVar6 & 7) & 1) != 0) {
      *(uint *)((long)&local_40 + (ulong)(uVar6 >> 5) * 4) =
           *(uint *)((long)&local_40 + (ulong)(uVar6 >> 5) * 4) | 1 << (ulong)(uVar6 & 0x1f);
    }
    uVar6 = uVar6 + 1;
  } while (uVar6 != 0x38);
  lVar7 = *(long *)(lVar2 + 0x28);
  if (lVar7 == 0) {
    uVar3 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar3 = 0;
      plVar4 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar3 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar3 = uVar3 & 0xffffffff;
      if (*(long *)(lVar2 + 0x28) == 0) goto LAB_020edccc;
      plVar4 = *(long **)(*(long *)(lVar2 + 0x28) + 0x20);
    }
    if (plVar4 != (long *)0x0) {
      local_38 = *(undefined8 *)(lVar2 + 8);
      uStack_30 = *(undefined8 *)(lVar2 + 0x10);
      local_28 = 0x13230;
      (**(code **)(*plVar4 + 0x20))(plVar4,&local_38);
    }
  }
LAB_020edccc:
  uVar8 = 0;
  lVar7 = *(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8);
  pbVar9 = (byte *)(lVar7 + 0x10975);
  do {
    uVar1 = uVar8 >> 5;
    uVar6 = (uint)uVar8;
    uVar8 = uVar8 + 1;
    *pbVar9 = (byte)(*(uint *)((long)&local_40 + (uVar1 & 0x7ffffff) * 4) >> (ulong)(uVar6 & 0x1f))
              & 1;
    pbVar9 = pbVar9 + 0x2c;
  } while (uVar8 != 0x18);
  uVar8 = 0x18;
  pbVar9 = (byte *)(lVar7 + 0x10d95);
  do {
    uVar1 = uVar8 >> 5;
    uVar6 = (uint)uVar8;
    uVar8 = uVar8 + 1;
    *pbVar9 = (byte)(*(uint *)((long)&local_40 + (uVar1 & 0x7ffffff) * 4) >> (ulong)(uVar6 & 0x1f))
              & 1;
    pbVar9 = pbVar9 + 0x2c;
  } while (uVar8 != 0x38);
  if ((((uVar3 & 1) != 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

