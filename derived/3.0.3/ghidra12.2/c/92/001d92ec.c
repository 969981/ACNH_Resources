
void FUN_001d92ec(long *param_1,undefined8 param_2,long param_3,undefined4 param_4)

{
  long *plVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  uint *puVar5;
  long *plVar6;
  
  FUN_001e1d00(param_1,param_2,param_4);
  puVar4 = PTR_DAT_04bcc7d0;
  *(undefined4 *)(param_1 + 0x1b) = 1;
  *param_1 = (long)(puVar4 + 0x10);
  FUN_001d78b8(param_1 + 0x1c,param_3 + 0xa0);
  FUN_001d78b8(param_1 + 0x29,param_3 + 200);
  FUN_001d8eb8(param_1 + 0x37,"Sending Packet Queue");
  *(undefined1 *)(param_1 + 0x3d) = 0;
  puVar4 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar5;
    if (uVar3 != 0) {
      lVar2 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar2 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar6 = (long *)(*(long *)(lVar2 + (ulong)uVar3 * 8) + 0x10);
    }
  }
  plVar1 = (long *)(*(long *)(*plVar6 + 0x10) + 0x1b0);
  if (1 < (int)param_2 - 1U) {
    plVar1 = (long *)(*(long *)(*plVar6 + 0x10) + 0x1a8);
  }
  param_1[0x36] = *plVar1;
  return;
}

