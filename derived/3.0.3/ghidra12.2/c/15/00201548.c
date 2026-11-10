
uint FUN_00201548(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  ulong uVar5;
  undefined1 *puVar6;
  long lVar7;
  long *plVar8;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [8];
  char local_a8;
  byte local_38 [4];
  undefined4 local_34;
  
  puVar6 = auStack_e0;
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
  uVar1 = *(ushort *)(param_1 + 0x48);
  local_34 = CONCAT22(local_34._2_2_,uVar1);
  if (uVar1 < 0x7f) {
    local_38[0] = (byte)uVar1 | 0x80;
    FUN_00197478(auStack_b0,local_38,1);
    uVar5 = FUN_00194070(param_2);
    if ((uVar5 & 1) == 0) goto LAB_0020163c;
LAB_00201678:
    local_34 = *(undefined4 *)(param_2 + 0x18);
    FUN_00197478(auStack_b0,&local_34,4);
    local_34 = 8;
    FUN_00197478(auStack_b0,&local_34,4);
    FUN_00197478(auStack_b0,param_3,4);
    if (local_a8 == '\0') {
      FUN_001f77a4(auStack_b0,param_4);
      if (local_a8 != '\0') {
        local_34 = 0x8001000a;
        FUN_0018aa70(auStack_e0,&local_34);
        goto LAB_00201710;
      }
      *(undefined **)(PTR_DAT_04bccb08 + 0x38) = PTR_LAB_04bccb30;
      if ((*(char *)(param_1 + 0x70) != '\0') && ((*(byte *)(param_1 + 0x60) >> 4 & 1) != 0)) {
        (**(code **)(*plVar8 + 0x20))(plVar8);
        uVar3 = FUN_001f9220(param_1,param_2,auStack_b0);
        goto LAB_0020172c;
      }
      uVar3 = FUN_001f9220(param_1,param_2,auStack_b0);
    }
    else {
      local_34 = 0x8001000a;
      FUN_0018aa70(auStack_c8,&local_34);
      puVar6 = auStack_c8;
LAB_00201710:
      FUN_00197bcc(param_2,puVar6);
      uVar3 = 1;
    }
  }
  else {
    local_38[0] = 0xff;
    FUN_00197478(auStack_b0,local_38,1);
    FUN_00197478(auStack_b0,&local_34,2);
    uVar5 = FUN_00194070(param_2);
    if ((uVar5 & 1) != 0) goto LAB_00201678;
LAB_0020163c:
    uVar3 = 0;
  }
  (**(code **)(*plVar8 + 0x20))(plVar8);
LAB_0020172c:
  FUN_001abdec(auStack_b0);
  return uVar3 & 1;
}

