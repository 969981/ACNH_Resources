
long FUN_003ae3e0(long *param_1,undefined8 param_2)

{
  ulong *puVar1;
  ulong uVar2;
  byte bVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  ulong local_70;
  ulong local_68;
  
  local_70 = 0;
  local_68 = 0;
  FUN_0034fb50(&local_70);
  local_70 = 0x1000000100;
  lVar5 = FUN_00347a58(param_2,&local_70);
  bVar3 = *(byte *)((long)param_1 + 0xe);
  bVar4 = *(byte *)((long)param_1 + 0xf);
  if (param_1[9] == 0) {
    lVar8 = 0;
  }
  else {
    lVar9 = *(long *)(*param_1 + 0x10);
    uVar7 = (ulong)*(byte *)(lVar9 + 0x4d);
    if (uVar7 == 0) {
      lVar8 = 0;
    }
    else {
      lVar10 = 0;
      lVar11 = 0;
      lVar8 = 0;
      do {
        if (*(long *)(param_1[9] + lVar11) != 0) {
          puVar1 = (ulong *)(*(long *)(lVar9 + 0x30) + lVar10);
          uVar2 = *puVar1;
          local_68 = puVar1[1];
          local_70 = uVar2 | 0x4000000000;
          lVar6 = FUN_00347a58(param_2,&local_70);
          lVar8 = lVar8 + ((lVar6 + (uVar2 & 0xffffffff)) - 1 & -lVar6) *
                          (ulong)*(byte *)((long)param_1 + 0xf);
        }
        lVar11 = lVar11 + 8;
        lVar10 = lVar10 + 0x10;
      } while (uVar7 * 8 != lVar11);
    }
  }
  return lVar8 + (lVar5 + 0xffU & -lVar5) * (ulong)bVar3 * (ulong)bVar4;
}

