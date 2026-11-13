
void FUN_01307fc0(long param_1,uint *param_2,undefined8 param_3,undefined4 param_4)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  uint uVar12;
  bool bVar13;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  long local_88;
  long local_80;
  undefined *local_78;
  int local_70;
  int local_6c;
  uint local_68;
  uint local_64;
  
  local_88 = param_1 + 0x28;
  local_80 = param_1 + 0x38;
  iVar5 = *(int *)(param_1 + 0x30);
  local_6c = *(int *)(param_1 + 0x34);
  puVar2 = PTR_DAT_04bb2018 + 0x10;
  iVar1 = *(int *)(param_1 + 0x44) + 1;
  if (iVar1 != local_6c) {
    lVar3 = param_1 + 0x110;
    local_78 = puVar2;
    local_70 = iVar5;
    do {
      iStack_8c = local_6c;
      local_90 = local_70 + 1;
      iVar7 = *(int *)(param_1 + 0x44);
      iVar6 = *(int *)(param_1 + 0x30);
      iVar8 = *(int *)(param_1 + 0x34);
      bVar10 = local_70 < *(int *)(param_1 + 0x40);
      bVar11 = local_6c == iVar7;
      bVar13 = (((iVar6 <= local_90 && bVar10) && iVar8 <= local_6c) && local_6c - iVar7 < 0) !=
               (((iVar6 <= local_90 && bVar10) && iVar8 <= local_6c) && SBORROW4(local_6c,iVar7));
      if ((((iVar6 <= local_90 && bVar10) && iVar8 <= local_6c) && bVar11 || bVar13) &&
          iVar6 == local_70 ||
          ((((iVar6 <= local_90 && bVar10) && iVar8 <= local_6c) && bVar11 || bVar13) &&
          iVar6 - local_70 < 0) !=
          ((((iVar6 <= local_90 && bVar10) && iVar8 <= local_6c) && bVar11 || bVar13) &&
          SBORROW4(iVar6,local_70))) {
        local_64 = *(uint *)(param_1 + 0x50);
        lVar4 = lVar3 + (ulong)local_64 * 0x930;
        if (1 < local_64) {
          lVar4 = lVar3;
        }
        local_98 = puVar2;
        uVar12 = FUN_01302e18(lVar4,param_4,&local_78);
        local_64 = *(uint *)(param_1 + 0x50);
        uVar9 = *param_2;
        lVar4 = lVar3 + (ulong)local_64 * 0x930;
        if (1 < local_64) {
          lVar4 = lVar3;
        }
        local_68 = FUN_01302e18(lVar4,param_4,&local_98);
        bVar13 = true;
        if ((((local_68 < 0xd) && (uVar12 < 0xd)) && ((uVar9 & 1 << (ulong)(uVar12 & 0x1f)) != 0))
           && ((*param_2 & 1 << (ulong)(local_68 & 0x1f)) != 0)) {
          local_64 = *(uint *)(param_1 + 0x50);
          lVar4 = lVar3 + (ulong)local_64 * 0x930;
          if (1 < local_64) {
            lVar4 = lVar3;
          }
          FUN_01302fd0(lVar4,param_3,param_4,&local_78,&local_98);
          bVar13 = false;
        }
      }
      else {
        bVar13 = true;
      }
      local_98 = PTR_DAT_04bb2018 + 0x10;
      iStack_8c = local_6c + 1;
      local_90 = local_70;
      if (((((*(int *)(param_1 + 0x30) <= local_70) && (local_70 <= *(int *)(param_1 + 0x40))) &&
           ((iVar6 = *(int *)(param_1 + 0x34), iVar6 <= iStack_8c &&
            ((iVar7 = *(int *)(param_1 + 0x44), local_6c < iVar7 && (iVar6 <= local_6c)))))) &&
          (local_6c <= iVar7)) && ((iVar6 <= iStack_8c && (local_6c < iVar7)))) {
        local_64 = *(uint *)(param_1 + 0x50);
        lVar4 = lVar3 + (ulong)local_64 * 0x930;
        if (1 < local_64) {
          lVar4 = lVar3;
        }
        uVar12 = FUN_01302e18(lVar4,param_4,&local_78);
        local_64 = *(uint *)(param_1 + 0x50);
        uVar9 = *param_2;
        lVar4 = lVar3 + (ulong)local_64 * 0x930;
        if (1 < local_64) {
          lVar4 = lVar3;
        }
        local_68 = FUN_01302e18(lVar4,param_4,&local_98);
        if ((((local_68 < 0xd) && (uVar12 < 0xd)) && ((uVar9 & 1 << (ulong)(uVar12 & 0x1f)) != 0))
           && ((*param_2 & 1 << (ulong)(local_68 & 0x1f)) != 0)) {
          local_64 = *(uint *)(param_1 + 0x50);
          lVar4 = lVar3 + (ulong)local_64 * 0x930;
          if (1 < local_64) {
            lVar4 = lVar3;
          }
          FUN_01302fd0(lVar4,param_3,param_4,&local_78,&local_98);
          if (!bVar13) {
            local_90 = local_70 + 1;
            iStack_8c = local_6c + 1;
            local_98 = PTR_DAT_04bb2018 + 0x10;
            if ((((*(int *)(param_1 + 0x30) <= local_90) && (local_70 < *(int *)(param_1 + 0x40)))
                && ((*(int *)(param_1 + 0x34) <= iStack_8c &&
                    ((local_6c < *(int *)(param_1 + 0x44) && (*(int *)(param_1 + 0x30) <= local_70))
                    )))) && (*(int *)(param_1 + 0x34) <= local_6c)) {
              local_64 = *(uint *)(param_1 + 0x50);
              lVar4 = lVar3 + (ulong)local_64 * 0x930;
              if (1 < local_64) {
                lVar4 = lVar3;
              }
              uVar12 = FUN_01302e18(lVar4,param_4,&local_78);
              local_64 = *(uint *)(param_1 + 0x50);
              uVar9 = *param_2;
              lVar4 = lVar3 + (ulong)local_64 * 0x930;
              if (1 < local_64) {
                lVar4 = lVar3;
              }
              local_68 = FUN_01302e18(lVar4,param_4,&local_98);
              if ((((local_68 < 0xd) && (uVar12 < 0xd)) &&
                  ((uVar9 & 1 << (ulong)(uVar12 & 0x1f)) != 0)) &&
                 ((*param_2 & 1 << (ulong)(local_68 & 0x1f)) != 0)) {
                local_64 = *(uint *)(param_1 + 0x50);
                lVar4 = lVar3 + (ulong)local_64 * 0x930;
                if (1 < local_64) {
                  lVar4 = lVar3;
                }
                FUN_01302fd0(lVar4,param_3,param_4,&local_78,&local_98);
              }
            }
          }
        }
      }
      if (local_70 < *(int *)(local_80 + 8)) {
        local_70 = local_70 + 1;
      }
      else {
        local_70 = *(int *)(local_88 + 8);
        local_6c = local_6c + 1;
      }
    } while ((iVar5 != local_70) || (iVar1 != local_6c));
  }
  return;
}

