
ulong FUN_03c66d50(long *param_1,long param_2)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  byte *pbVar4;
  ulong uVar5;
  byte *pbVar6;
  
  bVar3 = *(uint *)(param_2 + 0x38) <= *(uint *)(param_1 + 2);
  if (*(uint *)(param_1 + 2) == *(uint *)(param_2 + 0x38)) {
    uVar2 = *(ushort *)((long)param_1 + 0x14);
    uVar5 = (ulong)uVar2;
    bVar3 = *(ushort *)(param_2 + 0x3c) <= uVar2;
    if (uVar2 == *(ushort *)(param_2 + 0x3c)) {
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      pbVar6 = (byte *)param_1[1];
      (**(code **)(*(long *)(param_2 + 0x28) + 0x18))(param_2 + 0x28);
      if ((uVar2 != 0) && (pbVar6 != *(byte **)(param_2 + 0x30))) {
        pbVar6 = *(byte **)(param_2 + 0x30);
        pbVar4 = (byte *)param_1[1];
        do {
          uVar5 = uVar5 - 1;
          bVar1 = *pbVar4;
          bVar3 = *pbVar6 <= bVar1;
          if (bVar1 != *pbVar6) goto LAB_03c66e04;
        } while ((bVar1 != 0) && (pbVar6 = pbVar6 + 1, pbVar4 = pbVar4 + 1, uVar5 != 0));
      }
      goto LAB_03c66e10;
    }
  }
LAB_03c66e04:
  if (!bVar3) {
    return 0xffffffff;
  }
LAB_03c66e10:
  bVar3 = *(uint *)(param_2 + 0x38) <= *(uint *)(param_1 + 2);
  if (*(uint *)(param_1 + 2) == *(uint *)(param_2 + 0x38)) {
    uVar2 = *(ushort *)((long)param_1 + 0x14);
    uVar5 = (ulong)uVar2;
    bVar3 = *(ushort *)(param_2 + 0x3c) <= uVar2;
    if (uVar2 == *(ushort *)(param_2 + 0x3c)) {
      (**(code **)(*param_1 + 0x18))(param_1);
      (**(code **)(*param_1 + 0x18))(param_1);
      pbVar6 = (byte *)param_1[1];
      (**(code **)(*(long *)(param_2 + 0x28) + 0x18))(param_2 + 0x28);
      if (uVar2 == 0) {
        return 0;
      }
      if (pbVar6 == *(byte **)(param_2 + 0x30)) {
        return 0;
      }
      pbVar6 = *(byte **)(param_2 + 0x30);
      pbVar4 = (byte *)param_1[1];
      while( true ) {
        uVar5 = uVar5 - 1;
        bVar1 = *pbVar4;
        if (bVar1 != *pbVar6) {
          return (ulong)(*pbVar6 <= bVar1);
        }
        if (bVar1 == 0) break;
        pbVar6 = pbVar6 + 1;
        pbVar4 = pbVar4 + 1;
        if (uVar5 == 0) {
          return 0;
        }
      }
      return 0;
    }
  }
  return (ulong)bVar3;
}

