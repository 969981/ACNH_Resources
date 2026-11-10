
undefined8 FUN_0020b5c0(long param_1,ulong param_2)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  bool bVar4;
  uint *puVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  undefined8 uVar10;
  long *plVar11;
  long *plVar12;
  
  puVar3 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar5;
    if (uVar2 != 0) {
      lVar7 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar6 = (long *)(*(long *)(lVar7 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar6 == 0) || (lVar7 = *(long *)(*plVar6 + 0x10), lVar7 == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  plVar11 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  plVar8 = (long *)(param_1 + 0xd8);
  plVar6 = (long *)*plVar8;
  if (plVar6 != (long *)0x0) {
    plVar9 = plVar6;
    plVar12 = plVar8;
    do {
      plVar1 = plVar9;
      if ((ulong)plVar9[4] < param_2) {
        plVar1 = plVar12;
        plVar9 = plVar9 + 1;
      }
      plVar9 = (long *)*plVar9;
      plVar12 = plVar1;
    } while (plVar9 != (long *)0x0);
    if ((plVar1 != plVar8) && ((ulong)plVar1[4] <= param_2)) {
      plVar8 = (long *)plVar1[1];
      if ((long *)plVar1[1] == (long *)0x0) {
        plVar8 = plVar1;
        do {
          plVar9 = (long *)plVar8[2];
          bVar4 = (long *)*plVar9 != plVar8;
          plVar8 = plVar9;
        } while (bVar4);
      }
      else {
        do {
          plVar9 = plVar8;
          plVar8 = (long *)*plVar9;
        } while ((long *)*plVar9 != (long *)0x0);
      }
      if (*(long **)(param_1 + 0xd0) == plVar1) {
        *(long **)(param_1 + 0xd0) = plVar9;
      }
      *(long *)(param_1 + 0xe0) = *(long *)(param_1 + 0xe0) + -1;
      FUN_00192390(plVar6,plVar1);
      FUN_00187e4c(plVar1);
      uVar10 = 1;
      goto LAB_0020b6b4;
    }
  }
  uVar10 = 0;
LAB_0020b6b4:
  (**(code **)(*plVar11 + 0x20))(plVar11);
  return uVar10;
}

