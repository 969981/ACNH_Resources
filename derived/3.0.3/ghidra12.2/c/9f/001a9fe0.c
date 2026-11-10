
undefined8 FUN_001a9fe0(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  
  puVar2 = PTR_DAT_04bcb900;
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x28);
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
      plVar10 = (long *)(*(long *)(lVar8 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar10 == 0) || (lVar8 = *(long *)(*plVar10 + 0x10), lVar8 == 0)) {
    lVar8 = 0;
  }
  else {
    lVar8 = *(long *)(lVar8 + 0x10);
  }
  plVar10 = (long *)(lVar8 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  iVar5 = FUN_001b8fa0(param_2,"RVCID",0);
  for (lVar8 = *(long *)(param_1 + 0x60); lVar8 != param_1 + 0x58; lVar8 = *(long *)(lVar8 + 8)) {
    iVar6 = FUN_001b8fa0(lVar8 + 0x18,"RVCID",0);
    if (iVar6 == iVar5) goto LAB_001aa224;
  }
  for (lVar8 = *(long *)(param_1 + 0x40); lVar8 != param_1 + 0x38; lVar8 = *(long *)(lVar8 + 8)) {
    iVar5 = FUN_001b8fa0(lVar8 + 0x10,"RVCID",0);
    iVar6 = FUN_001b8fa0(param_2,"RVCID",0);
    if (iVar5 == iVar6) goto LAB_001aa224;
  }
  plVar11 = *(long **)(param_1 + 0x150);
  while (plVar11 != (long *)(param_1 + 0x158)) {
    iVar5 = FUN_001b8fa0(plVar11 + 6,"RVCID",0);
    iVar6 = FUN_001b8fa0(param_2,"RVCID",0);
    if (iVar5 == iVar6) goto LAB_001aa224;
    plVar3 = (long *)plVar11[1];
    plVar12 = plVar11;
    if ((long *)plVar11[1] == (long *)0x0) {
      do {
        plVar11 = (long *)plVar12[2];
        bVar4 = (long *)*plVar11 != plVar12;
        plVar12 = plVar11;
      } while (bVar4);
    }
    else {
      do {
        plVar11 = plVar3;
        plVar3 = (long *)*plVar11;
      } while ((long *)*plVar11 != (long *)0x0);
    }
  }
  for (lVar8 = *(long *)(param_1 + 0x80); lVar8 != param_1 + 0x78; lVar8 = *(long *)(lVar8 + 8)) {
    iVar5 = FUN_001b8fa0(lVar8 + 0x18,"RVCID",0);
    iVar6 = FUN_001b8fa0(param_2,"RVCID",0);
    if ((iVar5 == iVar6) && (*(int *)(lVar8 + 0x90) != -1)) goto LAB_001aa224;
  }
  uVar9 = 1;
LAB_001aa230:
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return uVar9;
LAB_001aa224:
  uVar9 = 0;
  goto LAB_001aa230;
}

