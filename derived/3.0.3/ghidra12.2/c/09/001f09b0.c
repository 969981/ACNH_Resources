
void FUN_001f09b0(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  uint *puVar8;
  long lVar9;
  int *piVar10;
  long lVar11;
  long lVar12;
  long *plVar13;
  long *plVar14;
  int local_74;
  int local_70;
  undefined4 uStack_6c;
  undefined8 uStack_68;
  undefined8 local_60;
  ulong local_58;
  
  puVar5 = PTR_DAT_04bcb908;
  puVar4 = PTR_DAT_04bcb900;
  plVar13 = (long *)(param_2 + 0xe0);
  lVar9 = *plVar13;
  if (lVar9 == *(long *)(param_2 + 0xe8)) {
LAB_001f0a6c:
    puVar6 = PTR_DAT_04bcb910;
    puVar3 = PTR_LAB_04bc0ee0;
    lVar11 = *(long *)(param_2 + 0x108);
    while( true ) {
      local_58 = 0;
      lVar12 = lVar9;
      if (lVar11 != 0) {
        local_58 = 0;
        FUN_001a3250(plVar13,lVar11);
        lVar12 = *(long *)(param_2 + 0xe0);
        lVar9 = *(long *)(param_2 + 0xe8);
      }
      (**(code **)(**(long **)(param_2 + 0xa8) + 0x68))
                (&local_70,*(long **)(param_2 + 0xa8),lVar12,&local_58,lVar9 - lVar12);
      puVar1 = puVar3;
      if (local_70 < 0) {
        puVar1 = (undefined *)0x0;
      }
      if (puVar1 == (undefined *)0x0) {
        *param_1 = CONCAT44(uStack_6c,local_70);
        param_1[1] = uStack_68;
        param_1[2] = local_60;
        return;
      }
      lVar11 = *(long *)(param_2 + 0xe0);
      lVar9 = *(long *)(param_2 + 0xe8);
      uVar7 = lVar9 - lVar11;
      if (local_58 < uVar7 || local_58 - uVar7 == 0) {
        if (local_58 < uVar7) {
          lVar9 = lVar11 + local_58;
          *(long *)(param_2 + 0xe8) = lVar9;
        }
      }
      else {
        FUN_001a3250(plVar13,local_58 - uVar7);
        lVar11 = *(long *)(param_2 + 0xe0);
        lVar9 = *(long *)(param_2 + 0xe8);
      }
      if (lVar11 == lVar9) {
        uVar7 = (**(code **)(**(long **)(param_2 + 0xa8) + 0x90))();
        if ((uVar7 & 1) == 0) goto LAB_001f0bd8;
        local_70 = 0x10001;
        goto LAB_001f0be0;
      }
      uVar7 = (**(code **)(**(long **)(param_2 + 0x100) + 0x28))
                        (*(long **)(param_2 + 0x100),lVar11,lVar9 - lVar11);
      plVar14 = (long *)(puVar4 + 0x28);
      if (*puVar5 != '\0') {
        puVar8 = (uint *)FUN_03876070(*(undefined8 *)puVar6);
        uVar2 = *puVar8;
        if (uVar2 != 0) {
          lVar9 = **(long **)(puVar4 + 0xa0);
          if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar2)
          goto LAB_001f0c2c;
          plVar14 = (long *)(*(long *)(lVar9 + (ulong)uVar2 * 8) + 0x20);
        }
      }
      lVar9 = FUN_001948f0(*(undefined8 *)(*(long *)(*plVar14 + 0x10) + 0x18),
                           *(undefined4 *)(param_2 + 0xa0));
      if (lVar9 == 0) {
        local_74 = -0x7ffefffc;
        goto LAB_001f0c00;
      }
      if ((uVar7 & 1) == 0) break;
      lVar9 = *(long *)(param_2 + 0xe0);
      *(long *)(param_2 + 0xe8) = lVar9;
      lVar11 = *(long *)(param_2 + 0x108);
    }
    local_74 = -0x7ffaffea;
LAB_001f0c00:
    piVar10 = &local_74;
  }
  else {
    uVar7 = (**(code **)(**(long **)(param_2 + 0x100) + 0x28))
                      (*(long **)(param_2 + 0x100),lVar9,*(long *)(param_2 + 0xe8) - lVar9);
    plVar14 = (long *)(puVar4 + 0x28);
    if (*puVar5 != '\0') {
      puVar8 = (uint *)FUN_03876070(*(undefined8 *)PTR_DAT_04bcb910);
      uVar2 = *puVar8;
      if (uVar2 != 0) {
        lVar9 = **(long **)(puVar4 + 0xa0);
        if ((ulong)((*(long **)(puVar4 + 0xa0))[1] - lVar9 >> 3) <= (ulong)uVar2) {
LAB_001f0c2c:
                    /* WARNING: Subroutine does not return */
          FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                       ,0x47,0xe0000003,0);
        }
        plVar14 = (long *)(*(long *)(lVar9 + (ulong)uVar2 * 8) + 0x20);
      }
    }
    lVar9 = FUN_001948f0(*(undefined8 *)(*(long *)(*plVar14 + 0x10) + 0x18),
                         *(undefined4 *)(param_2 + 0xa0));
    if (lVar9 == 0) {
      local_70 = -0x7ffefffc;
    }
    else {
      if ((uVar7 & 1) != 0) {
        lVar9 = *(long *)(param_2 + 0xe0);
        *(long *)(param_2 + 0xe8) = lVar9;
        goto LAB_001f0a6c;
      }
LAB_001f0bd8:
      local_70 = -0x7ffaffea;
    }
LAB_001f0be0:
    piVar10 = &local_70;
  }
  FUN_0018aa70(param_1,piVar10);
  return;
}

