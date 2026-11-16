
void FUN_02603050(long param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  int iVar7;
  undefined *local_40;
  char *pcStack_38;
  
  if (*(byte *)(param_1 + 0x18) < 8) {
    local_40 = (undefined *)CONCAT71(local_40._1_7_,*(byte *)(param_1 + 0x18));
    lVar4 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_40,1);
  }
  else {
    if (*(int *)(param_1 + 0x1c) == -1) {
      return;
    }
    if (*(long *)PTR_DAT_04bb46b0 == 0) {
      return;
    }
    lVar4 = FUN_026eec4c();
  }
  if (lVar4 != 0) {
    lVar6 = lVar4 + 0x194b0;
    if (*(long *)(lVar4 + 0x194b8) == 0) {
      lVar6 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    if ((*(long **)(lVar6 + 0x8640) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar6 + 0x8640), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    iVar7 = 0;
    puVar1 = (uint *)(*(long *)(lVar6 + 0x8628) + *(long *)(lVar6 + 0x8620));
    uVar2 = *puVar1;
    if ((*(byte *)((long)puVar1 + 7) != 0 ||
         (((ulong)uVar2 != 0 || (ushort)puVar1[1] != 0) || *(byte *)((long)puVar1 + 6) != 0)) &&
       ((uint)*(byte *)((long)puVar1 + 7) ==
        ((uVar2 + (uVar2 >> 0x10) + (uVar2 >> 0x18) + (uVar2 >> 8)) - 0x2d & 0xff))) {
      lVar4 = (ulong)uVar2 << ((ulong)(0x1d - *(byte *)((long)puVar1 + 6)) & 0x3f);
      iVar7 = ((int)lVar4 - (uint)(ushort)puVar1[1]) + (int)((ulong)lVar4 >> 0x20) + -0x7f1cd4ef;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar6 + 0x8640) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar6 + 0x8640) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    local_40 = PTR_DAT_04bb2020 + 0x10;
    pcStack_38 = "CurSavingMoney";
    if (*(long *)(param_1 + 8) != 0) {
      FUN_026054d0(*(long *)(param_1 + 8),&local_40,iVar7);
    }
  }
  return;
}

