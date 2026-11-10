
uint FUN_003114e4(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [8];
  char local_a8;
  undefined4 local_34;
  
  FUN_001abc3c(auStack_b0);
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
  FUN_001fc1b8(auStack_b0,*(undefined2 *)(param_1 + 0x48),1);
  uVar4 = FUN_001fb63c(auStack_b0,param_2);
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_001fb7e0(auStack_b0,0x29);
    FUN_00197478(auStack_b0,param_3,4);
    if (local_a8 == '\0') {
      if (param_2 != 0) {
        FUN_001fbcd0(param_2,param_4);
      }
      *(undefined **)(PTR_DAT_04bceb98 + 0x140) = PTR_LAB_04bcec00;
      if ((*(char *)(param_1 + 0x70) != '\0') &&
         (uVar4 = FUN_001fb590(param_1,0x10), (uVar4 & 1) != 0)) {
        (**(code **)(*plVar6 + 0x20))(plVar6);
        uVar2 = FUN_001f9220(param_1,param_2,auStack_b0);
        goto LAB_003116a4;
      }
      uVar2 = FUN_001f9220(param_1,param_2,auStack_b0);
    }
    else {
      local_34 = 0x8001000a;
      FUN_0018aa70(auStack_c8,&local_34);
      FUN_00197bcc(param_2,auStack_c8);
      uVar2 = 1;
    }
  }
  (**(code **)(*plVar6 + 0x20))(plVar6);
LAB_003116a4:
  FUN_001abdec(auStack_b0);
  return uVar2 & 1;
}

