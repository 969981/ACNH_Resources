
void FUN_0040c608(long param_1,undefined8 param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      lVar5 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar6 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar6 == 0) || (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 == 0)) {
    plVar6 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    plVar4 = *(long **)(param_1 + 0x88);
  }
  else {
    plVar6 = (long *)(*(long *)(lVar5 + 0x10) + 0x78);
    (**(code **)(*plVar6 + 0x10))(plVar6);
    plVar4 = *(long **)(param_1 + 0x88);
  }
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x10))(plVar4,param_2);
  }
                    /* WARNING: Could not recover jumptable at 0x0040c6f8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return;
}

