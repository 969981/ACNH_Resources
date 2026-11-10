
undefined4 FUN_001ad6a0(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  undefined4 uVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  long lVar9;
  long lVar10;
  
  puVar2 = PTR_DAT_04bcb900;
  plVar7 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar4;
    if (uVar1 != 0) {
      lVar6 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar6 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar7 = (long *)(*(long *)(lVar6 + (ulong)uVar1 * 8) + 0x20);
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
  lVar6 = param_1 + 0x78;
  uVar8 = 999;
  for (lVar10 = *(long *)(param_1 + 0x80); lVar10 != lVar6; lVar10 = *(long *)(lVar10 + 8)) {
    iVar3 = FUN_001b8fa0(lVar10 + 0x18,"RVCID",0);
    if (iVar3 == param_2) {
      lVar9 = *(long *)(param_1 + 0x80);
      if (lVar9 != lVar6) goto LAB_001ad7c0;
      goto LAB_001ad80c;
    }
  }
  goto LAB_001ad840;
  while (lVar9 = *(long *)(lVar9 + 8), lVar9 != lVar6) {
LAB_001ad7c0:
    iVar3 = FUN_001b8fa0(lVar9 + 0x18,"RVCID",0);
    if ((iVar3 == param_2) && (*(int *)(lVar9 + 0x90) != -1)) {
      lVar6 = FUN_001b8fa0(lVar9 + 0x18,&DAT_0410a6d5,0);
      uVar5 = 0x6e;
      uVar8 = 100;
      goto LAB_001ad834;
    }
  }
LAB_001ad80c:
  if (*(int *)(lVar10 + 0xa4) == 0) {
    uVar8 = 200;
  }
  else {
    lVar6 = FUN_001b8fa0(lVar10 + 0x18,&DAT_0410a6d5,0);
    uVar5 = 0xd2;
    uVar8 = 0xc9;
LAB_001ad834:
    if (lVar6 != 0) {
      uVar8 = uVar5;
    }
  }
LAB_001ad840:
  (**(code **)(*plVar7 + 0x20))(plVar7);
  return uVar8;
}

