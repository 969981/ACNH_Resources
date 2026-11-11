
uint FUN_003ea640(long param_1,long param_2,long *param_3,long *param_4,undefined8 param_5,
                 undefined8 param_6)

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_110 [24];
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [8];
  char local_c0;
  int local_54;
  
  puVar6 = auStack_110;
  FUN_001abc3c(auStack_c8);
  puVar2 = PTR_DAT_04bcb900;
  plVar8 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar4;
    if (uVar3 != 0) {
      lVar7 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar8 = (long *)(*(long *)(lVar7 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  if ((*plVar8 == 0) || (lVar7 = *(long *)(*plVar8 + 0x10), lVar7 == 0)) {
    lVar7 = 0;
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x10);
  }
  plVar8 = (long *)(lVar7 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  FUN_001fc1b8(auStack_c8,*(undefined2 *)(param_1 + 0x48),1);
  uVar5 = FUN_001fb63c(auStack_c8,param_2);
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    FUN_001fb7e0(auStack_c8,0x2a);
    local_54 = (int)((ulong)(param_3[1] - *param_3) >> 3);
    FUN_00197478(auStack_c8,&local_54,4);
    lVar1 = param_3[1];
    for (lVar7 = *param_3; lVar7 != lVar1; lVar7 = lVar7 + 8) {
      FUN_00197478(auStack_c8,lVar7,8);
    }
    if (local_c0 == '\0') {
      local_54 = (int)((ulong)(param_4[1] - *param_4) >> 4) * 0x286bca1b;
      FUN_00197478(auStack_c8,&local_54,4);
      lVar1 = param_4[1];
      for (lVar7 = *param_4; lVar7 != lVar1; lVar7 = lVar7 + 0x130) {
        FUN_003fead0(auStack_c8,lVar7);
      }
      if (local_c0 == '\0') {
        FUN_001975e4(auStack_c8,param_5);
        if (local_c0 == '\0') {
          if (param_2 != 0) {
            FUN_001fbcd0(param_2,param_6);
          }
          *(undefined **)(PTR_DAT_04bd2470 + 0x148) = PTR_LAB_04bd24c8;
          if ((*(char *)(param_1 + 0x70) != '\0') &&
             (uVar5 = FUN_001fb590(param_1,0x10), (uVar5 & 1) != 0)) {
            (**(code **)(*plVar8 + 0x20))(plVar8);
            uVar3 = FUN_001f9220(param_1,param_2,auStack_c8);
            goto LAB_003ea87c;
          }
          uVar3 = FUN_001f9220(param_1,param_2,auStack_c8);
          goto LAB_003ea86c;
        }
        local_54 = -0x7ffefff6;
        FUN_0018aa70(auStack_110,&local_54);
      }
      else {
        local_54 = -0x7ffefff6;
        FUN_0018aa70(auStack_f8,&local_54);
        puVar6 = auStack_f8;
      }
    }
    else {
      local_54 = -0x7ffefff6;
      FUN_0018aa70(auStack_e0,&local_54);
      puVar6 = auStack_e0;
    }
    FUN_00197bcc(param_2,puVar6);
    uVar3 = 1;
  }
LAB_003ea86c:
  (**(code **)(*plVar8 + 0x20))(plVar8);
LAB_003ea87c:
  FUN_001abdec(auStack_c8);
  return uVar3 & 1;
}

