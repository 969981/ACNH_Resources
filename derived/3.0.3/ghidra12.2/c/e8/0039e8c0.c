
void FUN_0039e8c0(long param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  byte bVar3;
  ushort uVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  
  bVar3 = *(byte *)(param_1 + 0x9c);
  if ((ulong)bVar3 != 0) {
    lVar6 = 0;
    lVar7 = 0;
    lVar8 = 0x20;
    do {
      lVar5 = *(long *)(param_1 + 0x40);
      lVar1 = *(long *)(param_1 + 0x38) + lVar6;
      FUN_0034d5fc(lVar1);
      FUN_0034d624(lVar1,param_2,lVar5 + lVar7);
      if (*(long *)(param_1 + 0x48) == 0) {
        lVar5 = 0;
      }
      else {
        lVar5 = *(long *)(*(long *)(param_1 + 0x48) + lVar8) + 2;
      }
      FUN_003b4960(lVar1,lVar5);
      lVar7 = lVar7 + 0x20;
      lVar8 = lVar8 + 0x10;
      lVar6 = lVar6 + 0x78;
    } while ((ulong)bVar3 * 0x20 != lVar7);
  }
  uVar4 = *(ushort *)(param_1 + 0x9e);
  if ((ulong)uVar4 != 0) {
    lVar7 = 0;
    do {
      plVar2 = (long *)(*(long *)(param_1 + 0x50) + lVar7);
      if ((0x1b < *(byte *)(plVar2 + 2)) && (*plVar2 == 0)) {
        *plVar2 = (long)(&PTR_LAB_0484e100)[*(byte *)(plVar2 + 2) - 0x1c];
      }
      lVar7 = lVar7 + 0x20;
    } while ((ulong)uVar4 * 0x20 != lVar7);
  }
  return;
}

