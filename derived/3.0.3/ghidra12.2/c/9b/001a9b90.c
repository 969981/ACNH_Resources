
undefined8 FUN_001a9b90(long param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  long *plVar11;
  long lVar12;
  undefined *local_98;
  undefined1 local_90 [16];
  undefined1 *local_80;
  undefined8 uStack_78;
  undefined1 uStack_69;
  undefined **local_68;
  
  puVar3 = PTR_DAT_04bcb908;
  puVar1 = PTR_DAT_04bcb900;
  plVar11 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      lVar9 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar11 = (long *)(*(long *)(lVar9 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar11 == 0) || (lVar9 = *(long *)(*plVar11 + 0x10), lVar9 == 0)) {
    plVar11 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    lVar9 = *(long *)(param_1 + 0x10);
  }
  else {
    plVar11 = (long *)(*(long *)(lVar9 + 0x10) + 0x78);
    (**(code **)(*plVar11 + 0x10))(plVar11);
    lVar9 = *(long *)(param_1 + 0x10);
  }
  if ((lVar9 == 0) || (iVar4 = FUN_001b8fa0(param_2,"RVCID",0), iVar4 == 0)) {
LAB_001a9ea4:
    uVar10 = 0;
  }
  else {
    FUN_00187aac();
    uVar10 = FUN_00187db0();
    FUN_001896d4(uVar10,2);
    FUN_00187aac();
    uVar10 = FUN_00187db0();
    FUN_001896e4(uVar10,2);
    *(int *)(param_1 + 0x148) = *(int *)(param_1 + 0x148) + 1;
    FUN_001b8e80(&local_98,param_2,&DAT_0410a695);
    plVar8 = (long *)(puVar1 + 0x18);
    if (*puVar3 != '\0') {
      puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar2 = *puVar6;
      if (uVar2 != 0) {
        lVar9 = **(long **)(puVar1 + 0xa0);
        if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar8 = (long *)(*(long *)(lVar9 + (ulong)uVar2 * 8) + 0x10);
      }
    }
    lVar9 = (**(code **)(**(long **)(*(long *)(*plVar8 + 0x10) + 0xe8) + 0x80))();
    if ((((*(char *)(lVar9 + 0x10) != '\0') &&
         (uVar7 = FUN_0018b44c(*(undefined8 *)(param_1 + 0x180),&DAT_0407ebb1), (uVar7 & 1) == 0))
        && (*(short *)(param_1 + 400) != 0)) && (*(char *)(param_1 + 0x192) != '\0')) {
      FUN_00187aac();
      uVar10 = FUN_00187db0();
      FUN_001896d4(uVar10,2);
      FUN_00187aac();
      uVar10 = FUN_00187db0();
      FUN_001896e4(uVar10,2);
      FUN_001b8e80(&local_98,param_2,&DAT_0410a6d5,1);
      local_90[0] = 0;
      uStack_78 = 0x10;
      puVar1 = PTR_DAT_04bc0ec8 + 0x10;
      local_98 = puVar1;
      local_80 = local_90;
      FUN_0018b070(&local_98,&DAT_0410a6bc,0xffffffffffffffff);
      FUN_001dd950(param_2 + 0x30,&local_98);
      local_98 = puVar1;
      FUN_0018b1a0(&local_98);
      local_90[0] = 0;
      uStack_78 = 0x10;
      local_98 = puVar1;
      local_80 = local_90;
      FUN_0018b070(&local_98,&DAT_0410a6bc,0xffffffffffffffff);
      local_68 = &local_98;
      lVar9 = FUN_001dda60(param_2 + 0x30,&local_98,PTR_piecewise_construct_04bcbf80,&local_68,
                           &uStack_69);
      FUN_00189504(lVar9 + 0x48,param_1 + 0x168);
      local_98 = puVar1;
      FUN_0018b1a0(&local_98);
      FUN_001b8e80(&local_98,param_2,&DAT_0410a6cb,*(undefined2 *)(param_1 + 400));
    }
    lVar9 = param_1 + 0x38;
    for (lVar12 = *(long *)(param_1 + 0x40); lVar12 != lVar9; lVar12 = *(long *)(lVar12 + 8)) {
      iVar4 = FUN_001b8fa0(lVar12 + 0x10,"RVCID",0);
      iVar5 = FUN_001b8fa0(param_2,"RVCID",0);
      if (iVar4 == iVar5) {
        if (lVar12 != lVar9) goto LAB_001a9ea4;
        break;
      }
    }
    iVar4 = FUN_001b8fa0(param_2,"RVCID",0);
    for (lVar12 = *(long *)(param_1 + 0x60); lVar12 != param_1 + 0x58;
        lVar12 = *(long *)(lVar12 + 8)) {
      iVar5 = FUN_001b8fa0(lVar12 + 0x18,"RVCID",0);
      if (iVar5 == iVar4) goto LAB_001a9ea4;
    }
    iVar4 = FUN_001b8fa0(param_2,"RVCID",0);
    for (lVar12 = *(long *)(param_1 + 0x80); lVar12 != param_1 + 0x78;
        lVar12 = *(long *)(lVar12 + 8)) {
      iVar5 = FUN_001b8fa0(lVar12 + 0x18,"RVCID",0);
      if (iVar5 == iVar4) goto LAB_001a9ea4;
    }
    plVar8 = (long *)FUN_00187df4(0x80);
    *plVar8 = 0;
    FUN_001b8358(plVar8 + 2,param_2);
    plVar8[1] = lVar9;
    lVar9 = *(long *)(param_1 + 0x38);
    *plVar8 = lVar9;
    *(long **)(lVar9 + 8) = plVar8;
    *(long **)(param_1 + 0x38) = plVar8;
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
    uVar10 = 1;
  }
  (**(code **)(*plVar11 + 0x20))(plVar11);
  return uVar10;
}

