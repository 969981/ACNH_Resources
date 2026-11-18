
undefined8 FUN_036d4d30(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *puVar11;
  bool bVar12;
  int iVar13;
  int iVar14;
  short local_d8 [4];
  undefined *local_d0;
  undefined8 local_c8;
  undefined **local_c0;
  undefined **local_b8;
  undefined *local_b0;
  int local_a8;
  int local_a4;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *puStack_88;
  undefined8 local_80;
  undefined *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  
  puVar1 = param_1 + 6;
  uVar7 = FUN_0277e294(puVar1);
  if ((uVar7 & 1) == 0) {
LAB_036d4fcc:
    uVar8 = 0;
  }
  else {
    local_70 = 0;
    lVar9 = *(long *)PTR_DAT_04bb2720;
    if (lVar9 == 0) {
      puVar11 = &DAT_055c04a0;
    }
    else {
      puVar11 = &DAT_055c04a0;
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar11 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
        iVar5 = FUN_006bd550(*puVar11,0);
        puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar5 != 0x758f7eaf) {
          puVar11 = &DAT_055c04a0;
        }
      }
    }
    local_6c = *(undefined4 *)(puVar11 + 7);
    local_68 = FUN_017baf44();
    puVar10 = PTR_DAT_04bb43c0;
    puVar4 = PTR_DAT_04bb2010;
    local_68 = local_68 & 1;
    local_80 = 0;
    local_78 = PTR_DAT_04bb5438 + 0x10;
    local_a0 = PTR_DAT_04bbc1a0 + 0x10;
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    local_90 = 0;
    local_b0 = (undefined *)0x0;
    local_c0 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    local_b8 = *(undefined ***)(param_1 + 6);
    lVar9 = *(long *)PTR_DAT_04bb43c0;
    puStack_98 = puVar2;
    puStack_88 = puVar2;
    uVar6 = FUN_0277d6c4(&local_b8);
    if (*(long *)puVar10 != 0) {
      lVar9 = *(long *)(lVar9 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        lVar9 = *(long *)PTR_DAT_04bc0428;
        uVar6 = FUN_0277d6c4(puVar1);
        uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if (uVar6 < *(uint *)(lVar9 + 0x1d8)) {
          puVar10 = *(undefined **)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8);
          if (puVar10 != (undefined *)0x0) {
            local_b0 = puVar10;
          }
        }
      }
    }
    FUN_01afb480(&local_c0,&local_a0);
    iVar3 = (int)local_90 + param_1[4];
    local_a4 = local_90._4_4_ + param_1[5];
    local_80._4_4_ = local_80._4_4_ + param_1[5];
    local_90 = CONCAT44(local_a4,iVar3);
    iVar5 = local_80._4_4_ + 1;
    local_80 = CONCAT44(local_80._4_4_,(int)local_80 + param_1[4]);
    local_c0 = &puStack_98;
    local_b8 = &puStack_88;
    local_b0 = puVar2;
    local_a8 = iVar3;
    if (iVar5 != local_a4) {
      bVar12 = false;
      iVar14 = 0;
      iVar13 = 0;
      do {
        local_c8 = 0;
        local_d0 = puVar4 + 0x10;
        FUN_01a5033c(local_d8,&local_78,*param_1,&local_b0,&local_d0);
        if (local_d8[0] != -2) {
          if ((int)local_c8 == iVar13) {
            if (local_c8._4_4_ == iVar14) goto LAB_036d4f78;
          }
          bVar12 = true;
          iVar13 = (int)local_c8;
          iVar14 = local_c8._4_4_;
        }
LAB_036d4f78:
        if (local_a8 < *(int *)(local_b8 + 1)) {
          local_a8 = local_a8 + 1;
        }
        else {
          local_a8 = *(int *)(local_c0 + 1);
          local_a4 = local_a4 + 1;
        }
      } while ((iVar3 != local_a8) || (iVar5 != local_a4));
      if (bVar12) goto LAB_036d4fcc;
    }
    FUN_01a50970(&local_78,*param_1,puVar1,param_1 + 2);
    FUN_014fd424(&local_78,*(undefined1 *)(param_1 + 8),param_1 + 2,*param_1);
    uVar8 = 1;
  }
  return uVar8;
}

