
long FUN_0020a130(long param_1,ushort param_2,int param_3)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  
  puVar3 = PTR_DAT_04bcb900;
  plVar9 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      lVar5 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar9 = (long *)(*(long *)(lVar5 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar9 == 0) || (lVar5 = *(long *)(*plVar9 + 0x10), lVar5 == 0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  plVar9 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar9 + 0x10))(plVar9);
  lVar5 = param_1 + 0x20;
  if (param_3 != 1) {
    lVar5 = param_1 + 8;
  }
  plVar6 = (long *)(lVar5 + 8);
  plVar8 = (long *)*plVar6;
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar6;
    do {
      plVar1 = plVar8;
      if (*(ushort *)(plVar8 + 4) < param_2) {
        plVar1 = plVar7;
        plVar8 = plVar8 + 1;
      }
      plVar8 = (long *)*plVar8;
      plVar7 = plVar1;
    } while (plVar8 != (long *)0x0);
    if ((plVar1 != plVar6) && (*(ushort *)(plVar1 + 4) <= param_2)) {
      lVar5 = plVar1[5];
      goto LAB_0020a23c;
    }
  }
  lVar5 = 0;
LAB_0020a23c:
  (**(code **)(*plVar9 + 0x20))(plVar9);
  return lVar5;
}

