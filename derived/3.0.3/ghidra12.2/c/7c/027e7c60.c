
/* WARNING: Removing unreachable block (ram,0x027e7d78) */
/* WARNING: Removing unreachable block (ram,0x027e7d70) */

byte FUN_027e7c60(long param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  uint uVar5;
  uint uVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  uint uVar14;
  byte *pbVar15;
  int iVar16;
  int local_a0;
  uint local_8c;
  uint local_7c;
  undefined *local_78;
  char *local_70;
  uint local_64;
  
  puVar9 = PTR_DAT_04bc2a20;
  puVar8 = PTR_DAT_04bc27f0;
  local_a0 = 10;
  local_8c = 0xffffffff;
  uVar14 = 0;
  iVar16 = 0;
  iVar12 = 0;
  puVar1 = PTR_DAT_04bc43f8 + 0x10;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  do {
    pbVar15 = (byte *)(param_1 + (long)iVar12 * 0x13230);
    uVar13 = (ulong)*pbVar15;
    uVar6 = local_8c;
    if (((uVar13 < 0x23) && (pbVar15[1] <= (byte)puVar8[uVar13])) &&
       ((*(uint *)(puVar9 + uVar13 * 4) >> (ulong)(pbVar15[1] & 0x1f) & 1) != 0)) {
      local_7c = 0;
      uVar13 = FUN_02b67a30(&local_7c,uVar14);
      if ((uVar13 & 1) != 0) {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
        puVar7 = &DAT_05636dd8;
        if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
          puVar7 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
        }
        if (puVar7[1] != 0) {
          local_64 = local_7c;
          uVar5 = local_7c;
          if (9 < local_7c) {
            uVar5 = 0;
          }
          local_70 = (char *)CONCAT44(local_70._4_4_,(&DAT_05636e30)[(int)uVar5]);
          local_78 = puVar1;
          uVar13 = FUN_02a59140(puVar7,&local_78);
          if ((uVar13 & 1) != 0) {
            lVar4 = param_1 + (long)iVar12 * 0x13230 + 0x1267c;
            local_70 = "MoveInCompletion";
            local_78 = puVar2;
            iVar11 = FUN_02749340(lVar4,&local_78);
            if (iVar11 == 0) {
              iVar16 = iVar16 + 1;
              puVar3 = PTR_DAT_04bb2020 + 0x10;
              local_70 = "MoveInOrder";
              local_78 = puVar3;
              iVar11 = FUN_02749340(lVar4,&local_78);
              if (iVar11 < local_a0) {
                local_70 = "MoveInOrder";
                local_78 = puVar3;
                local_a0 = FUN_02749340(lVar4,&local_78);
                local_70 = "ForceMoveOutVillagerIndex";
                local_78 = puVar3;
                iVar11 = FUN_02749340(lVar4,&local_78);
                uVar6 = uVar14;
                if (iVar11 != 0) {
                  uVar6 = local_8c;
                }
                if ((1 < param_2) && (iVar11 != 0)) {
                  FUN_027e9bf0(param_1,pbVar15,uVar14,param_2 + -1);
                  local_78 = PTR_DAT_04bb2020 + 0x10;
                  local_70 = "ForceMoveOutVillagerIndex";
                  FUN_02749650(lVar4,uVar14,&local_78,0,0);
                  uVar6 = local_8c;
                }
              }
            }
          }
        }
      }
    }
    local_8c = uVar6;
    uVar14 = uVar14 + 1;
    iVar12 = iVar12 + 1;
  } while (uVar14 != 10);
  if (local_8c < 10) {
    FUN_027e9bf0(param_1,param_1 + (ulong)local_8c * 0x13230,local_8c,param_2);
  }
  puVar2 = PTR_DAT_04bb2020;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "MoveInOrder";
  local_78 = puVar1;
  iVar12 = FUN_02749340(param_1 + 0x1267c,&local_78);
  if (0 < iVar12) {
    local_70 = "MoveInOrder";
    local_78 = puVar1;
    FUN_02749650(param_1 + 0x1267c,0,&local_78,iVar12 + -1,0);
  }
  local_70 = "MoveInOrder";
  local_78 = puVar1;
  iVar12 = FUN_02749340(param_1 + 0x258ac,&local_78);
  if (0 < iVar12) {
    local_78 = puVar2 + 0x10;
    local_70 = "MoveInOrder";
    FUN_02749650(param_1 + 0x258ac,1,&local_78,iVar12 + -1,0);
  }
  puVar1 = puVar2 + 0x10;
  local_70 = "MoveInOrder";
  local_78 = puVar1;
  iVar12 = FUN_02749340(param_1 + 0x38adc,&local_78);
  if (0 < iVar12) {
    local_70 = "MoveInOrder";
    local_78 = puVar1;
    FUN_02749650(param_1 + 0x38adc,2,&local_78,iVar12 + -1,0);
  }
  local_70 = "MoveInOrder";
  local_78 = puVar1;
  iVar12 = FUN_02749340(param_1 + 0x4bd0c,&local_78);
  if (0 < iVar12) {
    local_78 = puVar2 + 0x10;
    local_70 = "MoveInOrder";
    FUN_02749650(param_1 + 0x4bd0c,3,&local_78,iVar12 + -1,0);
  }
  puVar1 = puVar2 + 0x10;
  local_70 = "MoveInOrder";
  local_78 = puVar1;
  iVar12 = FUN_02749340(param_1 + 0x5ef3c,&local_78);
  if (0 < iVar12) {
    local_70 = "MoveInOrder";
    local_78 = puVar1;
    FUN_02749650(param_1 + 0x5ef3c,4,&local_78,iVar12 + -1,0);
  }
  local_70 = "MoveInOrder";
  local_78 = puVar1;
  iVar12 = FUN_02749340(param_1 + 0x7216c,&local_78);
  if (0 < iVar12) {
    local_78 = puVar2 + 0x10;
    local_70 = "MoveInOrder";
    FUN_02749650(param_1 + 0x7216c,5,&local_78,iVar12 + -1,0);
  }
  puVar1 = puVar2 + 0x10;
  local_70 = "MoveInOrder";
  local_78 = puVar1;
  iVar12 = FUN_02749340(param_1 + 0x8539c,&local_78);
  if (0 < iVar12) {
    local_70 = "MoveInOrder";
    local_78 = puVar1;
    FUN_02749650(param_1 + 0x8539c,6,&local_78,iVar12 + -1,0);
  }
  local_70 = "MoveInOrder";
  local_78 = puVar1;
  iVar12 = FUN_02749340(param_1 + 0x985cc,&local_78);
  if (0 < iVar12) {
    local_78 = puVar2 + 0x10;
    local_70 = "MoveInOrder";
    FUN_02749650(param_1 + 0x985cc,7,&local_78,iVar12 + -1,0);
  }
  puVar1 = puVar2 + 0x10;
  local_70 = "MoveInOrder";
  local_78 = puVar1;
  iVar12 = FUN_02749340(param_1 + 0xab7fc,&local_78);
  if (0 < iVar12) {
    local_70 = "MoveInOrder";
    local_78 = puVar1;
    FUN_02749650(param_1 + 0xab7fc,8,&local_78,iVar12 + -1,0);
  }
  local_70 = "MoveInOrder";
  local_78 = puVar1;
  iVar12 = FUN_02749340(param_1 + 0xbea2c,&local_78);
  if (0 < iVar12) {
    local_78 = puVar2 + 0x10;
    local_70 = "MoveInOrder";
    FUN_02749650(param_1 + 0xbea2c,9,&local_78,iVar12 + -1,0);
  }
  bVar10 = 1 < iVar16;
  if ((1 < param_2) && (1 < iVar16)) {
    bVar10 = FUN_027e7c60(param_1,param_2 + -1);
  }
  return bVar10 & 1;
}

