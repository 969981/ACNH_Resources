
/* WARNING: Removing unreachable block (ram,0x011f355c) */
/* WARNING: Removing unreachable block (ram,0x011f356c) */
/* WARNING: Removing unreachable block (ram,0x011f3578) */

uint FUN_011f3520(undefined8 param_1,int param_2,long param_3)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  int iVar11;
  uint uVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  uint uVar16;
  int *piVar17;
  undefined8 *puVar18;
  float fVar19;
  undefined *local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined *local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined4 local_78;
  undefined4 local_74;
  byte local_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined8 local_58;
  undefined *local_50;
  undefined8 local_48;
  
  puVar7 = PTR_DAT_04bb4910;
  local_68 = (undefined *)((ulong)local_68 & 0xffffffff00000000);
  if ((*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) &&
     (*(char *)(*(long *)PTR_DAT_04bb4910 + 0x88) == '\0')) {
    local_58 = 0;
    local_68 = PTR_DAT_04bbc1a0 + 0x10;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    local_48 = 0;
    local_78 = 0;
    local_80 = PTR_DAT_04bbfe68 + 0x10;
    lVar14 = *(long *)PTR_DAT_04bb2720;
    puStack_60 = puVar1;
    local_50 = puVar1;
    if (lVar14 == 0) {
      puVar18 = &DAT_055c04a0;
    }
    else {
      puVar18 = &DAT_055c04a0;
      if (*(long *)(lVar14 + 0x330) != 0) {
        puVar18 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
        iVar9 = FUN_006bd550(*puVar18,0);
        puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar9 != 0x758f7eaf) {
          puVar18 = &DAT_055c04a0;
        }
      }
    }
    local_74 = *(undefined4 *)(puVar18 + 7);
    local_70 = FUN_017baf44();
    local_70 = local_70 & 1;
    local_88 = 0;
    local_90 = puVar1;
    uVar10 = FUN_01a5190c(&local_80,param_2,param_3,&local_90);
    FUN_0277f02c(uVar10,&local_68);
    local_58._0_4_ = (int)local_58 + (int)local_88;
    local_58._4_4_ = local_58._4_4_ + local_88._4_4_;
    local_48._4_4_ = local_48._4_4_ + local_88._4_4_;
    local_48._0_4_ = (int)local_48 + (int)local_88;
    plVar15 = *(long **)puVar7;
    fVar19 = (float)(int)local_58 * 0.5;
    uVar8 = 0;
    if (fVar19 != (float)(int)fVar19) {
      uVar8 = (uint)(fVar19 < 0.0);
    }
    iVar9 = (int)fVar19 - uVar8;
    fVar19 = (float)local_58._4_4_ * 0.5;
    uVar8 = 0;
    if (fVar19 != (float)(int)fVar19) {
      uVar8 = (uint)(fVar19 < 0.0);
    }
    iVar4 = (int)fVar19 - uVar8;
    fVar19 = (float)(int)local_48 * 0.5;
    uVar8 = 0;
    if (fVar19 != (float)(int)fVar19) {
      uVar8 = (uint)(fVar19 < 0.0);
    }
    iVar5 = (int)fVar19 - uVar8;
    fVar19 = (float)local_48._4_4_ * 0.5;
    uVar8 = 0;
    if (fVar19 != (float)(int)fVar19) {
      uVar8 = (uint)(fVar19 < 0.0);
    }
    iVar6 = (int)fVar19 - uVar8;
    iVar2 = iVar9;
    if (iVar5 <= iVar9) {
      iVar2 = iVar5;
    }
    if (iVar9 <= iVar5) {
      iVar9 = iVar5;
    }
    iVar5 = iVar4;
    if (iVar6 <= iVar4) {
      iVar5 = iVar6;
    }
    if (iVar4 <= iVar6) {
      iVar4 = iVar6;
    }
    if (*(char *)((long)plVar15 + 0x89) != '\0') {
      piVar17 = (int *)*plVar15;
      uVar8 = piVar17[2];
      if ((0 < (int)uVar8) && (uVar3 = piVar17[3], 0 < (int)uVar3)) {
        iVar6 = *piVar17;
        uVar16 = 0;
        do {
          iVar11 = 0;
          uVar12 = 0;
          do {
            if ((((int)(uVar16 * iVar6) <= iVar9 && iVar2 <= (int)(uVar16 * iVar6 + iVar6 + -1)) &&
                (iVar11 <= iVar4)) && (iVar5 <= iVar6 + -1 + iVar11)) {
              lVar13 = *plVar15;
              *(undefined1 *)((long)plVar15 + 0x8a) = 1;
              lVar14 = (long)(int)(uVar16 + *(uint *)(lVar13 + 8) * uVar12);
              if (*(uint *)(lVar13 + 0xc) <= uVar12 || *(uint *)(lVar13 + 8) <= uVar16) {
                lVar14 = 0;
              }
              lVar14 = *(long *)(lVar13 + 0x10) + lVar14 * 0x23c;
              *(ushort *)(lVar14 + 0x238) = *(ushort *)(lVar14 + 0x238) | 2;
            }
            uVar12 = uVar12 + 1;
            iVar11 = iVar11 + iVar6;
          } while (uVar3 != uVar12);
          uVar16 = uVar16 + 1;
        } while (uVar16 != uVar8);
      }
    }
  }
  if (param_2 == 0) {
    local_98 = *(undefined4 *)(param_3 + 8);
    uStack_94 = *(undefined4 *)(param_3 + 0xc);
    local_a0 = PTR_DAT_04bb2010 + 0x10;
    FUN_011dc8e4(&local_a0);
  }
  uVar8 = FUN_01a50cb0(param_1,param_2,param_3);
  return uVar8 & 1;
}

