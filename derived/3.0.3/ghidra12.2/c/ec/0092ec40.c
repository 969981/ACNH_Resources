
void FUN_0092ec40(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 local_cc;
  byte local_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined *local_a8;
  undefined8 local_a0;
  short local_98 [4];
  undefined *local_90;
  undefined8 local_88;
  long local_80;
  long local_78;
  undefined *local_70;
  int local_68;
  int local_64;
  
  puVar1 = PTR_DAT_04bb2720;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x330) != 0)) {
    puVar7 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
    FUN_006bd550(*puVar7,0);
  }
  puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x24a26848) {
    lVar9 = *(long *)puVar1;
    local_d0 = 0;
    if (lVar9 == 0) {
      puVar8 = &DAT_055c04a0;
    }
    else {
      puVar8 = &DAT_055c04a0;
      if (*(long *)(lVar9 + 0x330) != 0) {
        puVar8 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
        iVar6 = FUN_006bd550(*puVar8,0);
        if (iVar6 != 0x758f7eaf) {
          puVar7 = &DAT_055c04a0;
        }
        puVar8 = puVar7;
      }
    }
    local_cc = *(undefined4 *)(puVar8 + 7);
    local_c8 = FUN_017baf44();
    iVar10 = *(int *)(param_2 + 0x20);
    iVar11 = *(int *)(param_2 + 0x24);
    local_80 = param_2 + 8;
    local_78 = param_2 + 0x18;
    local_c8 = local_c8 & 1;
    iVar5 = *(int *)(param_2 + 0x10);
    iVar13 = *(int *)(param_2 + 0x14);
    iVar6 = iVar11 + 1;
    local_d8 = PTR_DAT_04bb3140 + 0x10;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    iVar12 = iVar5;
    if (iVar6 != iVar13) {
      puVar2 = PTR_DAT_04bbc1a0 + 0x10;
      local_70 = puVar1;
      local_68 = iVar5;
      local_64 = iVar13;
      do {
        local_88 = 0;
        local_90 = puVar1;
        FUN_01a5033c(local_98,&local_d8,0,&local_70,&local_90);
        if (local_98[0] != -2) {
          local_b0 = 0;
          puStack_b8 = PTR_DAT_04bb2010 + 0x10;
          local_a0 = 0;
          local_c0 = puVar2;
          local_a8 = puStack_b8;
          FUN_0277f02c(local_98,&local_c0);
          iVar3 = (int)local_b0 + (int)local_88;
          iVar4 = local_b0._4_4_ + local_88._4_4_;
          local_88._0_4_ = (int)local_a0 + (int)local_88;
          local_88._4_4_ = local_a0._4_4_ + local_88._4_4_;
          if ((((iVar3 < *(int *)(param_2 + 0x10)) || (*(int *)(param_2 + 0x20) < (int)local_88)) ||
              (iVar4 < *(int *)(param_2 + 0x14))) || (*(int *)(param_2 + 0x24) < local_88._4_4_)) {
            if (iVar3 <= iVar12) {
              iVar12 = iVar3;
            }
            if (iVar4 <= iVar13) {
              iVar13 = iVar4;
            }
            if (iVar10 <= iVar3) {
              iVar10 = iVar3;
            }
            if (iVar11 <= iVar4) {
              iVar11 = iVar4;
            }
            if ((int)local_88 <= iVar12) {
              iVar12 = (int)local_88;
            }
            if (local_88._4_4_ <= iVar13) {
              iVar13 = local_88._4_4_;
            }
            if (iVar10 <= (int)local_88) {
              iVar10 = (int)local_88;
            }
            if (iVar11 <= local_88._4_4_) {
              iVar11 = local_88._4_4_;
            }
          }
        }
        if (local_68 < *(int *)(local_78 + 8)) {
          local_68 = local_68 + 1;
        }
        else {
          local_68 = *(int *)(local_80 + 8);
          local_64 = local_64 + 1;
        }
      } while ((iVar5 != local_68) || (iVar6 != local_64));
    }
    *(int *)(param_1 + 0x10) = iVar12;
    *(int *)(param_1 + 0x14) = iVar13;
    *(int *)(param_1 + 0x20) = iVar10;
    *(int *)(param_1 + 0x24) = iVar11;
  }
  return;
}

