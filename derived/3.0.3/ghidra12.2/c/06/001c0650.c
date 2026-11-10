
uint FUN_001c0650(undefined8 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined *puVar1;
  uint *puVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  undefined4 local_38;
  undefined2 local_34;
  
  puVar1 = PTR_DAT_04bcb900;
  plVar5 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar2 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar4 = *puVar2;
    if (uVar4 != 0) {
      lVar3 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar3 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar5 = (long *)(*(long *)(lVar3 + (ulong)uVar4 * 8) + 0x20);
    }
  }
  if ((*plVar5 == 0) || (lVar3 = *(long *)(*plVar5 + 0x10), lVar3 == 0)) {
    lVar3 = 0;
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x10);
  }
  plVar5 = (long *)(lVar3 + 0x78);
  (**(code **)(*plVar5 + 0x10))(plVar5);
  local_38 = param_2;
  local_34 = param_3;
  lVar3 = FUN_001bf4b0(param_1,&local_38);
  if (lVar3 == 0) {
    uVar4 = 1;
  }
  else {
    uVar4 = *(uint *)(lVar3 + 0xc0);
    if (6 < uVar4) {
      uVar4 = 1;
    }
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return uVar4;
}

