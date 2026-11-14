
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01a1a2a0(float param_1,uint param_2,uint param_3,undefined1 *param_4)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined4 *puVar11;
  char *pcVar12;
  undefined8 uVar13;
  long lVar14;
  float fVar15;
  undefined *local_108;
  uint local_100;
  uint uStack_fc;
  undefined **local_f8;
  undefined **local_f0;
  undefined *local_e8;
  int local_e0;
  int local_dc;
  undefined *local_d8;
  undefined *puStack_d0;
  int local_c8;
  int iStack_c4;
  undefined *local_c0;
  int local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined *local_a8;
  uint local_a0;
  undefined4 local_9c;
  byte local_98;
  undefined8 local_90;
  undefined8 local_78;
  
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  local_108 = puVar2;
  local_100 = param_2;
  uStack_fc = param_3;
  uVar9 = FUN_01a198c0(&local_108,*param_4);
  puVar7 = PTR_DAT_04bb37e0;
  puVar6 = PTR_DAT_04bb27c8;
  if ((uVar9 & 1) == 0) {
LAB_01a1a720:
    uVar13 = 0;
  }
  else {
    iVar5 = param_2 - ((param_2 & 0x80000001) == 1);
    local_dc = param_3 - ((param_3 & 0x80000001) == 1);
    local_d8 = PTR_DAT_04bbc1a0 + 0x10;
    iStack_b4 = local_dc + 1;
    local_b8 = iVar5 + 1;
    local_f8 = &puStack_d0;
    local_f0 = &local_c0;
    iVar1 = local_dc + 2;
    puVar3 = PTR_DAT_04bbfe68 + 0x10;
    puVar4 = PTR_DAT_04bb5ba0 + 0x10;
    local_e8 = puVar2;
    local_e0 = iVar5;
    puStack_d0 = puVar2;
    local_c8 = iVar5;
    iStack_c4 = local_dc;
    local_c0 = puVar2;
    do {
      local_a0 = 0;
      local_a8 = (undefined *)0x0;
      local_b0 = 0x1c;
      local_a8 = (undefined *)0x40010000000;
      local_a0 = 0;
      lVar14 = *(long *)puVar6;
      if (((lVar14 != 0) && (*(long *)(lVar14 + 0xa8) != 0)) &&
         (uVar9 = FUN_00949798(lVar14 + 0x28,&local_e8,&local_a8), (uVar9 & 1) != 0))
      goto LAB_01a1a720;
      local_b0 = *(undefined4 *)puVar7;
      local_ac = *(undefined4 *)(puVar7 + 4);
      local_a0 = 0;
      lVar14 = *(long *)PTR_DAT_04bb2720;
      local_a8 = puVar3;
      if ((lVar14 == 0) || (*(long *)(lVar14 + 0x330) == 0)) {
        puVar10 = &DAT_055c04a0;
      }
      else {
        puVar10 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
        iVar8 = FUN_006bd550(*puVar10,0);
        puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar8 != 0x758f7eaf) {
          puVar10 = &DAT_055c04a0;
        }
      }
      local_9c = *(undefined4 *)(puVar10 + 7);
      local_98 = FUN_017baf44();
      local_98 = local_98 & 1;
      puVar11 = (undefined4 *)FUN_01a5190c(&local_a8,0,&local_e8,0);
      local_b0 = *puVar11;
      local_ac = puVar11[1];
      iVar8 = FUN_0277ebd0(&local_b0);
      if (iVar8 != 0) goto LAB_01a1a720;
      if ((*(long *)puVar6 == 0) || (lVar14 = *(long *)(*(long *)puVar6 + 0xa8), lVar14 == 0)) {
        fVar15 = -500.0;
      }
      else {
        fVar15 = (float)FUN_00963acc(lVar14,&local_e8);
      }
      if ((fVar15 + 9.0 < param_1) || (param_1 < fVar15 + -10.0)) goto LAB_01a1a720;
      local_a0 = local_a0 & 0xffffff00;
      if ((*(long *)puVar6 != 0) &&
         ((lVar14 = *(long *)(*(long *)puVar6 + 0xa8), lVar14 != 0 &&
          (local_a8 = puVar4, FUN_00974bc8(lVar14,&local_e8,&local_a8), (local_a0 & 0x60) != 0)))) {
        local_78 = 0;
        local_90 = 0;
        FUN_00948e68(*(long *)puVar6 + 0x28,&local_e8,(long)&local_78 + 4,&local_78,
                     (long)&local_90 + 4,&local_90);
        local_b0 = local_78._4_4_;
        lVar14 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_78._4_4_);
        if ((lVar14 == 0) ||
           ((pcVar12 = (char *)FUN_009823a0(lVar14,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
            pcVar12 == (char *)0x0 || (*pcVar12 == '\0')))) {
          local_b0 = (undefined4)local_78;
          lVar14 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_78 & 0xffffffff);
          if ((lVar14 == 0) ||
             ((pcVar12 = (char *)FUN_009823a0(lVar14,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10)
              , pcVar12 == (char *)0x0 || (*pcVar12 == '\0')))) {
            local_b0 = local_90._4_4_;
            lVar14 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_90._4_4_);
            if ((lVar14 == 0) ||
               ((pcVar12 = (char *)FUN_009823a0(lVar14,0xd,0x58da05ed,
                                                *(undefined8 *)PTR_DAT_04bb5d10),
                pcVar12 == (char *)0x0 || (*pcVar12 == '\0')))) {
              local_b0 = (undefined4)local_90;
              lVar14 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_90 & 0xffffffff);
              if ((lVar14 == 0) ||
                 ((pcVar12 = (char *)FUN_009823a0(lVar14,0xd,0x58da05ed,
                                                  *(undefined8 *)PTR_DAT_04bb5d10),
                  pcVar12 == (char *)0x0 || (*pcVar12 == '\0')))) goto LAB_01a1a720;
            }
          }
        }
      }
      if (local_e0 < *(int *)(local_f0 + 1)) {
        local_e0 = local_e0 + 1;
      }
      else {
        local_dc = local_dc + 1;
        local_e0 = *(int *)(local_f8 + 1);
      }
    } while ((iVar5 != local_e0) || (iVar1 != local_dc));
    uVar13 = 1;
  }
  return uVar13;
}

