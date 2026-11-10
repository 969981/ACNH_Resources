
void FUN_0020aa20(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x18);
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
      plVar6 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  if ((*plVar6 == 0) || (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 == 0)) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(lVar5 + 0xe8);
  }
  FUN_001fc350(param_1,10,uVar4);
  puVar2 = PTR_DAT_04bccc30;
  param_1[0xd] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  lVar5 = FUN_00185a6c(0xd0);
  if (lVar5 != 0) {
    FUN_002098d4(lVar5);
  }
  FUN_001fd0dc(param_1,lVar5);
  return;
}

