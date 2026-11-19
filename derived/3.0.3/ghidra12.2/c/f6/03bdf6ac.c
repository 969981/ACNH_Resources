
int FUN_03bdf6ac(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long *plVar4;
  undefined8 uVar5;
  ulong uVar6;
  float fVar7;
  
  plVar4 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) +
                               0x18))();
  uVar6 = (ulong)*(uint *)(param_1 + 0x38);
  uVar2 = (**(code **)(*plVar4 + 0x50))(plVar4,0xd);
  uVar3 = 0;
  if ((uVar6 != 0) && (-1 < (int)uVar2)) {
    puVar1 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar6) + 0x40000000;
    if (*(ulong *)PTR_DAT_04bb38c0 <= uVar6) {
      puVar1 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar6);
    }
    uVar3 = *puVar1 >> (ulong)(uVar2 & 0x1f) & 1;
  }
  plVar4 = (long *)(**(code **)(**(long **)(*(long *)(*(long *)(param_1 + 0x20) + 0x30) + 0x18) +
                               0x18))();
  if (uVar3 == 0) {
    fVar7 = (float)FUN_03bdc520(plVar4,*(undefined8 *)(param_1 + 0x28),
                                *(undefined8 *)(param_1 + 0x20));
  }
  else {
    uVar5 = *(undefined8 *)(param_1 + 0x20);
    uVar3 = (**(code **)(*plVar4 + 0x50))(plVar4,0xd);
    fVar7 = 0.0;
    if ((uVar6 != 0) && (-1 < (int)uVar3)) {
      puVar1 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar6) + 0x40000000;
      if (*(ulong *)PTR_DAT_04bb38c0 <= uVar6) {
        puVar1 = (uint *)(*(ulong *)PTR_DAT_04bb38c8 | uVar6);
      }
      if ((*puVar1 >> (ulong)(uVar3 & 0x1f) & 1) != 0) {
        uVar3 = *puVar1 & 0xffffffffU >> (ulong)(~uVar3 & 0x1f);
        uVar3 = uVar3 - (uVar3 >> 1 & 0x55555555);
        uVar3 = (uVar3 >> 2 & 0x33333333) + (uVar3 & 0x33333333);
        uVar3 = uVar3 + (uVar3 >> 4) & 0xf0f0f0f;
        uVar3 = uVar3 + (uVar3 >> 8);
        fVar7 = (float)FUN_03be93d4(plVar4,puVar1 + (long)(int)((uVar3 + (uVar3 >> 0x10) & 0x3f) - 1
                                                               ) + 1,uVar5);
      }
    }
  }
  if ((*(ushort *)(*(long *)(param_1 + 0x18) + 0x98) >> 5 & 1) != 0) {
    fVar7 = fVar7 * *(float *)(*(long *)(param_1 + 0x18) + 0xb0);
  }
  return (int)(fVar7 * 255.0);
}

