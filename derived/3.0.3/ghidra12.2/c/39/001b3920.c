
void FUN_001b3920(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined2 uVar3;
  char cVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  uint *puVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  undefined *puVar14;
  int iVar15;
  int iVar16;
  ulong uVar17;
  long *plVar18;
  uint uVar19;
  undefined1 auStack_168 [24];
  undefined *local_150;
  undefined1 local_148 [16];
  undefined1 *local_138;
  undefined8 uStack_130;
  undefined *local_128;
  undefined1 local_120 [16];
  undefined1 *local_110;
  undefined8 uStack_108;
  undefined1 auStack_f0 [16];
  long local_e0;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined4 local_c0;
  char local_68;
  undefined1 local_67;
  
  puVar9 = PTR_DAT_04bcb910;
  puVar8 = PTR_DAT_04bcb908;
  puVar7 = PTR_DAT_04bcb900;
  plVar11 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar10 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar19 = *puVar10;
    if (uVar19 != 0) {
      lVar13 = **(long **)(puVar7 + 0xa0);
      if ((ulong)((*(long **)(puVar7 + 0xa0))[1] - lVar13 >> 3) <= (ulong)uVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar11 = (long *)(*(long *)(lVar13 + (ulong)uVar19 * 8) + 0x10);
    }
  }
  puVar6 = PTR_DAT_04bc0ec8;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  local_120[0] = 0;
  local_110 = local_120;
  uStack_108 = 0x10;
  local_128 = puVar1;
  FUN_0018b070(&local_128,
               *(undefined8 *)
                (**(long **)(*(long *)(*(long *)(*plVar11 + 0x10) + 0xe8) + 0x1e0) + 8),
               0xffffffffffffffff);
  FUN_001b80c0(auStack_d0,&local_128);
  local_128 = puVar1;
  FUN_0018b1a0(&local_128);
  uVar3 = *(undefined2 *)PTR_DAT_04bcc470;
  if (local_68 == '\0') {
    FUN_001b8590(auStack_d0);
    FUN_001e17d0(local_c8,uVar3);
  }
  else {
    FUN_001e17d0(local_c8,uVar3);
  }
  if (local_68 == '\0') {
    local_67 = 0;
    FUN_001b8590(auStack_d0);
  }
  local_67 = 0;
  local_c0 = 3;
  plVar11 = (long *)FUN_00185a6c(0x38);
  if (plVar11 != (long *)0x0) {
    *plVar11 = (long)(PTR_DAT_04bcbc48 + 0x10);
    *(undefined4 *)(plVar11 + 1) = 1;
    puVar1 = PTR_DAT_04bcc018;
    *(undefined1 *)((long)plVar11 + 0xc) = 0;
    *plVar11 = (long)(puVar1 + 0x10);
    uVar12 = FUN_00196a18();
    FUN_00196a24(plVar11,uVar12,0);
  }
  FUN_00197218(auStack_f0);
  local_148[0] = 0;
  local_138 = local_148;
  uStack_130 = 0x10;
  local_150 = puVar6 + 0x10;
  FUN_0018b070(&local_150,&DAT_0406f9b4,0xffffffffffffffff);
  FUN_00196c40(&local_128,&local_150);
  FUN_001975b8(auStack_f0,&local_128);
  FUN_00196ce0(&local_128);
  local_150 = puVar6 + 0x10;
  FUN_0018b1a0(&local_150);
  FUN_00193030(plVar11,local_e0,*(undefined8 *)(local_e0 + 0x18),0xffffffffffffffff);
  puVar6 = PTR_DAT_04bcc460;
  puVar1 = PTR_DAT_04bcbb78;
  if (*(int *)PTR_DAT_04bcc460 != 0) {
    uVar19 = 0;
    do {
      plVar18 = (long *)(puVar7 + 0x18);
      if (*puVar8 != '\0') {
        puVar10 = (uint *)FUN_03876070(*(undefined8 *)puVar9);
        uVar2 = *puVar10;
        if (uVar2 != 0) {
          lVar13 = **(long **)(puVar7 + 0xa0);
          if ((ulong)((*(long **)(puVar7 + 0xa0))[1] - lVar13 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar18 = (long *)(*(long *)(lVar13 + (ulong)uVar2 * 8) + 0x10);
        }
      }
      if ((*plVar18 == 0) || (lVar13 = *(long *)(*plVar18 + 0x10), lVar13 == 0)) {
        plVar18 = (long *)0x0;
        uVar17 = (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 8);
        if (*puVar8 != '\0') goto LAB_001b3be4;
LAB_001b3b20:
        puVar14 = puVar1 + uVar17 * 0x2a8 + 0x18;
      }
      else {
        plVar18 = *(long **)(lVar13 + 0xe8);
        uVar17 = (ulong)*(uint *)(*(long *)(param_1 + 0x20) + 8);
        if (*puVar8 == '\0') goto LAB_001b3b20;
LAB_001b3be4:
        puVar10 = (uint *)FUN_03876070(*(undefined8 *)puVar9);
        if (*puVar10 == 0) goto LAB_001b3b20;
        puVar14 = (undefined *)(*(long *)(puVar1 + uVar17 * 0x2a8 + 0x10) + (ulong)*puVar10 * 0x148)
        ;
      }
      (**(code **)(*plVar18 + 0x98))
                (auStack_168,plVar18,*(undefined4 *)(puVar14 + 0x140),auStack_d0,plVar11);
      uVar19 = uVar19 + 1;
    } while (uVar19 < *(uint *)puVar6);
  }
  plVar18 = plVar11 + 1;
  iVar16 = (int)*plVar18;
  iVar15 = (int)*plVar18 + -1;
  if (iVar16 == (int)*plVar18) {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
    if (bVar5) {
      *(int *)plVar18 = iVar15;
      cVar4 = ExclusiveMonitorsStatus();
    }
    if (cVar4 == '\0') {
LAB_001b3c40:
      if ((iVar15 == 0) && (*(char *)((long)plVar11 + 0xc) == '\0')) {
        *(undefined1 *)((long)plVar11 + 0xc) = 1;
        (**(code **)(*plVar11 + 8))(plVar11);
      }
      FUN_00197350(auStack_f0);
      FUN_001b8504(auStack_d0);
      return;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  do {
    lVar13 = *plVar18;
    iVar15 = iVar16 + -1;
    if ((int)lVar13 == iVar16) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(plVar18,0x10);
      if (bVar5) {
        *(int *)plVar18 = iVar15;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') goto LAB_001b3c40;
    }
    else {
      ClearExclusiveLocal();
    }
    iVar16 = (int)lVar13;
  } while( true );
}

