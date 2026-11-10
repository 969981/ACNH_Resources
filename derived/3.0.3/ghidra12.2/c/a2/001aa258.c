
undefined8 FUN_001aa258(long param_1)

{
  uint uVar1;
  char cVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  short sVar7;
  short sVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  uint *puVar11;
  ulong uVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  long *plVar16;
  undefined1 auStack_a0 [8];
  long local_98;
  char local_38;
  
  puVar6 = PTR_DAT_04bcb910;
  puVar5 = PTR_DAT_04bcb908;
  puVar4 = PTR_DAT_04bcb900;
  plVar16 = (long *)(PTR_DAT_04bcb900 + 0x18);
  if (*PTR_DAT_04bcb908 != '\0') {
    puVar11 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
    uVar1 = *puVar11;
    if (uVar1 != 0) {
      lVar15 = **(long **)(puVar4 + 0xa0);
      if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar15 >> 3) <= (ulong)uVar1) goto LAB_001aa550;
      plVar16 = (long *)(*(long *)(lVar15 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  if (*(long *)(*(long *)(*plVar16 + 0x10) + 0x198) != 0) {
    FUN_001b8014(auStack_a0);
    plVar16 = (long *)(puVar4 + 0x18);
    if (*puVar5 != '\0') {
      puVar11 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
      uVar1 = *puVar11;
      if (uVar1 != 0) {
        lVar15 = **(long **)(puVar4 + 0xa0);
        if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar15 >> 3) <= (ulong)uVar1) {
LAB_001aa550:
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar16 = (long *)(*(long *)(lVar15 + (ulong)uVar1 * 8) + 0x10);
      }
    }
    uVar12 = FUN_001ab0b0(*(undefined8 *)(*(long *)(*plVar16 + 0x10) + 0x198),
                          *(long *)(param_1 + 0x318) + 0x10,auStack_a0);
    if ((uVar12 & 1) != 0) {
      lVar15 = *(long *)(param_1 + 0x318);
      if (*(char *)(lVar15 + 0x78) == '\0') {
        FUN_001b8590(lVar15 + 0x10);
        lVar15 = *(long *)(lVar15 + 0x18);
      }
      else {
        lVar15 = *(long *)(lVar15 + 0x18);
      }
      if (local_38 == '\0') {
        FUN_001b8590(auStack_a0);
      }
      lVar3 = local_98;
      lVar13 = FUN_001e14d8(lVar15);
      lVar14 = FUN_001e14d8(lVar3);
      if ((lVar13 != lVar14) || (*(int *)(lVar15 + 0x88) != *(int *)(lVar3 + 0x88))) {
LAB_001aa420:
        lVar15 = *(long *)(param_1 + 0x318);
        if (*(char *)(lVar15 + 0x78) == '\0') {
          FUN_001b8590(lVar15 + 0x10);
          FUN_001e15a8(param_1 + 0x280,*(undefined8 *)(lVar15 + 0x18));
          lVar15 = *(long *)(param_1 + 0x318);
          cVar2 = *(char *)(lVar15 + 0x78);
        }
        else {
          FUN_001e15a8(param_1 + 0x280,*(undefined8 *)(lVar15 + 0x18));
          lVar15 = *(long *)(param_1 + 0x318);
          cVar2 = *(char *)(lVar15 + 0x78);
        }
        if (cVar2 == '\0') {
          FUN_001b8590(lVar15 + 0x10);
          uVar9 = FUN_001e14f8(*(undefined8 *)(lVar15 + 0x18));
          lVar15 = *(long *)(param_1 + 0x318);
          *(undefined2 *)(param_1 + 0x310) = uVar9;
        }
        else {
          uVar9 = FUN_001e14f8(*(undefined8 *)(lVar15 + 0x18));
          lVar15 = *(long *)(param_1 + 0x318);
          *(undefined2 *)(param_1 + 0x310) = uVar9;
        }
        if (local_38 == '\0') {
          FUN_001b8590(auStack_a0);
          cVar2 = *(char *)(lVar15 + 0x78);
          lVar3 = local_98;
        }
        else {
          cVar2 = *(char *)(lVar15 + 0x78);
          lVar3 = local_98;
        }
        local_98 = lVar3;
        if (cVar2 == '\0') {
          FUN_001b8590(lVar15 + 0x10);
        }
        FUN_001e15a8(*(undefined8 *)(lVar15 + 0x18),lVar3);
        *(undefined1 *)(lVar15 + 0x79) = 0;
        lVar15 = *(long *)(param_1 + 0x318);
        if (local_38 == '\0') {
          FUN_001b8590(auStack_a0);
          uVar10 = FUN_001e14f8(local_98);
          cVar2 = *(char *)(lVar15 + 0x78);
        }
        else {
          uVar10 = FUN_001e14f8(local_98);
          cVar2 = *(char *)(lVar15 + 0x78);
        }
        if (cVar2 == '\0') {
          FUN_001b8590(lVar15 + 0x10);
        }
        FUN_001e17d0(*(undefined8 *)(lVar15 + 0x18),uVar10);
        *(undefined1 *)(lVar15 + 0x79) = 0;
        FUN_001b8504(auStack_a0);
        return 1;
      }
      lVar15 = *(long *)(param_1 + 0x318);
      if (*(char *)(lVar15 + 0x78) == '\0') {
        FUN_001b8590(lVar15 + 0x10);
        sVar7 = FUN_001e14f8(*(undefined8 *)(lVar15 + 0x18));
      }
      else {
        sVar7 = FUN_001e14f8(*(undefined8 *)(lVar15 + 0x18));
      }
      if (local_38 == '\0') {
        FUN_001b8590(auStack_a0);
        sVar8 = FUN_001e14f8(local_98);
      }
      else {
        sVar8 = FUN_001e14f8(local_98);
      }
      if (sVar7 != sVar8) goto LAB_001aa420;
    }
    FUN_001b8504(auStack_a0);
  }
  return 0;
}

