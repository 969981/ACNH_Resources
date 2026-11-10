
void FUN_00211300(long param_1,long ****param_2)

{
  long lVar1;
  long ****pppplVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint *puVar8;
  long lVar9;
  long ***ppplVar10;
  long *plVar11;
  long ****pppplVar12;
  long ****pppplVar13;
  long ****local_68;
  long ****local_60;
  long local_58;
  
  puVar6 = PTR_DAT_04bcb910;
  puVar5 = PTR_DAT_04bcb908;
  puVar4 = PTR_DAT_04bcb900;
  local_58 = 0;
  plVar11 = (long *)(PTR_DAT_04bcb900 + 0x18);
  local_68 = (long ****)&local_68;
  local_60 = (long ****)&local_68;
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar8;
    if (uVar3 != 0) {
      lVar9 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar3) {
LAB_00211538:
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar11 = (long *)(*(long *)(lVar9 + (ulong)uVar3 * 8) + 0x10);
    }
  }
  FUN_001a69a0(*(undefined8 *)(*plVar11 + 0x10),&local_68);
  lVar9 = FUN_001ba640(*(long *)(*(long *)(*(long *)(param_1 + 0x10) + 0x78) + 0x30) + 0x108,"prudp"
                      );
  if ((long *****)local_60 != &local_68) {
    pppplVar12 = local_60;
    do {
      while( true ) {
        pppplVar13 = pppplVar12 + 2;
        iVar7 = FUN_001a8b90(pppplVar13);
        if (iVar7 != 0) break;
        FUN_001b567c(pppplVar13,*(undefined1 *)(lVar9 + 0x20));
        FUN_001b913c(pppplVar13,0);
        FUN_001b9180(pppplVar13,0);
        FUN_001b91c4(pppplVar13,0);
        FUN_001b91ec(pppplVar13,0);
        FUN_001b9430(pppplVar13);
        plVar11 = (long *)(puVar4 + 0x18);
        if (*puVar5 != '\0') {
          puVar8 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
          uVar3 = *puVar8;
          if (uVar3 != 0) {
            lVar1 = **(long **)(puVar4 + 0xa0);
            if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar1 >> 3) <= (ulong)uVar3)
            goto LAB_00211538;
            plVar11 = (long *)(*(long *)(lVar1 + (ulong)uVar3 * 8) + 0x10);
          }
        }
        FUN_001b62d0(*(undefined8 *)(*plVar11 + 0x10),pppplVar13);
        pppplVar13 = pppplVar12 + 1;
        pppplVar12 = (long ****)*pppplVar13;
        if ((long *****)*pppplVar13 == &local_68) goto LAB_002114a8;
      }
      ppplVar10 = *pppplVar12;
      pppplVar2 = (long ****)pppplVar12[1];
      ppplVar10[1] = (long **)pppplVar2;
      *pppplVar12[1] = (long **)ppplVar10;
      local_58 = local_58 + -1;
      (*(code *)*pppplVar12[2])(pppplVar13);
      FUN_00187e4c(pppplVar12);
      pppplVar12 = pppplVar2;
    } while ((long *****)pppplVar2 != &local_68);
  }
LAB_002114a8:
  if (&local_68 != (long *****)param_2) {
    FUN_001db790(param_2,local_60,&local_68);
  }
  if (local_58 != 0) {
    ppplVar10 = *local_60;
    ppplVar10[1] = (long **)local_68[1];
    *local_68[1] = (long **)ppplVar10;
    local_58 = 0;
    pppplVar12 = local_60;
    while ((long *****)pppplVar12 != &local_68) {
      pppplVar13 = (long ****)pppplVar12[1];
      (*(code *)*pppplVar12[2])();
      FUN_00187e4c(pppplVar12);
      pppplVar12 = pppplVar13;
    }
  }
  return;
}

