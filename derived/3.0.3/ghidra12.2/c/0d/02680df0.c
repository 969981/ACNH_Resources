
/* WARNING: Removing unreachable block (ram,0x02680e2c) */

int FUN_02680df0(void)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  
  if (((DAT_05574040 == 0) || (((*(byte *)(DAT_05574040 + 0x50d) ^ 0xff) & 6) != 0)) ||
     (lVar4 = (**(code **)(**(long **)(*(long *)(DAT_05574040 + 0x10) + 0x188) + 0x38))(),
     lVar4 == 0)) {
    iVar7 = 0;
  }
  else {
    if ((*(long **)(lVar4 + 0x5d3d48) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x5d3d48), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    iVar7 = 0;
    puVar1 = (uint *)(*(long *)(&LAB_005d3d30 + lVar4) + *(long *)(&LAB_005d3d28 + lVar4));
    uVar2 = *puVar1;
    if ((*(byte *)((long)puVar1 + 7) != 0 ||
         (((ulong)uVar2 != 0 || (ushort)puVar1[1] != 0) || *(byte *)((long)puVar1 + 6) != 0)) &&
       ((uint)*(byte *)((long)puVar1 + 7) ==
        ((uVar2 + (uVar2 >> 0x10) + (uVar2 >> 0x18) + (uVar2 >> 8)) - 0x2d & 0xff))) {
      lVar6 = (ulong)uVar2 << ((ulong)(0x1d - *(byte *)((long)puVar1 + 6)) & 0x3f);
      iVar7 = ((int)lVar6 - (uint)(ushort)puVar1[1]) + (int)((ulong)lVar6 >> 0x20) + -0x7f1cd4ef;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x5d3d48) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x5d3d48) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return iVar7;
}

