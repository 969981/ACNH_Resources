
uint FUN_03c66bc0(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  byte *pbVar6;
  ulong uVar7;
  byte *pbVar8;
  
  lVar1 = param_1 + 0x28;
  bVar4 = *(uint *)(param_2 + 0x38) <= *(uint *)(param_1 + 0x38);
  if (*(uint *)(param_1 + 0x38) == *(uint *)(param_2 + 0x38)) {
    uVar3 = *(ushort *)(param_1 + 0x3c);
    uVar7 = (ulong)uVar3;
    bVar4 = *(ushort *)(param_2 + 0x3c) <= uVar3;
    if (uVar3 != *(ushort *)(param_2 + 0x3c)) goto LAB_03c66c74;
    (**(code **)(*(long *)(param_1 + 0x28) + 0x18))(lVar1);
    (**(code **)(*(long *)(param_1 + 0x28) + 0x18))(lVar1);
    pbVar8 = *(byte **)(param_1 + 0x30);
    (**(code **)(*(long *)(param_2 + 0x28) + 0x18))(param_2 + 0x28);
    if ((uVar3 != 0) && (pbVar8 != *(byte **)(param_2 + 0x30))) {
      pbVar8 = *(byte **)(param_2 + 0x30);
      pbVar6 = *(byte **)(param_1 + 0x30);
      do {
        uVar7 = uVar7 - 1;
        bVar2 = *pbVar6;
        bVar4 = *pbVar8 <= bVar2;
        if (bVar2 != *pbVar8) goto LAB_03c66c74;
      } while ((bVar2 != 0) && (pbVar8 = pbVar8 + 1, pbVar6 = pbVar6 + 1, uVar7 != 0));
    }
  }
  else {
LAB_03c66c74:
    if (!bVar4) {
      return 0xffffffff;
    }
  }
  bVar4 = *(uint *)(param_2 + 0x38) <= *(uint *)(param_1 + 0x38);
  if (*(uint *)(param_1 + 0x38) == *(uint *)(param_2 + 0x38)) {
    uVar3 = *(ushort *)(param_1 + 0x3c);
    uVar7 = (ulong)uVar3;
    bVar4 = *(ushort *)(param_2 + 0x3c) <= uVar3;
    if (uVar3 == *(ushort *)(param_2 + 0x3c)) {
      (**(code **)(*(long *)(param_1 + 0x28) + 0x18))(lVar1);
      (**(code **)(*(long *)(param_1 + 0x28) + 0x18))(lVar1);
      pbVar8 = *(byte **)(param_1 + 0x30);
      (**(code **)(*(long *)(param_2 + 0x28) + 0x18))(param_2 + 0x28);
      if ((uVar3 != 0) && (pbVar8 != *(byte **)(param_2 + 0x30))) {
        pbVar8 = *(byte **)(param_2 + 0x30);
        pbVar6 = *(byte **)(param_1 + 0x30);
        while( true ) {
          uVar7 = uVar7 - 1;
          bVar2 = *pbVar6;
          if (bVar2 != *pbVar8) break;
          if ((bVar2 == 0) || (pbVar8 = pbVar8 + 1, pbVar6 = pbVar6 + 1, uVar7 == 0))
          goto LAB_03c66d24;
        }
        if (*pbVar8 <= bVar2) {
          return 1;
        }
      }
      goto LAB_03c66d24;
    }
  }
  if (bVar4) {
    return 1;
  }
LAB_03c66d24:
  uVar5 = 0xffffffff;
  if (*(uint *)(param_2 + 0x20) <= *(uint *)(param_1 + 0x20)) {
    uVar5 = (uint)(*(uint *)(param_2 + 0x20) < *(uint *)(param_1 + 0x20));
  }
  return uVar5;
}

