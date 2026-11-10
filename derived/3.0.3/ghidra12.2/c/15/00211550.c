
uint FUN_00211550(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  ushort uVar1;
  undefined *puVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  uint *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long *plVar11;
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [8];
  char cStack_a8;
  byte abStack_38 [4];
  undefined4 uStack_34;
  
  lVar10 = *(long *)(param_1 + 0x10);
  if (*(long *)(param_2 + 0xb8) != 0) {
    lVar10 = *(long *)(param_2 + 0xb8);
  }
  iVar6 = *(int *)(lVar10 + 0x18);
  iVar5 = FUN_001a8b90(param_3);
  if ((((iVar5 != iVar6) && (iVar6 = FUN_001a8b90(param_3), iVar6 != 0)) ||
      (uVar7 = FUN_001b9898(param_3,param_4), (uVar7 & 1) == 0)) ||
     ((sVar3 = FUN_001ab2fc(param_3), sVar3 == 0 ||
      (sVar3 = FUN_001ab2fc(param_4), puVar2 = PTR_DAT_04bcb900, sVar3 == 0)))) {
    return 0;
  }
  plVar11 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar4 = *puVar8;
    if (uVar4 != 0) {
      lVar10 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar11 = (long *)(*(long *)(lVar10 + (ulong)uVar4 * 8) + 0x10);
    }
  }
  uVar7 = FUN_001b63e0(*(undefined8 *)(*plVar11 + 0x10),param_3,param_4);
  if ((uVar7 & 1) == 0) {
    return 0;
  }
  puVar9 = auStack_e0;
  FUN_001abc3c(auStack_b0);
  puVar2 = PTR_DAT_04bcb900;
  plVar11 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar4 = *puVar8;
    if (uVar4 != 0) {
      lVar10 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar11 = (long *)(*(long *)(lVar10 + (ulong)uVar4 * 8) + 0x20);
    }
  }
  if ((*plVar11 == 0) || (lVar10 = *(long *)(*plVar11 + 0x10), lVar10 == 0)) {
    lVar10 = 0;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x10);
  }
  plVar11 = (long *)(lVar10 + 0x78);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  uVar1 = *(ushort *)(param_1 + 0x68);
  uStack_34 = CONCAT22(uStack_34._2_2_,uVar1);
  if (uVar1 < 0x7f) {
    abStack_38[0] = (byte)uVar1 | 0x80;
    FUN_00197478(auStack_b0,abStack_38,1);
    uVar7 = FUN_00194070(param_2);
    if ((uVar7 & 1) != 0) goto LAB_00201410;
LAB_002013d4:
    uVar4 = 0;
  }
  else {
    abStack_38[0] = 0xff;
    FUN_00197478(auStack_b0,abStack_38,1);
    FUN_00197478(auStack_b0,&uStack_34,2);
    uVar7 = FUN_00194070(param_2);
    if ((uVar7 & 1) == 0) goto LAB_002013d4;
LAB_00201410:
    uStack_34 = *(undefined4 *)(param_2 + 0x18);
    FUN_00197478(auStack_b0,&uStack_34,4);
    uStack_34 = 7;
    FUN_00197478(auStack_b0,&uStack_34,4);
    FUN_001f76c0(auStack_b0,param_3);
    if (cStack_a8 == '\0') {
      FUN_001f76c0(auStack_b0,param_4);
      if (cStack_a8 == '\0') {
        *(undefined **)(PTR_DAT_04bccb08 + 0x30) = PTR_LAB_04bccb28;
        if ((*(char *)(param_1 + 0x90) != '\0') && ((*(byte *)(param_1 + 0x80) >> 4 & 1) != 0)) {
          (**(code **)(*plVar11 + 0x20))(plVar11);
          uVar4 = FUN_001f9220(param_1 + 0x20,param_2,auStack_b0);
          goto LAB_002014c0;
        }
        uVar4 = FUN_001f9220(param_1 + 0x20,param_2,auStack_b0);
        goto LAB_002014b0;
      }
      uStack_34 = 0x8001000a;
      FUN_0018aa70(auStack_e0,&uStack_34);
    }
    else {
      uStack_34 = 0x8001000a;
      FUN_0018aa70(auStack_c8,&uStack_34);
      puVar9 = auStack_c8;
    }
    FUN_00197bcc(param_2,puVar9);
    uVar4 = 1;
  }
LAB_002014b0:
  (**(code **)(*plVar11 + 0x20))(plVar11);
LAB_002014c0:
  FUN_001abdec(auStack_b0);
  return uVar4 & 1;
}

