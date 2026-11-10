
void FUN_00209d2c(long *param_1,uint param_2,undefined8 param_3,undefined8 param_4,char *param_5,
                 undefined8 param_6)

{
  uint uVar1;
  undefined *puVar2;
  bool bVar3;
  undefined4 uVar4;
  uint *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  long *plVar9;
  undefined1 auStack_e8 [24];
  undefined1 auStack_d0 [112];
  undefined4 local_54;
  
  puVar2 = PTR_DAT_04bcb900;
  plVar9 = (long *)(PTR_DAT_04bcb900 + 0x70);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar5;
    if (uVar1 != 0) {
      lVar6 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar9 = (long *)(*(long *)(lVar6 + (ulong)uVar1 * 8) + 0x68);
    }
  }
  lVar6 = FUN_00209f30(*(undefined8 *)(*plVar9 + 0x10),param_2);
  if (lVar6 == 0) {
    lVar6 = (**(code **)(*param_1 + 0x60))(param_1,param_2);
    bVar3 = lVar6 == 0;
    if (((param_2 & 0xffff) == 1) && (lVar6 == 0)) {
      *param_5 = '\0';
      return;
    }
  }
  else {
    bVar3 = false;
  }
  uVar4 = FUN_001fb5f8(param_3);
  FUN_001abc3c(auStack_d0);
  *param_5 = '\0';
  if (bVar3) {
    *param_5 = '\x01';
    lVar6 = FUN_0019cf4c(param_1 + 10);
    local_54 = 0x80010002;
    FUN_0018aa70(auStack_e8,&local_54);
    FUN_0018ab44(lVar6 + 0x40,auStack_e8);
  }
  else {
    plVar9 = param_1 + 0x15;
    uVar7 = (**(code **)(*plVar9 + 0x28))(plVar9);
    local_54 = 0;
    FUN_0019cf4c(param_1 + 10);
    uVar8 = FUN_001f8f64();
    FUN_001fbebc(lVar6,uVar8,param_3,auStack_d0,param_5,&local_54,param_6);
    if ((uVar7 & 1) != 0) {
      (**(code **)(*plVar9 + 0x30))(plVar9);
    }
  }
  if (*param_5 != '\0') {
    FUN_001fb75c(param_4,0,param_2);
    uVar8 = FUN_0019cf4c(param_1 + 10);
    FUN_001fb68c(param_4,uVar8,uVar4,auStack_d0);
  }
  FUN_001abdec(auStack_d0);
  return;
}

