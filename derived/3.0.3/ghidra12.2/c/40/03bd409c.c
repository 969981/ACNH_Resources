
int FUN_03bd409c(long param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 *puVar10;
  
  uVar6 = FUN_03be8d94(param_1,param_2,"getClipType");
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  puVar10 = (undefined8 *)(*(ulong *)PTR_DAT_04bb38c8 | (ulong)*(uint *)(param_2 + 0x18));
  puVar1 = puVar10 + 0x20000000;
  if (*(ulong *)PTR_DAT_04bb38c0 <= (ulong)*(uint *)(param_2 + 0x18)) {
    puVar1 = puVar10;
  }
  uVar9 = (uint)*puVar1;
  if ((uVar9 >> 7 & 1) == 0) {
    lVar7 = *(long *)(*(long *)(param_1 + 0x18) + 8);
    if (*(uint *)(lVar7 + 0x534) < 8) goto LAB_03bd419c;
    iVar5 = *(int *)(*(long *)(lVar7 + 0x548) + 0x5c);
  }
  else {
    uVar9 = (uVar9 & 0xff) - (uVar9 >> 1 & 0x55);
    uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
    uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
    uVar9 = uVar9 + (uVar9 >> 8);
    puVar10 = (undefined8 *)(*(long *)(param_1 + 0x10) + 0x18);
    uVar4 = *(uint *)(*(long *)(param_1 + 0x10) + 0x10);
    puVar2 = puVar10 + uVar4;
    if (1 < uVar4) {
      puVar2 = puVar10;
    }
    iVar5 = *(int *)(*(long *)(*(long *)*puVar2 + 0x48) +
                    ((ulong)*(uint *)((long)puVar1 +
                                     (long)(int)((uVar9 + (uVar9 >> 0x10) & 0x3f) - 1) * 4 + 8) &
                    0xffffff) * 4);
  }
  if (iVar5 != 0) {
    return iVar5;
  }
LAB_03bd419c:
  lVar7 = *(long *)(param_1 + 0x10);
  iVar5 = 1;
  if (lVar7 != 0) {
    plVar3 = (long *)(lVar7 + 0x18) + *(uint *)(lVar7 + 0x10);
    if (1 < *(uint *)(lVar7 + 0x10)) {
      plVar3 = (long *)(lVar7 + 0x18);
    }
    lVar8 = *plVar3;
    uVar6 = param_2 - *(long *)(lVar8 + 0x28);
    lVar7 = (long)(uVar6 * 0x8000000) >> 0x20;
    if (*(uint *)(lVar8 + 0x78) <= (uint)(uVar6 >> 5)) {
      lVar7 = 0;
    }
    iVar5 = 1;
    if ((*(byte *)(*(long *)(lVar8 + 0x80) + lVar7 * 8 + 2) & 2) != 0) {
      iVar5 = 2;
    }
  }
  return iVar5;
}

