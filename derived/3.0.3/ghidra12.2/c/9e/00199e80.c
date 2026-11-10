
void FUN_00199e80(long param_1,long param_2,int param_3,undefined8 *param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint *puVar6;
  uint *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  long local_a8;
  long local_a0;
  undefined8 local_98;
  uint *local_90;
  uint *local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar4 = PTR_DAT_04bcb910;
  puVar3 = PTR_DAT_04bcb908;
  puVar2 = PTR_DAT_04bcb900;
  plVar11 = *(long **)(param_1 + 0x48);
  local_80 = 0;
  local_90 = (uint *)0x0;
  local_88 = (uint *)0x0;
  if (plVar11 != (long *)(param_1 + 0x50)) {
    do {
      lVar8 = plVar11[5];
      if ((*(int *)(lVar8 + 0x14) == 1) &&
         ((*(long *)(lVar8 + 0x70) == param_2 ||
          ((param_3 != 0 && (*(int *)(lVar8 + 0x78) == param_3)))))) {
        plVar9 = (long *)(puVar2 + 0x28);
        local_98 = 0;
        local_a8 = 0;
        local_a0 = 0;
        if (*puVar3 != '\0') {
          puVar6 = (uint *)FUN_03876070(*(undefined8 *)puVar4);
          uVar1 = *puVar6;
          if (uVar1 != 0) {
            lVar8 = **(long **)(puVar2 + 0xa0);
            if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar1)
            goto LAB_0019a130;
            plVar9 = (long *)(*(long *)(lVar8 + (ulong)uVar1 * 8) + 0x20);
          }
        }
        FUN_00198890(*(undefined8 *)(*(long *)(*plVar9 + 0x10) + 0x18),
                     *(undefined4 *)(plVar11[5] + 0x18),&local_a8);
        FUN_001a2fd0(&local_90,local_88,local_a8,local_a0,local_a0 - local_a8 >> 2);
        plVar9 = (long *)plVar11[1];
        plVar10 = plVar11;
        if ((long *)plVar11[1] == (long *)0x0) {
          do {
            plVar12 = (long *)plVar10[2];
            bVar5 = (long *)*plVar12 != plVar10;
            plVar10 = plVar12;
          } while (bVar5);
        }
        else {
          do {
            plVar12 = plVar9;
            plVar9 = (long *)*plVar12;
          } while ((long *)*plVar12 != (long *)0x0);
        }
        local_78 = *param_4;
        uStack_70 = param_4[1];
        local_68 = param_4[2];
        FUN_00197e40(plVar11[5],3,&local_78,1);
        plVar11 = plVar12;
        if (local_a8 != 0) {
          local_a0 = local_a8;
          FUN_00187e4c();
        }
      }
      else {
        plVar9 = (long *)plVar11[1];
        plVar10 = plVar11;
        if ((long *)plVar11[1] == (long *)0x0) {
          do {
            plVar11 = (long *)plVar10[2];
            bVar5 = (long *)*plVar11 != plVar10;
            plVar10 = plVar11;
          } while (bVar5);
        }
        else {
          do {
            plVar11 = plVar9;
            plVar9 = (long *)*plVar11;
          } while ((long *)*plVar11 != (long *)0x0);
        }
      }
    } while (plVar11 != (long *)(param_1 + 0x50));
    for (puVar6 = local_90; puVar6 != local_88; puVar6 = puVar6 + 1) {
      plVar11 = (long *)(puVar2 + 0x28);
      if (*puVar3 != '\0') {
        puVar7 = (uint *)FUN_03876070(*(undefined8 *)puVar4);
        uVar1 = *puVar7;
        if (uVar1 != 0) {
          lVar8 = **(long **)(puVar2 + 0xa0);
          if ((ulong)((*(long **)(puVar2 + 0xa0))[1] - lVar8 >> 3) <= (ulong)uVar1) {
LAB_0019a130:
                    /* WARNING: Subroutine does not return */
            FUN_0018786c("C:\\home\\ws\\Master\\Pack\\7923402a\\.\\OnlineCore/src/Core/InstanceTable.h"
                         ,0x47,0xe0000003,0);
          }
          plVar11 = (long *)(*(long *)(lVar8 + (ulong)uVar1 * 8) + 0x20);
        }
      }
      plVar9 = (long *)(*(long *)(*(long *)(*plVar11 + 0x10) + 0x18) + 0x50);
      plVar11 = (long *)*plVar9;
      if (plVar11 != (long *)0x0) {
        plVar10 = plVar9;
        do {
          plVar12 = plVar11;
          if (*(uint *)(plVar11 + 4) < *puVar6) {
            plVar12 = plVar10;
            plVar11 = plVar11 + 1;
          }
          plVar11 = (long *)*plVar11;
          plVar10 = plVar12;
        } while (plVar11 != (long *)0x0);
        if (((plVar12 != plVar9) && (*(uint *)(plVar12 + 4) <= *puVar6)) && (plVar12[5] != 0)) {
          FUN_00197980();
        }
      }
    }
  }
  if ((param_3 == 0) && (*(long *)(param_2 + 0xb8) != 0)) {
    FUN_00199e80(param_1,*(long *)(param_2 + 0xb8),0,param_4);
  }
  if (local_90 != (uint *)0x0) {
    local_88 = local_90;
    FUN_00187e4c();
  }
  return;
}

