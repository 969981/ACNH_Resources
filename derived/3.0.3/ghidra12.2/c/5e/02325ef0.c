
bool FUN_02325ef0(byte *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  undefined *local_80;
  char *local_78;
  long local_70;
  byte local_64 [4];
  
  puVar5 = PTR_DAT_04bb43c0;
  uVar10 = 0;
  puVar1 = PTR_DAT_04bc0510 + 0x10;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  while( true ) {
    local_64[0] = *param_1;
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
    lVar8 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_64,1);
    if (lVar8 == 0) {
      uVar7 = 0;
    }
    else {
      local_78 = "UpgradePocket40";
      local_80 = puVar2;
      iVar6 = FUN_0274b8d0(lVar8,&local_80);
      if (iVar6 == 0) {
        local_80 = PTR_DAT_04bb2020 + 0x10;
        local_78 = "UpgradePocket30";
        iVar6 = FUN_0274b8d0(lVar8,&local_80);
        uVar7 = (uint)(iVar6 != 0);
      }
      else {
        uVar7 = 2;
      }
    }
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar7);
    uVar3 = 0x1e;
    if (uVar7 != 1) {
      uVar3 = 0x14;
    }
    uVar4 = 0x28;
    if (uVar7 != 2) {
      uVar4 = uVar3;
    }
    if (uVar4 <= uVar10) break;
    puVar9 = (undefined8 *)FUN_02677ea0(param_1,uVar10);
    lVar11 = *(long *)puVar5;
    uVar7 = FUN_0277d6c4();
    lVar8 = *(long *)puVar5;
    if (lVar8 != 0) {
      lVar11 = *(long *)(lVar11 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_78 = (char *)*puVar9;
        local_70 = 0;
        local_80 = puVar1;
        uVar7 = FUN_0277d6c4(&local_78);
        if (*(long *)puVar5 != 0) {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            lVar8 = *(long *)PTR_DAT_04bc0428;
            uVar7 = FUN_0277d6c4(puVar9);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar8 + 0x1d8)) &&
               (lVar8 = *(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar7 * 8), lVar8 != 0)) {
              local_70 = lVar8;
            }
          }
        }
        iVar6 = FUN_01ad78cc(&local_80);
        if (iVar6 == 0x12) break;
      }
    }
    uVar10 = uVar10 + 1;
  }
  return uVar10 < uVar4;
}

