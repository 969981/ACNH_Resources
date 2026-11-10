
bool FUN_001b3fbc(long param_1,undefined8 param_2)

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
    plVar5 = (long *)0x78;
    (**(code **)(lRam0000000000000078 + 0x10))(0x78);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  else {
    plVar5 = (long *)(*(long *)(lVar4 + 0x10) + 0x78);
    (**(code **)(*plVar5 + 0x10))(plVar5);
    lVar4 = *(long *)(param_1 + 0x18);
  }
  if (lVar4 == 0) {
    *(undefined8 *)(param_1 + 0x18) = param_2;
  }
  (**(code **)(*plVar5 + 0x20))(plVar5);
  return lVar4 == 0;
}

