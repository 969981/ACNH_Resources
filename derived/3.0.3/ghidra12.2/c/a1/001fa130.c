
void FUN_001fa130(undefined8 param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  
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
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  plVar6 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  plVar7 = *(long **)PTR_DAT_04bcc9b8;
  if ((plVar7 != (long *)0x0) && (uVar4 = (**(code **)(*plVar7 + 0x28))(plVar7), (uVar4 & 1) != 0))
  {
    (**(code **)(*plVar7 + 0x20))(plVar7,param_1);
  }
                    /* WARNING: Could not recover jumptable at 0x001fa21c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return;
}

