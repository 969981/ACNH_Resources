
long * FUN_00360510(long param_1,undefined8 param_2,undefined8 param_3,long *param_4,
                   undefined8 param_5)

{
  undefined8 *puVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  long *plVar5;
  undefined8 uVar6;
  ulong uVar7;
  long lVar8;
  long *plVar9;
  
  plVar5 = (long *)FUN_00369b7c(param_3);
  (**(code **)(*plVar5 + 0x48))
            (plVar5,param_2,param_5,*(undefined8 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x70));
  lVar8 = *(long *)(param_1 + 0x20);
  if (lVar8 != 0) {
    uVar3 = *(ushort *)(plVar5 + 7);
    if (uVar3 < *(ushort *)((long)plVar5 + 0x3a)) {
      *(ushort *)(plVar5 + 7) = uVar3 + 1;
      puVar1 = (undefined8 *)(plVar5[6] + (ulong)uVar3 * 0x10);
      *puVar1 = param_4;
      puVar1[1] = lVar8;
    }
  }
  uVar4 = (**(code **)(*param_4 + 0x50))(param_4);
  uVar2 = uVar4 & 0xff;
  if ((uint)*(byte *)(param_1 + 0x72) <= (uVar4 & 0xff)) {
    uVar2 = (uint)*(byte *)(param_1 + 0x72);
  }
  if (uVar2 != 0) {
    uVar4 = 0;
    do {
      plVar9 = (long *)(param_1 + (ulong)uVar4 * 8 + 0x28);
      if (*plVar9 != 0) {
        uVar6 = (**(code **)(*param_4 + 0x58))(param_4,uVar4);
        uVar7 = FUN_0035dd30(plVar5,uVar6,*plVar9);
        if ((uVar7 & 1) == 0) {
          return plVar5;
        }
      }
      uVar4 = uVar4 + 1;
    } while (uVar4 < uVar2);
  }
  return plVar5;
}

