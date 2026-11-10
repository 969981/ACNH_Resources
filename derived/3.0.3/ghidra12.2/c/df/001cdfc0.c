
undefined8 FUN_001cdfc0(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  bool bVar4;
  ulong uVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  uVar5 = FUN_001baef0(param_1[3] + 0xf0,(int)param_1[1],(char)param_1[4]);
  if ((uVar5 & 1) != 0) {
    *(undefined1 *)(param_1 + 4) = 0;
  }
  puVar2 = PTR_DAT_04bcb900;
  plVar9 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar6;
    if (uVar1 != 0) {
      lVar7 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar9 = (long *)(*(long *)(lVar7 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar9 == 0) || (lVar7 = *(long *)(*plVar9 + 0x10), lVar7 == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  plVar10 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  (**(code **)(*param_1 + 0x88))(param_1);
  plVar9 = (long *)param_1[0x13];
  while (plVar9 != param_1 + 0x14) {
    plVar3 = (long *)plVar9[1];
    plVar8 = plVar9;
    if ((long *)plVar9[1] == (long *)0x0) {
      do {
        plVar11 = (long *)plVar8[2];
        bVar4 = (long *)*plVar11 != plVar8;
        plVar8 = plVar11;
      } while (bVar4);
    }
    else {
      do {
        plVar11 = plVar3;
        plVar3 = (long *)*plVar11;
      } while ((long *)*plVar11 != (long *)0x0);
    }
    (**(code **)(*(long *)plVar9[0x17] + 0xb0))((long *)plVar9[0x17],4);
    plVar9 = plVar11;
  }
  (**(code **)(*param_1 + 0x90))(param_1);
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return 1;
}

