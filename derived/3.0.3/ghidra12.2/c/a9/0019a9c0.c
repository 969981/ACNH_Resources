
void FUN_0019a9c0(long *param_1,int *param_2)

{
  long *plVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  long *plVar5;
  code *pcVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  puVar2 = PTR_DAT_04bcb900;
  plVar8 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar4;
    if (uVar3 != 0) {
      lVar9 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar8 = (long *)(*(long *)(lVar9 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  plVar5 = (long *)(*(long *)(*(long *)(*plVar8 + 0x10) + 0x18) + 0x50);
  plVar8 = (long *)*plVar5;
  if (plVar8 != (long *)0x0) {
    plVar7 = plVar5;
    do {
      plVar1 = plVar8;
      if (*(uint *)(plVar8 + 4) < *(uint *)(param_1 + 0x14)) {
        plVar1 = plVar7;
        plVar8 = plVar8 + 1;
      }
      plVar8 = (long *)*plVar8;
      plVar7 = plVar1;
    } while (plVar8 != (long *)0x0);
    if (((plVar1 != plVar5) && (*(uint *)(plVar1 + 4) <= *(uint *)(param_1 + 0x14))) &&
       (lVar9 = plVar1[5], lVar9 != 0)) {
      puVar2 = PTR_LAB_04bc0ee0;
      if (*param_2 < 0) {
        puVar2 = (undefined *)0x0;
      }
      if (puVar2 == (undefined *)0x0) {
        local_48 = *(undefined8 *)param_2;
        uStack_40 = *(undefined8 *)(param_2 + 2);
        local_38 = *(undefined8 *)(param_2 + 4);
        FUN_00197e40(lVar9,3,&local_48,1);
        pcVar6 = *(code **)(*param_1 + 0x80);
      }
      else {
        local_48 = *(undefined8 *)param_2;
        uStack_40 = *(undefined8 *)(param_2 + 2);
        local_38 = *(undefined8 *)(param_2 + 4);
        FUN_00197e40(lVar9,2,&local_48,1);
        pcVar6 = *(code **)(*param_1 + 0x78);
      }
      (*pcVar6)(param_1,lVar9);
      *(undefined4 *)(param_1 + 8) = 5;
      pcVar6 = (code *)param_1[5];
      goto joined_r0x0019aae8;
    }
  }
  FUN_00197980(param_1[0x16]);
  (**(code **)(*param_1 + 0x88))(param_1);
  *(undefined4 *)(param_1 + 8) = 5;
  pcVar6 = (code *)param_1[5];
joined_r0x0019aae8:
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(param_1,param_1 + 6);
  }
  return;
}

