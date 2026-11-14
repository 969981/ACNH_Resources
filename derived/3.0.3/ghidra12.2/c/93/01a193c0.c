
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_01a193c0(float param_1,uint param_2,uint param_3,undefined1 *param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  undefined *local_118;
  uint local_110;
  uint uStack_10c;
  undefined **local_108;
  undefined **local_100;
  undefined *local_f8;
  uint local_f0;
  uint local_ec;
  undefined *local_e8;
  undefined *local_e0;
  uint local_d8;
  uint uStack_d4;
  undefined *local_d0;
  int local_c8;
  int iStack_c4;
  float local_bc [2];
  float local_b4;
  undefined *local_b0;
  int local_a8;
  int local_a4;
  byte local_a0;
  
  puVar1 = PTR_DAT_04bb2010;
  local_118 = PTR_DAT_04bb2010 + 0x10;
  local_110 = param_2;
  uStack_10c = param_3;
  uVar9 = FUN_01a198c0(&local_118,*param_4);
  if ((uVar9 & 1) == 0) {
LAB_01a19888:
    uVar11 = 0;
  }
  else {
    uVar4 = param_2 - ((param_2 & 0x80000001) == 1);
    uVar5 = param_3 - ((param_3 & 0x80000001) == 1);
    lVar12 = *(long *)PTR_DAT_04bb27c8;
    uVar14 = uVar4;
    uVar13 = uVar5;
    do {
      if ((((((lVar12 != 0) && (lVar15 = *(long *)(lVar12 + 0xa8), lVar15 != 0)) &&
            (-1 < (int)uVar14)) && ((-1 < (int)uVar13 && (uVar14 < *(uint *)(lVar15 + 0x38))))) &&
          ((uVar13 < *(uint *)(lVar15 + 0x3c) &&
           ((uVar3 = uVar14 + *(uint *)(lVar15 + 0x38) * uVar13, uVar3 < *(uint *)(lVar15 + 0x68) &&
            (*(long *)(lVar15 + 0x70) != 0)))))) &&
         ((*(uint *)(*(long *)(lVar15 + 0x70) + (long)(int)uVar3 * 4) >> 5 & 1) != 0)) {
        fVar16 = (float)(int)param_2 * 0.5;
        fVar17 = (float)(int)param_3 * 0.5;
        uVar13 = 0;
        if (fVar16 != (float)(int)fVar16) {
          uVar13 = (uint)(fVar16 < 0.0);
        }
        uVar14 = 0;
        if (fVar17 != (float)(int)fVar17) {
          uVar14 = (uint)(fVar17 < 0.0);
        }
        local_e8 = (undefined *)(ulong)(uint)((float)(int)((int)fVar16 - uVar13) * 10.0 + 5.0);
        local_e0 = (undefined *)
                   CONCAT44(local_e0._4_4_,(float)(int)((int)fVar17 - uVar14) * 10.0 + 5.0);
        if (*(char *)(lVar12 + 0x11c8) == '\0') {
          fVar16 = (float)FUN_0093a950(lVar12 + 0x28,&local_e8,0);
        }
        else {
          fVar16 = -500.0;
        }
        if (param_1 < fVar16) goto LAB_01a19888;
        break;
      }
      if ((int)uVar14 < (int)(uVar4 + 1)) {
        uVar14 = uVar14 + 1;
      }
      else {
        uVar13 = uVar13 + 1;
        uVar14 = uVar4;
      }
    } while ((uVar4 != uVar14) || (uVar5 + 2 != uVar13));
    puVar7 = PTR_DAT_04bbfe68;
    puVar6 = PTR_DAT_04bb2720;
    local_f8 = puVar1 + 0x10;
    iStack_c4 = uVar5 + 1;
    local_108 = &local_e0;
    local_100 = &local_d0;
    local_e8 = PTR_DAT_04bbc1a0 + 0x10;
    puVar1 = PTR_DAT_04bb2018 + 0x10;
    puVar2 = PTR_DAT_04bbfe68 + 0x10;
    local_f0 = uVar4;
    local_ec = uVar5;
    local_e0 = local_f8;
    local_d8 = uVar4;
    uStack_d4 = uVar5;
    local_d0 = local_f8;
    local_c8 = uVar4 + 1;
    do {
      fVar16 = (float)(int)local_f0 * 0.5;
      uVar13 = 0;
      if (fVar16 != (float)(int)fVar16) {
        uVar13 = (uint)(fVar16 < 0.0);
      }
      local_a8 = (int)fVar16 - uVar13;
      fVar16 = (float)(int)local_ec * 0.5;
      uVar13 = 0;
      if (fVar16 != (float)(int)fVar16) {
        uVar13 = (uint)(fVar16 < 0.0);
      }
      local_a4 = (int)fVar16 - uVar13;
      local_b0 = puVar1;
      uVar9 = FUN_01318220(&local_b0);
      if ((uVar9 & 1) != 0) goto LAB_01a19888;
      local_b4 = (float)(int)local_ec * 5.0 + 2.5;
      local_bc[0] = (float)(int)local_f0 * 5.0 + 2.5;
      fVar16 = (float)FUN_015cb8d4(local_bc,0);
      lVar12 = *(long *)puVar6;
      local_a8 = 0;
      local_b0 = puVar2;
      if ((lVar12 == 0) || (*(long *)(lVar12 + 0x330) == 0)) {
        puVar10 = &DAT_055c04a0;
      }
      else {
        puVar10 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
        iVar8 = FUN_006bd550(*puVar10,0);
        puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar8 != 0x758f7eaf) {
          puVar10 = &DAT_055c04a0;
        }
      }
      local_a4 = *(int *)(puVar10 + 7);
      local_a0 = FUN_017baf44();
      local_a0 = local_a0 & 1;
      fVar17 = (float)FUN_01a1c290(&local_b0,&local_f8);
      if (param_1 < fVar16 + fVar17) goto LAB_01a19888;
      local_b0 = puVar7 + 0x10;
      local_a8 = 0;
      lVar12 = *(long *)puVar6;
      if ((lVar12 == 0) || (*(long *)(lVar12 + 0x330) == 0)) {
        puVar10 = &DAT_055c04a0;
      }
      else {
        puVar10 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar12 + 0x338));
        iVar8 = FUN_006bd550(*puVar10,0);
        puVar10 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar8 != 0x758f7eaf) {
          puVar10 = &DAT_055c04a0;
        }
      }
      local_a4 = *(int *)(puVar10 + 7);
      local_a0 = FUN_017baf44();
      local_a0 = local_a0 & 1;
      fVar16 = (float)FUN_01a1c290(&local_b0,&local_f8);
      if ((5.0 < fVar16) || (uVar9 = FUN_01a1d5d0(&local_f8), (uVar9 & 1) != 0)) goto LAB_01a19888;
      local_a8 = 0;
      local_b0 = (undefined *)0x0;
      local_bc[0] = 7.00649e-45;
      local_b0 = (undefined *)0x20;
      local_a8 = 0;
      lVar12 = *(long *)PTR_DAT_04bb27c8;
      if ((lVar12 != 0) &&
         ((*(long *)(lVar12 + 0xa8) != 0 &&
          (uVar9 = FUN_00949898(lVar12 + 0x28,&local_f8,&local_b0), (uVar9 & 1) != 0))))
      goto LAB_01a19888;
      if ((int)local_f0 < *(int *)(local_100 + 1)) {
        local_f0 = local_f0 + 1;
      }
      else {
        local_f0 = *(uint *)(local_108 + 1);
        local_ec = local_ec + 1;
      }
    } while ((uVar4 != local_f0) || (uVar5 + 2 != local_ec));
    uVar11 = 1;
  }
  return uVar11;
}

