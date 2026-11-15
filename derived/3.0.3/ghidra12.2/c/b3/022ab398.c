
uint FUN_022ab398(undefined4 param_1,long param_2,long param_3)

{
  byte bVar1;
  uint *puVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  float *pfVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined8 *puVar11;
  float fVar12;
  float fVar13;
  undefined *local_b8;
  undefined2 local_b0;
  byte local_ae;
  undefined1 local_ad;
  undefined4 local_ac;
  long local_a8;
  undefined2 local_a0;
  byte local_9e;
  undefined1 local_9d;
  undefined4 local_9c;
  undefined *local_98;
  undefined8 local_90;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  undefined *local_70;
  uint local_68;
  uint local_64;
  byte local_54 [4];
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
    return 0;
  }
  local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
  if (0xff < (uint)(int)sVar3) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if (((*puVar2 >> 1 & 1) == 0) || (local_54[0] = *(byte *)(param_2 + 0x10), 7 < local_54[0])) {
    uVar6 = 0;
    goto LAB_022ab530;
  }
  pfVar7 = (float *)FUN_0251b3b0(local_54,0);
  uVar6 = 0;
  if (pfVar7 == (float *)0x0) goto LAB_022ab530;
  lVar8 = FUN_0251bdc4(local_54,0);
  uVar6 = 0;
  if (lVar8 == 0) goto LAB_022ab530;
  local_68 = (int)((float)(int)*pfVar7 / 5.0) - (uint)(*pfVar7 < 0.0);
  local_64 = (int)((float)(int)pfVar7[2] / 5.0) - (uint)(pfVar7[2] < 0.0);
  local_70 = PTR_DAT_04bbbad8 + 0x10;
  if ((local_68 & 1) != 0) {
    local_68 = local_68 - 1;
  }
  if ((local_64 & 1) != 0) {
    local_64 = local_64 - 1;
  }
  local_80 = 0;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar11 = &DAT_055c04a0;
  }
  else {
    puVar11 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar5 = FUN_006bd550(*puVar11,0);
      puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar11 = &DAT_055c04a0;
      }
    }
  }
  local_7c = *(undefined4 *)(puVar11 + 7);
  local_78 = FUN_017baf44();
  local_78 = local_78 & 1;
  local_88 = PTR_DAT_04bb6268 + 0x10;
  FUN_01a4fa00(&local_88);
  local_98 = PTR_DAT_04bb2010 + 0x10;
  local_90 = 0;
  FUN_01a5033c(&local_a0,&local_88,0,&local_70,&local_98);
  iVar5 = FUN_0277d6c4(&local_a0);
  puVar4 = PTR_DAT_04bb43c0;
  if (iVar5 == 0x3332) {
    local_a8 = 0;
    local_b8 = PTR_DAT_04bc0510 + 0x10;
    local_b0 = local_a0;
    local_ae = local_9e;
    local_ad = local_9d;
    local_ac = local_9c;
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_b0);
    if (*(long *)puVar4 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(&local_a0);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if (uVar6 < *(uint *)(lVar10 + 0x1d8)) {
          lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8);
          if (lVar10 != 0) {
            local_a8 = lVar10;
          }
        }
      }
    }
    uVar9 = FUN_01ae59b0(&local_b8);
    bVar1 = local_9e >> 2 & 1;
    if ((uVar9 & 1) == 0) {
      bVar1 = local_9e & 4;
    }
    if ((bVar1 != 0) || (uVar9 = FUN_011eac30(&local_98), (uVar9 & 1) == 0)) goto LAB_022ab76c;
    fVar13 = (float)(int)local_90 * 5.0 + 5.0;
    fVar12 = (float)local_90._4_4_ * 5.0 + 5.0;
    iVar5 = FUN_006f0400(fVar13 - *pfVar7,fVar12 - pfVar7[2]);
    fVar13 = fVar13 - *pfVar7;
    fVar12 = fVar12 - pfVar7[2];
    if (6.25 < fVar12 * fVar12 + fVar13 * fVar13) {
      fVar12 = (float)(uint)(iVar5 - *(int *)(lVar8 + 4)) * 8.381903e-08;
      fVar13 = fVar12 + -360.0;
      if (fVar12 <= 180.0) {
        fVar13 = fVar12;
      }
      if ((90.0 <= fVar13) || (fVar13 <= -90.0)) goto LAB_022ab76c;
    }
    if (param_3 != 0) {
      *(int *)(param_3 + 8) = (int)local_90;
      *(int *)(param_3 + 0xc) = local_90._4_4_;
    }
  }
  else {
LAB_022ab76c:
    lVar8 = lVar8 + 4;
    uVar9 = FUN_022ab7e4(0,0,param_1,param_3,local_54,pfVar7,lVar8);
    if (((uVar9 & 1) == 0) &&
       (uVar9 = FUN_022ab7e4(0xbf000000,0,0,param_3,local_54,pfVar7,lVar8), (uVar9 & 1) == 0)) {
      uVar6 = FUN_022ab7e4(0x3f000000,0,0,param_3,local_54,pfVar7,lVar8);
      goto LAB_022ab530;
    }
  }
  uVar6 = 1;
LAB_022ab530:
  return uVar6 & 1;
}

