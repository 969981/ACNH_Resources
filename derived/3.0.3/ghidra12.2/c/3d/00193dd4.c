
uint FUN_00193dd4(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5,undefined4 param_6,undefined8 param_7,undefined4 param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  long *plVar9;
  long *plVar10;
  undefined1 auStack_d0 [56];
  undefined1 auStack_98 [56];
  
  puVar3 = PTR_DAT_04bcb908;
  puVar2 = PTR_DAT_04bcb900;
  plVar8 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar4 = *puVar5;
    if (uVar4 != 0) {
      lVar6 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar8 = (long *)(*(long *)(lVar6 + (ulong)uVar4 * 8) + 0x20);
    }
  }
  if ((*plVar8 == 0) || (lVar6 = *(long *)(*plVar8 + 0x10), lVar6 == 0)) {
    lVar6 = 0;
  }
  else {
    lVar6 = *(long *)(lVar6 + 0x10);
  }
  plVar8 = (long *)(lVar6 + 0x78);
  (**(code **)(*plVar8 + 0x10))(plVar8);
  uVar4 = FUN_00194070(param_1);
  if ((uVar4 & 1) == 0) goto LAB_0019400c;
  FUN_00196bb8(auStack_98,param_3);
  FUN_00196bb8(auStack_d0,param_5);
  lVar6 = FUN_00185a6c(0x130);
  if (lVar6 != 0) {
    FUN_00194354(lVar6,param_8,*(undefined4 *)(param_1 + 0x18),param_2,auStack_98,param_4,auStack_d0
                 ,param_6,param_7);
  }
  plVar9 = (long *)(puVar2 + 0x28);
  if (*puVar3 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar5;
    if (uVar1 != 0) {
      lVar7 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar7 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar9 = (long *)(*(long *)(lVar7 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar9 == 0) || (lVar7 = *(long *)(*plVar9 + 0x10), lVar7 == 0)) {
    lVar7 = 0;
    if (*PTR_DAT_04bcbd30 != '\0') goto LAB_00193fa4;
LAB_00193f7c:
    FUN_0019eaa0(lVar7,lVar6,0);
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x10);
    if (*PTR_DAT_04bcbd30 == '\0') goto LAB_00193f7c;
LAB_00193fa4:
    plVar9 = (long *)(lVar7 + 0xc0);
    (**(code **)(*plVar9 + 0x10))(plVar9);
    plVar10 = (long *)(lVar7 + 0x30);
    (**(code **)(*plVar10 + 0x10))(plVar10);
    FUN_0019eaa0(lVar7,lVar6,0);
    (**(code **)(*plVar10 + 0x20))(plVar10);
    (**(code **)(*plVar9 + 0x20))(plVar9);
  }
  FUN_00196ce0(auStack_d0);
  FUN_00196ce0(auStack_98);
LAB_0019400c:
  (**(code **)(*plVar8 + 0x20))(plVar8);
  return uVar4 & 1;
}

