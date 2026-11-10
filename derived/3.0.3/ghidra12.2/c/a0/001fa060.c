
void FUN_001fa060(void)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  
  puVar2 = PTR_DAT_04bcb900;
  plVar5 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      lVar4 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar4 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar5 = (long *)(*(long *)(lVar4 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar5 == 0) || (lVar4 = *(long *)(*plVar5 + 0x10), lVar4 == 0)) {
    lVar4 = 0;
  }
  else {
    lVar4 = *(long *)(lVar4 + 0x10);
  }
  plVar5 = (long *)(lVar4 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  if (*(long **)PTR_DAT_04bcc9b8 != (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_04bcc9b8 + 0x18))();
  }
                    /* WARNING: Could not recover jumptable at 0x001fa12c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return;
}

