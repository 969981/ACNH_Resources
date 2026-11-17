
void FUN_02bb8ef0(long param_1)

{
  undefined *puVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  undefined8 *puVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  undefined *local_98;
  char *pcStack_90;
  uint local_88 [10];
  
  FUN_0265eba0(local_88);
  if (DAT_05574040 != 0) {
    puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar6 = (**(code **)(*(long *)*puVar9 + 0x38))();
      lVar7 = 0;
      if (lVar6 != 0) {
        lVar7 = lVar6 + 0x70;
      }
      goto LAB_02bb8f7c;
    }
    if ((puVar9 != (undefined8 *)0x0) && ((long *)puVar9[0x26] != (long *)0x0)) {
      lVar7 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
      goto LAB_02bb8f7c;
    }
  }
  lVar7 = 0;
LAB_02bb8f7c:
  if ((*(long **)(lVar7 + 0xd0) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar7 + 0xd0), puVar9 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar9)();
    uVar4 = uVar4 ^ 1;
  }
  uVar13 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  uVar11 = 0;
  do {
    puVar2 = (uint *)((long)local_88 + ((long)((ulong)uVar13 << 0x20) >> 0x1e));
    uVar12 = uVar11;
    if ((*puVar2 != 0xffffffff) && (uVar8 = FUN_033fbdb0(puVar2), (uVar8 & 1) != 0)) {
      lVar6 = *(long *)(lVar7 + 0xb8) + *(long *)(lVar7 + 0xb0);
      pcStack_90 = "AbandonedHouse";
      lVar3 = lVar6 + (ulong)*puVar2 * 0x13230;
      if (9 < *puVar2) {
        lVar3 = lVar6;
      }
      local_98 = puVar1;
      iVar5 = FUN_02749340(lVar3 + 0x1267c,&local_98);
      if (iVar5 < 2) {
        uVar10 = (uint)uVar11;
        if (9 < uVar10) {
          uVar11 = 0;
        }
        uVar12 = (ulong)(uVar10 + 1);
        *(uint *)(param_1 + 0x1c1d8 + uVar11 * 4) = *puVar2;
        *(int *)(param_1 + 0x1c1b8) = *(int *)(param_1 + 0x1c1b8) + 1;
      }
    }
    uVar13 = uVar13 + 1;
    uVar11 = uVar12;
  } while (uVar13 != 10);
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar7 + 0xd0) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar7 + 0xd0) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return;
}

