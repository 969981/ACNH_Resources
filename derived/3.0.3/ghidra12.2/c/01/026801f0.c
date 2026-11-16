
int FUN_026801f0(void)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  
  lVar4 = FUN_0266c700();
  if (lVar4 == 0) {
    iVar7 = 0;
  }
  else {
    if ((*(long **)(lVar4 + 0x28) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x28), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    iVar7 = 0;
    lVar1 = *(long *)(lVar4 + 0x10) + *(long *)(lVar4 + 8);
    uVar2 = *(uint *)(lVar1 + 0x10);
    if ((*(byte *)(lVar1 + 0x17) != 0 ||
         (((ulong)uVar2 != 0 || *(ushort *)(lVar1 + 0x14) != 0) || *(byte *)(lVar1 + 0x16) != 0)) &&
       ((uint)*(byte *)(lVar1 + 0x17) ==
        ((uVar2 + (uVar2 >> 0x10) + (uVar2 >> 0x18) + (uVar2 >> 8)) - 0x2d & 0xff))) {
      lVar6 = (ulong)uVar2 << ((ulong)(0x1d - *(byte *)(lVar1 + 0x16)) & 0x3f);
      iVar7 = ((int)lVar6 - (uint)*(ushort *)(lVar1 + 0x14)) + (int)((ulong)lVar6 >> 0x20) +
              -0x7f1cd4ef;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x28) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x28) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
  }
  return iVar7;
}

