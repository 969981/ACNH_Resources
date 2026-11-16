
ulong FUN_028de310(long param_1,ushort *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  char cVar5;
  char cVar6;
  short sVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  ushort uVar11;
  uint *puVar12;
  ulong uVar13;
  uint uVar14;
  ulong uVar15;
  undefined *local_50;
  char *pcStack_48;
  
  iVar2 = *(int *)(param_1 + 0x18);
  uVar4 = *param_2;
  uVar11 = param_2[1];
  cVar5 = *(char *)((long)param_2 + 3);
  cVar6 = (char)param_2[2];
  iVar3 = *param_3;
  uVar1 = (int)cVar6 + 0x18;
  if (-1 < cVar6) {
    uVar1 = (int)cVar6;
  }
  if (iVar3 < 0) {
    uVar14 = 0;
  }
  else {
    uVar14 = 0;
    if ((iVar3 < *(int *)(*(long *)PTR_DAT_04bb30a0 + 0x653a0)) && (uVar1 < 0x18)) {
      local_50 = (undefined *)CONCAT44(local_50._4_4_,iVar3);
      puVar12 = (uint *)(**(code **)(**(long **)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  PTR_DAT_04bb30a0 + 0x108) + (long)iVar3 * 8) +
                                                  0x670) + (ulong)uVar1 * 8) + 0xf0))();
      uVar14 = *puVar12;
    }
  }
  if (uVar14 < 7) {
    uVar1 = iVar2 + cVar6 + ((char)uVar11 * 0x20 + (uint)uVar4 * 0x200 + (int)cVar5) * 0x10000;
    uVar8 = (uVar1 ^ uVar1 >> 0x1e) * 0x6c078965 + 1;
    uVar1 = uVar8 ^ uVar8 * 0x800;
    uVar9 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
    uVar8 = uVar9 ^ uVar9 * 0x800;
    uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 3;
    uVar10 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 4;
    uVar1 = uVar1 >> 8 ^ uVar10 >> 0x13 ^ uVar1 ^ uVar10;
    uVar1 = uVar8 >> 8 ^ uVar1 >> 0x13 ^ uVar8 ^ uVar1;
    switch(uVar14) {
    case 0:
      return 0;
    case 1:
      uVar9 = uVar9 ^ uVar9 * 0x800;
      uVar15 = (ulong)(uVar9 >> 8 ^ uVar1 >> 0x13 ^ uVar9 ^ uVar1) * 3 >> 0x20;
      break;
    default:
      uVar15 = (ulong)(((uVar9 ^ uVar9 * 0x800 ^ uVar1) >> 0x1e) + 1);
      break;
    case 3:
    case 6:
      uVar9 = uVar9 ^ uVar9 * 0x800;
      uVar15 = (ulong)((int)((ulong)(uVar9 >> 8 ^ uVar1 >> 0x13 ^ uVar9 ^ uVar1) * 3 >> 0x20) + 3);
      break;
    case 4:
      uVar9 = uVar9 ^ uVar9 * 0x800;
      uVar15 = (ulong)(uVar9 >> 8 ^ uVar1 >> 0x13 ^ uVar9 ^ uVar1) * 3 >> 0x20;
    }
  }
  else {
    uVar15 = 0;
  }
  sVar7 = *(short *)PTR_DAT_04bb6298;
  if (sVar7 != -1) {
    puVar12 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
    if (0xff < (uint)(int)sVar7) {
      puVar12 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar12 >> 0x17 & 1) != 0) {
      return uVar15;
    }
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "SzaTaled1stTimeAnyPlayer";
  uVar13 = FUN_0273f0a0(&local_50);
  if ((uVar13 & 1) == 0) {
    if ((uint)uVar15 < 5) {
      uVar15 = (ulong)((uint)(0x404030202 >> (uVar15 << 3)) & 7);
    }
    else {
      uVar15 = 5;
    }
  }
  return uVar15;
}

