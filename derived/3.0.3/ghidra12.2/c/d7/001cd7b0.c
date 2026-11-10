
void FUN_001cd7b0(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  bool bVar6;
  uint *puVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  undefined1 auStack_38 [8];
  
  *param_1 = (long)(PTR_DAT_04bcc6b8 + 0x10);
  puVar4 = PTR_DAT_04bcb910;
  puVar3 = PTR_DAT_04bcb908;
  puVar2 = PTR_DAT_04bcb900;
  plVar11 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar7;
    if (uVar1 != 0) {
      lVar8 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar11 = (long *)(*(long *)(lVar8 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  FUN_0019c4ac(*(undefined8 *)(*plVar11 + 0x10));
  if ((char)param_1[4] != '\0') {
    (**(code **)(*param_1 + 0x30))(param_1);
  }
  *(undefined1 *)(param_1 + 0x1c) = 1;
  plVar11 = (long *)(puVar2 + 0x28);
  if (*puVar3 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar4);
    uVar1 = *puVar7;
    if (uVar1 != 0) {
      lVar8 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar11 = (long *)(*(long *)(lVar8 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar11 == 0) || (lVar8 = *(long *)(*plVar11 + 0x10), lVar8 == 0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  plVar10 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  (**(code **)(*param_1 + 0x88))(param_1);
  plVar11 = (long *)param_1[0x13];
  while (plVar11 != param_1 + 0x14) {
    if ((long *)plVar11[0x17] != (long *)0x0) {
      (**(code **)(*(long *)plVar11[0x17] + 8))();
    }
    plVar5 = (long *)plVar11[1];
    plVar12 = plVar11;
    if ((long *)plVar11[1] == (long *)0x0) {
      do {
        plVar11 = (long *)plVar12[2];
        bVar6 = (long *)*plVar11 != plVar12;
        plVar12 = plVar11;
      } while (bVar6);
    }
    else {
      do {
        plVar11 = plVar5;
        plVar5 = (long *)*plVar11;
      } while ((long *)*plVar11 != (long *)0x0);
    }
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  FUN_00187810(auStack_38);
  FUN_001cda60(param_1,auStack_38,1);
  if ((long *)param_1[0x2d] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x2d] + 8))();
  }
  (**(code **)(*plVar10 + 0x20))(plVar10);
  FUN_0018ac30(param_1 + 0x2e);
  FUN_001dc318(param_1 + 0x2a,param_1[0x2b]);
  if (param_1[0x27] != 0) {
    param_1[0x28] = param_1[0x27];
    FUN_00187e4c();
  }
  FUN_001dc354(param_1 + 0x24,param_1[0x25]);
  FUN_001dc390(param_1 + 0x21,param_1[0x22]);
  FUN_001bade4(param_1 + 0x1d);
  if (param_1[0x18] != 0) {
    lVar8 = param_1[0x16];
    plVar11 = (long *)param_1[0x17];
    param_1[0x18] = 0;
    lVar9 = *plVar11;
    *(undefined8 *)(lVar9 + 8) = *(undefined8 *)(lVar8 + 8);
    **(long **)(lVar8 + 8) = lVar9;
    while (plVar11 != param_1 + 0x16) {
      plVar11 = (long *)plVar11[1];
      FUN_00187e4c();
    }
  }
  FUN_001dc3cc(param_1 + 0x13,param_1[0x14]);
  FUN_001d66c0(param_1 + 8);
  FUN_001a5b40(param_1);
  return;
}

