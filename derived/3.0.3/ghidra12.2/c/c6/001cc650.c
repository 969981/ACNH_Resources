
long FUN_001cc650(long param_1,long param_2)

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
    plVar9 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    plVar8 = *(long **)(param_1 + 0x10);
  }
  else {
    plVar9 = (long *)(*(long *)(lVar5 + 0x10) + 0x78);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar8 = *(long **)(param_1 + 0x10);
  }
  if (plVar8 != (long *)0x0) {
    plVar6 = (long *)(param_1 + 0x10);
    do {
      while (plVar7 = plVar8, 0 < (short)(*(short *)(param_2 + 8) - (short)plVar7[5])) {
        plVar1 = plVar7 + 1;
        plVar7 = plVar6;
        plVar8 = (long *)*plVar1;
        if ((long *)*plVar1 == (long *)0x0) goto LAB_001cc750;
      }
      plVar6 = plVar7;
      plVar8 = (long *)*plVar7;
    } while ((long *)*plVar7 != (long *)0x0);
LAB_001cc750:
    if ((plVar7 != (long *)(param_1 + 0x10)) &&
       ((short)((short)plVar7[5] - *(short *)(param_2 + 8)) < 1)) {
      lVar5 = plVar7[6];
      goto LAB_001cc770;
    }
  }
  lVar5 = 0;
LAB_001cc770:
  (**(code **)(*plVar9 + 0x20))(plVar9);
  return lVar5;
}

