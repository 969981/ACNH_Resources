
void FUN_001acc20(long param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  short sVar5;
  undefined4 uVar6;
  long lVar7;
  undefined8 uVar8;
  uint *puVar9;
  long *plVar10;
  ulong uVar11;
  long *plVar12;
  undefined *puVar13;
  undefined *local_208 [3];
  undefined8 local_1f0;
  undefined *local_1e0 [3];
  undefined8 local_1c8;
  undefined *local_150;
  undefined1 auStack_148 [16];
  undefined8 local_138;
  long local_d8;
  long lStack_d0;
  long local_c8;
  long lStack_c0;
  undefined4 local_b8;
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  char local_48;
  undefined1 local_47;
  
  lVar7 = FUN_001ad170(param_1 + 0x50);
  if (lVar7 != 0) {
    FUN_00187aac();
    uVar8 = FUN_00187db0();
    FUN_001896d4(uVar8,2);
    FUN_00187aac();
    uVar8 = FUN_00187db0();
    FUN_001896e4(uVar8,2);
    uVar3 = *(uint *)PTR_DAT_04bcc2c8;
    uVar11 = (ulong)uVar3;
    FUN_00187810(&local_150);
    if ((int)uVar3 < 0) {
      uVar11 = -(ulong)-uVar3;
    }
    *(undefined **)(lVar7 + 0x78) = local_150 + uVar11;
    return;
  }
  FUN_001b8358(auStack_b0,param_2);
  FUN_00187aac();
  uVar8 = FUN_00187db0();
  FUN_001896d4(uVar8,2);
  FUN_00187aac();
  uVar8 = FUN_00187db0();
  FUN_001896e4(uVar8,2);
  puVar4 = PTR_DAT_04bcb908;
  puVar13 = PTR_DAT_04bcb900;
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar9;
    if (uVar3 != 0) {
      lVar7 = **(long **)(puVar13 + 0xa0);
      if ((ulong)((*(long **)(puVar13 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar3) goto LAB_001ad12c;
      plVar10 = (long *)(*(long *)(lVar7 + (ulong)uVar3 * 8) + 0x10);
    }
  }
  lVar7 = (**(code **)(**(long **)(*(long *)(*plVar10 + 0x10) + 0xe8) + 0x80))();
  if ((*(char *)(lVar7 + 0x10) == '\0') ||
     (lVar7 = FUN_001b8fa0(auStack_b0,&DAT_0410a6d5,0), lVar7 == 0)) {
LAB_001ad070:
    FUN_001bb84c(&local_150,auStack_b0,*(undefined4 *)PTR_DAT_04bcc2c8,90000,0xc);
    plVar10 = (long *)FUN_00187df4(0xb0);
    *plVar10 = 0;
    puVar13 = PTR_DAT_04bcc3f8 + 0x10;
    plVar10[2] = (long)puVar13;
    FUN_001b8358(plVar10 + 3,auStack_148);
    plVar10[0x11] = local_d8;
    *(undefined4 *)(plVar10 + 0x15) = local_b8;
    plVar10[0x12] = lStack_d0;
    plVar10[0x13] = local_c8;
    plVar10[0x14] = lStack_c0;
    plVar12 = (long *)(param_1 + 0x58);
    lVar7 = *plVar12;
    goto LAB_001ad0e8;
  }
  FUN_001af850(&local_150,auStack_b0);
  uVar11 = FUN_0018b44c(local_138,&DAT_0407ebb1);
  if (((uVar11 & 1) == 0) && (sVar5 = FUN_001b8fa0(auStack_b0,&DAT_0410a6d2,0), sVar5 != 0)) {
    FUN_001af970(local_1e0,auStack_b0);
    uVar11 = FUN_0018b44c(local_1c8,&DAT_0407ebb1);
    if ((uVar11 & 1) != 0) {
      puVar13 = PTR_DAT_04bc0ec8 + 0x10;
      local_1e0[0] = puVar13;
      FUN_0018b1a0(local_1e0);
      local_150 = puVar13;
      goto LAB_001acdf0;
    }
    sVar5 = FUN_001b8fa0(auStack_b0,&DAT_0410a6cb,0);
    puVar2 = PTR_DAT_04bc0ec8;
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    local_1e0[0] = puVar1;
    FUN_0018b1a0(local_1e0);
    local_150 = puVar1;
    FUN_0018b1a0(&local_150);
    if (sVar5 != 0) {
      FUN_001af850(&local_150,auStack_b0);
      if (local_48 == '\0') {
        FUN_001b8590(auStack_b0);
      }
      local_47 = 0;
      FUN_001e1640(local_a8,local_138);
      puVar2 = puVar2 + 0x10;
      local_150 = puVar2;
      FUN_0018b1a0(&local_150);
      uVar6 = FUN_001b8fa0(auStack_b0,&DAT_0410a6d2,0);
      if (local_48 == '\0') {
        FUN_001b8590(auStack_b0);
      }
      FUN_001e17d0(local_a8,uVar6);
      local_47 = 0;
      FUN_001e1500(&local_150);
      FUN_001af850(local_1e0,auStack_b0);
      FUN_001e1640(&local_150,local_1c8);
      local_1e0[0] = puVar2;
      FUN_0018b1a0(local_1e0);
      uVar8 = FUN_001b8fa0(auStack_b0,&DAT_0410a6d2,0);
      FUN_001e17d0(&local_150,uVar8);
      FUN_001e1500(local_1e0);
      FUN_001af970(local_208,auStack_b0);
      FUN_001e1640(local_1e0,local_1f0);
      local_208[0] = puVar2;
      FUN_0018b1a0(local_208);
      uVar8 = FUN_001b8fa0(auStack_b0,&DAT_0410a6cb,0);
      FUN_001e17d0(local_1e0,uVar8);
      plVar10 = (long *)(puVar13 + 0x18);
      if (*puVar4 != '\0') {
        puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        uVar3 = *puVar9;
        if (uVar3 != 0) {
          lVar7 = **(long **)(puVar13 + 0xa0);
          if ((ulong)((*(long **)(puVar13 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar3) {
LAB_001ad12c:
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar10 = (long *)(*(long *)(lVar7 + (ulong)uVar3 * 8) + 0x10);
        }
      }
      lVar7 = (**(code **)(**(long **)(*(long *)(*plVar10 + 0x10) + 0xe8) + 0x80))();
      FUN_001bd038(*(long *)(lVar7 + 8) + 0x18,&local_150,local_1e0,1);
      FUN_001afac0(param_1,local_1e0);
      FUN_001e1868(local_1e0);
      FUN_001e1868(&local_150);
      goto LAB_001ad070;
    }
  }
  else {
    local_150 = PTR_DAT_04bc0ec8 + 0x10;
LAB_001acdf0:
    FUN_0018b1a0(&local_150);
  }
  FUN_00187aac();
  uVar8 = FUN_00187db0();
  FUN_001896d4(uVar8,2);
  FUN_00187aac();
  uVar8 = FUN_00187db0();
  FUN_001896e4(uVar8,2);
  FUN_001bb84c(&local_150,auStack_b0,*(undefined4 *)PTR_DAT_04bcc2c8,90000,0xc);
  plVar10 = (long *)FUN_00187df4(0xb0);
  *plVar10 = 0;
  puVar13 = PTR_DAT_04bcc3f8 + 0x10;
  plVar10[2] = (long)puVar13;
  FUN_001b8358(plVar10 + 3,auStack_148);
  plVar10[0x11] = local_d8;
  *(undefined4 *)(plVar10 + 0x15) = local_b8;
  plVar10[0x12] = lStack_d0;
  plVar10[0x13] = local_c8;
  plVar10[0x14] = lStack_c0;
  plVar12 = (long *)(param_1 + 0x78);
  lVar7 = *plVar12;
LAB_001ad0e8:
  *plVar10 = lVar7;
  plVar10[1] = (long)plVar12;
  *(long **)(lVar7 + 8) = plVar10;
  *plVar12 = (long)plVar10;
  plVar12[2] = plVar12[2] + 1;
  local_150 = puVar13;
  FUN_001b8504(auStack_148);
  FUN_001b8504(auStack_b0);
  return;
}

