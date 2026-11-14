
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01b30550(long *param_1,long param_2)

{
  undefined4 *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  long *plVar8;
  ushort uVar9;
  int iVar10;
  ulong uVar11;
  undefined **ppuVar12;
  long lVar13;
  long lVar14;
  undefined *local_98;
  char *pcStack_90;
  undefined *local_88;
  undefined8 local_80;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined2 local_54;
  
  puVar7 = PTR_DAT_04bb2020;
  puVar1 = (undefined4 *)(param_2 + 0x40);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "BocFirstMail";
  local_88 = puVar2;
  uVar9 = FUN_0274ce10(puVar1,&local_88);
  if (uVar9 == 2) {
    local_80 = "MarketBuilt";
    local_88 = puVar2;
    uVar11 = FUN_0273f0a0(&local_88);
    if ((uVar11 & 1) == 0) {
      uVar9 = 0;
    }
    else {
      local_88 = puVar7 + 0x10;
      local_80 = "MarketOpen1stDay1";
      uVar11 = FUN_0273f0a0(&local_88);
      if ((uVar11 & 1) == 0) {
        uVar9 = 1;
      }
      else {
        uVar9 = (ushort)(*(long *)*param_1 < 1);
      }
    }
    local_88 = puVar7 + 0x10;
    local_80 = "BocFirstMail";
    FUN_0274d104(puVar1,&local_88,uVar9);
  }
  if (uVar9 != 0) {
    return;
  }
  local_88 = puVar7 + 0x10;
  local_80 = "CountMarket1AfterBuild";
  uVar9 = FUN_0273ea30(&local_88);
  if (uVar9 == 0) {
    return;
  }
  if (uVar9 < 4) {
    local_88 = puVar7 + 0x10;
    local_80 = "KaburibaTalkBeforeFlag";
    iVar10 = FUN_0274ce10(puVar1,&local_88);
    if (iVar10 == 0) {
      FUN_01b46be0(&local_88);
      uVar4 = *puVar1;
      if (((*PTR_DAT_04bb8aa8 & 1) == 0) &&
         (iVar10 = __cxa_guard_acquire(&DAT_04f292d0), iVar10 != 0)) {
        FUN_00dd5f80(&DAT_04f292c0);
        __cxa_guard_release(&DAT_04f292d0);
      }
      if (0 < (int)DAT_04f292c0) {
        uVar11 = 0;
        do {
          if (*(int *)(DAT_04f292c8 + uVar11 * 4) == 0x40) goto LAB_01b306ec;
          uVar11 = uVar11 + 1;
        } while (DAT_04f292c0 != uVar11);
      }
      uVar11 = 0;
LAB_01b306ec:
      lVar13 = *param_1;
      uVar9 = *(ushort *)(lVar13 + 0x10);
      bVar5 = *(byte *)(lVar13 + 0x12);
      bVar6 = *(byte *)(lVar13 + 0x13);
      nn::time::IsValidDate((uint)uVar9,(uint)bVar5,(uint)bVar6);
      local_80 = (char *)CONCAT44((uint)bVar6 << 0x18 | (uint)bVar5 << 0x10 | (uint)uVar9,uVar4);
      local_68 = (undefined4)uVar11;
      uStack_64 = 3;
      local_60 = 1;
      local_54 = 0;
      local_5c = _DAT_05586008;
      uStack_58 = DAT_0558600c;
      lVar13 = (**(code **)(local_88 + 0x20))(&local_88,DAT_0532d280);
      plVar8 = DAT_0532d278;
      if (lVar13 != 0) {
        lVar14 = *DAT_0532d278;
        plVar3 = (long *)(*(int *)((long)DAT_0532d278 + 0x14) + lVar13);
        *DAT_0532d278 = (long)plVar3;
        *plVar3 = lVar14;
        plVar3[1] = (long)plVar8;
        if (lVar14 != 0) {
          *(long **)(lVar14 + 8) = plVar3;
        }
        *(int *)(plVar8 + 2) = (int)plVar8[2] + 1;
      }
      local_98 = puVar7 + 0x10;
      ppuVar12 = &local_98;
      pcStack_90 = "BocFirstMail";
      goto LAB_01b30670;
    }
  }
  local_88 = puVar7 + 0x10;
  ppuVar12 = &local_88;
  local_80 = "BocFirstMail";
LAB_01b30670:
  FUN_0274d104(puVar1,ppuVar12,1);
  return;
}

