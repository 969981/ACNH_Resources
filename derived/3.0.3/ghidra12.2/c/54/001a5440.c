
void FUN_001a5440(long param_1,undefined8 *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar5 = PTR_DAT_04bcb910;
  puVar4 = PTR_DAT_04bcb908;
  puVar3 = PTR_DAT_04bcb900;
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar6;
    if (uVar1 != 0) {
      lVar9 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar9 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar10 == 0) || (lVar9 = *(long *)(*plVar10 + 0x10), lVar9 == 0)) {
    lVar9 = 0;
  }
  else {
    lVar9 = *(long *)(lVar9 + 0x10);
  }
  plVar11 = (long *)(lVar9 + 0x78);
  (**(code **)(*plVar11 + 0x10))(plVar11);
  uVar2 = *param_3;
  plVar10 = (long *)(puVar3 + 0x28);
  if (*puVar4 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)puVar5);
    uVar1 = *puVar6;
    if (uVar1 != 0) {
      lVar9 = **(long **)(puVar3 + 0xa0);
      if ((ulong)((*(long **)(puVar3 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar10 = (long *)(*(long *)(lVar9 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  lVar9 = FUN_001948f0(*(undefined8 *)(*(long *)(*plVar10 + 0x10) + 0x18),uVar2);
  if (lVar9 != 0) {
    local_68 = CONCAT71(local_68._1_7_,1);
    uVar7 = FUN_0018aad8(param_2,&local_68);
    if ((uVar7 & 1) == 0) {
      local_68 = *param_2;
      uStack_60 = param_2[1];
      uVar8 = 3;
    }
    else {
      local_68 = *param_2;
      uStack_60 = param_2[1];
      uVar8 = 2;
    }
    local_58 = param_2[2];
    FUN_00197e40(lVar9,uVar8,&local_68,1);
  }
  (**(code **)(**(long **)(param_1 + 8) + 0x80))(*(long **)(param_1 + 8),param_1);
  (**(code **)(*plVar11 + 0x20))(plVar11);
  return;
}

