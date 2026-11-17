
/* WARNING: Removing unreachable block (ram,0x02b902d0) */
/* WARNING: Removing unreachable block (ram,0x02b90288) */
/* WARNING: Removing unreachable block (ram,0x02b90264) */
/* WARNING: Removing unreachable block (ram,0x02b902ac) */
/* WARNING: Removing unreachable block (ram,0x02b902f4) */

bool FUN_02b90230(int param_1)

{
  undefined *puVar1;
  byte *pbVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  byte bVar6;
  ulong uVar7;
  long lVar8;
  byte bVar9;
  byte bVar10;
  uint local_4c;
  undefined *local_48;
  char *pcStack_40;
  uint local_34;
  
  if (param_1 != 0x1e) {
    local_48 = (undefined *)CONCAT44(local_48._4_4_,param_1);
    local_34 = 0;
    if ((((DAT_05641c34 != param_1) && (local_34 = 1, DAT_05641c38 != param_1)) &&
        (local_34 = 2, DAT_05641c3c != param_1)) &&
       ((local_34 = 3, DAT_05641c40 != param_1 && (local_34 = 4, DAT_05641c44 != param_1)))) {
      return true;
    }
  }
  local_4c = 0;
  uVar7 = FUN_02b677c0(&local_4c,param_1);
  if ((uVar7 & 1) == 0) {
    return true;
  }
  uVar7 = FUN_02b90410(local_4c);
  if (((uVar7 & 1) != 0) && (uVar7 = FUN_02b90500(local_4c), (uVar7 & 1) == 0)) {
    return false;
  }
  local_34 = local_4c;
  lVar8 = *(long *)PTR_DAT_04bb32e8;
  pbVar2 = &DAT_0417fb5a + (ulong)local_4c * 3;
  if (0xf < local_4c) {
    pbVar2 = &DAT_0417fb5a;
  }
  bVar9 = pbVar2[1];
  bVar10 = pbVar2[2];
  if (*pbVar2 == 0) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_40 = "RegulationType2";
    local_48 = puVar1;
    uVar7 = FUN_0273f0a0(&local_48);
    if ((uVar7 & 1) == 0) {
      pcStack_40 = "RegulationType3";
      local_48 = puVar1;
      bVar6 = FUN_0273f0a0(&local_48);
      bVar10 = bVar10 + (bVar6 & (char)bVar10 < '\x19');
    }
    else {
      bVar9 = bVar9 - ('\0' < (char)bVar9);
    }
  }
  else if ((*pbVar2 & 1) != 0) {
    return true;
  }
  cVar3 = *(char *)(lVar8 + 0x4064);
  bVar4 = false;
  bVar5 = false;
  if ((char)bVar9 <= cVar3) {
    bVar5 = SBORROW4((int)cVar3,(int)(char)bVar10);
    bVar4 = (int)cVar3 - (int)(char)bVar10 < 0;
  }
  return bVar4 != bVar5;
}

