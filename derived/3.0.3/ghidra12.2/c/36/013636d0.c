
void FUN_013636d0(long param_1)

{
  ulong uVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  int iVar5;
  uint *puVar6;
  ulong uVar7;
  long lVar8;
  int iVar9;
  undefined8 local_80;
  undefined **local_78;
  undefined *local_70;
  char *local_68;
  undefined8 local_60;
  undefined1 local_58;
  
  FUN_012fd978(param_1 + 0x1380);
  if (((*(byte *)(param_1 + 0x1378) & 1) != 0) && ((*(byte *)(param_1 + 0x14a0) & 1) != 0)) {
    FUN_01311890(param_1 + 0x1498);
  }
  if ((*(long *)(*(long *)PTR_DAT_04bb2200 + 0xd0) != 0) &&
     ((*(byte *)(param_1 + 0x14a0) >> 1 & 1) != 0)) {
    *(undefined1 *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0xd0) + 0x640) = 1;
  }
  iVar5 = *(int *)(param_1 + 0x4738);
  if (iVar5 != 0) {
    lVar8 = *(long *)(param_1 + 0x4740);
    iVar9 = 0;
    do {
      if (0 < *(int *)(lVar8 + (long)iVar9 * 0x70 + 0x2c)) {
        FUN_01596980(lVar8 + (long)iVar9 * 0x70);
      }
      iVar9 = iVar9 + 1;
    } while (iVar5 != iVar9);
  }
  puVar4 = PTR_DAT_04bc3a80;
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x7a8de531 && (*(uint *)(param_1 + 0x4758) & 1) != 0)
     && (*(int *)(param_1 + 0x4760) != 0)) {
    uVar7 = 0;
    do {
      lVar8 = *(long *)(*(long *)(param_1 + 0x4768) +
                       (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3));
      if ((((*(uint *)(lVar8 + 8) ^ 0xffffffff) & 0x15) != 0) ||
         ((*(byte *)(*(long *)(lVar8 + 0xb0) + 8) >> 1 & 1) == 0)) {
        FUN_012dde80();
        break;
      }
      uVar1 = uVar7 + 1;
      uVar7 = uVar1 & 0xffffffff;
    } while (*(int *)(param_1 + 0x4760) != (int)uVar1);
  }
  local_68 = (char *)((ulong)local_68 & 0xffffffffffffff00);
  local_78 = &local_70;
  local_60 = 0;
  local_58 = 1;
  local_70 = PTR_DAT_04bbbfd0 + 0x10;
  local_80 = 0;
  FUN_03838950(param_1 + 0x47a0,&local_80);
  FUN_01369e00(param_1 + 0x4928);
  bVar3 = *(byte *)(param_1 + 0x49f8);
  if ((bVar3 & 1) != 0) {
    if ((bVar3 >> 2 & 1) == 0) {
      FUN_0136d040();
    }
    else {
      FUN_0136ce70((byte *)(param_1 + 0x49f8));
    }
  }
  if (*(int *)(puVar4 + 0x38) == -0x7a57de51) {
    local_70 = PTR_DAT_04bb2020 + 0x10;
    local_68 = "TapIndoorSelectCloudIsland";
    iVar5 = FUN_02743000(&local_70);
    if ((((iVar5 != 0) || (*(long *)(*(long *)PTR_DAT_04bb3728 + 0x50) != 0)) &&
        (*(long *)(param_1 + 0x4ba0) != 0)) && (*(int *)(param_1 + 0x4b98) != 0)) {
      uVar7 = 0;
      do {
        puVar6 = *(uint **)(*(long *)(param_1 + 0x4ba0) +
                           (-(uVar7 >> 0x1f) & 0xfffffff800000000 | uVar7 << 3));
        uVar2 = *puVar6;
        if (((uVar2 & 1) != 0) &&
           ((((uVar2 ^ 0xffffffff) & 5) != 0 ||
            ((*(byte *)(*(long *)(puVar6 + 0x2a) + 8) >> 1 & 1) == 0)))) {
          FUN_0126edd0();
          return;
        }
        uVar1 = uVar7 + 1;
        uVar7 = uVar1 & 0xffffffff;
      } while (*(int *)(param_1 + 0x4b98) != (int)uVar1);
    }
  }
  return;
}

