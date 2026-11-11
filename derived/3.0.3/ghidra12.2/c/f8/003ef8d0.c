
uint FUN_003ef8d0(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  uint uVar2;
  uint *puVar3;
  ulong uVar4;
  undefined1 *puVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [8];
  char local_b8;
  undefined4 local_44;
  
  FUN_001abc3c(auStack_c0);
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
  FUN_001fc1b8(auStack_c0,*(undefined2 *)(param_1 + 0x48),1);
  uVar4 = FUN_001fb63c(auStack_c0,param_2);
  if ((uVar4 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_001fb7e0(auStack_c0,0x1f);
    FUN_00197478(auStack_c0,param_3,2);
    if (local_b8 == '\0') {
      FUN_00197478(auStack_c0,param_4,8);
      if (local_b8 == '\0') {
        FUN_001975e4(auStack_c0,param_5);
        if (local_b8 == '\0') {
          *(undefined **)(PTR_DAT_04bd2470 + 0xf0) = PTR_LAB_04bd25c8;
          if ((*(char *)(param_1 + 0x70) != '\0') &&
             (uVar4 = FUN_001fb590(param_1,0x10), (uVar4 & 1) != 0)) {
            (**(code **)(*plVar7 + 0x20))(plVar7);
            uVar2 = FUN_001f9220(param_1,param_2,auStack_c0);
            goto LAB_003efa88;
          }
          uVar2 = FUN_001f9220(param_1,param_2,auStack_c0);
          goto LAB_003efa78;
        }
        local_44 = 0x8001000a;
        FUN_0018aa70(auStack_108,&local_44);
        puVar5 = auStack_108;
      }
      else {
        local_44 = 0x8001000a;
        FUN_0018aa70(auStack_f0,&local_44);
        puVar5 = auStack_f0;
      }
    }
    else {
      local_44 = 0x8001000a;
      FUN_0018aa70(auStack_d8,&local_44);
      puVar5 = auStack_d8;
    }
    FUN_00197bcc(param_2,puVar5);
    uVar2 = 1;
  }
LAB_003efa78:
  (**(code **)(*plVar7 + 0x20))(plVar7);
LAB_003efa88:
  FUN_001abdec(auStack_c0);
  return uVar2 & 1;
}

