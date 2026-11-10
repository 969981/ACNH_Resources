
long FUN_001ce1c0(long param_1,long param_2,undefined4 param_3,ulong param_4)

{
  uint uVar1;
  char cVar2;
  long *plVar3;
  undefined *puVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  int iVar7;
  undefined4 uVar8;
  uint *puVar9;
  ulong uVar10;
  long lVar11;
  undefined *puVar12;
  long *plVar13;
  undefined8 uVar14;
  long *plVar15;
  long *plVar16;
  long *plVar17;
  undefined1 auStack_188 [144];
  undefined1 auStack_f8 [144];
  undefined1 local_68;
  
  puVar4 = PTR_DAT_04bcb908;
  puVar12 = PTR_DAT_04bcb900;
  plVar13 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar9;
    if (uVar1 != 0) {
      lVar11 = **(long **)(puVar12 + 0xa0);
      if ((ulong)((*(long **)(puVar12 + 0xa0))[1] - lVar11 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar13 = (long *)(*(long *)(lVar11 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar13 == 0) || (lVar11 = *(long *)(*plVar13 + 0x10), lVar11 == 0)) {
    lVar11 = 0;
  }
  else {
    lVar11 = *(long *)(lVar11 + 0x10);
  }
  plVar13 = (long *)(lVar11 + 0x78);
  (**(code **)(*plVar13 + 0x10))(plVar13);
  FUN_001e1500(auStack_188);
  if (*(char *)(param_2 + 0x68) == '\0') {
    FUN_001b8590(param_2);
    cVar2 = *(char *)(param_2 + 0x6a);
  }
  else {
    cVar2 = *(char *)(param_2 + 0x6a);
  }
  if (cVar2 == '\0') {
    lVar11 = 0;
    goto LAB_001ce4c8;
  }
  if (*(char *)(param_2 + 0x68) == '\0') {
    FUN_001b8590(param_2);
  }
  uVar14 = *(undefined8 *)(param_2 + 8);
  uVar5 = FUN_001b8fa0(param_2,&DAT_0410a683,0);
  FUN_001e1500(auStack_f8);
  FUN_001e15a8(auStack_f8,uVar14);
  plVar16 = (long *)(param_1 + 0xa0);
  plVar17 = (long *)*plVar16;
  local_68 = uVar5;
  if (plVar17 == (long *)0x0) {
LAB_001ce32c:
    FUN_001e1868(auStack_f8);
  }
  else {
    plVar15 = plVar16;
    do {
      uVar10 = FUN_001dc410(plVar17 + 4,auStack_f8);
      plVar3 = plVar17 + 1;
      if ((uVar10 & 1) == 0) {
        plVar15 = plVar17;
        plVar3 = plVar17;
      }
      plVar17 = (long *)*plVar3;
    } while (plVar17 != (long *)0x0);
    if ((plVar15 == plVar16) || (uVar10 = FUN_001dc410(auStack_f8,plVar15 + 4), (uVar10 & 1) != 0))
    goto LAB_001ce32c;
    lVar11 = plVar15[0x17];
    FUN_001e1868(auStack_f8);
    if (lVar11 != 0) goto LAB_001ce4c8;
  }
  puVar12 = PTR_DAT_04bcbb78;
  if ((param_4 & 1) == 0) {
    iVar7 = FUN_001b8fa0(param_2,&DAT_0410a6c4,0xffffffff);
  }
  else {
    uVar1 = *(uint *)(param_1 + 8);
    if (*puVar4 == '\0') {
LAB_001ce3b4:
      puVar12 = puVar12 + (ulong)uVar1 * 0x2a8 + 0x18;
    }
    else {
      puVar9 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      if (*puVar9 == 0) goto LAB_001ce3b4;
      puVar12 = (undefined *)
                (*(long *)(puVar12 + (ulong)uVar1 * 0x2a8 + 0x10) + (ulong)*puVar9 * 0x148);
    }
    iVar7 = *(int *)(puVar12 + 0x140);
  }
  (**(code **)(**(long **)(param_1 + 0x168) + 0x48))(*(long **)(param_1 + 0x168),iVar7);
  lVar11 = FUN_00185a6c(0x4c8);
  if (lVar11 != 0) {
    uVar8 = (**(code **)(**(long **)(param_1 + 0x168) + 0x10))();
    FUN_001c4d1c(lVar11,param_1,param_2,param_1 + 0xf8,uVar8);
  }
  *(short *)(lVar11 + 0xc0) = (short)param_3;
  uVar14 = FUN_001b8fa0(param_2,&DAT_0410a683,0);
  FUN_001ce5b4(param_1 + 0x98,lVar11,uVar14);
  if (iVar7 != 0) {
    plVar16 = *(long **)(param_1 + 0x18);
    uVar6 = *(undefined2 *)(lVar11 + 0xc0);
    if (*(char *)(lVar11 + 0x78) == '\0') {
      FUN_001b8590(lVar11 + 0x10);
    }
    (**(code **)(*plVar16 + 0x30))(plVar16,iVar7,uVar6,*(undefined8 *)(lVar11 + 0x18));
  }
  if (((param_4 & 1) != 0) &&
     ((**(code **)(**(long **)(param_1 + 0x18) + 0x18))
                (*(long **)(param_1 + 0x18),param_2,iVar7,param_3), iVar7 != 0)) {
    if (*(char *)(param_2 + 0x68) == '\0') {
      FUN_001b8590(param_2);
    }
    uVar6 = FUN_001e14f8(*(undefined8 *)(param_2 + 8));
    *(undefined2 *)(param_1 + 0x1b8) = uVar6;
  }
LAB_001ce4c8:
  FUN_001e1868(auStack_188);
  (**(code **)(*plVar13 + 0x20))(plVar13);
  return lVar11;
}

