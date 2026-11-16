
bool FUN_0264cb90(long param_1,undefined8 param_2)

{
  bool bVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar3 = FUN_01b00960(param_2);
  bVar1 = param_1 != 0 && uVar3 != 0xffffffff;
  if (param_1 == 0 || uVar3 == 0xffffffff) {
    return bVar1;
  }
  lVar8 = param_1 + 0x194b0;
  if (*(long *)(param_1 + 0x194b8) == 0) {
    lVar8 = *(long *)(DAT_05574040 + 0x20);
    lVar7 = *(long *)(lVar8 + 0x1100);
  }
  else {
    lVar7 = *(long *)(param_1 + 0x1a5b0);
  }
  if (lVar7 == 0) {
    uVar4 = 0;
  }
  else {
    if (*(undefined8 **)(lVar7 + 0x10) == (undefined8 *)0x0) {
      uVar4 = 0;
      plVar5 = *(long **)(lVar7 + 0x20);
    }
    else {
      uVar4 = (**(code **)**(undefined8 **)(lVar7 + 0x10))();
      uVar4 = uVar4 & 0xffffffff;
      if (*(long *)(lVar8 + 0x1100) == 0) goto LAB_0264cc58;
      plVar5 = *(long **)(*(long *)(lVar8 + 0x1100) + 0x20);
    }
    if (plVar5 != (long *)0x0) {
      local_48 = *(undefined8 *)(lVar8 + 0x10e0);
      uStack_40 = *(undefined8 *)(lVar8 + 0x10e8);
      local_38 = 2000;
      (**(code **)(*plVar5 + 0x20))(plVar5,&local_48);
    }
  }
LAB_0264cc58:
  if (uVar3 >> 7 < 0x7d) {
    lVar2 = (ulong)(uVar3 >> 5) * 4;
    lVar7 = *(long *)(lVar8 + 0x10e8) + *(long *)(lVar8 + 0x10e0);
    *(uint *)(lVar7 + lVar2) = *(uint *)(lVar7 + lVar2) | 1 << (ulong)(uVar3 & 0x1f);
  }
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar8 + 0x1100) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(lVar8 + 0x1100) + 0x18), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  return bVar1;
}

