
float FUN_016e5890(float *param_1)

{
  float fVar1;
  float fVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  float *pfVar8;
  ushort uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined *local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  undefined8 local_88;
  float local_80;
  float local_7c;
  ulong local_78;
  
  fVar15 = (float)FUN_016e026c(0,param_1,0,0);
  puVar3 = PTR_DAT_04bb2720;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  uVar4 = local_88;
  if (DAT_055c1b60 != &DAT_055c1b58) {
    uVar9 = 0;
    puVar12 = DAT_055c1b60;
    do {
      if (*(int *)(puVar12 + -1) == *(int *)(puVar13 + 7)) {
        if (uVar9 != 0xffff) goto LAB_016e5994;
        break;
      }
      puVar12 = (undefined8 *)puVar12[1];
      uVar9 = uVar9 + 1;
    } while (puVar12 != &DAT_055c1b58);
  }
  uVar9 = 0;
LAB_016e5994:
  local_88._0_4_ = (uint)uVar9;
  local_88._5_3_ = SUB83(uVar4,5);
  local_88._0_5_ = CONCAT14(1,(uint)local_88);
  fVar16 = (float)FUN_016e06d0(param_1,0,0,&local_88,0);
  local_a8 = PTR_DAT_04bb2010 + 0x10;
  uStack_a0 = 0;
  local_80 = 0.0;
  local_88 = PTR_DAT_04bbfe68 + 0x10;
  fVar17 = fVar15 - fVar16;
  fVar1 = -fVar17;
  if (0.0 <= fVar17) {
    fVar1 = fVar17;
  }
  local_90 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_8c = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  lVar10 = *(long *)puVar3;
  local_98 = local_a8;
  if (lVar10 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  local_7c = *(float *)(puVar13 + 7);
  uVar5 = FUN_017baf44();
  local_78 = CONCAT71(local_78._1_7_,uVar5) & 0xffffffffffffff01;
  pfVar8 = (float *)FUN_01a5190c(&local_88,0,&local_98,&local_a8);
  puVar3 = PTR_DAT_04bb43c0;
  fVar2 = *pfVar8;
  fVar17 = pfVar8[1];
  local_98 = *(undefined **)pfVar8;
  lVar14 = *(long *)PTR_DAT_04bb43c0;
  uVar7 = FUN_0277d6c4(&local_98);
  lVar10 = *(long *)puVar3;
  if (lVar10 != 0) {
    lVar14 = *(long *)(lVar14 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar14 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar14 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar14 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_88 = PTR_DAT_04bc0510 + 0x10;
      local_78 = 0;
      local_80 = fVar2;
      local_7c = fVar17;
      uVar7 = FUN_0277d6c4(&local_80);
      if (*(long *)puVar3 != 0) {
        lVar10 = *(long *)(lVar10 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar10 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_98);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if (uVar7 < *(uint *)(lVar10 + 0x1d8)) {
            uVar11 = *(ulong *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8);
            if (uVar11 != 0) {
              local_78 = uVar11;
            }
          }
        }
      }
      uVar11 = FUN_01ae59b0(&local_88);
      if ((uVar11 & 1) != 0) {
        fVar15 = (float)FUN_016e026c(0,param_1,0,0);
        return fVar15;
      }
    }
  }
  if (10.0 <= fVar1) {
    local_80 = param_1[2];
    local_88._0_4_ = (uint)*(undefined8 *)param_1;
    local_88 = (undefined *)CONCAT44(fVar15,(uint)local_88);
    fVar16 = (float)FUN_02b633c0(&local_88);
  }
  return fVar16;
}

