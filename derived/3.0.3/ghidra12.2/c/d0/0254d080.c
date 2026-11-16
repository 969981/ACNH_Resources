
void FUN_0254d080(undefined4 *param_1,byte *param_2,int param_3,undefined4 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 *puVar9;
  byte bVar10;
  long lVar11;
  long lVar12;
  int local_84;
  undefined *local_80;
  char *local_78;
  long local_70;
  int local_64;
  
  if (param_3 != 0) {
    bVar10 = *param_2;
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    local_84 = CONCAT31(local_84._1_3_,bVar10);
    local_64 = param_3;
    lVar7 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,&local_84,1);
    if (lVar7 == 0) {
      uVar6 = 0;
    }
    else {
      puVar1 = PTR_DAT_04bb2020 + 0x10;
      local_78 = "UpgradePocket40";
      local_80 = puVar1;
      iVar5 = FUN_0274b8d0(lVar7,&local_80);
      if (iVar5 == 0) {
        local_78 = "UpgradePocket30";
        local_80 = puVar1;
        iVar5 = FUN_0274b8d0(lVar7,&local_80);
        uVar6 = (uint)(iVar5 != 0);
      }
      else {
        uVar6 = 2;
      }
    }
    puVar1 = PTR_DAT_04bb43c0;
    local_80 = (undefined *)CONCAT44(local_80._4_4_,uVar6);
    lVar7 = 0x1e;
    if (uVar6 != 1) {
      lVar7 = 0x14;
    }
    lVar3 = 0x28;
    if (uVar6 != 2) {
      lVar3 = lVar7;
    }
    if (param_4 == (undefined4 *)0x0) {
      lVar7 = 0;
      puVar2 = PTR_DAT_04bc0510 + 0x10;
      do {
        puVar8 = (undefined8 *)FUN_02677ea0(param_2,lVar7);
        lVar11 = *(long *)puVar1;
        uVar6 = FUN_0277d6c4();
        lVar12 = *(long *)puVar1;
        if (lVar12 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            local_78 = (char *)*puVar8;
            local_70 = 0;
            local_80 = puVar2;
            uVar6 = FUN_0277d6c4(&local_78);
            if (*(long *)puVar1 != 0) {
              lVar11 = *(long *)(lVar12 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar11 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(puVar8);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                   (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
                   lVar11 != 0)) {
                  local_70 = lVar11;
                }
              }
            }
            local_84 = FUN_01ad78cc(&local_80);
            if (local_84 == local_64) {
              puVar9 = (undefined4 *)FUN_02677ea0(param_2,lVar7);
              uVar4 = puVar9[1];
              lVar11 = *(long *)puVar1;
              *param_1 = *puVar9;
              param_1[1] = uVar4;
              uVar6 = FUN_0277d6c4(param_1);
              if (*(long *)puVar1 != 0) {
                lVar11 = *(long *)(lVar11 + 0x57e58);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                  return;
                }
              }
            }
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
    }
    else {
      lVar7 = 0;
      puVar2 = PTR_DAT_04bc0510 + 0x10;
      do {
        puVar8 = (undefined8 *)FUN_02677ea0(param_2,lVar7);
        lVar11 = *(long *)puVar1;
        uVar6 = FUN_0277d6c4();
        lVar12 = *(long *)puVar1;
        if (lVar12 != 0) {
          lVar11 = *(long *)(lVar11 + 0x57e58);
          uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
            local_78 = (char *)*puVar8;
            local_70 = 0;
            local_80 = puVar2;
            uVar6 = FUN_0277d6c4(&local_78);
            if (*(long *)puVar1 != 0) {
              lVar11 = *(long *)(lVar12 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                lVar11 = *(long *)PTR_DAT_04bc0428;
                uVar6 = FUN_0277d6c4(puVar8);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                   (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8),
                   lVar11 != 0)) {
                  local_70 = lVar11;
                }
              }
            }
            local_84 = FUN_01ad78cc(&local_80);
            if (local_84 == local_64) {
              *param_4 = (int)lVar7;
              puVar9 = (undefined4 *)FUN_02677ea0(param_2,lVar7);
              uVar4 = puVar9[1];
              lVar11 = *(long *)puVar1;
              *param_1 = *puVar9;
              param_1[1] = uVar4;
              uVar6 = FUN_0277d6c4(param_1);
              if (*(long *)puVar1 != 0) {
                lVar11 = *(long *)(lVar11 + 0x57e58);
                uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
                if ((uVar6 < *(uint *)(lVar11 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                  return;
                }
              }
            }
          }
        }
        lVar7 = lVar7 + 1;
      } while (lVar3 != lVar7);
    }
  }
  uVar4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
  param_1[1] = uVar4;
  return;
}

