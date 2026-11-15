
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_021ee910(undefined1 param_1 [16],undefined1 param_2 [16],float param_3,float *param_4,
                 int *param_5,undefined4 param_6)

{
  float *pfVar1;
  byte *pbVar2;
  undefined *puVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  int iVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_d8;
  undefined *local_d0;
  char *local_c8;
  long local_c0;
  undefined *local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined1 local_a4 [7];
  undefined1 local_9d;
  float local_98;
  int local_94;
  undefined *local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *puStack_78;
  undefined8 local_70;
  undefined *local_68;
  undefined8 local_60;
  char *local_58;
  int local_38;
  undefined4 local_34;
  
  local_34 = param_6;
  lVar8 = FUN_0265c2a0(param_6);
  if (lVar8 != 0) {
    if ((*(long **)(lVar8 + 0x28) == (long *)0x0) ||
       (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x28), puVar9 == (undefined8 *)0x0)) {
      uVar5 = 1;
    }
    else {
      uVar5 = (**(code **)*puVar9)();
      uVar5 = uVar5 ^ 1;
    }
    local_58 = (char *)0xfffe;
    FUN_0277d4ac(&local_58);
    local_70 = 0;
    local_38 = 0;
    local_94 = 1;
    puStack_88 = PTR_DAT_04bb2010 + 0x10;
    local_90 = PTR_DAT_04bbc1a0 + 0x10;
    local_60 = 0;
    local_80 = 0;
    puStack_78 = puStack_88;
    local_68 = puStack_88;
    lVar10 = FUN_0265c2a0(param_6);
    if (lVar10 != 0) {
      if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
         (puVar9 = (undefined8 *)**(long **)(lVar10 + 0x28), puVar9 == (undefined8 *)0x0)) {
        local_94 = (int)*(char *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8) + 0x12678);
      }
      else {
        uVar11 = (**(code **)*puVar9)();
        local_94 = (int)*(char *)(*(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8) + 0x12678);
        if ((((uVar11 & 1) != 0) && (*(long *)(lVar10 + 0x28) != 0)) &&
           (puVar9 = *(undefined8 **)(*(long *)(lVar10 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
          (**(code **)*puVar9)();
        }
      }
    }
    local_9d = 0;
    local_a8 = 8;
    puStack_b0 = local_a4;
    local_a4[0] = 0;
    local_b8 = PTR_DAT_04bb3768 + 0x10;
    pbVar2 = (byte *)(*(long *)(lVar8 + 0x10) + *(long *)(lVar8 + 8));
    FUN_038d1270(&local_b8,"-----");
    uVar11 = (ulong)*pbVar2;
    if (uVar11 < 0x23) {
      FUN_038d1270(&local_b8,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar11 * 8 + 0xb0),
                   pbVar2[1]);
    }
    uVar6 = FUN_02663fa0(&local_34);
    local_d0 = PTR_DAT_04bb2020 + 0x10;
    local_c8 = "IslandKitchenStandPos";
    uVar7 = FUN_027490f0(param_6,&local_d0);
    FUN_021ed770(&local_58,&local_68,&local_90,&local_38,&local_98,&local_b8,&local_94,uVar6 & 1,0,
                 uVar7);
    puVar3 = PTR_DAT_04bb43c0;
    local_c0 = 0;
    local_d0 = PTR_DAT_04bc0510 + 0x10;
    local_c8 = local_58;
    lVar10 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_c8);
    if (*(long *)puVar3 != 0) {
      lVar10 = *(long *)(lVar10 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar10 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(&local_58);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
        if ((uVar6 < *(uint *)(lVar10 + 0x1d8)) &&
           (lVar10 = *(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar6 * 8), lVar10 != 0)) {
          local_c0 = lVar10;
        }
      }
    }
    FUN_01afb7fc(&local_d0,&local_90,local_38);
    if (param_4 == (float *)0x0) {
      fVar13 = _DAT_00000008;
    }
    else {
      param_3 = (float)(int)local_60 * 5.0;
      fVar13 = (float)local_60._4_4_ * 5.0;
    }
    uVar11 = (ulong)((float)local_38 * 90.0 * 11930465.0);
    uVar6 = (uint)uVar11;
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar11 >> 0x18 & 0xff) * 0x10);
    fVar15 = *pfVar1;
    fVar17 = pfVar1[1];
    fVar14 = (float)(uVar6 & 0xffffff) * 5.9604645e-08;
    fVar16 = pfVar1[2];
    fVar18 = pfVar1[3];
    param_4[1] = NAN;
    local_d8 = 0x3e6;
    *param_4 = param_3 + ((float)(int)local_80 * 5.0 + (float)(int)local_70 * 5.0 + 5.0) * 0.5 +
               local_98 * 5.0 * (fVar15 + fVar14 * fVar17);
    param_4[2] = fVar13 + ((float)local_80._4_4_ * 5.0 + (float)local_70._4_4_ * 5.0 + 5.0) * 0.5 +
                 local_98 * 5.0 * (fVar16 + fVar14 * fVar18);
    FUN_0277d4ac(&local_d8);
    bVar4 = FUN_0277d7b4(&local_58,&local_d8);
    iVar12 = 0;
    if (((uVar7 & 2) == 0 & bVar4) == 0) {
      iVar12 = -0x80000000;
    }
    *param_5 = iVar12 + uVar6;
    if ((((uVar5 & 1) == 0) && (*(long *)(lVar8 + 0x28) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x28) + 8), puVar9 != (undefined8 *)0x0)) {
      (**(code **)*puVar9)();
    }
  }
  return lVar8 != 0;
}

