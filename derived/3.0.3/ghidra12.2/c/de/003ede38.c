
uint FUN_003ede38(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_130 [24];
  undefined1 auStack_118 [24];
  undefined1 auStack_100 [24];
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [8];
  char local_c8;
  undefined4 local_54;
  
  puVar5 = auStack_130;
  FUN_001abc3c(auStack_d0);
  puVar1 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar3;
    if (uVar2 != 0) {
      lVar6 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar6 + (ulong)uVar2 * 8) + 0x20);
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
  FUN_001fc1b8(auStack_d0,*(undefined2 *)(param_1 + 0x48),1);
  uVar4 = FUN_001fb63c(auStack_d0,param_2);
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_001fb7e0(auStack_d0,0x2b);
    FUN_004018d4(auStack_d0,param_3);
    if (local_c8 == '\0') {
      FUN_004016dc(auStack_d0,param_4);
      if (local_c8 == '\0') {
        FUN_003fead0(auStack_d0,param_5);
        if (local_c8 == '\0') {
          FUN_001975e4(auStack_d0,param_6);
          if (local_c8 == '\0') {
            if (param_2 != 0) {
              FUN_001fbcd0(param_2,param_7);
            }
            *(undefined **)(PTR_DAT_04bd2470 + 0x150) = PTR_LAB_04bd2570;
            if ((*(char *)(param_1 + 0x70) != '\0') &&
               (uVar4 = FUN_001fb590(param_1,0x10), (uVar4 & 1) != 0)) {
              (**(code **)(*plVar7 + 0x20))(plVar7);
              uVar2 = FUN_001f9220(param_1,param_2,auStack_d0);
              goto LAB_003ee028;
            }
            uVar2 = FUN_001f9220(param_1,param_2,auStack_d0);
            goto LAB_003ee018;
          }
          local_54 = 0x8001000a;
          FUN_0018aa70(auStack_130,&local_54);
        }
        else {
          local_54 = 0x8001000a;
          FUN_0018aa70(auStack_118,&local_54);
          puVar5 = auStack_118;
        }
      }
      else {
        local_54 = 0x8001000a;
        FUN_0018aa70(auStack_100,&local_54);
        puVar5 = auStack_100;
      }
    }
    else {
      local_54 = 0x8001000a;
      FUN_0018aa70(auStack_e8,&local_54);
      puVar5 = auStack_e8;
    }
    FUN_00197bcc(param_2,puVar5);
    uVar2 = 1;
  }
LAB_003ee018:
  (**(code **)(*plVar7 + 0x20))(plVar7);
LAB_003ee028:
  FUN_001abdec(auStack_d0);
  return uVar2 & 1;
}

