
void FUN_001f07e8(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  long lVar4;
  uint *puVar5;
  long *plVar6;
  undefined4 local_68 [6];
  int local_50;
  undefined4 uStack_4c;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 local_38;
  
  if (*(long **)PTR_DAT_04bcc878 != (long *)0x0) {
    (**(code **)(**(long **)PTR_DAT_04bcc878 + 0x10))();
  }
  *(int *)PTR_DAT_04bcc880 = *(int *)PTR_DAT_04bcc880 + 1;
  lVar4 = FUN_00185a6c(0x2e0);
  if (lVar4 != 0) {
    FUN_001ee600(lVar4);
  }
  *(long *)(param_2 + 0xa8) = lVar4;
  FUN_00189050(param_2 + 0xb0,&local_38);
  (**(code **)(**(long **)(param_2 + 0xa8) + 0x10))
            (&local_50,*(long **)(param_2 + 0xa8),local_38,*(undefined4 *)(param_2 + 0xd8));
  FUN_00189128(local_38);
  puVar2 = PTR_LAB_04bc0ee0;
  puVar1 = PTR_LAB_04bc0ee0;
  if (local_50 < 0) {
    puVar1 = (undefined *)0x0;
  }
  if (puVar1 == (undefined *)0x0) {
LAB_001f0948:
    *param_1 = CONCAT44(uStack_4c,local_50);
    param_1[1] = uStack_48;
    param_1[2] = local_40;
    return;
  }
  (**(code **)(**(long **)(param_2 + 0x100) + 0x10))
            (*(long **)(param_2 + 0x100),*(undefined8 *)(param_2 + 0xa8));
  puVar1 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x28);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar5 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar3 = *puVar5;
    if (uVar3 != 0) {
      lVar4 = **(long **)(puVar1 + 0xa0);
      if ((ulong)((*(long **)(puVar1 + 0xa0))[1] - lVar4 >> 3) <= (ulong)uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar6 = (long *)(*(long *)(lVar4 + (ulong)uVar3 * 8) + 0x20);
    }
  }
  lVar4 = FUN_001948f0(*(undefined8 *)(*(long *)(*plVar6 + 0x10) + 0x18),
                       *(undefined4 *)(param_2 + 0xa0));
  if (lVar4 == 0) {
    local_68[0] = 0x80010004;
  }
  else {
    (**(code **)(**(long **)(param_2 + 0xa8) + 0x50))(local_68);
    FUN_0018ab44(&local_50,local_68);
    if (local_50 < 0) {
      puVar2 = (undefined *)0x0;
    }
    if (puVar2 == (undefined *)0x0) goto LAB_001f0948;
    local_68[0] = 0x10001;
  }
  FUN_0018aa70(param_1,local_68);
  return;
}

