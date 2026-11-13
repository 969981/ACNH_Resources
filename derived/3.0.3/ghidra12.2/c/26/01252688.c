
void FUN_01252688(undefined8 *param_1,long param_2,byte *param_3,uint param_4)

{
  uint *puVar1;
  undefined4 uVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  uint uVar11;
  undefined *local_78;
  undefined8 local_70;
  long local_68;
  undefined8 local_60;
  byte local_58 [4];
  byte local_54 [4];
  byte local_38 [4];
  byte local_34 [4];
  
  iVar7 = FUN_0123db50(param_2 + 8,*(undefined8 *)(param_2 + 0x10));
  if (iVar7 != 0x2e) {
    uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
    *(undefined4 *)param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
    *(undefined4 *)((long)param_1 + 4) = uVar2;
    return;
  }
  local_38[0] = *param_3;
  if (7 < local_38[0]) {
    local_38[0] = 0xff;
  }
  uVar9 = FUN_01251510(param_2,local_38,1);
  if ((uVar9 & 1) != 0) {
    *param_1 = 0x9c6;
    FUN_0277d4ac(param_1);
    return;
  }
  bVar3 = *param_3;
  iVar7 = FUN_0123db50(param_2 + 8,*(undefined8 *)(param_2 + 0x10));
  if (iVar7 == 0x2e) {
    local_34[0] = bVar3;
    if (7 < bVar3) {
      local_34[0] = 0xff;
    }
    uVar8 = FUN_02582fe0(local_34);
    puVar5 = PTR_DAT_04bb2020;
    local_60 = CONCAT44(local_60._4_4_,uVar8);
    if (uVar8 != 0xffffffff) {
      local_78 = PTR_DAT_04bb2020 + 0x10;
      local_70 = "TodayFortune";
      iVar7 = FUN_0274ce10(&local_60,&local_78);
      if ((iVar7 != 2) && ((1 << (ulong)(uVar8 & 0x1f) & (uint)*(byte *)(param_2 + 0xc)) != 0)) {
        local_78 = puVar5 + 0x10;
        local_70 = "TodayFortune";
        iVar7 = FUN_0274bce0(param_3,&local_78);
        if (iVar7 == 1) {
          *param_1 = 0x84b;
        }
        else {
          *param_1 = 0x849;
        }
        goto LAB_01252b4c;
      }
    }
  }
  if (param_4 == 0) {
    uVar8 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
    DAT_0514cb58 = DAT_0514cb5c;
    DAT_0514cb5c = DAT_0514cb60;
    uVar8 = uVar8 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar8 ^ DAT_0514cb64;
    DAT_0514cb60 = DAT_0514cb64;
    DAT_0514cb64 = uVar8;
  }
  else {
    nn::os::GetSystemTick();
    uVar11 = (param_4 ^ param_4 >> 0x1e) * 0x6c078965 + 1;
    uVar8 = uVar11 ^ uVar11 * 0x800;
    uVar11 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 2;
    uVar11 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 3;
    uVar11 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 4;
    uVar8 = uVar8 >> 8 ^ uVar11 >> 0x13 ^ uVar8 ^ uVar11;
  }
  puVar5 = PTR_DAT_04bb4f78;
  local_54[0] = *param_3;
  uVar11 = (uint)((ulong)uVar8 * 100 >> 0x20);
  uVar8 = 2;
  if (0x61 < uVar11) {
    uVar8 = 3;
  }
  if (uVar11 < 0x31) {
    uVar8 = 1;
  }
  if (7 < local_54[0]) {
    local_54[0] = 0xff;
  }
  lVar10 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_54,1);
  puVar6 = PTR_DAT_04bb6298;
  if ((lVar10 == 0) || (sVar4 = *(short *)PTR_DAT_04bb6298, sVar4 == -1)) {
LAB_0125296c:
    local_58[0] = *param_3;
    if (7 < local_58[0]) {
      local_58[0] = 0xff;
    }
    lVar10 = FUN_025830c0(*(undefined8 *)puVar5,local_58,1);
    if ((lVar10 != 0) && (sVar4 = *(short *)puVar6, sVar4 != -1)) {
      local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 3 & 1) != 0) {
        local_78 = PTR_DAT_04bb2020 + 0x10;
        local_70 = "TodayFortune";
        iVar7 = FUN_0274bce0(param_3,&local_78);
        if (iVar7 == 2) {
          uVar8 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
          DAT_0514cb58 = DAT_0514cb5c;
          DAT_0514cb5c = DAT_0514cb60;
          uVar11 = uVar8 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar8 ^ DAT_0514cb64;
          DAT_0514cb60 = DAT_0514cb64;
          uVar8 = 1;
          if (0x31 < (uint)((ulong)uVar11 * 100 >> 0x20)) {
            uVar8 = 2;
          }
          DAT_0514cb64 = uVar11;
          goto LAB_01252b34;
        }
      }
    }
    if (uVar8 == 3) {
LAB_01252a50:
      local_60 = 0x9c9;
      FUN_0277d4ac(&local_60);
      puVar5 = PTR_DAT_04bb43c0;
      local_68 = 0;
      local_78 = PTR_DAT_04bc0510 + 0x10;
      local_70 = (char *)local_60;
      lVar10 = *(long *)PTR_DAT_04bb43c0;
      uVar8 = FUN_0277d6c4(&local_70);
      if (*(long *)puVar5 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar8 = FUN_0277d6c4(&local_60);
          uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((uVar8 < *(uint *)(lVar10 + 0x1d8)) &&
             (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar8 * 8), lVar10 != 0)) {
            local_68 = lVar10;
          }
        }
      }
      FUN_01b152b8(&local_78);
      *(undefined4 *)param_1 = (undefined4)local_70;
      *(undefined4 *)((long)param_1 + 4) = local_70._4_4_;
      return;
    }
  }
  else {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 3 & 1) == 0) goto LAB_0125296c;
    local_78 = PTR_DAT_04bb2020 + 0x10;
    local_70 = "TodayFortune";
    iVar7 = FUN_0274bce0(param_3,&local_78);
    if (iVar7 != 1) goto LAB_0125296c;
    uVar8 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
    DAT_0514cb58 = DAT_0514cb5c;
    DAT_0514cb5c = DAT_0514cb60;
    uVar8 = uVar8 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar8 ^ DAT_0514cb64;
    DAT_0514cb60 = DAT_0514cb64;
    uVar11 = (uint)((ulong)uVar8 * 100 >> 0x20);
    DAT_0514cb64 = uVar8;
    if (uVar11 < 0x28) {
      uVar8 = 1;
    }
    else {
      if (0x4f < uVar11) goto LAB_01252a50;
      uVar8 = 2;
    }
  }
LAB_01252b34:
  *(undefined2 *)((long)param_1 + 2) = 0;
  uVar2 = *(undefined4 *)(&UNK_04101ef0 + (ulong)uVar8 * 4);
  *(undefined4 *)((long)param_1 + 4) = 0;
  *(short *)param_1 = (short)uVar2;
LAB_01252b4c:
  FUN_0277d4ac(param_1);
  return;
}

