
uint FUN_0030df78(long param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                 ,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined1 auStack_d0 [112];
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 0x90);
  FUN_001abc3c(auStack_d0);
  puVar1 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar2 = *puVar4;
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
  FUN_001fc1b8(auStack_d0,*(undefined2 *)(lVar3 + 0x48),1);
  uVar5 = FUN_001fb63c(auStack_d0,param_2);
  if ((uVar5 & 1) == 0) {
    uVar2 = 0;
  }
  else {
    FUN_001fb7e0(auStack_d0,6);
    if (param_2 != 0) {
      FUN_001fbcd0(param_2,param_3);
      FUN_001fbcd0(param_2,param_4);
      FUN_001fbcd0(param_2,param_5);
      FUN_001fbcd0(param_2,param_6);
      FUN_001fbcd0(param_2,param_7);
      FUN_001fbcd0(param_2,param_8);
    }
    *(undefined **)(PTR_DAT_04bceb18 + 0x28) = PTR_LAB_04bceb38;
    if ((*(char *)(lVar3 + 0x70) != '\0') && (uVar5 = FUN_001fb590(lVar3,0x10), (uVar5 & 1) != 0)) {
      (**(code **)(*plVar7 + 0x20))(plVar7);
      uVar2 = FUN_001f9220(lVar3,param_2,auStack_d0);
      goto LAB_0030e154;
    }
    uVar2 = FUN_001f9220(lVar3,param_2,auStack_d0);
  }
  (**(code **)(*plVar7 + 0x20))(plVar7);
LAB_0030e154:
  FUN_001abdec(auStack_d0);
  return uVar2 & 1;
}

