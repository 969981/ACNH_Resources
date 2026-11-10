
void FUN_001d1a30(long param_1,ulong *param_2)

{
  uint uVar1;
  undefined *puVar2;
  long *plVar3;
  bool bVar4;
  uint *puVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  ulong uVar9;
  long *plVar10;
  
  puVar2 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar5;
    if (uVar1 != 0) {
      lVar6 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar6 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 0x10), lVar6 == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  plVar10 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar10 + 0x10))(plVar10);
  plVar7 = *(long **)(param_1 + 0x20);
  while (plVar7 != (long *)(param_1 + 0x28)) {
    uVar9 = *(ulong *)(*(long *)(plVar7[5] + 0x1f0) + 0x18);
    if ((uVar9 != 0) && (*param_2 < uVar9)) {
      *(ulong *)(*(long *)(plVar7[5] + 0x1f0) + 0x18) = *param_2;
    }
    plVar8 = plVar7;
    plVar3 = (long *)plVar7[1];
    if ((long *)plVar7[1] == (long *)0x0) {
      do {
        plVar7 = (long *)plVar8[2];
        bVar4 = (long *)*plVar7 != plVar8;
        plVar8 = plVar7;
      } while (bVar4);
    }
    else {
      do {
        plVar7 = plVar3;
        plVar3 = (long *)*plVar7;
      } while ((long *)*plVar7 != (long *)0x0);
    }
  }
                    /* WARNING: Could not recover jumptable at 0x001d1b00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar10 + 0x20))(plVar10);
  return;
}

