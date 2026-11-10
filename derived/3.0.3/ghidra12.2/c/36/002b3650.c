
uint FUN_002b3650(long param_1,byte param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char cVar4;
  byte bVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  ulong uVar13;
  uint auStack_68 [10];
  __less _Stack_31;
  
  cVar4 = FUN_002aaa44();
  if (cVar4 != -3) {
    bVar5 = FUN_002aaa44(param_1);
    if (bVar5 == param_2) {
      return 0xffffffff;
    }
    if ((param_2 < *(byte *)(param_1 + 0x4e)) && (param_3 < 10)) {
      lVar11 = *(long *)(param_1 + 0x50);
      uVar10 = (ulong)param_2;
      puVar6 = (uint *)(lVar11 + uVar10 * 0x34);
      uVar7 = *puVar6;
      if (uVar7 != 0) {
        puVar12 = (uint *)(lVar11 + uVar10 * 0x34 + 0x2c);
        if (*puVar12 == param_3) {
          return *(uint *)(lVar11 + uVar10 * 0x34 + 0x30);
        }
        uVar2 = uVar7;
        if (param_3 <= uVar7) {
          uVar2 = param_3;
        }
        uVar13 = (ulong)uVar2;
        if (uVar2 == 0) {
          uVar13 = 0;
        }
        else {
          uVar3 = puVar6[1];
          puVar8 = auStack_68;
          uVar9 = uVar13;
          do {
            puVar8 = puVar8 + 1;
            uVar7 = uVar7 - 1;
            uVar9 = uVar9 - 1;
            *puVar8 = puVar6[((ulong)uVar3 + (ulong)uVar7) % 9 + 2];
          } while (uVar9 != 0);
        }
        std::__sort<std::__less<int,int>&,int*>
                  ((int *)(auStack_68 + 1),(int *)(auStack_68 + uVar13 + 1),&_Stack_31);
        uVar7 = uVar2 >> 1;
        if ((uVar2 & 1) == 0) {
          iVar1 = auStack_68[(ulong)uVar7 + 1] + auStack_68[uVar7];
          if (iVar1 < 0 != SCARRY4(auStack_68[(ulong)uVar7 + 1],auStack_68[uVar7])) {
            iVar1 = iVar1 + 1;
          }
          uVar7 = iVar1 >> 1;
        }
        else {
          uVar7 = auStack_68[(ulong)uVar7 + 1];
        }
        *puVar12 = param_3;
        *(uint *)(lVar11 + uVar10 * 0x34 + 0x30) = uVar7;
        return uVar7;
      }
    }
  }
  return 0xffffffff;
}

