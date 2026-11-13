
bool FUN_00f6c4a0(byte *param_1,undefined4 *param_2,int param_3)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined *local_98;
  char *local_90;
  long local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 uStack_74;
  long local_70;
  byte local_64 [4];
  
  puVar5 = PTR_DAT_04bc0510;
  puVar4 = PTR_DAT_04bb43c0;
  local_70 = 0;
  local_80 = PTR_DAT_04bc0510 + 0x10;
  local_78 = *param_2;
  uStack_74 = param_2[1];
  lVar12 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_78);
  if (*(long *)puVar4 != 0) {
    lVar12 = *(long *)(lVar12 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      lVar12 = *(long *)PTR_DAT_04bc0428;
      uVar7 = FUN_0277d6c4(param_2);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar12 + 0x1d8)) &&
         (lVar12 = *(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar7 * 8), lVar12 != 0)) {
        local_70 = lVar12;
      }
    }
  }
  local_64[0] = *param_1;
  if (7 < local_64[0]) {
    local_64[0] = 0xff;
  }
  lVar12 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_64,1);
  if (lVar12 == 0) {
    uVar7 = 0;
  }
  else {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_90 = "UpgradePocket40";
    local_98 = puVar1;
    iVar8 = FUN_0274b8d0(lVar12,&local_98);
    if (iVar8 == 0) {
      local_90 = "UpgradePocket30";
      local_98 = puVar1;
      iVar8 = FUN_0274b8d0(lVar12,&local_98);
      uVar7 = (uint)(iVar8 != 0);
    }
    else {
      uVar7 = 2;
    }
  }
  local_98 = (undefined *)CONCAT44(local_98._4_4_,uVar7);
  lVar12 = 0;
  iVar8 = 0;
  lVar13 = 0x1e;
  if (uVar7 != 1) {
    lVar13 = 0x14;
  }
  lVar2 = 0x28;
  if (uVar7 != 2) {
    lVar2 = lVar13;
  }
  do {
    puVar10 = (undefined8 *)FUN_02677ea0(param_1,lVar12);
    lVar13 = *(long *)puVar4;
    uVar7 = FUN_0277d6c4();
    if (*(long *)puVar4 != 0) {
      lVar13 = *(long *)(lVar13 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if (((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
          (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) &&
         (uVar11 = FUN_0277d7b4(puVar10,param_2), (uVar11 & 1) != 0)) {
        lVar13 = *(long *)puVar4;
        local_90 = (char *)*puVar10;
        local_88 = 0;
        local_98 = puVar5 + 0x10;
        uVar7 = FUN_0277d6c4(&local_90);
        if (*(long *)puVar4 != 0) {
          lVar13 = *(long *)(lVar13 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            lVar13 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(puVar10);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar13 + 0x1d8)) &&
               (lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar7 * 8), lVar13 != 0))
            {
              local_88 = lVar13;
            }
          }
        }
        uVar11 = FUN_01af0020(&local_98);
        if ((uVar11 & 1) == 0) {
          iVar9 = 1;
        }
        else {
          iVar9 = FUN_01af02d0(&local_98);
        }
        iVar8 = iVar9 + iVar8;
      }
    }
    lVar12 = lVar12 + 1;
  } while (lVar2 != lVar12);
  iVar9 = FUN_01af2610(&local_80);
  if (iVar8 < 1) {
    bVar6 = false;
  }
  else {
    iVar3 = 0;
    if (iVar9 != 0) {
      iVar3 = (iVar8 + -1) / iVar9;
    }
    bVar6 = param_3 + ((iVar8 + -1) - iVar3 * iVar9) + 1 <= iVar9;
  }
  return bVar6;
}

