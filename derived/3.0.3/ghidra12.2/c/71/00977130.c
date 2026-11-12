
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_00977130(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined *local_88;
  uint local_80;
  uint local_7c;
  undefined *local_78;
  undefined *puStack_70;
  uint local_68;
  uint uStack_64;
  undefined *local_60;
  uint local_58;
  uint local_54;
  undefined8 local_50;
  undefined8 local_48;
  
  puVar5 = PTR_DAT_04bb27c8;
  puVar4 = PTR_DAT_04bb2010;
  local_78 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_70 = PTR_DAT_04bb2010 + 0x10;
  fVar13 = (float)*(int *)(param_1 + 0xc) * 10.0;
  fVar11 = (float)*(int *)(param_1 + 8) * 10.0;
  fVar12 = fVar11 + 2.5;
  fVar14 = fVar13 + 2.5;
  fVar15 = fVar11 + 10.0 + -2.5;
  fVar11 = fVar13 + 10.0 + -2.5;
  local_58 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  local_54 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
  uVar2 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
  uVar3 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  local_68 = local_58;
  if ((int)uVar2 <= (int)local_58) {
    local_68 = uVar2;
  }
  if ((int)local_58 <= (int)uVar2) {
    local_58 = uVar2;
  }
  uStack_64 = local_54;
  if ((int)uVar3 <= (int)local_54) {
    uStack_64 = uVar3;
  }
  if ((int)local_54 <= (int)uVar3) {
    local_54 = uVar3;
  }
  if (*(long *)PTR_DAT_04bb27c8 == 0) {
LAB_009773d0:
    uVar9 = 0;
  }
  else {
    lVar7 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8);
    uVar9 = 0;
    if (lVar7 != 0) {
      local_60 = puStack_70;
      uVar8 = FUN_00971f80(lVar7,&local_78,0);
      uVar2 = local_68;
      puVar6 = PTR_DAT_04bb46c8;
      uVar9 = 0;
      if ((uVar8 & 1) != 0) {
        local_88 = puVar4 + 0x10;
        local_80 = local_68;
        local_7c = uStack_64;
        uVar3 = local_54 + 1;
        if (uVar3 != uStack_64) {
          do {
            lVar7 = *(long *)puVar5;
            if ((lVar7 == 0) || (lVar10 = *(long *)(lVar7 + 0xa8), lVar10 == 0)) goto LAB_009773d0;
            if ((-1 < (int)local_80) &&
               ((-1 < (int)local_7c &&
                (local_80 < *(uint *)(lVar10 + 0x38) && local_7c < *(uint *)(lVar10 + 0x3c))))) {
              uVar1 = local_80 + *(uint *)(lVar10 + 0x38) * local_7c;
              if ((uVar1 < *(uint *)(lVar10 + 0x68) && *(long *)(lVar10 + 0x70) != 0) &&
                 ((*(uint *)(*(long *)(lVar10 + 0x70) + (long)(int)uVar1 * 4) >> 2 & 1) != 0))
              goto LAB_009773d0;
            }
            local_50 = 0;
            local_48 = 0;
            uVar8 = FUN_00948e68(lVar7 + 0x28,&local_88,(long)&local_48 + 4,&local_48,
                                 (long)&local_50 + 4,&local_50);
            if ((uVar8 & 1) == 0) goto LAB_009773d0;
            uVar8 = FUN_00980870(*(undefined8 *)puVar6,local_48._4_4_);
            if (((uVar8 & 1) == 0) ||
               (uVar8 = FUN_00980870(*(undefined8 *)puVar6,local_48 & 0xffffffff), (uVar8 & 1) == 0)
               ) goto LAB_009773d0;
            uVar8 = FUN_00980870(*(undefined8 *)puVar6,local_50._4_4_);
            if (((uVar8 & 1) == 0) ||
               ((uVar8 = FUN_00980870(*(undefined8 *)puVar6,local_50 & 0xffffffff), (uVar8 & 1) == 0
                || (uVar8 = FUN_01385fe0(&local_88,0), (uVar8 & 1) != 0)))) goto LAB_009773d0;
            if ((int)local_80 < (int)local_58) {
              local_80 = local_80 + 1;
            }
            else {
              local_7c = local_7c + 1;
              local_80 = local_68;
            }
          } while ((uVar2 != local_80) || (uVar3 != local_7c));
        }
        uVar9 = 1;
      }
    }
  }
  return uVar9;
}

