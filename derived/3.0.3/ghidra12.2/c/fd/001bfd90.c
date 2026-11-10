
bool FUN_001bfd90(long *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  puVar2 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      lVar5 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar6 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if ((*plVar6 == 0) || (lVar5 = *(long *)(*plVar6 + 0x10), lVar5 == 0)) {
    lVar5 = 0;
  }
  else {
    lVar5 = *(long *)(lVar5 + 0x10);
  }
  plVar6 = (long *)(lVar5 + 0x78);
  (**(code **)(*plVar6 + 0x10))(plVar6);
  do {
    puVar7 = (undefined4 *)param_1[0x59];
    puVar8 = (undefined4 *)param_1[0x5a];
    if (puVar7 == puVar8) break;
    uVar4 = (**(code **)(*param_1 + 0x40))(param_1,*puVar7,*(undefined2 *)(puVar7 + 1));
  } while ((uVar4 & 1) != 0);
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return puVar7 == puVar8;
}

