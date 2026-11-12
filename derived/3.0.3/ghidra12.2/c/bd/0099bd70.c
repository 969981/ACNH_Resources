
void FUN_0099bd70(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined8 *puVar8;
  char *pcVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  uint *puVar13;
  undefined8 uVar14;
  uint local_108 [2];
  undefined *local_100;
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined1 local_ec [63];
  undefined1 local_ad;
  undefined *local_a8;
  undefined1 *local_a0;
  undefined4 local_98;
  undefined1 local_94 [63];
  undefined1 local_55;
  
  puVar1 = PTR_DAT_04bb4208;
  puVar2 = PTR_DAT_04bb3d80;
  iVar4 = *(int *)(param_1 + 0x2a8);
  if (iVar4 != 3) {
    if (iVar4 == 2) {
      if (*(int *)(param_1 + 0x2a4) == 0x8a) {
        pcVar9 = "SHELLFISH_Show_JohnnyParts";
      }
      else {
        pcVar9 = "SHELLFISH_Show_Asari";
      }
      FUN_038d16fc(param_2,pcVar9);
      return;
    }
    if (iVar4 != 0) {
      return;
    }
    local_55 = 0;
    local_98 = 0x40;
    local_94[0] = 0;
    local_a0 = local_94;
    puVar1 = PTR_DAT_04bb2bc0 + 0x10;
    local_a8 = puVar1;
    FUN_013ee7b0(*(undefined8 *)PTR_DAT_04bb3d80,&local_a8,*(undefined4 *)(param_1 + 0x2a0));
    local_108[0] = 0;
    local_f8 = local_ec;
    local_f0 = 0x40;
    local_ad = 0;
    lVar12 = *(long *)puVar2;
    local_ec[0] = 0;
    uVar7 = (uint)*(ushort *)(param_1 + 0x2a0) - (uint)*(ushort *)(lVar12 + 0x348);
    if (uVar7 < *(uint *)(lVar12 + 0x328)) {
      puVar10 = *(uint **)(*(long *)(lVar12 + 0x330) + (long)(int)uVar7 * 8);
      local_108[0] = 0;
      if (puVar10 != (uint *)0x0) {
        uVar7 = *puVar10;
        if (uVar7 != 0 && puVar10 != (uint *)(ulong)uVar7) {
          puVar13 = (uint *)((long)puVar10 - (long)(ulong)uVar7);
          if (((*puVar13 != 0) && (uVar7 = puVar13[1], uVar7 != 0)) &&
             ((ulong)(ushort)puVar13[2] != 0)) {
            lVar12 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              lVar12 = 0x1c;
            }
            lVar12 = (long)puVar13 + lVar12 + (ulong)(ushort)puVar13[2] * 8;
            if (lVar12 != 0) {
              uVar3 = 0;
              if ((ulong)uVar7 != 0) {
                uVar3 = (uint)((ulong)((long)puVar10 - lVar12) / (ulong)uVar7);
              }
              if (*puVar13 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < *(uint *)PTR_DAT_04bbcad8) &&
                 (uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bbcad8 + 8) + (long)(int)uVar3 * 2),
                 local_108[0] = (uint)uVar5, uVar5 < 9)) goto LAB_0099beb8;
            }
          }
        }
        local_108[0] = 0;
      }
    }
LAB_0099beb8:
    if (local_108[0] < 9) {
      puVar8 = (undefined8 *)(&PTR_DAT_0492b6e8)[local_108[0]];
    }
    else {
      puVar8 = &DAT_0407ebb1;
    }
    local_100 = puVar1;
    FUN_038d1270(&local_100,puVar8);
    (**(code **)(local_a8 + 0x18))(&local_a8);
    puVar6 = local_a0;
    (**(code **)(local_100 + 0x18))(&local_100);
    FUN_038d16fc(param_2,"FISH_Show_%s_%s",puVar6,local_f8);
    return;
  }
  local_55 = 0;
  local_98 = 0x40;
  local_94[0] = 0;
  local_a0 = local_94;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  uVar14 = *(undefined8 *)PTR_DAT_04bb4208;
  local_100 = (undefined *)(ulong)(ushort)*(undefined4 *)(param_1 + 0x2a0);
  local_a8 = puVar2;
  FUN_0277d4ac(&local_100);
  FUN_02953760(uVar14,&local_a8,&local_100);
  local_f8 = local_ec;
  lVar12 = *(long *)puVar1;
  local_f0 = 0x40;
  local_ad = 0;
  local_ec[0] = 0;
  local_108[1] = 0;
  local_108[0] = *(uint *)(param_1 + 0x2a0) & 0xffff;
  local_100 = puVar2;
  FUN_0277d4ac(local_108);
  uVar7 = FUN_0277d6c4(local_108);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar12 + 0xb50);
  if ((uVar7 < *(uint *)(lVar12 + 0xb30)) &&
     (puVar10 = *(uint **)(*(long *)(lVar12 + 0xb38) + (long)(int)uVar7 * 8), puVar10 != (uint *)0x0
     )) {
    uVar7 = *puVar10;
    if (uVar7 != 0 && puVar10 != (uint *)(ulong)uVar7) {
      puVar13 = (uint *)((long)puVar10 - (long)(ulong)uVar7);
      if (((*puVar13 != 0) && (uVar7 = puVar13[1], uVar7 != 0)) && ((ulong)(ushort)puVar13[2] != 0))
      {
        lVar12 = 0xc;
        if (*(char *)((long)puVar13 + 10) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar13 + lVar12 + (ulong)(ushort)puVar13[2] * 8;
        if (lVar12 != 0) {
          uVar3 = 0;
          if ((ulong)uVar7 != 0) {
            uVar3 = (uint)((ulong)((long)puVar10 - lVar12) / (ulong)uVar7);
          }
          if (*puVar13 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if (uVar3 < *(uint *)PTR_DAT_04bc3bf8) {
            uVar5 = *(ushort *)(*(long *)(PTR_DAT_04bc3bf8 + 8) + (long)(int)uVar3 * 2);
            uVar7 = (uint)uVar5;
            if (4 < uVar5) {
              uVar7 = 0;
            }
            uVar11 = (ulong)uVar7;
            goto LAB_0099c0c0;
          }
        }
      }
    }
    uVar11 = 0;
  }
  else {
    uVar11 = 1;
  }
LAB_0099c0c0:
  FUN_038d1270(&local_100,*(undefined8 *)(PTR_DAT_04bb4200 + uVar11 * 8 + 0x10));
  (**(code **)(local_a8 + 0x18))(&local_a8);
  puVar6 = local_a0;
  (**(code **)(local_100 + 0x18))(&local_100);
  FUN_038d16fc(param_2,"DIVEFISH_Show_%s_%s",puVar6,local_f8);
  if (*(int *)(param_1 + 0x2a4) == 0x8c) {
    FUN_038d16fc(param_2,"DIVEFISH_Show_JohnnyParts");
  }
  return;
}

