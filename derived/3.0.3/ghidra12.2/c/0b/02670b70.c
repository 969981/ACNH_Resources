
int FUN_02670b70(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  undefined8 *puVar6;
  int iVar7;
  
  if (DAT_05574040 != 0) {
    puVar6 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar6 + 0x38))();
      lVar5 = 0;
      if (lVar4 != 0) {
        lVar5 = lVar4 + 0x70;
      }
      goto LAB_02670bd8;
    }
    if (puVar6 != (undefined8 *)0x0) {
      lVar5 = 0;
      if ((long *)puVar6[0x26] != (long *)0x0) {
        lVar5 = (**(code **)(*(long *)puVar6[0x26] + 0x38))();
      }
      goto LAB_02670bd8;
    }
  }
  lVar5 = 0;
LAB_02670bd8:
  if ((*(long **)(&LAB_00205148 + lVar5) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(&LAB_00205148 + lVar5), puVar6 == (undefined8 *)0x0)) {
    uVar3 = 1;
  }
  else {
    uVar3 = (**(code **)*puVar6)();
    uVar3 = uVar3 ^ 1;
  }
  iVar7 = 0;
  puVar1 = (uint *)(*(long *)(&LAB_00205130 + lVar5) + *(long *)(&LAB_00205128 + lVar5));
  uVar2 = *puVar1;
  if ((*(byte *)((long)puVar1 + 7) != 0 ||
       (((ulong)uVar2 != 0 || (ushort)puVar1[1] != 0) || *(byte *)((long)puVar1 + 6) != 0)) &&
     ((uint)*(byte *)((long)puVar1 + 7) ==
      ((uVar2 + (uVar2 >> 0x10) + (uVar2 >> 0x18) + (uVar2 >> 8)) - 0x2d & 0xff))) {
    lVar4 = (ulong)uVar2 << ((ulong)(0x1d - *(byte *)((long)puVar1 + 6)) & 0x3f);
    iVar7 = ((int)lVar4 - (uint)(ushort)puVar1[1]) + (int)((ulong)lVar4 >> 0x20) + -0x7f1cd4ef;
  }
  if ((((uVar3 & 1) == 0) && (*(long *)(&LAB_00205148 + lVar5) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(&LAB_00205148 + lVar5) + 8), puVar6 != (undefined8 *)0x0))
  {
    (**(code **)*puVar6)();
  }
  return iVar7;
}

