
void FUN_038c4f20(long param_1,undefined8 param_2,undefined4 param_3,undefined8 *param_4,
                 undefined8 *param_5,undefined8 *param_6,undefined8 param_7,uint param_8,
                 undefined8 param_9,undefined4 param_10,undefined8 *param_11,undefined4 *param_12,
                 undefined4 *param_13)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  uint uVar12;
  undefined8 *puVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  
  if (*(char *)(param_1 + 0x758) == '\0') {
    uVar8 = (**(code **)PTR_DAT_04bbd560)(param_7);
    (**(code **)PTR_DAT_04bcf1e8)(param_2,0,uVar8,(ulong)param_8 * 0x24);
    puVar1 = (uint *)(param_1 + 0x75c);
    if (*(char *)(param_1 + 0x76c) == '\0') {
      do {
        uVar14 = *puVar1;
        uVar11 = uVar14 + 0x100;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar11;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar12 = *(uint *)(param_1 + 0x760);
      uVar4 = 0;
      if (uVar12 != 0) {
        uVar4 = uVar14 / uVar12;
      }
      uVar14 = uVar14 - uVar4 * uVar12;
      if (uVar12 < uVar14 + 0x100) {
        do {
          uVar14 = *puVar1;
          uVar11 = uVar14 + 0x100;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar12 = *(uint *)(param_1 + 0x760);
        uVar4 = 0;
        if (uVar12 != 0) {
          uVar4 = uVar14 / uVar12;
        }
        uVar14 = uVar14 - uVar4 * uVar12;
      }
      if (uVar11 - *(int *)(param_1 + 0x764) <= uVar12) {
        if (*(char *)(param_1 + 0x758) != '\0') {
          return;
        }
        uVar8 = *param_4;
        puVar13 = (undefined8 *)(*(long *)(param_1 + 0x750) + (ulong)uVar14);
        puVar13[1] = param_4[1];
        *puVar13 = uVar8;
        uVar8 = param_4[2];
        puVar13[3] = param_4[3];
        puVar13[2] = uVar8;
        uVar5 = DAT_04102218;
        uVar8 = DAT_04102210;
        uVar15 = param_4[4];
        puVar13[5] = param_4[5];
        puVar13[4] = uVar15;
        puVar13[7] = uVar5;
        puVar13[6] = uVar8;
        uVar8 = param_5[1];
        puVar13[8] = *param_5;
        puVar13[9] = uVar8;
        uVar8 = param_6[1];
        puVar13[10] = *param_6;
        puVar13[0xb] = uVar8;
        puVar13 = (undefined8 *)PTR_DAT_04bbd560;
        lVar9 = (**(code **)PTR_DAT_04bbd560)(param_1 + 0x720);
        (**(code **)PTR_DAT_04bcf2e8)(param_2,0,1,lVar9 + (ulong)uVar14,0x60);
        goto LAB_038c5260;
      }
    }
    else {
      do {
        uVar14 = *puVar1;
        uVar11 = uVar14 + 0x200;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = uVar11;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      uVar12 = *(uint *)(param_1 + 0x760);
      uVar4 = 0;
      if (uVar12 != 0) {
        uVar4 = uVar14 / uVar12;
      }
      uVar14 = uVar14 - uVar4 * uVar12;
      if (uVar12 < uVar14 + 0x200) {
        do {
          uVar14 = *puVar1;
          uVar11 = uVar14 + 0x200;
          cVar2 = '\x01';
          bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar3) {
            *puVar1 = uVar11;
            cVar2 = ExclusiveMonitorsStatus();
          }
        } while (cVar2 != '\0');
        uVar12 = *(uint *)(param_1 + 0x760);
        uVar4 = 0;
        if (uVar12 != 0) {
          uVar4 = uVar14 / uVar12;
        }
        uVar14 = uVar14 - uVar4 * uVar12;
      }
      if (uVar11 - *(int *)(param_1 + 0x764) <= uVar12) {
        if (*(char *)(param_1 + 0x758) != '\0') {
          return;
        }
        uVar8 = *param_4;
        puVar13 = (undefined8 *)(*(long *)(param_1 + 0x750) + (ulong)uVar14);
        puVar13[1] = param_4[1];
        *puVar13 = uVar8;
        uVar5 = DAT_04102218;
        uVar8 = DAT_04102210;
        uVar15 = param_4[2];
        puVar13[3] = param_4[3];
        puVar13[2] = uVar15;
        uVar15 = param_4[4];
        puVar13[5] = param_4[5];
        puVar13[4] = uVar15;
        puVar13[7] = uVar5;
        puVar13[6] = uVar8;
        uVar8 = param_5[1];
        puVar13[8] = *param_5;
        puVar13[9] = uVar8;
        uVar8 = param_6[1];
        puVar13[10] = *param_6;
        puVar13[0xb] = uVar8;
        if ((param_12 == (undefined4 *)0x0) || (param_13 == (undefined4 *)0x0)) {
          puVar13[0xc] = 0;
          puVar13[0xd] = 0;
        }
        else {
          uVar16 = param_13[1];
          uVar17 = *param_12;
          uVar18 = param_12[1];
          *(undefined4 *)(puVar13 + 0xc) = *param_13;
          *(undefined4 *)((long)puVar13 + 100) = uVar16;
          *(undefined4 *)(puVar13 + 0xd) = uVar17;
          *(undefined4 *)((long)puVar13 + 0x6c) = uVar18;
        }
        lVar9 = (**(code **)PTR_DAT_04bbd560)(param_1 + 0x720);
        puVar6 = PTR_DAT_04bcf2e8;
        (**(code **)PTR_DAT_04bcf2e8)(param_2,0,1,lVar9 + (ulong)uVar14,0x100);
        lVar9 = *(long *)(param_1 + 0x750);
        if (param_11 == (undefined8 *)0x0) {
          uVar8 = 0;
        }
        else {
          if (((DAT_05ae74d0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_05ae74d0), iVar7 != 0))
          {
            DAT_05ae74c8 = &PTR_LAB_04b642d8;
            __cxa_guard_release(&DAT_05ae74d0);
          }
          uVar10 = (**(code **)*param_11)(param_11,&DAT_05ae74c8);
          if ((uVar10 & 1) == 0) {
            param_11 = (undefined8 *)0x0;
          }
          uVar8 = param_11[2];
        }
        puVar13 = (undefined8 *)PTR_DAT_04bbd560;
        *(undefined8 *)(lVar9 + (int)(uVar14 + 0x100)) = uVar8;
        lVar9 = (*(code *)*puVar13)(param_1 + 0x720);
        (**(code **)puVar6)(param_2,1,0,lVar9 + (int)(uVar14 + 0x100),8);
LAB_038c5260:
        uVar8 = (*(code *)*puVar13)(param_9);
                    /* WARNING: Could not recover jumptable at 0x038c52a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)PTR_DAT_04bbd568)(param_2,param_3,1,param_10,uVar8);
        return;
      }
    }
    *(undefined1 *)(param_1 + 0x758) = 1;
  }
  return;
}

