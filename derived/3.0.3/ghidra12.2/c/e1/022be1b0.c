
undefined8 FUN_022be1b0(long param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined8 *puVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  bool bVar6;
  bool bVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  float fVar14;
  byte local_b0 [8];
  undefined1 auStack_a8 [8];
  undefined8 local_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined8 local_88;
  undefined *puStack_80;
  undefined8 local_78;
  undefined **local_70;
  undefined8 local_68;
  undefined *local_60;
  int local_58;
  int local_54;
  undefined4 local_48;
  undefined4 uStack_44;
  
  puVar4 = PTR_DAT_04bb2010;
  local_78 = 0;
  local_98 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_90 = PTR_DAT_04bb2010 + 0x10;
  local_88 = 0;
  puStack_80 = puStack_90;
  uVar11 = FUN_022ba528(param_1,&local_98,0,0,0);
  if ((uVar11 & 1) != 0) {
    local_b0[0] = *(byte *)(param_1 + 0x10);
    if (7 < local_b0[0]) {
      local_b0[0] = 0xff;
    }
    local_68 = (undefined **)CONCAT44(local_68._4_4_,(float)local_88._4_4_ * 5.0 + 5.0);
    local_70 = (undefined **)CONCAT44(local_70._4_4_,(float)(int)local_88 * 5.0 + 5.0);
    lVar12 = FUN_0251b3b0(local_b0,0);
    if ((lVar12 != 0) && (*(long *)PTR_DAT_04bb27c8 != 0)) {
      fVar14 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_70,0);
      fVar14 = fVar14 - *(float *)(lVar12 + 4);
      bVar6 = true;
      bVar7 = false;
      if (fVar14 <= 5.0) {
        bVar6 = false;
        bVar7 = true;
        if (!NAN(fVar14)) {
          bVar6 = fVar14 < -5.0;
          bVar7 = false;
        }
      }
      if (bVar6 == bVar7) {
        local_60 = puVar4 + 0x10;
        local_68 = &puStack_80;
        iVar9 = local_78._4_4_ + 1;
        iVar5 = (int)local_88;
        local_58 = (int)local_88;
        local_54 = local_88._4_4_;
        local_70 = &puStack_90;
        if (iVar9 != local_88._4_4_) {
          do {
            uVar11 = FUN_013861b0(&local_60,0);
            if ((uVar11 & 1) != 0) {
              return 0;
            }
            if (local_58 < *(int *)(local_68 + 1)) {
              local_58 = local_58 + 1;
            }
            else {
              local_54 = local_54 + 1;
              local_58 = *(int *)(local_70 + 1);
            }
          } while (iVar5 != local_58 || iVar9 != local_54);
        }
        puVar2 = (undefined8 *)PTR_DAT_04bc3a80;
        sVar3 = *(short *)PTR_DAT_04bb6298;
        if (sVar3 != -1) {
          local_70 = (undefined **)CONCAT44(local_70._4_4_,1);
          puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
          if (0xff < (uint)(int)sVar3) {
            puVar1 = (uint *)PTR_DAT_04bc39f8;
          }
          if (((*puVar1 >> 1 & 1) != 0) &&
             (local_70 = (undefined **)CONCAT44(local_70._4_4_,0x17), (*puVar1 >> 0x17 & 1) != 0)) {
            return 0;
          }
        }
        if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3) {
          lVar12 = *(long *)PTR_DAT_04bb59d8;
          if ((int)local_88 < *(int *)(lVar12 + 0x28)) {
            return 0;
          }
          if (*(int *)(lVar12 + 0x38) < (int)local_88) {
            return 0;
          }
          if (local_88._4_4_ < *(int *)(lVar12 + 0x2c)) {
            return 0;
          }
          if (*(int *)(lVar12 + 0x3c) < local_88._4_4_) {
            return 0;
          }
        }
        local_68 = (undefined **)((ulong)local_68 & 0xffffffff00000000);
        lVar12 = *(long *)PTR_DAT_04bb2720;
        if (lVar12 == 0) {
          puVar13 = &DAT_055c04a0;
        }
        else {
          puVar13 = &DAT_055c04a0;
          if (*(long *)(lVar12 + 0x330) != 0) {
            puVar13 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
            iVar9 = FUN_006bd550(*puVar13,0);
            if (iVar9 != 0x758f7eaf) {
              puVar2 = &DAT_055c04a0;
            }
            puVar13 = puVar2;
          }
        }
        local_68 = (undefined **)CONCAT44(*(undefined4 *)(puVar13 + 7),(undefined4)local_68);
        uVar8 = FUN_017baf44();
        local_60 = (undefined *)(CONCAT71(local_60._1_7_,uVar8) & 0xffffffffffffff01);
        local_70 = (undefined **)(PTR_DAT_04bb6268 + 0x10);
        FUN_01a5033c(&local_48,&local_70,0,&puStack_90,0);
        lVar12 = *(long *)PTR_DAT_04bbbc68;
        if (((((lVar12 != 0) && (*(long *)(lVar12 + 0xb0) != 0)) &&
             (*(long *)(*(long *)(lVar12 + 0xb0) + 8) != 0)) &&
            ((*(long *)(lVar12 + 0x488) != 0 && (*(long *)(*(long *)(lVar12 + 0x488) + 8) != 0))))
           && ((*(long *)(lVar12 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar12 + 0x2b0) + 8) != 0))))
        {
          uVar10 = FUN_0277d6c4(&local_48);
          uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar12 + 0x1f8);
          if ((uVar10 < *(uint *)(lVar12 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
            FUN_0124c030(local_b0,&local_48);
            iVar9 = FUN_0123db50(auStack_a8,local_a0);
            if (iVar9 == 0x2d) {
              if (param_2 != (undefined4 *)0x0) {
                *param_2 = local_48;
                param_2[1] = uStack_44;
              }
              return 1;
            }
          }
        }
      }
    }
  }
  return 0;
}

