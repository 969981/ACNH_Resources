
bool FUN_001985f8(long param_1)

{
  uint uVar1;
  int iVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  undefined4 local_3c;
  undefined1 auStack_38 [24];
  
  puVar3 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      lVar5 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) {
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
  iVar2 = *(int *)(param_1 + 0x14);
  if (iVar2 != 1) {
    if (iVar2 - 2U < 3) {
      FUN_001984a0(param_1);
    }
    local_3c = 0x80010001;
    FUN_0018aa70(auStack_38,&local_3c);
    FUN_00197e40(param_1,1,auStack_38,0);
  }
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return iVar2 != 1;
}

