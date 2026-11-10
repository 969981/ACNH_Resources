
void FUN_001c02c0(long param_1,long *param_2)

{
  long *****ppppplVar1;
  long ****pppplVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  uint *puVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *****local_68;
  long *****local_60;
  long local_58;
  
  puVar7 = PTR_DAT_04bcb910;
  puVar6 = PTR_DAT_04bcb908;
  puVar5 = PTR_DAT_04bcb900;
  plVar12 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar8;
    if (uVar3 != 0) {
      lVar10 = **(long **)(puVar5 + 0xa0);
      if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar12 = (long *)(*(long *)(lVar10 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  if ((*plVar12 == 0) || (lVar10 = *(long *)(*plVar12 + 0x10), lVar10 == 0)) {
    plVar12 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    lVar10 = param_2[2];
  }
  else {
    plVar12 = (long *)(*(long *)(lVar10 + 0x10) + 0x78);
    (**(code **)(*plVar12 + 0x10))(plVar12);
    lVar10 = param_2[2];
  }
  if (lVar10 != 0) {
    lVar10 = *param_2;
    plVar9 = (long *)param_2[1];
    lVar11 = *plVar9;
    *(undefined8 *)(lVar11 + 8) = *(undefined8 *)(lVar10 + 8);
    **(long **)(lVar10 + 8) = lVar11;
    param_2[2] = 0;
    while (plVar9 != param_2) {
      plVar13 = (long *)plVar9[1];
      (**(code **)plVar9[2])();
      FUN_00187e4c(plVar9);
      plVar9 = plVar13;
    }
  }
  plVar9 = (long *)(puVar5 + 0x18);
  if (*puVar6 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)puVar7);
    uVar3 = *puVar8;
    if (uVar3 != 0) {
      lVar10 = **(long **)(puVar5 + 0xa0);
      if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar9 = (long *)(*(long *)(lVar10 + (ulong)uVar3 * 8) + 0x10);
    }
  }
  puVar5 = PTR_DAT_04bcc2e0;
  if (((*plVar9 != 0) && (*(long *)(*plVar9 + 0x10) != 0 && *(long *)PTR_DAT_04bcc2e0 != 0)) &&
     (lVar10 = *(long *)(param_1 + 0x2c8), lVar10 != *(long *)(param_1 + 0x2d0))) {
    do {
      local_58 = 0;
      local_68 = (long *****)&local_68;
      local_60 = (long *****)&local_68;
      (**(code **)(**(long **)puVar5 + 0x10))(*(long **)puVar5,&local_68);
      while (ppppplVar1 = local_60, local_58 != 0) {
        uVar4 = *(undefined2 *)(lVar10 + 4);
        if (*(char *)(local_60 + 0xf) == '\0') {
          FUN_001b8590(local_60 + 2);
        }
        FUN_001e17d0(ppppplVar1[3],uVar4);
        *(undefined1 *)((long)ppppplVar1 + 0x79) = 0;
        ppppplVar1 = local_60 + 2;
        plVar9 = (long *)FUN_00187df4(0x80);
        *plVar9 = 0;
        FUN_001b8358(plVar9 + 2,ppppplVar1);
        ppppplVar1 = local_60;
        plVar9[1] = (long)param_2;
        lVar11 = *param_2;
        *plVar9 = lVar11;
        *(long **)(lVar11 + 8) = plVar9;
        *param_2 = (long)plVar9;
        param_2[2] = param_2[2] + 1;
        pppplVar2 = *local_60;
        pppplVar2[1] = (long ***)local_60[1];
        *local_60[1] = (long ***)pppplVar2;
        local_58 = local_58 + -1;
        (*(code *)*local_60[2])();
        FUN_00187e4c(ppppplVar1);
      }
      lVar10 = lVar10 + 0x10;
    } while (lVar10 != *(long *)(param_1 + 0x2d0));
  }
  (**(code **)(*plVar12 + 0x20))(plVar12);
  return;
}

