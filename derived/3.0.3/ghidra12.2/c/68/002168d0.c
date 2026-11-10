
void FUN_002168d0(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  uint *puVar7;
  long *plVar8;
  int local_28;
  undefined4 uStack_24;
  
  lVar1 = param_1 + 0xa0;
  FUN_001984a0(lVar1);
  FUN_00187810(&local_28);
  uVar6 = FUN_0018d4c4(&local_28,*(int *)(param_1 + 0x178) + (*(int *)(param_1 + 0x180) - local_28))
  ;
  *(ulong *)(param_1 + 0x128) = CONCAT44(uStack_24,local_28);
  FUN_00216d10(uVar6,lVar1,*(undefined8 *)(param_1 + 0x230),param_1 + 0x1f0,param_1 + 0x218,
               param_1 + 0x228,1);
  puVar4 = PTR_DAT_04bcb900;
  plVar8 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar7;
    if (uVar3 != 0) {
      lVar2 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar2 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar8 = (long *)(*(long *)(lVar2 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  FUN_0019a150(*(undefined8 *)(*(long *)(*plVar8 + 0x10) + 0x18),*(undefined4 *)(param_1 + 0x160),
               *(undefined4 *)(param_1 + 0xb8));
  FUN_0019c910(param_1,2);
  plVar8 = (long *)FUN_00185a6c(0x20);
  puVar5 = PTR_LAB_04bcce88;
  puVar4 = PTR_DAT_04bcc0c0;
  if (plVar8 != (long *)0x0) {
    plVar8[2] = 0;
    plVar8[3] = (long)&DAT_0407ebb1;
    *plVar8 = (long)(puVar4 + 0x10);
    plVar8[1] = (long)puVar5;
  }
  FUN_0019ab80(param_1,lVar1);
  return;
}

