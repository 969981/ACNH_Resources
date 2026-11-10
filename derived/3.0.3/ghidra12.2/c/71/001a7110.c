
void FUN_001a7110(long *param_1,ulong param_2,long param_3)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  char cVar4;
  short sVar5;
  uint *puVar6;
  long lVar7;
  undefined *puVar8;
  long *plVar9;
  long lVar10;
  short local_38 [4];
  
  FUN_001a57fc();
  puVar8 = PTR_DAT_04bcc318;
  *(undefined2 *)((long)param_1 + 0xc) = 0;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 3) = 0xff;
  *param_1 = (long)(puVar8 + 0x10);
  puVar8 = PTR_DAT_04bcc320;
  param_1[5] = 0;
  *(undefined2 *)(param_1 + 8) = 0;
  param_1[7] = (long)(puVar8 + 0x10);
  puVar2 = PTR_DAT_04bcb908;
  puVar8 = PTR_DAT_04bcb900;
  param_1[2] = param_3;
  puVar3 = PTR_DAT_04bcb910;
  cVar4 = *puVar2;
  if (param_3 == 0) {
    plVar9 = (long *)(puVar8 + 0x18);
    if (cVar4 != '\0') {
      puVar6 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar1 = *puVar6;
      if (uVar1 != 0) {
        lVar10 = **(long **)(puVar8 + 0xa0);
        if ((ulong)((*(long **)(puVar8 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar9 = (long *)(*(long *)(lVar10 + (ulong)uVar1 * 8) + 0x10);
      }
    }
    lVar10 = 0;
    if (*plVar9 != 0) {
      lVar7 = *(long *)(*plVar9 + 0x10);
      lVar10 = 0;
      if (lVar7 != 0) {
        lVar10 = *(long *)(lVar7 + 0xe8);
      }
    }
    param_1[2] = lVar10;
    cVar4 = *puVar2;
  }
  plVar9 = (long *)(puVar8 + 0x18);
  if (cVar4 != '\0') {
    plVar9 = (long *)(puVar8 + 0x18);
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)puVar3);
    uVar1 = *puVar6;
    if (uVar1 != 0) {
      lVar10 = **(long **)(puVar8 + 0xa0);
      if ((ulong)((*(long **)(puVar8 + 0xa0))[1] - lVar10 >> 3) <= (ulong)uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h",
                     0x47,0xe0000003,0);
      }
      plVar9 = (long *)(*(long *)(lVar10 + (ulong)uVar1 * 8) + 0x10);
    }
  }
  puVar8 = PTR_DAT_04bcbb78;
  if (*plVar9 == 0) {
    lVar10 = 0;
    cVar4 = *puVar2;
  }
  else {
    lVar10 = *(long *)(*plVar9 + 0x10);
    cVar4 = *puVar2;
  }
  if (cVar4 != '\0') {
    puVar6 = (uint *)FUN_03876070(*(undefined8 *)puVar3);
    if (*puVar6 != 0) {
      puVar8 = (undefined *)
               (*(long *)(puVar8 + (param_2 & 0xffffffff) * 0x2a8 + 0x10) + (ulong)*puVar6 * 0x148);
      goto LAB_001a72c0;
    }
  }
  puVar8 = puVar8 + (param_2 & 0xffffffff) * 0x2a8 + 0x18;
LAB_001a72c0:
  plVar9 = (long *)(lVar10 + 0x1b0);
  if (1 < *(int *)(puVar8 + 0x140) - 1U) {
    plVar9 = (long *)(lVar10 + 0x1a8);
  }
  param_1[4] = *plVar9;
  FUN_00187810(local_38);
  sVar5 = local_38[0];
  cVar4 = FUN_00189e50(0xff);
  *(char *)(param_1 + 6) = cVar4 + (char)sVar5;
  FUN_00187810(local_38);
  sVar5 = FUN_00189e50(0xffff);
  *(short *)(param_1 + 8) = sVar5 + local_38[0];
  return;
}

