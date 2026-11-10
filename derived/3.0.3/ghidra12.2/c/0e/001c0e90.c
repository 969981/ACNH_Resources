
void FUN_001c0e90(long param_1,undefined8 *param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  long lVar4;
  long *plVar5;
  
  *(undefined8 *)PTR_DAT_04bcbcb0 = *param_2;
  puVar2 = PTR_DAT_04bcb900;
  plVar5 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar3 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar3;
    if (uVar1 != 0) {
      lVar4 = **(long **)(puVar2 + 0xa0);
      if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar4 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar5 = (long *)(*(long *)(lVar4 + (ulong)uVar1 * 8) + 0x20);
    }
  }
  if (*(int *)(*(long *)(*(long *)(*plVar5 + 0x10) + 0x10) + 0x1cc) == 3) {
    lVar4 = *(long *)(param_1 + 0x100);
    if (lVar4 != *(long *)(param_1 + 0x108)) {
      do {
        (**(code **)(**(long **)(lVar4 + 8) + 0x18))(*(long **)(lVar4 + 8),param_2);
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != *(long *)(param_1 + 0x108));
    }
    FUN_001c11b0(param_1,param_2);
    lVar4 = *(long *)(param_1 + 0x2c8);
    if (lVar4 != *(long *)(param_1 + 0x2d0)) {
      do {
        FUN_001e5ab0(*(undefined8 *)(lVar4 + 8));
        lVar4 = lVar4 + 0x10;
      } while (lVar4 != *(long *)(param_1 + 0x2d0));
    }
    return;
  }
  lVar4 = *(long *)(param_1 + 0x2c8);
  if (lVar4 != *(long *)(param_1 + 0x2d0)) {
    do {
      FUN_001e5ab0(*(undefined8 *)(lVar4 + 8));
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != *(long *)(param_1 + 0x2d0));
  }
  FUN_001c1040(param_1,param_2);
  lVar4 = *(long *)(param_1 + 0x100);
  if (lVar4 != *(long *)(param_1 + 0x108)) {
    do {
      (**(code **)(**(long **)(lVar4 + 8) + 0x18))(*(long **)(lVar4 + 8),param_2);
      lVar4 = lVar4 + 0x10;
    } while (lVar4 != *(long *)(param_1 + 0x108));
  }
  FUN_001c11b0(param_1,param_2);
  return;
}

