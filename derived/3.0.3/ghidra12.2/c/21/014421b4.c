
int FUN_014421b4(long param_1,int *param_2)

{
  int iVar1;
  uint *puVar2;
  undefined *puVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  ulong uVar10;
  int iVar11;
  undefined *local_38;
  char *pcStack_30;
  int local_24;
  
  uVar5 = *param_2 + 0xa0000000U >> 0x1e;
  uVar6 = *(int *)(*(long *)(*(long *)(param_1 + 0x2e8) + 0x68) + 0x2b4) + 0x20000000U >> 0x1e;
  local_24 = *(int *)(param_1 + 0x2d8);
  if (local_24 - 0x1eU < 3) {
    bVar7 = uVar5 == uVar6;
LAB_01442240:
    iVar9 = 1;
    if (!bVar7) {
      iVar9 = 2;
    }
  }
  else {
    if (local_24 == 0x21) {
      bVar7 = true;
      if (*param_2 + 0x20000000U >> 0x1e != uVar6) {
        bVar7 = uVar5 == uVar6;
      }
      goto LAB_01442240;
    }
    iVar9 = 0;
  }
  uVar4 = *(ushort *)PTR_DAT_04bb6298;
  uVar10 = (ulong)(short)uVar4;
  if (uVar10 == 0xffffffffffffffff) {
LAB_0144235c:
    local_38 = PTR_DAT_04bb2020 + 0x10;
    pcStack_30 = "NpcInteriorCoordinate";
    iVar8 = FUN_02743000(&local_38);
    iVar1 = 2;
    if (iVar9 != 1) {
      iVar1 = iVar9;
    }
    iVar11 = iVar9;
    if (iVar8 != 0) {
      iVar11 = iVar1;
    }
  }
  else {
    puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar4 * 8);
    if (0xff < (uint)(int)(short)uVar4) {
      puVar2 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar2 >> 0x15 & 1) == 0) {
      puVar2 = (uint *)(PTR_DAT_04bc39f8 + (uVar10 & 0xffffffff) * 8);
      if (0xff < uVar4) {
        puVar2 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar2 >> 0x1a & 1) == 0) {
        puVar3 = PTR_DAT_04bc39f8 + (uVar10 & 0xffffffff) * 8;
        if (0xff < uVar4) {
          puVar3 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar3 + 4) >> 1 & 1) == 0) {
          puVar3 = PTR_DAT_04bc39f8 + (uVar10 & 0xffffffff) * 8;
          if (0xff < uVar4) {
            puVar3 = PTR_DAT_04bc39f8;
          }
          if ((*(uint *)(puVar3 + 4) & 1) == 0) goto LAB_0144235c;
        }
      }
    }
    iVar11 = 2;
    if (iVar9 != 1) {
      iVar11 = iVar9;
    }
  }
  return iVar11;
}

