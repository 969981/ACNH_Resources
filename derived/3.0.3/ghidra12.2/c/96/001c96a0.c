
uint FUN_001c96a0(long *param_1,undefined4 param_2,int param_3,long param_4,long param_5)

{
  undefined8 *puVar1;
  long lVar2;
  char cVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  size_t sVar7;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  uint *puVar11;
  long *plVar12;
  long *plVar13;
  long lVar14;
  long *plVar15;
  undefined1 auStack_e8 [16];
  size_t local_d8;
  undefined1 local_58;
  
  *(ushort *)(param_4 + 0x42) = CONCAT11((char)param_1[4],(char)param_1[1]);
  *(ushort *)(param_4 + 0x44) = (ushort)*(byte *)(param_1 + 1) | (ushort)(param_3 << 8);
  (**(code **)(*param_1 + 0x88))();
  FUN_001e1500(auStack_e8);
  FUN_001e15a8(auStack_e8,param_4 + 0x140);
  plVar13 = param_1 + 0x14;
  plVar15 = (long *)*plVar13;
  local_58 = (char)param_3;
  if (plVar15 == (long *)0x0) {
LAB_001c975c:
    lVar14 = 0;
  }
  else {
    plVar12 = plVar13;
    do {
      uVar10 = FUN_001dc410(plVar15 + 4,auStack_e8);
      plVar4 = plVar15 + 1;
      if ((uVar10 & 1) == 0) {
        plVar12 = plVar15;
        plVar4 = plVar15;
      }
      plVar15 = (long *)*plVar4;
    } while (plVar15 != (long *)0x0);
    if ((plVar12 == plVar13) || (uVar10 = FUN_001dc410(auStack_e8,plVar12 + 4), (uVar10 & 1) != 0))
    goto LAB_001c975c;
    lVar14 = plVar12[0x17];
  }
  FUN_001e1868(auStack_e8);
  (**(code **)(*param_1 + 0x90))(param_1);
  puVar6 = PTR_DAT_04bcb908;
  puVar5 = PTR_DAT_04bcb900;
  if (lVar14 == 0) {
    plVar13 = (long *)(PTR_DAT_04bcb900 + 0x18);
    if (*PTR_DAT_04bcb908 != '\0') {
      puVar11 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar9 = *puVar11;
      if (uVar9 != 0) {
        lVar14 = **(long **)(puVar5 + 0xa0);
        if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar14 >> 3) <= (ulong)uVar9)
        goto LAB_001c99d8;
        plVar13 = (long *)(*(long *)(lVar14 + (ulong)uVar9 * 8) + 0x10);
      }
    }
    puVar1 = (undefined8 *)(*(long *)(*plVar13 + 0x10) + 0x1b0);
    if (1 < *(int *)(param_4 + 0x1e8) - 1U) {
      puVar1 = (undefined8 *)(*(long *)(*plVar13 + 0x10) + 0x1a8);
    }
    iVar8 = (**(code **)(*(long *)*puVar1 + 0x20))
                      ((long *)*puVar1,param_4,(int)param_1[1],param_5 != 0);
    if (iVar8 != 1) {
      lVar14 = 0;
      cVar3 = *puVar6;
      goto joined_r0x001c98d4;
    }
  }
  else {
    plVar13 = (long *)(PTR_DAT_04bcb900 + 0x18);
    *(undefined1 *)(param_4 + 0x40) = *(undefined1 *)(lVar14 + 0x1eb);
    if (*puVar6 != '\0') {
      puVar11 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar9 = *puVar11;
      if (uVar9 != 0) {
        lVar2 = **(long **)(puVar5 + 0xa0);
        if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar2 >> 3) <= (ulong)uVar9) goto LAB_001c99d8;
        plVar13 = (long *)(*(long *)(lVar2 + (ulong)uVar9 * 8) + 0x10);
      }
    }
    puVar1 = (undefined8 *)(*(long *)(*plVar13 + 0x10) + 0x1b0);
    if (1 < *(int *)(param_4 + 0x1e8) - 1U) {
      puVar1 = (undefined8 *)(*(long *)(*plVar13 + 0x10) + 0x1a8);
    }
    iVar8 = (**(code **)(*(long *)*puVar1 + 0x20))
                      ((long *)*puVar1,param_4,(int)param_1[1],param_5 != 0);
    if (iVar8 != 1) {
      lVar14 = lVar14 + 0x1a0;
      cVar3 = *puVar6;
joined_r0x001c98d4:
      local_d8 = 0;
      plVar13 = (long *)(puVar5 + 0x18);
      if (cVar3 != '\0') {
        local_d8 = 0;
        plVar13 = (long *)(puVar5 + 0x18);
        puVar11 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
        uVar9 = *puVar11;
        if (uVar9 != 0) {
          lVar2 = **(long **)(puVar5 + 0xa0);
          if ((ulong)((*(long **)(puVar5 + 0xa0))[1] - lVar2 >> 3) <= (ulong)uVar9) {
LAB_001c99d8:
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar13 = (long *)(*(long *)(lVar2 + (ulong)uVar9 * 8) + 0x10);
        }
      }
      puVar1 = (undefined8 *)(*(long *)(*plVar13 + 0x10) + 0x1b0);
      if (1 < *(int *)(param_4 + 0x1e8) - 1U) {
        puVar1 = (undefined8 *)(*(long *)(*plVar13 + 0x10) + 0x1a8);
      }
      uVar10 = (**(code **)(*(long *)*puVar1 + 0x10))
                         ((long *)*puVar1,param_4,iVar8,param_5,(int)param_1[1],param_1 + 0x1d,
                          lVar14,auStack_e8);
      sVar7 = local_d8;
      if ((uVar10 & 1) == 0) {
        uVar9 = 0;
        goto LAB_001c99b0;
      }
      memcpy((void *)(param_4 + 0x48),auStack_e8,local_d8);
      *(size_t *)(param_4 + 0x58) = sVar7;
    }
  }
  uVar9 = (**(code **)(*(long *)param_1[3] + 0x68))
                    ((long *)param_1[3],*(undefined4 *)(param_4 + 0x1e8),param_2,(int)param_1[1],
                     (char)param_1[4],param_3,param_4,*PTR_DAT_04bcc6a0);
LAB_001c99b0:
  return uVar9 & 1;
}

