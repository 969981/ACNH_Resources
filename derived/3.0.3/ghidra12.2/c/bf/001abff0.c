
void FUN_001abff0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  undefined8 uVar8;
  uint *puVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  char cVar14;
  int iVar15;
  uint uVar16;
  undefined8 local_1c0;
  undefined *local_1b8;
  undefined *puStack_1b0;
  undefined1 local_1a8 [16];
  undefined1 *local_198;
  undefined8 uStack_190;
  undefined2 local_188;
  undefined *local_180;
  undefined1 local_178 [16];
  undefined1 *local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined1 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined1 auStack_130 [112];
  undefined8 local_c0;
  undefined1 auStack_b8 [8];
  char local_b0;
  long local_a8;
  long local_a0;
  undefined *local_98;
  undefined4 local_90;
  undefined1 local_8c;
  
  FUN_00187aac();
  uVar8 = FUN_00187db0();
  FUN_001896d4(uVar8,2);
  FUN_00187aac();
  uVar8 = FUN_00187db0();
  FUN_001896e4(uVar8,2);
  puVar4 = PTR_DAT_04bcb908;
  puVar3 = PTR_DAT_04bcb900;
  plVar12 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar16 = *puVar9;
    if (uVar16 != 0) {
      lVar10 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar12 = (long *)(*(long *)(lVar10 + (ulong)uVar16 * 8) + 0x20);
    }
  }
  if ((*plVar12 == 0) || (lVar10 = *(long *)(*plVar12 + 0x10), lVar10 == 0)) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x10);
  }
  plVar12 = (long *)(lVar10 + 0x78);
  (**(code **)(*plVar12 + 0x10))(plVar12);
  local_90 = 1;
  local_8c = 0;
  local_98 = PTR_DAT_04bcc018 + 0x10;
  uVar8 = FUN_00196a18();
  FUN_00196a24(&local_98,uVar8,0);
  FUN_00193030(&local_98,param_3,param_4,0xffffffffffffffff);
  FUN_001972b0(auStack_b8,&local_98);
  local_c0 = 0;
  if (*(long *)(local_a8 + 0x18) == local_a0) {
    cVar14 = '\0';
    lVar10 = local_a0;
LAB_001ac164:
    local_a0 = lVar10;
    iVar15 = 0;
    local_b0 = '\x01';
    FUN_00197568(auStack_b8,&local_c0);
    if (cVar14 == '\x01') goto LAB_001ac1e4;
LAB_001ac184:
    uVar16 = 0;
  }
  else {
    cVar14 = *(char *)(*(long *)(local_a8 + 0x10) + *(long *)(local_a8 + 0x28) + local_a0);
    lVar10 = local_a0 + 1;
    if ((ulong)(*(long *)(local_a8 + 0x18) - lVar10) < 4) goto LAB_001ac164;
    iVar15 = *(int *)(*(long *)(local_a8 + 0x10) + *(long *)(local_a8 + 0x28) + lVar10);
    local_a0 = local_a0 + 5;
    FUN_00197568(auStack_b8,&local_c0);
    if (cVar14 != '\x01') goto LAB_001ac184;
LAB_001ac1e4:
    if ((ulong)(*(long *)(local_a8 + 0x18) - local_a0) < 2) {
      local_b0 = '\x01';
      goto LAB_001ac514;
    }
    uVar16 = (uint)*(ushort *)(*(long *)(local_a8 + 0x10) + *(long *)(local_a8 + 0x28) + local_a0);
    local_a0 = local_a0 + 2;
  }
  if (local_b0 != '\0') goto LAB_001ac514;
  FUN_001b8358(auStack_130,param_2);
  FUN_001b8e80(&local_1b8,auStack_130,"RVCID",iVar15);
  lVar10 = FUN_001ad170(param_1 + 0x50,auStack_130);
  if ((lVar10 == 0) && (lVar10 = FUN_001ad170(param_1 + 0x70,auStack_130), lVar10 == 0)) {
    for (lVar10 = *(long *)(param_1 + 0x60); lVar10 != param_1 + 0x58;
        lVar10 = *(long *)(lVar10 + 8)) {
      iVar6 = FUN_001b8fa0(lVar10 + 0x18,"RVCID",0);
      if (iVar15 == iVar6) {
        uVar7 = FUN_001b8fa0(auStack_130,&DAT_0410a6b7,0);
        if ((uVar7 >> 1 & 1) == 0) {
          FUN_001acc20(param_1,auStack_130);
        }
        break;
      }
    }
    lVar10 = 0;
    bVar5 = true;
    if (cVar14 != '\x01') goto LAB_001ac2a8;
LAB_001ac35c:
    if (!bVar5) {
      plVar13 = (long *)(puVar3 + 0x18);
      if (*puVar4 != '\0') {
        puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        uVar7 = *puVar9;
        if (uVar7 != 0) {
          lVar11 = **(long **)(puVar3 + 0xa0);
          if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar11 >> 3) <= (ulong)uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar13 = (long *)(*(long *)(lVar11 + (ulong)uVar7 * 8) + 0x10);
        }
      }
      if (((*plVar13 == 0) || (lVar11 = *(long *)(*plVar13 + 0x10), lVar11 == 0)) ||
         (*(long *)(lVar11 + 0xe8) == 0)) goto LAB_001ac4f4;
      plVar13 = (long *)(puVar3 + 0x18);
      if (*puVar4 != '\0') {
        puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        uVar7 = *puVar9;
        if (uVar7 != 0) {
          lVar11 = **(long **)(puVar3 + 0xa0);
          if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar11 >> 3) <= (ulong)uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar13 = (long *)(*(long *)(lVar11 + (ulong)uVar7 * 8) + 0x10);
        }
      }
      puVar2 = PTR_DAT_04bc0ec8;
      if ((*plVar13 == 0) || (lVar11 = *(long *)(*plVar13 + 0x10), lVar11 == 0)) {
        lVar11 = 0;
      }
      else {
        lVar11 = *(long *)(lVar11 + 0xe8);
      }
      local_198 = local_1a8;
      local_1a8[0] = 0;
      uStack_190 = 0x10;
      local_1b8 = PTR_DAT_04bcc2d8 + 0x10;
      puVar1 = PTR_DAT_04bc0ec8 + 0x10;
      puStack_1b0 = puVar1;
      FUN_0018b070(&puStack_1b0,*(undefined8 *)(lVar11 + 0x168),0xffffffffffffffff);
      local_188 = *(undefined2 *)(lVar11 + 0x178);
      local_168 = local_178;
      local_178[0] = 0;
      uStack_160 = 0x10;
      local_180 = puVar1;
      FUN_0018b070(&local_180,*(undefined8 *)(lVar11 + 0x198),0xffffffffffffffff);
      uVar8 = *(undefined8 *)(lVar11 + 0x1a8);
      uStack_150 = *(undefined8 *)(lVar11 + 0x1b0);
      local_148 = *(undefined1 *)(lVar11 + 0x1b8);
      local_158._4_4_ = (int)((ulong)uVar8 >> 0x20);
      bVar5 = local_158._4_4_ == 2;
      local_158 = uVar8;
      if (bVar5) {
        uVar7 = FUN_001b8fa0(lVar10 + 8,&DAT_0410a6b7,0);
        if ((uVar7 >> 1 & 1) == 0) goto LAB_001ac4ec;
        lVar11 = FUN_001b8fa0(lVar10 + 8,"probeinit",0);
        FUN_001abf78(&local_1b8);
        if (lVar11 == 0) {
          plVar13 = (long *)(puVar3 + 0x18);
          if (*puVar4 != '\0') {
            puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
            uVar7 = *puVar9;
            if (uVar7 != 0) {
              lVar11 = **(long **)(puVar3 + 0xa0);
              if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar11 >> 3) <= (ulong)uVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                             ,0x47,0xe0000003,0);
              }
              plVar13 = (long *)(*(long *)(lVar11 + (ulong)uVar7 * 8) + 0x10);
            }
          }
          if ((*plVar13 == 0) || (lVar11 = *(long *)(*plVar13 + 0x10), lVar11 == 0)) {
            lVar11 = 0;
          }
          else {
            lVar11 = *(long *)(lVar11 + 0xe8);
          }
          puVar1 = puVar2 + 0x10;
          local_1a8[0] = 0;
          local_1b8 = PTR_DAT_04bcc2d8 + 0x10;
          local_198 = local_1a8;
          uStack_190 = 0x10;
          puStack_1b0 = puVar1;
          FUN_0018b070(&puStack_1b0,*(undefined8 *)(lVar11 + 0x168),0xffffffffffffffff);
          local_188 = *(undefined2 *)(lVar11 + 0x178);
          local_168 = local_178;
          local_178[0] = 0;
          uStack_160 = 0x10;
          local_180 = puVar1;
          FUN_0018b070(&local_180,*(undefined8 *)(lVar11 + 0x198),0xffffffffffffffff);
          uVar8 = *(undefined8 *)(lVar11 + 0x1a8);
          uStack_150 = *(undefined8 *)(lVar11 + 0x1b0);
          local_148 = *(undefined1 *)(lVar11 + 0x1b8);
          local_158 = uVar8;
          FUN_001abf78(&local_1b8);
          if (uVar16 != ((uint)uVar8 & 0xffff)) {
            plVar13 = (long *)(puVar3 + 0x18);
            if (*puVar4 != '\0') {
              puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
              uVar7 = *puVar9;
              if (uVar7 != 0) {
                lVar11 = **(long **)(puVar3 + 0xa0);
                if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar11 >> 3) <= (ulong)uVar7) {
                    /* WARNING: Subroutine does not return */
                  FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                               ,0x47,0xe0000003,0);
                }
                plVar13 = (long *)(*(long *)(lVar11 + (ulong)uVar7 * 8) + 0x10);
              }
            }
            if ((*plVar13 == 0) || (lVar11 = *(long *)(*plVar13 + 0x10), lVar11 == 0)) {
              lVar11 = 0;
            }
            else {
              lVar11 = *(long *)(lVar11 + 0xe8);
            }
            puVar2 = puVar2 + 0x10;
            local_1a8[0] = 0;
            local_1b8 = PTR_DAT_04bcc2d8 + 0x10;
            local_198 = local_1a8;
            uStack_190 = 0x10;
            puStack_1b0 = puVar2;
            FUN_0018b070(&puStack_1b0,*(undefined8 *)(lVar11 + 0x168),0xffffffffffffffff);
            local_188 = *(undefined2 *)(lVar11 + 0x178);
            local_168 = local_178;
            local_178[0] = 0;
            uStack_160 = 0x10;
            local_180 = puVar2;
            FUN_0018b070(&local_180,*(undefined8 *)(lVar11 + 0x198),0xffffffffffffffff);
            uStack_150 = *(undefined8 *)(lVar11 + 0x1b0);
            local_148 = *(undefined1 *)(lVar11 + 0x1b8);
            plVar13 = (long *)(puVar3 + 0x18);
            local_158 = CONCAT62((int6)((ulong)*(undefined8 *)(lVar11 + 0x1a8) >> 0x10),
                                 (short)uVar16);
            if (*puVar4 != '\0') {
              puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
              uVar16 = *puVar9;
              if (uVar16 != 0) {
                lVar11 = **(long **)(puVar3 + 0xa0);
                if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar11 >> 3) <= (ulong)uVar16) {
                    /* WARNING: Subroutine does not return */
                  FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                               ,0x47,0xe0000003,0);
                }
                plVar13 = (long *)(*(long *)(lVar11 + (ulong)uVar16 * 8) + 0x10);
              }
            }
            if ((*plVar13 == 0) || (lVar11 = *(long *)(*plVar13 + 0x10), lVar11 == 0)) {
              lVar11 = 0;
            }
            else {
              lVar11 = *(long *)(lVar11 + 0xe8);
            }
            FUN_00189504(lVar11 + 0x150,&puStack_1b0);
            *(undefined2 *)(lVar11 + 0x178) = local_188;
            FUN_00189504(lVar11 + 0x180,&local_180);
            *(undefined8 *)(lVar11 + 0x1a8) = local_158;
            *(undefined8 *)(lVar11 + 0x1b0) = uStack_150;
            *(undefined1 *)(lVar11 + 0x1b8) = local_148;
            goto LAB_001ac4ec;
          }
        }
      }
      else {
LAB_001ac4ec:
        FUN_001abf78(&local_1b8);
      }
LAB_001ac4f4:
      local_1c0 = local_c0;
      FUN_001ad354(lVar10,auStack_130,&local_1c0);
    }
  }
  else {
    FUN_00187aac();
    uVar8 = FUN_00187db0();
    FUN_001896d4(uVar8,2);
    FUN_00187aac();
    uVar8 = FUN_00187db0();
    FUN_001896e4(uVar8,2);
    bVar5 = false;
    if (cVar14 == '\x01') goto LAB_001ac35c;
LAB_001ac2a8:
    if (cVar14 == '\0') {
      if (!bVar5) {
        local_138 = 0;
        FUN_001ad354(lVar10,auStack_130,&local_138);
      }
      local_140 = local_c0;
      FUN_001ad43c(param_1,1,auStack_130,&local_140,0);
    }
  }
  FUN_001b8504(auStack_130);
LAB_001ac514:
  FUN_00197350(auStack_b8);
  FUN_00196ce0(&local_98);
  (**(code **)(*plVar12 + 0x20))(plVar12);
  return;
}

