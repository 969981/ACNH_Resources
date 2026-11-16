
void FUN_028622e0(long *param_1)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  uint uVar8;
  undefined1 auStack_160 [256];
  
  if (param_1 == (long *)0x0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb46b0;
  if (lVar6 != 0) {
    puVar7 = *(undefined8 **)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar6 = 0;
      if (lVar4 != 0) {
        lVar6 = lVar4 + 0x70;
      }
      goto LAB_02862364;
    }
    if (puVar7 != (undefined8 *)0x0) {
      lVar6 = 0;
      if ((long *)puVar7[0x26] != (long *)0x0) {
        lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      }
      goto LAB_02862364;
    }
  }
  lVar6 = 0;
LAB_02862364:
  if ((*(long **)(lVar6 + 0x1bc0b8) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar6 + 0x1bc0b8), puVar7 == (undefined8 *)0x0)) {
    FUN_010eee58(auStack_160,*(long *)(lVar6 + 0x1bc0a0) + *(long *)(lVar6 + 0x1bc098));
  }
  else {
    uVar5 = (**(code **)*puVar7)();
    FUN_010eee58(auStack_160,*(long *)(lVar6 + 0x1bc0a0) + *(long *)(lVar6 + 0x1bc098));
    if ((((uVar5 & 1) != 0) && (*(long *)(lVar6 + 0x1bc0b8) != 0)) &&
       (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0x1bc0b8) + 8), puVar7 != (undefined8 *)0x0)) {
      (**(code **)*puVar7)();
    }
  }
  puVar2 = PTR_DAT_04bb43c0;
  uVar8 = 0;
  lVar6 = *(long *)PTR_DAT_04bb43c0;
  do {
    uVar3 = FUN_0277d6c4(auStack_160 + ((long)((ulong)uVar8 << 0x20) >> 0x1d));
    lVar4 = *(long *)puVar2;
    if (lVar4 != 0) {
      lVar6 = *(long *)(lVar6 + 0x57e58);
      uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
      if ((uVar3 < *(uint *)(lVar6 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
        lVar6 = (**(code **)(*param_1 + 0x18))(param_1);
        uVar3 = FUN_0277d6c4(auStack_160 + ((long)((ulong)uVar8 << 0x20) >> 0x1d));
        lVar4 = *(long *)puVar2;
        if ((uVar3 >> 3 & 0x1fff) < 0x753) {
          lVar1 = (ulong)((uVar3 & 0xffff) >> 5) * 4;
          *(uint *)(lVar6 + lVar1) =
               *(uint *)(lVar6 + lVar1) & (1 << (ulong)(uVar3 & 0x1f) ^ 0xffffffffU);
        }
      }
    }
    uVar8 = uVar8 + 1;
    lVar6 = lVar4;
  } while (uVar8 != 0x20);
  return;
}

