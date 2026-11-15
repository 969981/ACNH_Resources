
uint FUN_0219e4b0(long param_1)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  
  puVar8 = (undefined4 *)(param_1 + 0x55c28);
  lVar6 = *DAT_0537d558;
  bVar3 = *(byte *)(lVar6 + 0x473);
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar6 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar1 = (byte *)(lVar6 + 0x48);
    }
    if (((*pbVar1 >> 3 & 1) != 0) && (*(byte *)(lVar6 + 0x472) != bVar3)) {
      puVar8 = (undefined4 *)(param_1 + 0x55c30);
    }
  }
  lVar6 = FUN_0265c2a0(*puVar8);
  if (lVar6 == 0) {
LAB_0219e598:
    lVar6 = FUN_0265c2a0(puVar8[1]);
    if (lVar6 != 0) {
      if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
         (puVar4 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar4 == (undefined8 *)0x0)) {
        iVar2 = *(int *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x10764);
      }
      else {
        uVar5 = (**(code **)*puVar4)();
        iVar2 = *(int *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x10764);
        if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
           (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
          (**(code **)*puVar4)();
        }
      }
      if (iVar2 == 2) goto LAB_0219e62c;
    }
    uVar7 = 0;
    uVar9 = 8;
    uVar10 = 0x23;
  }
  else {
    if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar4 == (undefined8 *)0x0)) {
      iVar2 = *(int *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x10764);
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      iVar2 = *(int *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8) + 0x10764);
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
    if (iVar2 != 2) goto LAB_0219e598;
LAB_0219e62c:
    if ((*(long **)(lVar6 + 0x28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar6 + 0x28), puVar4 == (undefined8 *)0x0)) {
      pbVar1 = (byte *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8));
      uVar10 = (uint)*pbVar1;
      uVar7 = (uint)pbVar1[1];
      uVar9 = (uint)pbVar1[2];
    }
    else {
      uVar5 = (**(code **)*puVar4)();
      pbVar1 = (byte *)(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8));
      uVar10 = (uint)*pbVar1;
      uVar7 = (uint)pbVar1[1];
      uVar9 = (uint)pbVar1[2];
      if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
         (puVar4 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
        (**(code **)*puVar4)();
      }
    }
  }
  return uVar7 << 8 | uVar9 << 0x10 | uVar10;
}

