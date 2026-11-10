
uint FUN_0030dac4(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_108 [24];
  undefined1 auStack_f0 [24];
  undefined1 auStack_d8 [24];
  undefined1 auStack_c0 [8];
  char local_b8;
  undefined4 local_44;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x90);
  FUN_001abc3c(auStack_c0);
  puVar1 = PTR_DAT_04bcb900;
  plVar8 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar4;
    if (uVar2 != 0) {
      lVar7 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar8 = (long *)(*(long *)(lVar7 + (ulong)uVar2 * 8) + 0x20);
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
  FUN_001fc1b8(auStack_c0,*(undefined2 *)(lVar3 + 0x48),1);
  uVar5 = FUN_001fb63c(auStack_c0,param_2);
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_001fb7e0(auStack_c0,4);
    FUN_00197478(auStack_c0,param_3,4);
    if (local_b8 == '\0') {
      FUN_001975e4(auStack_c0,param_4);
      if (local_b8 == '\0') {
        FUN_00197478(auStack_c0,param_5,4);
        if (local_b8 == '\0') {
          *(undefined **)(PTR_DAT_04bceb18 + 0x18) = PTR_LAB_04bceb28;
          if ((*(char *)(lVar3 + 0x70) != '\0') &&
             (uVar5 = FUN_001fb590(lVar3,0x10), (uVar5 & 1) != 0)) {
            (**(code **)(*plVar8 + 0x20))(plVar8);
            uVar2 = FUN_001f9220(lVar3,param_2,auStack_c0);
            goto LAB_0030dc88;
          }
          uVar2 = FUN_001f9220(lVar3,param_2,auStack_c0);
          goto LAB_0030dc78;
        }
        local_44 = 0x8001000a;
        FUN_0018aa70(auStack_108,&local_44);
        puVar6 = auStack_108;
      }
      else {
        local_44 = 0x8001000a;
        FUN_0018aa70(auStack_f0,&local_44);
        puVar6 = auStack_f0;
      }
    }
    else {
      local_44 = 0x8001000a;
      FUN_0018aa70(auStack_d8,&local_44);
      puVar6 = auStack_d8;
    }
    FUN_00197bcc(param_2,puVar6);
    uVar2 = 1;
  }
LAB_0030dc78:
  (**(code **)(*plVar8 + 0x20))(plVar8);
LAB_0030dc88:
  FUN_001abdec(auStack_c0);
  return uVar2 & 1;
}

