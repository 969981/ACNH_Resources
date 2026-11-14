
undefined8 FUN_018c21a8(undefined8 param_1,undefined4 *param_2,long param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  undefined4 uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined8 local_78;
  undefined8 local_70;
  int local_68;
  int iStack_64;
  undefined *local_60;
  int local_58;
  int iStack_54;
  undefined8 local_50;
  float local_48;
  byte local_44 [4];
  
  local_48 = 0.0;
  local_50 = 0;
  uVar8 = FUN_01a12b00(*(undefined8 *)PTR_DAT_04bb4008,*param_2);
  if (((uVar8 & 1) != 0) && (uVar8 = FUN_01a1c7b0(&local_50,*param_2,0), (uVar8 & 1) != 0)) {
    local_44[0] = 0;
    local_70 = (undefined *)((ulong)local_70._4_4_ << 0x20);
    local_78 = (undefined *)0x0;
    uVar8 = FUN_019705ec(*(undefined8 *)PTR_DAT_04bb47e0,local_44,&local_78,&local_50);
    bVar6 = local_44[0];
    if ((uVar8 & 1) != 0) {
      fVar5 = local_50._4_4_;
      fVar4 = local_78._4_4_;
      fVar17 = (float)local_50 + (float)local_78;
      fVar16 = local_48 + (float)local_70;
      local_78 = PTR_DAT_04bbc1a0 + 0x10;
      local_70 = PTR_DAT_04bb2010 + 0x10;
      fVar11 = (float)(int)((int)((float)(int)fVar17 / 10.0) - (uint)(fVar17 < 0.0)) * 10.0;
      fVar13 = (float)(int)((int)((float)(int)fVar16 / 10.0) - (uint)(fVar16 < 0.0)) * 10.0;
      fVar12 = fVar11 + 2.5;
      fVar14 = fVar13 + 2.5;
      fVar15 = fVar11 + 10.0 + -2.5;
      fVar11 = fVar13 + 10.0 + -2.5;
      local_58 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
      iStack_54 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
      iVar2 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
      iVar3 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
      local_68 = local_58;
      if (iVar2 <= local_58) {
        local_68 = iVar2;
      }
      if (local_58 <= iVar2) {
        local_58 = iVar2;
      }
      iStack_64 = iStack_54;
      if (iVar3 <= iStack_54) {
        iStack_64 = iVar3;
      }
      if (iStack_54 <= iVar3) {
        iStack_54 = iVar3;
      }
      local_60 = local_70;
      uVar8 = FUN_01a1d370(&local_78);
      if ((uVar8 & 1) == 0) {
        uVar7 = FUN_006f0400(fVar17 - (float)local_50,fVar16 - local_48);
        *(float *)(param_3 + 8) = fVar17;
        *(float *)(param_3 + 0xc) = fVar5 + fVar4;
        *(float *)(param_3 + 0x10) = fVar16;
        lVar10 = *(long *)PTR_DAT_04bb4790;
        *(undefined4 *)(param_3 + 0x18) = uVar7;
        lVar9 = *(long *)(lVar10 + 0x10);
        if (lVar9 != 0) {
          uVar1 = *(uint *)(param_3 + 0x28);
          if (*(uint *)(lVar10 + 8) <= uVar1) {
            uVar1 = 0;
          }
          lVar9 = lVar9 + (long)(int)uVar1 * 10;
          *(byte *)(lVar9 + 6) = *(byte *)(lVar9 + 6) & 0xf3 | (bVar6 & 3) << 2;
        }
        return 1;
      }
    }
  }
  return 0;
}

