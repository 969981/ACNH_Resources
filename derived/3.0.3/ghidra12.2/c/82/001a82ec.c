
void FUN_001a82ec(long param_1)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  FUN_001a8950(param_1,0);
  uVar1 = *(undefined4 *)(param_1 + 0x334);
  local_3c = 0x80050002;
  FUN_0018aa70(&local_38,&local_3c);
  FUN_001a6fb4(&local_58,uVar1,&local_38);
  puVar3 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      lVar5 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar6 = (long *)(*(long *)(lVar5 + (ulong)uVar2 * 8) + 0x20);
    }
  }
  lVar5 = FUN_001948f0(*(undefined8 *)(*(long *)(*plVar6 + 0x10) + 0x18),
                       *(undefined4 *)(param_1 + 0x238));
  if (lVar5 != 0) {
    local_38 = local_58;
    uStack_30 = uStack_50;
    local_28 = local_48;
    FUN_00197e40(lVar5,3,&local_38,1);
  }
  FUN_00194970(param_1);
  return;
}

