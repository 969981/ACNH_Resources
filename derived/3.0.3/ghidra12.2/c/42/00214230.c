
uint FUN_00214230(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  
  puVar1 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar3;
    if (uVar2 != 0) {
      lVar5 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar6 = (long *)(*(long *)(lVar5 + (ulong)uVar2 * 8) + 0x20);
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
  uVar2 = 0;
  if ((*(long *)(param_1 + 0x10) != 0) && (*(char *)(param_1 + 0x18) == '\0')) {
    plVar4 = *(long **)(*(long *)(param_1 + 0x10) + 0x88);
    if (plVar4 == (long *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*plVar4 + 0x58))();
    }
  }
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return uVar2 & 1;
}

