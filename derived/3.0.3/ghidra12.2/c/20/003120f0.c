
uint FUN_003120f0(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 )

{
  long lVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_e8 [28];
  undefined4 local_cc;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [8];
  char local_a8;
  
  lVar1 = param_1 + 0x140;
  FUN_001abc3c(auStack_b0);
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
  FUN_001fc1b8(auStack_b0,*(undefined2 *)(param_1 + 0x188),1);
  uVar5 = FUN_001fb63c(auStack_b0,param_2);
  if ((uVar5 & 1) == 0) {
    uVar3 = 0;
  }
  else {
    FUN_001fb7e0(auStack_b0,0x11);
    FUN_00315ef0(auStack_b0,param_3);
    if (local_a8 == '\0') {
      FUN_001f7044(auStack_b0,param_5);
      if (local_a8 == '\0') {
        if (param_2 != 0) {
          FUN_001fbcd0(param_2,param_4);
        }
        *(undefined **)(PTR_DAT_04bceb98 + 0x80) = PTR_LAB_04bcec30;
        if ((*(char *)(param_1 + 0x1b0) != '\0') &&
           (uVar5 = FUN_001fb590(lVar1,0x10), (uVar5 & 1) != 0)) {
          (**(code **)(*plVar8 + 0x20))(plVar8);
          uVar3 = FUN_001f9220(lVar1,param_2,auStack_b0);
          goto LAB_00312270;
        }
        uVar3 = FUN_001f9220(lVar1,param_2,auStack_b0);
        goto LAB_00312260;
      }
      local_cc = 0x8001000a;
      FUN_0018aa70(auStack_e8,&local_cc);
      puVar6 = auStack_e8;
    }
    else {
      local_cc = 0x8001000a;
      FUN_0018aa70(auStack_c8,&local_cc);
      puVar6 = auStack_c8;
    }
    FUN_00197bcc(param_2,puVar6);
    uVar3 = 1;
  }
LAB_00312260:
  (**(code **)(*plVar8 + 0x20))(plVar8);
LAB_00312270:
  FUN_001abdec(auStack_b0);
  return uVar3 & 1;
}

