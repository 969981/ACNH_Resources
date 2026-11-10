
ulong FUN_001c8e1c(long param_1)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint *puVar7;
  long lVar8;
  ulong uVar9;
  long *plVar10;
  
  puVar6 = PTR_DAT_04bcb910;
  puVar5 = PTR_DAT_04bcb908;
  puVar4 = PTR_DAT_04bcb900;
  plVar10 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*PTR_DAT_04bcb908 == '\0') {
LAB_001c8e9c:
    iVar2 = *(int *)(*(long *)(*(long *)(*plVar10 + 0x10) + 0xe8) + 0x98);
    cVar3 = *puVar5;
  }
  else {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar7;
    if (uVar1 == 0) goto LAB_001c8e9c;
    lVar8 = **(long **)(puVar4 + 0xa0);
    if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar1) goto LAB_001c8fbc;
    iVar2 = *(int *)(*(long *)(*(long *)(*(long *)(*(long *)(lVar8 + (ulong)uVar1 * 8) + 0x10) +
                                        0x10) + 0xe8) + 0x98);
    cVar3 = *puVar5;
  }
  if (cVar3 != '\0') {
    puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
    uVar1 = *puVar7;
    if (uVar1 == 0) {
      plVar10 = (long *)(puVar4 + 0x18);
    }
    else {
      lVar8 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar1) goto LAB_001c8fbc;
      plVar10 = (long *)(*(long *)(lVar8 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  uVar9 = (ulong)(iVar2 - 0x40);
  lVar8 = (**(code **)(**(long **)(*(long *)(*plVar10 + 0x10) + 0xe8) + 0x80))();
  if (*(char *)(lVar8 + 0x10) == '\0') {
    plVar10 = (long *)(puVar4 + 0x18);
    if (*puVar5 != '\0') {
      puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
      uVar1 = *puVar7;
      if (uVar1 != 0) {
        lVar8 = **(long **)(puVar4 + 0xa0);
        if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar1) {
LAB_001c8fbc:
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar10 = (long *)(*(long *)(lVar8 + (ulong)uVar1 * 8) + 0x10);
      }
    }
    lVar8 = (**(code **)(**(long **)(*(long *)(*plVar10 + 0x10) + 0xe8) + 0x78))();
    if (((*(char *)(lVar8 + 8) != '\0') || (*(char *)(param_1 + 0x1eb) == '\0')) ||
       ((*(char *)(param_1 + 0x1eb) == '\x01' && (*(char *)(param_1 + 0x1ec) == '\0')))) {
      return uVar9 - 0x24;
    }
  }
  else {
    uVar9 = uVar9 - 0x2c;
  }
  return uVar9;
}

