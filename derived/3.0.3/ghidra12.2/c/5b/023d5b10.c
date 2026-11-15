
undefined8 FUN_023d5b10(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  ulong uVar8;
  long lVar9;
  undefined8 *puVar10;
  short sVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined *local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  long local_a0;
  undefined *local_98;
  int local_90;
  int local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 uStack_64;
  
  local_80 = 0;
  puVar14 = &DAT_055c04a0;
  local_88 = PTR_DAT_04bbfe68 + 0x10;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if ((lVar9 != 0) && (*(long *)(lVar9 + 0x330) != 0)) {
    puVar14 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
    iVar5 = FUN_006bd550(*puVar14,0);
    puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
    if (iVar5 != 0x758f7eaf) {
      puVar14 = &DAT_055c04a0;
    }
  }
  local_7c = *(undefined4 *)(puVar14 + 7);
  local_78 = FUN_017baf44();
  puVar4 = PTR_DAT_04bb5d40;
  local_a8 = param_1 + 8;
  local_a0 = param_1 + 0x18;
  local_78 = local_78 & 1;
  iVar3 = *(int *)(param_1 + 0x10);
  local_8c = *(int *)(param_1 + 0x14);
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  iVar5 = *(int *)(param_1 + 0x24) + 1;
  if (iVar5 != local_8c) {
    puVar2 = PTR_DAT_04bc35c0 + 0x10;
    local_98 = puVar1;
    local_90 = iVar3;
    do {
      local_b0 = *(undefined4 *)(puVar4 + 8);
      uStack_ac = *(undefined4 *)(puVar4 + 0xc);
      local_b8 = puVar1;
      puVar7 = (undefined4 *)FUN_01a5190c(&local_88,0,&local_98,&local_b8);
      local_c0 = *puVar7;
      local_bc = puVar7[1];
      iVar6 = FUN_0277ebd0(&local_c0);
      if (iVar6 != 0) {
        uVar8 = FUN_0277e294(&local_c0);
        if ((uVar8 & 1) == 0) {
          return 1;
        }
        lVar9 = *(long *)PTR_DAT_04bb2720;
        if ((lVar9 == 0) || (*(long *)(lVar9 + 0x330) == 0)) {
          puVar14 = &DAT_055c04a0;
        }
        else {
          puVar14 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
          iVar6 = FUN_006bd550(*puVar14,0);
          puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar6 != 0x758f7eaf) {
            puVar14 = &DAT_055c04a0;
          }
        }
        puVar10 = DAT_055c1b60 + -8;
        if (DAT_055c1b60 != &DAT_055c1b58) {
          puVar12 = DAT_055c1b60;
          puVar13 = puVar10;
          do {
            if (*(int *)(puVar13 + 7) == *(int *)(puVar14 + 7)) break;
            puVar12 = (undefined8 *)puVar12[1];
            puVar13 = puVar12 + -8;
          } while (puVar12 != &DAT_055c1b58);
        }
        local_70._0_5_ = CONCAT14(1,(undefined4)local_70);
        lVar9 = *(long *)PTR_DAT_04bb2720;
        if ((lVar9 == 0) || (*(long *)(lVar9 + 0x330) == 0)) {
          puVar14 = &DAT_055c04a0;
          if (puVar10 != &DAT_055c1b18) goto LAB_023d5dcc;
        }
        else {
          puVar14 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
          iVar6 = FUN_006bd550(*puVar14,0);
          puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar6 != 0x758f7eaf) {
            puVar14 = &DAT_055c04a0;
          }
          puVar10 = DAT_055c1b60 + -8;
          if (puVar10 != &DAT_055c1b18) {
LAB_023d5dcc:
            sVar11 = 0;
            puVar12 = DAT_055c1b60;
            do {
              if (*(int *)(puVar10 + 7) == *(int *)(puVar14 + 7)) {
                if (sVar11 != -1) goto LAB_023d5e08;
                break;
              }
              puVar12 = (undefined8 *)puVar12[1];
              sVar11 = sVar11 + 1;
              puVar10 = puVar12 + -8;
            } while (puVar12 != &DAT_055c1b58);
          }
        }
        sVar11 = 0;
LAB_023d5e08:
        local_70._0_4_ = CONCAT22(1,sVar11);
        uVar8 = FUN_016e8950(&local_98,&local_70);
        if ((uVar8 & 1) != 0) {
          return 1;
        }
      }
      local_68 = local_c0;
      uStack_64 = local_bc;
      local_70 = puVar2;
      iVar6 = FUN_0277d6c4(&local_68);
      if (iVar6 - 0xf619U < 7) {
        return 1;
      }
      if (local_90 < *(int *)(local_a0 + 8)) {
        local_90 = local_90 + 1;
      }
      else {
        local_8c = local_8c + 1;
        local_90 = *(int *)(local_a8 + 8);
      }
    } while ((iVar3 != local_90) || (iVar5 != local_8c));
  }
  return 0;
}

