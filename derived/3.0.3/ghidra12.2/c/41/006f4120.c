
bool FUN_006f4120(ulong *param_1,long param_2,long param_3,uint param_4)

{
  ushort *puVar1;
  ushort uVar2;
  bool bVar3;
  uint uVar4;
  ulong uVar5;
  ushort *puVar6;
  ushort *puVar7;
  
  if (param_4 == 0) {
    return true;
  }
  if (param_2 == 0) {
    puVar6 = (ushort *)*param_1;
    bVar3 = false;
    uVar4 = 0;
    puVar1 = (ushort *)param_1[3];
    while( true ) {
      if ((((int)puVar6 - (int)param_1[2] & 1U) != 0) &&
         (puVar7 = (ushort *)((long)puVar6 + 1), puVar7 <= puVar1)) {
        *param_1 = (ulong)puVar7;
        puVar6 = puVar7;
      }
      puVar7 = puVar6 + 1;
      if (puVar1 < puVar7) break;
      uVar2 = *puVar6;
      *param_1 = (ulong)puVar7;
      if ((uVar2 & 1) != 0) {
        return bVar3;
      }
      puVar6 = (ushort *)((long)puVar7 + (ulong)uVar2);
      if (puVar1 < puVar6) {
        return bVar3;
      }
      uVar4 = uVar4 + 1;
      *param_1 = (ulong)puVar6;
      bVar3 = param_4 <= uVar4;
      if (param_4 == uVar4) {
        return bVar3;
      }
    }
  }
  else if (param_3 == 0) {
    puVar6 = (ushort *)*param_1;
    bVar3 = false;
    uVar4 = 0;
    puVar1 = (ushort *)param_1[3];
    while( true ) {
      if ((((int)puVar6 - (int)param_1[2] & 1U) != 0) &&
         (puVar7 = (ushort *)((long)puVar6 + 1), puVar7 <= puVar1)) {
        *param_1 = (ulong)puVar7;
        puVar6 = puVar7;
      }
      puVar7 = puVar6 + 1;
      if (puVar1 < puVar7) break;
      uVar2 = *puVar6;
      *param_1 = (ulong)puVar7;
      if ((uVar2 & 1) != 0) {
        return bVar3;
      }
      puVar6 = (ushort *)((long)puVar7 + (ulong)uVar2);
      if (puVar1 < puVar6) {
        return bVar3;
      }
      uVar4 = uVar4 + 1;
      *param_1 = (ulong)puVar6;
      bVar3 = param_4 <= uVar4;
      if (param_4 == uVar4) {
        return bVar3;
      }
    }
  }
  else {
    puVar6 = (ushort *)*param_1;
    uVar5 = 0;
    bVar3 = false;
    while( true ) {
      if (((int)puVar6 - (int)param_1[2] & 1U) == 0) {
        puVar7 = (ushort *)param_1[3];
      }
      else {
        puVar7 = (ushort *)param_1[3];
        puVar1 = (ushort *)((long)puVar6 + 1);
        if (puVar1 <= puVar7) {
          *param_1 = (ulong)puVar1;
          puVar6 = puVar1;
        }
      }
      puVar1 = puVar6 + 1;
      if (puVar7 < puVar1) break;
      uVar2 = *puVar6;
      *param_1 = (ulong)puVar1;
      if ((uVar2 & 1) != 0) {
        return bVar3;
      }
      if (puVar7 < (ushort *)((long)puVar1 + (ulong)uVar2)) {
        return bVar3;
      }
      *(ushort **)(param_2 + uVar5 * 8) = puVar1;
      *(uint *)(param_3 + uVar5 * 4) = (uint)(uVar2 >> 1);
      uVar5 = uVar5 + 1;
      bVar3 = param_4 <= uVar5;
      puVar6 = (ushort *)(*param_1 + (ulong)uVar2);
      *param_1 = (ulong)puVar6;
      if (param_4 == uVar5) {
        return bVar3;
      }
    }
  }
  return bVar3;
}

