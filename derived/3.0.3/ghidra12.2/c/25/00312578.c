
uint FUN_00312578(long param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [8];
  char local_a8;
  undefined4 local_34;
  
  lVar1 = param_1 + 0x140;
  FUN_001abc3c(auStack_b0);
  puVar2 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar4;
    if (uVar3 != 0) {
      lVar6 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar6 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  if ((*plVar7 == 0) || (lVar6 = *(long *)(*plVar7 + 0x10), lVar6 == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  plVar7 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar7 + 0x10))(plVar7);
  FUN_001fc1b8(auStack_b0,*(undefined2 *)(param_1 + 0x188),1);
  uVar5 = FUN_001fb63c(auStack_b0,param_2);
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    FUN_001fb7e0(auStack_b0,0x14);
    local_34 = (undefined4)*(undefined8 *)(param_3 + 0x10);
    FUN_00197478(auStack_b0,&local_34,4);
    for (lVar6 = *(long *)(param_3 + 8); lVar6 != param_3; lVar6 = *(long *)(lVar6 + 8)) {
      FUN_00197478(auStack_b0,lVar6 + 0x10,4);
    }
    if (local_a8 == '\0') {
      if (param_2 != 0) {
        FUN_001fbcd0(param_2,param_4);
      }
      *(undefined **)(PTR_DAT_04bceb98 + 0x98) = PTR_LAB_04bcec40;
      if ((*(char *)(param_1 + 0x1b0) != '\0') &&
         (uVar5 = FUN_001fb590(lVar1,0x10), (uVar5 & 1) != 0)) {
        (**(code **)(*plVar7 + 0x20))(plVar7);
        uVar3 = FUN_001f9220(lVar1,param_2,auStack_b0);
        goto LAB_00312770;
      }
      uVar3 = FUN_001f9220(lVar1,param_2,auStack_b0);
    }
    else {
      local_34 = 0x8001000a;
      FUN_0018aa70(auStack_c8,&local_34);
      FUN_00197bcc(param_2,auStack_c8);
      uVar3 = 1;
    }
  }
  (**(code **)(*plVar7 + 0x20))(plVar7);
LAB_00312770:
  FUN_001abdec(auStack_b0);
  return uVar3 & 1;
}

