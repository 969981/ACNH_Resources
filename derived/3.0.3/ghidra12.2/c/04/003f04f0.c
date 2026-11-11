
void FUN_003f04f0(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  uint uVar3;
  char *pcVar4;
  uint *puVar5;
  long lVar6;
  undefined8 uVar7;
  size_t sVar8;
  long *plVar9;
  undefined *local_1f8;
  undefined1 local_1f0 [16];
  undefined1 *local_1e0;
  undefined8 uStack_1d8;
  undefined1 auStack_1d0 [24];
  char *local_1b8;
  undefined *local_1b0;
  undefined1 local_1a8 [16];
  undefined1 *local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 local_180;
  
  puVar1 = PTR_DAT_04bcb900;
  plVar9 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar5;
    if (uVar3 != 0) {
      lVar6 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar9 = (long *)(*(long *)(lVar6 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  lVar6 = FUN_001948f0(*(undefined8 *)(*(long *)(*plVar9 + 0x10) + 0x18),
                       *(undefined4 *)(param_1 + 8));
  if (lVar6 != 0) {
    *(undefined4 *)((long)param_2 + 0xc) = *(undefined4 *)(param_1 + 0x28);
    (**(code **)(*param_2 + 0xb8))(param_2,*(undefined8 *)(param_1 + 0x30));
    param_2[2] = *(long *)(param_1 + 0x38);
    param_2[3] = *(long *)(param_1 + 0x40);
    lVar6 = **(long **)(param_1 + 0x10);
    if (lVar6 != (*(long **)(param_1 + 0x10))[1]) {
      do {
        FUN_00189050(lVar6 + 0x10,&local_188);
        FUN_00189050(lVar6 + 0x38,&local_1b0);
        (**(code **)(*param_2 + 0x18))(auStack_1d0,param_2,local_188,local_1b0);
        FUN_00189128(local_188);
        FUN_00189128(local_1b0);
        lVar6 = lVar6 + 0x60;
      } while (lVar6 != *(long *)(*(long *)(param_1 + 0x10) + 8));
    }
    lVar6 = **(long **)(param_1 + 0x20);
    lVar2 = (*(long **)(param_1 + 0x20))[1];
    if (lVar6 != lVar2) {
      (**(code **)(*param_2 + 0xb0))(param_2,lVar6,lVar2 - lVar6);
    }
    lVar6 = **(long **)(param_1 + 0x18);
    if (lVar6 != (*(long **)(param_1 + 0x18))[1]) {
      puVar1 = PTR_DAT_04bc0ec8 + 0x10;
      do {
        uVar7 = FUN_001ef168(param_2);
        local_1f0[0] = 0;
        uStack_1d8 = 0x10;
        local_1f8 = puVar1;
        local_1e0 = local_1f0;
        FUN_0018b070(&local_1f8,uVar7,0xffffffffffffffff);
        FUN_0018c3a4(&local_188);
        uVar7 = FUN_00186ea0(&local_188,&DAT_040cceb3);
        uVar7 = FUN_0018c0b0(uVar7,&local_1f8);
        uVar7 = FUN_00186ea0(uVar7,&DAT_0413c0f9);
        uVar7 = FUN_00186ea0(uVar7,"Content-Disposition: form-data; name=\"");
        uVar7 = FUN_0018c0b0(uVar7,lVar6 + 0x10);
        uVar7 = FUN_00186ea0(uVar7,&DAT_040c7c06);
        uVar7 = FUN_00186ea0(uVar7,&DAT_0413c0f9);
        uVar7 = FUN_00186ea0(uVar7,&DAT_0413c0f9);
        uVar7 = FUN_0018c0b0(uVar7,lVar6 + 0x38);
        FUN_00186ea0(uVar7,&DAT_0413c0f9);
        local_1a8[0] = 0;
        uStack_190 = 0x10;
        local_1b0 = puVar1;
        local_198 = local_1a8;
        FUN_0018b070(&local_1b0,local_180,0xffffffffffffffff);
        FUN_00189050(&local_1b0,&local_1b8);
        pcVar4 = local_1b8;
        uVar7 = *(undefined8 *)(param_1 + 0x70);
        sVar8 = strlen(local_1b8);
        FUN_004044c0(param_1 + 0x68,uVar7,pcVar4,pcVar4 + sVar8,sVar8);
        FUN_00189128(local_1b8);
        local_1b0 = puVar1;
        FUN_0018b1a0(&local_1b0);
        FUN_0018c3d4(&local_188);
        local_1f8 = puVar1;
        FUN_0018b1a0(&local_1f8);
        lVar6 = lVar6 + 0x60;
      } while (lVar6 != *(long *)(*(long *)(param_1 + 0x18) + 8));
    }
    uVar7 = FUN_001ef168(param_2);
    local_1f0[0] = 0;
    puVar1 = PTR_DAT_04bc0ec8 + 0x10;
    uStack_1d8 = 0x10;
    local_1f8 = puVar1;
    local_1e0 = local_1f0;
    FUN_0018b070(&local_1f8,uVar7,0xffffffffffffffff);
    FUN_0018c3a4(&local_188);
    uVar7 = FUN_00186ea0(&local_188,&DAT_040cceb3);
    uVar7 = FUN_0018c0b0(uVar7,&local_1f8);
    uVar7 = FUN_00186ea0(uVar7,&DAT_0413c0f9);
    uVar7 = FUN_00186ea0(uVar7,"Content-Disposition: form-data; name=\"file\"");
    uVar7 = FUN_00186ea0(uVar7,&DAT_0413c0f9);
    FUN_00186ea0(uVar7,&DAT_0413c0f9);
    local_1a8[0] = 0;
    uStack_190 = 0x10;
    local_1b0 = puVar1;
    local_198 = local_1a8;
    FUN_0018b070(&local_1b0,local_180,0xffffffffffffffff);
    FUN_00189050(&local_1b0,&local_1b8);
    pcVar4 = local_1b8;
    uVar7 = *(undefined8 *)(param_1 + 0x70);
    sVar8 = strlen(local_1b8);
    FUN_004044c0(param_1 + 0x68,uVar7,pcVar4,pcVar4 + sVar8,sVar8);
    FUN_00189128(local_1b8);
    local_1b0 = puVar1;
    FUN_0018b1a0(&local_1b0);
    FUN_0018c3d4(&local_188);
    local_1f8 = puVar1;
    FUN_0018b1a0(&local_1f8);
    uVar7 = FUN_001ef168(param_2);
    local_1f0[0] = 0;
    uStack_1d8 = 0x10;
    local_1f8 = puVar1;
    local_1e0 = local_1f0;
    FUN_0018b070(&local_1f8,uVar7,0xffffffffffffffff);
    FUN_0018c3a4(&local_188);
    uVar7 = FUN_00186ea0(&local_188,&DAT_0413c0f9);
    uVar7 = FUN_00186ea0(uVar7,&DAT_040cceb3);
    uVar7 = FUN_0018c0b0(uVar7,&local_1f8);
    uVar7 = FUN_00186ea0(uVar7,&DAT_040cceb3);
    FUN_00186ea0(uVar7,&DAT_0413c0f9);
    local_1a8[0] = 0;
    uStack_190 = 0x10;
    local_1b0 = puVar1;
    local_198 = local_1a8;
    FUN_0018b070(&local_1b0,local_180,0xffffffffffffffff);
    FUN_00189050(&local_1b0,&local_1b8);
    pcVar4 = local_1b8;
    uVar7 = *(undefined8 *)(param_1 + 0x88);
    sVar8 = strlen(local_1b8);
    FUN_004044c0(param_1 + 0x80,uVar7,pcVar4,pcVar4 + sVar8,sVar8);
    FUN_00189128(local_1b8);
    local_1b0 = puVar1;
    FUN_0018b1a0(&local_1b0);
    FUN_0018c3d4(&local_188);
    local_1f8 = puVar1;
    FUN_0018b1a0(&local_1f8);
    (**(code **)(*param_2 + 0x30))
              (param_2,((*(long *)(param_1 + 0x70) - *(long *)(param_1 + 0x68)) +
                       *(long *)(param_1 + 0x50) + *(long *)(param_1 + 0x88)) -
                       *(long *)(param_1 + 0x80));
  }
  return;
}

