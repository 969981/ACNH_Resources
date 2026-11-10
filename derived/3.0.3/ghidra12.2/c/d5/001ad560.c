
int FUN_001ad560(long param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  
  puVar2 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar4;
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
  lVar5 = *(long *)(param_1 + 0x80);
  if (lVar5 == param_1 + 0x78) {
    iVar3 = -1;
  }
  else {
    do {
      iVar3 = FUN_001b8fa0(lVar5 + 0x18,"RVCID",0);
      if ((iVar3 == param_2) && (iVar3 = *(int *)(lVar5 + 0x90), iVar3 != -1)) goto LAB_001ad670;
      lVar5 = *(long *)(lVar5 + 8);
    } while (lVar5 != param_1 + 0x78);
    iVar3 = -1;
  }
LAB_001ad670:
  (**(code **)(*plVar6 + 0x20))(plVar6);
  return iVar3;
}

