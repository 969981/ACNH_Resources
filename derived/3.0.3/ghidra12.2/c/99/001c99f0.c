
long FUN_001c99f0(long param_1)

{
  long *plVar1;
  uint uVar2;
  short sVar3;
  undefined *puVar4;
  long *plVar5;
  uint *puVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  
  puVar4 = PTR_DAT_04bcb900;
  plVar11 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar6;
    if (uVar2 != 0) {
      lVar7 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar11 = (long *)(*(long *)(lVar7 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  if ((*plVar11 == 0) || (lVar7 = *(long *)(*plVar11 + 0x10), lVar7 == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  plVar11 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  sVar3 = *(short *)(param_1 + 0x40);
  if ((int)(short)(sVar3 - *(short *)(param_1 + 0x50)) < (int)(uint)*(ushort *)(param_1 + 0x20)) {
    plVar10 = (long *)(param_1 + 0x10);
    if ((long *)*plVar10 != (long *)0x0) {
      plVar8 = plVar10;
      plVar5 = (long *)*plVar10;
      do {
        while (plVar9 = plVar5, 0 < (short)(sVar3 - (short)plVar9[5])) {
          plVar1 = plVar9 + 1;
          plVar9 = plVar8;
          plVar5 = (long *)*plVar1;
          if ((long *)*plVar1 == (long *)0x0) goto LAB_001c9aec;
        }
        plVar8 = plVar9;
        plVar5 = (long *)*plVar9;
      } while ((long *)*plVar9 != (long *)0x0);
LAB_001c9aec:
      if ((plVar9 != plVar10) && ((short)((short)plVar9[5] - sVar3) < 1)) {
        *(short *)(param_1 + 0x40) = sVar3 + 1;
        lVar7 = plVar9[6];
        goto LAB_001c9b0c;
      }
    }
  }
  lVar7 = 0;
LAB_001c9b0c:
  (**(code **)(*plVar11 + 0x20))(plVar11);
  return lVar7;
}

