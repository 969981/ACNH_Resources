
ulong FUN_02670810(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  int iVar8;
  
  uVar4 = FUN_02670960();
  if ((int)uVar4 == 0) {
    return uVar4;
  }
  if (DAT_05574040 != 0) {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar6 = 0;
      if (lVar5 != 0) {
        lVar6 = lVar5 + 0x70;
      }
      goto LAB_02670880;
    }
    if (puVar7 != (undefined8 *)0x0) {
      lVar6 = 0;
      if ((long *)puVar7[0x26] != (long *)0x0) {
        lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      }
      goto LAB_02670880;
    }
  }
  lVar6 = 0;
LAB_02670880:
  if ((*(long **)(&LAB_00205148 + lVar6) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(&LAB_00205148 + lVar6), puVar7 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar7)();
    uVar3 = uVar3 ^ 1;
  }
  iVar8 = 0;
  puVar1 = (uint *)(*(long *)(&LAB_00205130 + lVar6) + *(long *)(&LAB_00205128 + lVar6));
  uVar2 = *puVar1;
  if ((*(byte *)((long)puVar1 + 7) != 0 ||
       (((ulong)uVar2 != 0 || (ushort)puVar1[1] != 0) || *(byte *)((long)puVar1 + 6) != 0)) &&
     ((uint)*(byte *)((long)puVar1 + 7) ==
      ((uVar2 + (uVar2 >> 0x10) + (uVar2 >> 0x18) + (uVar2 >> 8)) - 0x2d & 0xff))) {
    lVar5 = (ulong)uVar2 << ((ulong)(0x1d - *(byte *)((long)puVar1 + 6)) & 0x3f);
    iVar8 = ((int)lVar5 - (uint)(ushort)puVar1[1]) + (int)((ulong)lVar5 >> 0x20) + -0x7f1cd4ef;
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(&LAB_00205148 + lVar6) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(&LAB_00205148 + lVar6) + 8), puVar7 != (undefined8 *)0x0))
  {
    (**(code **)*puVar7)();
  }
  uVar3 = 1;
  if (iVar8 < 1) {
    uVar3 = 2;
  }
  return (ulong)uVar3;
}

