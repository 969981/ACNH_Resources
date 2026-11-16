
/* WARNING: Removing unreachable block (ram,0x0263ec8c) */
/* WARNING: Removing unreachable block (ram,0x0263ec9c) */

void FUN_0263ec10(void)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  long lVar5;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined **local_b0;
  undefined **local_a8;
  undefined *local_a0;
  int local_98;
  int local_94;
  undefined *local_90;
  undefined *puStack_88;
  int local_80;
  int iStack_7c;
  undefined *local_78;
  undefined4 local_70;
  int iStack_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  byte local_58;
  undefined *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  
  local_68 = PTR_DAT_04bbfe68 + 0x10;
  local_60 = 1;
  uStack_5c = DAT_0516b10c;
  local_58 = FUN_017baf44();
  local_58 = local_58 & 1;
  local_b0 = (undefined **)CONCAT44(local_b0._4_4_,1);
  local_90 = (undefined *)CONCAT44(local_90._4_4_,1);
  if (*(long *)(DAT_0519d040 + 0x38) != 0) {
    lVar5 = FUN_01a4fa00(&local_68);
    iVar3 = *(int *)(lVar5 + 0x10);
    local_94 = *(int *)(lVar5 + 0x14);
    local_90 = PTR_DAT_04bbc1a0 + 0x10;
    local_70 = *(undefined4 *)(lVar5 + 0x20);
    iStack_6c = *(int *)(lVar5 + 0x24);
    iVar1 = iStack_6c + 1;
    local_a0 = PTR_DAT_04bb2010 + 0x10;
    local_b0 = &puStack_88;
    local_a8 = &local_78;
    if (iVar1 != local_94) {
      puVar2 = PTR_DAT_04bc35c0 + 0x10;
      local_98 = iVar3;
      puStack_88 = local_a0;
      local_80 = iVar3;
      iStack_7c = local_94;
      local_78 = local_a0;
      do {
        FUN_01a5033c(&local_b8,&local_68,0,&local_a0,0);
        local_48 = local_b8;
        uStack_44 = uStack_b4;
        local_50 = puVar2;
        iVar4 = FUN_0277d6c4(&local_48);
        if (iVar4 - 0xf619U < 7) {
          FUN_0263edd0(&local_b8,&local_a0);
        }
        if (local_98 < *(int *)(local_a8 + 1)) {
          local_98 = local_98 + 1;
        }
        else {
          local_94 = local_94 + 1;
          local_98 = *(int *)(local_b0 + 1);
        }
      } while ((iVar3 != local_98) || (iVar1 != local_94));
    }
  }
  return;
}

