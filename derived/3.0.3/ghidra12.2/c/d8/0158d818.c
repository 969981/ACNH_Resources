
long FUN_0158d818(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb2200;
  if (param_1[0x42] != 0) {
    FUN_015efc70(*(undefined8 *)(*(long *)PTR_DAT_04bb2200 + 0x88));
    param_1[0x42] = 0;
  }
  uVar5 = *(undefined8 *)(*(long *)puVar1 + 0x88);
  uVar2 = (**(code **)(*param_1 + 0x158))(param_1,0);
  lVar3 = FUN_015ef51c(uVar5,uVar2);
  param_1[0x42] = lVar3;
  lVar6 = 0;
  if (lVar3 != 0) {
    lVar6 = *(long *)(lVar3 + 0x10);
    puVar4 = (undefined1 *)(**(code **)(*(long *)(lVar6 + 0x158) + 0xf0))(lVar6 + 0x158);
    *puVar4 = 1;
    *(uint *)(lVar6 + 0x178) = *(uint *)(lVar6 + 0x178) | 0x1000000;
    lVar6 = param_1[0x42];
  }
  return lVar6;
}

