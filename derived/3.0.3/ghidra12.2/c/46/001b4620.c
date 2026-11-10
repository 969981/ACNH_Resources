
void FUN_001b4620(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  long lVar5;
  long *plVar6;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined8 local_b0;
  undefined8 *puStack_a8;
  
  puVar3 = PTR_DAT_04bcb908;
  puVar2 = PTR_DAT_04bcb900;
  plVar6 = (long *)(PTR_DAT_04bcb900 + 0x18);
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
      plVar6 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  if ((*plVar6 != 0) && (*(long *)(*plVar6 + 0x10) != 0)) {
    plVar6 = (long *)(puVar2 + 0x28);
    if (*puVar3 != '\0') {
      puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar1 = *puVar4;
      if (uVar1 != 0) {
        lVar5 = **(long **)(puVar2 + 0xa0);
        if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) goto LAB_001b4880;
        plVar6 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x20);
      }
    }
    lVar5 = FUN_001948f0(*(undefined8 *)(*(long *)(*plVar6 + 0x10) + 0x18),
                         *(undefined4 *)(param_1 + 0xa0));
    if (lVar5 == 0) goto LAB_001b483c;
    plVar6 = (long *)(puVar2 + 0x18);
    if (*puVar3 != '\0') {
      puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar1 = *puVar4;
      if (uVar1 != 0) {
        lVar5 = **(long **)(puVar2 + 0xa0);
        if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) goto LAB_001b4880;
        plVar6 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x10);
      }
    }
    plVar6 = *(long **)(*(long *)(*(long *)(*plVar6 + 0x10) + 0x198) + 0x10);
    if (plVar6 != (long *)0x0) {
      FUN_001e1500(&local_c0);
      (**(code **)(*plVar6 + 0x30))(plVar6,param_1 + 0xa8,&local_c0,1);
      FUN_001e1868(&local_c0);
      plVar6 = (long *)(puVar2 + 0x28);
      if (*puVar3 != '\0') {
        puVar4 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        uVar1 = *puVar4;
        if (uVar1 != 0) {
          lVar5 = **(long **)(puVar2 + 0xa0);
          if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar5 >> 3) <= (ulong)uVar1) {
LAB_001b4880:
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar6 = (long *)(*(long *)(lVar5 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      FUN_0019a150(*(undefined8 *)(*(long *)(*plVar6 + 0x10) + 0x18),*(undefined4 *)(param_1 + 0xa0)
                   ,*(undefined4 *)(param_1 + 0xc0));
      local_c0 = PTR_DAT_04bcc0c0 + 0x10;
      local_b0 = 0;
      puStack_a8 = &DAT_0407ebb1;
      puStack_b8 = PTR_LAB_04bcc4a0;
      FUN_0019a704(param_1,&local_c0);
      FUN_00187810(&local_c0);
      *(undefined **)(param_1 + 0x138) = local_c0 + 5000;
      return;
    }
  }
LAB_001b483c:
  local_c0 = PTR_DAT_04bcc0c0 + 0x10;
  local_b0 = 0;
  puStack_a8 = &DAT_0407ebb1;
  puStack_b8 = PTR_LAB_04bcc4a8;
  FUN_0019a704(param_1,&local_c0);
  return;
}

