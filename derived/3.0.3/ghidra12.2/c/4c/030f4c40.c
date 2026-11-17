
/* WARNING: Removing unreachable block (ram,0x030f4f2c) */
/* WARNING: Removing unreachable block (ram,0x030f4ef8) */
/* WARNING: Removing unreachable block (ram,0x030f4f90) */

void FUN_030f4c40(undefined1 param_1 [16],float param_2,undefined4 param_3,long param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  uint uVar4;
  short sVar5;
  bool bVar6;
  int iVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  float *pfVar11;
  long *plVar12;
  undefined8 *puVar13;
  long lVar14;
  int iVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined8 local_e0;
  float local_d8;
  undefined8 local_d0;
  int local_c8;
  int local_c4;
  undefined *local_c0;
  int local_b8;
  int iStack_b4;
  undefined4 local_b0;
  undefined2 local_ac;
  undefined *local_a8;
  int local_a0;
  uint local_94;
  char local_90 [4];
  undefined4 local_8c;
  undefined **local_88;
  undefined **ppuStack_80;
  undefined8 *local_78;
  undefined8 local_68;
  char *local_60;
  undefined ***local_58;
  undefined4 *puStack_50;
  
  lVar14 = *(long *)(param_4 + 0x208);
  if (lVar14 == 0) {
    return;
  }
  local_d8 = 0.0;
  local_e0 = 0;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if (lVar9 == 0) {
    puVar13 = &DAT_055c04a0;
  }
  else {
    puVar13 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar13 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar7 = FUN_006bd550(*puVar13,0);
      puVar13 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar7 != 0x758f7eaf) {
        puVar13 = &DAT_055c04a0;
      }
    }
  }
  uVar8 = FUN_017baf44(*(undefined4 *)(puVar13 + 7));
  puVar2 = PTR_DAT_04bb5008;
  if ((uVar8 & 1) == 0) {
    puVar13 = (undefined8 *)FUN_0252d9bc(0);
    if (puVar13 != (undefined8 *)0x0) {
      local_d8 = *(float *)(puVar13 + 1);
      local_e0 = *puVar13;
    }
LAB_030f4d8c:
    FUN_030fb8fc(param_4,&local_e0);
  }
  else {
    if ((*(long *)PTR_DAT_04bb5ce0 == 0) || (sVar5 = *(short *)PTR_DAT_04bb6298, sVar5 == -1)) {
LAB_030f4e04:
      local_8c = *(undefined4 *)(puVar13 + 7);
      local_88 = (undefined **)&local_94;
      local_60 = local_90;
      local_94 = 0;
      local_68 = &PTR_FUN_04aa4cb8;
      local_58 = &local_88;
      puStack_50 = &local_8c;
      puVar1 = PTR_DAT_04bc4990 + 0x10;
      local_90[0] = '\0';
      iVar7 = 0;
      do {
        local_a8 = (undefined *)CONCAT44(local_a8._4_4_,iVar7);
        local_c0 = (undefined *)0x0;
        local_d0 = puVar1;
        local_c8 = iVar7;
        if ((iVar7 != 0) &&
           (local_c0 = (undefined *)FUN_02a96aac(*(long *)puVar2 + 0x20,iVar7),
           local_c0 != (undefined *)0x0)) {
          (*(code *)*local_68)(&local_68,&local_d0);
        }
        iVar15 = 0x27;
        if (iVar7 < 0x27) {
          iVar15 = iVar7 + 1;
        }
        iVar7 = iVar15;
      } while (iVar15 != 0x27);
      if (local_90[0] == '\0') goto LAB_030f508c;
      if (local_94 == 0xf) {
        local_68 = (undefined **)CONCAT44(local_68._4_4_,1);
        puVar13 = &DAT_05636dd8;
        if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
          puVar13 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
        }
        if (puVar13[1] == 0) goto LAB_030f508c;
        local_68._0_4_ = 0xf;
        local_a8 = PTR_DAT_04bc43f8 + 0x10;
        local_d0 = PTR_DAT_04bc4608 + 0x10;
        local_c0 = PTR_DAT_04bb2010 + 0x10;
        local_a0 = DAT_05636e94;
        local_c4 = *(int *)(PTR_DAT_04bbc570 + 0xc);
        local_b0 = *(undefined4 *)(PTR_DAT_04bbc570 + 0x20);
        local_c8 = CONCAT31(local_c8._1_3_,PTR_DAT_04bbc570[8]);
        local_b8 = *(int *)(PTR_DAT_04bbc570 + 0x18);
        iStack_b4 = *(int *)(PTR_DAT_04bbc570 + 0x1c);
        local_ac = *(undefined2 *)(PTR_DAT_04bbc570 + 0x24);
        if (DAT_05636e94 != 0) {
          ppuStack_80 = &local_a8;
          local_88 = &PTR_FUN_04a9b150;
          local_78 = &local_d0;
          if (puVar13[1] != 0) {
            plVar12 = (long *)(*(code *)**(undefined8 **)(puVar13[1] + 0x10))();
            iVar7 = (**(code **)(*plVar12 + 0x18))();
            if (0 < iVar7) {
              iVar15 = 0;
              do {
                FUN_01360490(&local_68,puVar13[1],iVar15);
                uVar8 = (*(code *)*local_88)(&local_88,&local_68);
                if ((uVar8 & 1) != 0) break;
                bVar6 = iVar7 + -1 != iVar15;
                iVar15 = iVar15 + 1;
              } while (bVar6);
            }
          }
        }
        local_68 = (undefined **)CONCAT44(local_68._4_4_,local_c4);
        if (local_c4 == 0) goto LAB_030f508c;
        param_3 = 0x40a00000;
        param_2 = (float)iStack_b4 * 5.0 + 2.5;
        local_e0 = CONCAT44(local_e0._4_4_,(float)local_b8 * 5.0 + 2.5);
        local_d8 = param_2;
        goto LAB_030f4d8c;
      }
      lVar9 = param_4 + 0xc58;
      lVar10 = lVar9 + (ulong)local_94 * 0x60;
      bVar6 = 0xf < local_94;
    }
    else {
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar3 >> 6 & 1) == 0) {
        puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
        if (0xff < (uint)(int)sVar5) {
          puVar3 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar3 >> 7 & 1) == 0) goto LAB_030f4e04;
        local_68 = (undefined **)((ulong)local_68._4_4_ << 0x20);
        uVar8 = FUN_02b64e40(&local_68,*(undefined4 *)(puVar13 + 7));
        if ((uVar8 & 1) == 0) goto LAB_030f508c;
        lVar9 = param_4 + 0x848;
        lVar10 = lVar9 + ((ulong)local_68 & 0xffffffff) * 0x68;
        bVar6 = 9 < (uint)local_68;
      }
      else {
        local_68 = (undefined **)((ulong)local_68._4_4_ << 0x20);
        uVar8 = FUN_02b5f400(&local_68,*(undefined4 *)(puVar13 + 7));
        if ((uVar8 & 1) == 0) goto LAB_030f508c;
        lVar9 = param_4 + 0x508;
        lVar10 = lVar9 + ((ulong)local_68 & 0xffffffff) * 0x68;
        bVar6 = 7 < (uint)local_68;
      }
    }
    if (bVar6) {
      lVar10 = lVar9;
    }
    local_d8 = *(float *)(lVar10 + 0x14);
    local_e0 = *(undefined8 *)(lVar10 + 0xc);
  }
LAB_030f508c:
  local_88 = (undefined **)&DAT_3f8000003f800000;
  fVar16 = (float)FUN_030f530c(param_4,&local_e0);
  local_d0 = (undefined *)CONCAT44(param_2,fVar16);
  if (*(char *)(param_4 + 0x1bd4) != '\0') {
    uVar4 = *(uint *)(param_4 + 0x1bd8);
    pfVar11 = *(float **)(param_4 + 0x1be0);
    fVar18 = *pfVar11;
    if (fVar16 <= *pfVar11) {
      fVar18 = fVar16;
    }
    fVar17 = pfVar11[1 < uVar4];
    if (pfVar11[1 < uVar4] <= fVar16) {
      fVar17 = fVar18;
    }
    lVar9 = 0xc;
    if (uVar4 < 4) {
      lVar9 = 0;
    }
    fVar16 = pfVar11[(ulong)(2 < uVar4) * 2];
    if (param_2 <= pfVar11[(ulong)(2 < uVar4) * 2]) {
      fVar16 = param_2;
    }
    fVar18 = *(float *)((long)pfVar11 + lVar9);
    if (*(float *)((long)pfVar11 + lVar9) <= param_2) {
      fVar18 = fVar16;
    }
    local_d0 = (undefined *)CONCAT44(fVar18,fVar17);
  }
  plVar12 = *(long **)(lVar14 + 0x1d0);
  puVar2 = PTR_DAT_04bc0cb8 + 0x10;
  local_60._0_4_ = 8;
  local_c8 = param_3;
  local_68 = (undefined **)puVar2;
  (**(code **)(*plVar12 + 0x18))(plVar12,&local_68);
  (**(code **)(plVar12[3] + 0x98))(plVar12[1],&local_d0);
  plVar12 = *(long **)(lVar14 + 0x1d0);
  local_60 = (char *)CONCAT44(local_60._4_4_,10);
  local_68 = (undefined **)puVar2;
  (**(code **)(*plVar12 + 0x18))(plVar12,&local_68);
  (**(code **)(plVar12[3] + 0xb8))(plVar12[1],&local_88);
  return;
}

