
bool FUN_001a92f4(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_b0 [144];
  
  FUN_001e1500(auStack_b0);
  puVar2 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x18);
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
      plVar6 = (long *)(*(long *)(lVar4 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  lVar4 = (**(code **)(**(long **)(*(long *)(*plVar6 + 0x10) + 0xe8) + 0x78))();
  lVar4 = *(long *)(lVar4 + 0x18);
  if (*(char *)(param_2 + 0x68) == '\0') {
    FUN_001b8590(param_2);
  }
  lVar5 = FUN_001df770(lVar4 + 0x98,*(undefined8 *)(param_2 + 8));
  if (lVar4 + 0xa0 != lVar5) {
    *(undefined4 *)(lVar5 + 0x140) = *(undefined4 *)(lVar4 + 0xb0);
    FUN_001e15a8(auStack_b0,lVar5 + 0xb0);
  }
  FUN_001e1868(auStack_b0);
  return lVar4 + 0xa0 != lVar5;
}

