
/* WARNING: Removing unreachable block (ram,0x01210d08) */

void FUN_01210c10(long param_1,long param_2,uint param_3,int param_4)

{
  bool bVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  uint uVar13;
  undefined4 local_20c0;
  undefined4 local_20bc;
  undefined1 auStack_20b8 [8];
  uint local_20b0;
  uint local_20ac;
  undefined *local_20a8;
  undefined4 local_20a0;
  undefined4 uStack_209c;
  byte local_2098;
  undefined *local_2090;
  uint local_2088 [1024];
  undefined2 local_1088;
  undefined1 local_1086;
  undefined1 local_1085;
  undefined4 local_1084;
  undefined2 local_1080;
  undefined1 local_107e;
  undefined1 local_107d;
  undefined4 local_107c;
  undefined1 auStack_1078 [8];
  undefined8 local_1070;
  undefined8 local_1068;
  undefined8 local_1060;
  long local_1058;
  undefined *local_1050;
  int local_1048;
  int local_1044;
  
  local_1068 = (undefined *)CONCAT44(local_1068._4_4_,param_3);
  local_2090 = PTR_DAT_04bbdd38 + 0x10;
  lVar11 = param_2 + (ulong)param_3 * 0x1008;
  if (2 < param_3) {
    lVar11 = param_2;
  }
  memset(local_2088,0,0x1000);
  lVar10 = 0;
  do {
    puVar6 = (uint *)(lVar11 + 8 + lVar10);
    uVar13 = *(uint *)((long)local_2088 + lVar10 + 4);
    lVar2 = lVar10 + 8;
    uVar9 = puVar6[1];
    *(uint *)((long)&local_1068 + lVar10) = *puVar6 | *(uint *)((long)local_2088 + lVar10);
    *(uint *)((long)&local_1068 + lVar10 + 4) = uVar9 | uVar13;
    lVar10 = lVar2;
  } while (lVar2 != 0x1000);
  memcpy(local_2088,&local_1068,0x1000);
  local_1068 = (undefined *)CONCAT44(local_1068._4_4_,4);
  lVar11 = 0;
  do {
    puVar6 = (uint *)(param_1 + 0x18050 + lVar11);
    uVar13 = *(uint *)((long)local_2088 + lVar11 + 4);
    lVar10 = lVar11 + 8;
    uVar9 = puVar6[1];
    *(uint *)((long)&local_1068 + lVar11) = *puVar6 & *(uint *)((long)local_2088 + lVar11);
    *(uint *)((long)&local_1068 + lVar11 + 4) = uVar9 & uVar13;
    lVar11 = lVar10;
  } while (lVar10 != 0x1000);
  memcpy(local_2088,&local_1068,0x1000);
  uVar13 = 0;
  lVar11 = 2;
  do {
    lVar10 = lVar11 + -2;
    lVar11 = lVar11 + 1;
    uVar9 = local_2088[lVar10] - (local_2088[lVar10] >> 1 & 0x55555555);
    uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
    uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
    uVar9 = uVar9 + (uVar9 >> 8);
    uVar13 = (uVar9 + (uVar9 >> 0x10) & 0x3f) + uVar13;
  } while (lVar11 != 0x402);
  if (param_4 <= (int)uVar13) {
    uStack_209c = *(undefined4 *)(PTR_DAT_04bbbf90 + 0xc);
    local_20a0 = 1;
    local_2098 = FUN_017baf44();
    puVar8 = PTR_DAT_04bb43c0;
    puVar7 = PTR_DAT_04bb37e0;
    local_2098 = local_2098 & 1;
    local_20a8 = PTR_DAT_04bb6268 + 0x10;
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    iVar12 = 1;
    puVar4 = PTR_DAT_04bbc1a0 + 0x10;
    puVar5 = PTR_DAT_04bb2010 + 0x10;
    do {
      FUN_01696be0(auStack_20b8,&local_2090);
      local_1070 = 0xa13;
      FUN_0277d4ac(&local_1070);
      local_1058 = 0;
      lVar11 = *(long *)puVar8;
      local_1060 = (undefined *)local_1070;
      local_1068 = puVar3;
      uVar9 = FUN_0277d6c4(&local_1060);
      if (*(long *)puVar8 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(&local_1070);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
             (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8), lVar11 != 0)) {
            local_1058 = lVar11;
          }
        }
      }
      local_1086 = puVar7[2];
      local_20c0 = 0x70;
      local_1088 = *(undefined2 *)puVar7;
      local_1085 = puVar7[3];
      local_1084 = *(undefined4 *)(puVar7 + 4);
      local_1080 = local_1088;
      local_107e = local_1086;
      local_107d = local_1085;
      local_107c = local_1084;
      FUN_01211140(auStack_1078,&local_20c0,&local_1080,&local_1088);
      FUN_01b0b2ec(&local_1068,auStack_1078);
      local_1058 = 0;
      local_1068 = PTR_DAT_04bc0510 + 0x10;
      lVar11 = *(long *)puVar8;
      local_20bc = local_1060._4_4_;
      local_20c0 = SUB84(local_1060,0);
      uVar9 = FUN_0277d6c4(&local_1060);
      if (*(long *)puVar8 != 0) {
        lVar11 = *(long *)(lVar11 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar11 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(&local_20c0);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar11 + 0x1f8);
          if ((uVar9 < *(uint *)(lVar11 + 0x1d8)) &&
             (lVar11 = *(long *)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar9 * 8), lVar11 != 0)) {
            local_1058 = lVar11;
          }
        }
      }
      FUN_01b152b8(&local_1068);
      local_20c0 = (undefined4)local_1060;
      local_20bc = local_1060._4_4_;
      FUN_01a50ae4(&local_20a8,&local_20c0,auStack_20b8);
      local_1048 = local_20b0 + 1;
      local_1044 = local_20ac + 1;
      local_1068 = puVar4;
      local_1060 = puVar5;
      local_1050 = puVar5;
      FUN_01686550(param_1,&local_1068);
      if ((((DAT_05233970 <= (int)local_20b0) && ((int)local_20b0 <= DAT_05233980)) &&
          (DAT_05233974 <= (int)local_20ac)) &&
         (((int)local_20ac <= DAT_05233984 &&
          (uVar9 = (local_20ac & 0x1fffffe) * 0x80 + ((int)local_20b0 >> 1), uVar9 >> 0xf == 0)))) {
        uVar9 = uVar9 >> 5;
        local_2088[uVar9] = local_2088[uVar9] & (1 << (ulong)(local_20b0 >> 1 & 0x1f) ^ 0xffffffffU)
        ;
      }
      if (param_4 <= iVar12) {
        return;
      }
      iVar12 = iVar12 + 1;
      bVar1 = 1 < uVar13;
      uVar13 = uVar13 - 1;
    } while (bVar1);
  }
  return;
}

