
void FUN_03366350(long param_1,long param_2,undefined1 *param_3,byte param_4,float *param_5,
                 uint param_6)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  undefined *local_160;
  undefined1 *local_158;
  undefined4 local_150;
  undefined1 local_14c [127];
  undefined1 local_cd;
  undefined *local_c8;
  undefined1 *local_c0;
  int local_b8;
  undefined1 local_b4 [31];
  undefined1 local_95;
  undefined4 local_90;
  undefined8 local_88;
  undefined1 *puStack_80;
  undefined4 local_78;
  undefined1 local_74 [31];
  undefined1 local_55;
  
  if (param_2 != 0) {
    if (param_3 != (undefined1 *)0x0) {
      local_88._0_4_ = CONCAT31(local_88._1_3_,param_4) & 0xffffff01;
      uVar7 = *(undefined8 *)(*(long *)(param_2 + 8) + 0x18);
      local_160 = PTR_DAT_04bb2020 + 0x10;
      if ((*(byte *)(*(long *)(param_2 + 8) + 8) & 10) != 2) {
        uVar7 = 0;
      }
      local_88._4_4_ = (undefined4)*(undefined8 *)param_5;
      puStack_80._0_4_ = (undefined4)((ulong)*(undefined8 *)param_5 >> 0x20);
      local_158 = param_3;
      FUN_0380cc10(uVar7,&local_160,&local_88,param_6 & 1);
      iVar6 = *(int *)(param_1 + 0x28);
      if ((0 < iVar6) && (*(int *)(param_1 + 0x20) <= iVar6)) {
        iVar2 = 0;
        if (*(int *)(param_1 + 0x24) + 1 < *(int *)(param_1 + 0x20)) {
          iVar2 = *(int *)(param_1 + 0x24) + 1;
        }
        *(int *)(param_1 + 0x24) = iVar2;
        *(int *)(param_1 + 0x28) = iVar6 + -1;
      }
      puVar4 = PTR_DAT_04bb2028;
      local_78 = 0x20;
      local_55 = 0;
      puStack_80 = local_74;
      local_74[0] = 0;
      puVar1 = (undefined8 *)&DAT_040d1433;
      if ((param_6 & 1) == 0) {
        puVar1 = &DAT_0407ebb1;
      }
      local_88 = PTR_DAT_04bb2028 + 0x10;
      FUN_038d1270(&local_88,&DAT_0409e973,puVar1);
      if ((param_4 & 1) != 0) {
        FUN_038d13f0((double)*param_5,(double)param_5[1],&local_88," (%.1f, %.1f)");
      }
      local_cd = 0;
      local_150 = 0x80;
      local_158 = local_14c;
      if (local_14c != param_3) {
        lVar8 = 0;
        do {
          if (param_3[lVar8] == '\0') {
LAB_033664d4:
            iVar6 = (int)lVar8;
joined_r0x033664d8:
            if (0x7f < iVar6) {
              iVar6 = 0x7f;
            }
            goto LAB_033664e0;
          }
          if (param_3[lVar8 + 1] == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_033664d4;
          }
          if (param_3[lVar8 + 2] == '\0') {
            iVar6 = (int)lVar8 + 2;
            goto joined_r0x033664d8;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        iVar6 = 0;
LAB_033664e0:
        memcpy(local_14c,param_3,(long)iVar6);
        local_14c[iVar6] = 0;
      }
      local_b8 = 0x20;
      local_95 = 0;
      local_160 = PTR_DAT_04bb2d88 + 0x10;
      local_c8 = PTR_DAT_04bb2a08 + 0x10;
      local_c0 = local_b4;
      (**(code **)(local_88 + 0x18))(&local_88);
      puVar5 = puStack_80;
      if (local_b4 != puStack_80) {
        (**(code **)(local_88 + 0x18))(&local_88);
        lVar8 = 0;
        do {
          if (puStack_80[lVar8] == '\0') goto LAB_033665ac;
          if (puStack_80[lVar8 + 1] == '\0') {
            lVar8 = lVar8 + 1;
            goto LAB_033665ac;
          }
          if (puStack_80[lVar8 + 2] == '\0') {
            lVar8 = lVar8 + 2;
            goto LAB_033665ac;
          }
          lVar8 = lVar8 + 3;
        } while (lVar8 != 0x80001);
        lVar8 = 0;
LAB_033665ac:
        iVar6 = (int)lVar8;
        if (local_b8 <= (int)lVar8) {
          iVar6 = local_b8 + -1;
        }
        memcpy(local_b4,puVar5,(long)iVar6);
        local_b4[iVar6] = 0;
      }
      local_c8 = puVar4 + 0x10;
      iVar6 = *(int *)(param_1 + 0x28);
      local_90 = 300;
      iVar2 = *(int *)(param_1 + 0x20);
      if (iVar6 < iVar2) {
        lVar8 = *(long *)(param_1 + 0x18);
        *(int *)(param_1 + 0x28) = iVar6 + 1;
        iVar6 = *(int *)(param_1 + 0x24) + iVar6;
        iVar3 = 0;
        if (iVar2 <= iVar6) {
          iVar3 = iVar2;
        }
        iVar6 = iVar6 - iVar3;
        lVar11 = lVar8 + (long)iVar6 * 0xd8;
        puVar10 = *(undefined1 **)(lVar11 + 8);
        (**(code **)(local_160 + 0x18))(&local_160);
        puVar5 = local_158;
        if (puVar10 != local_158) {
          (**(code **)(local_160 + 0x18))(&local_160);
          lVar9 = 0;
          do {
            if (local_158[lVar9] == '\0') goto LAB_0336669c;
            if (local_158[lVar9 + 1] == '\0') {
              lVar9 = lVar9 + 1;
              goto LAB_0336669c;
            }
            if (local_158[lVar9 + 2] == '\0') {
              lVar9 = lVar9 + 2;
              goto LAB_0336669c;
            }
            lVar9 = lVar9 + 3;
          } while (lVar9 != 0x80001);
          lVar9 = 0;
LAB_0336669c:
          iVar3 = *(int *)(lVar11 + 0x10);
          iVar2 = (int)lVar9;
          if (iVar3 <= (int)lVar9) {
            iVar2 = iVar3 + -1;
          }
          memcpy(puVar10,puVar5,(long)iVar2);
          puVar10[iVar2] = 0;
        }
        puVar10 = *(undefined1 **)(lVar8 + (long)iVar6 * 0xd8 + 0xa0);
        (**(code **)(local_c8 + 0x18))(&local_c8);
        puVar5 = local_c0;
        if (puVar10 != local_c0) {
          (**(code **)(local_c8 + 0x18))(&local_c8);
          lVar11 = 0;
          do {
            if (local_c0[lVar11] == '\0') goto LAB_03366740;
            if (local_c0[lVar11 + 1] == '\0') {
              lVar11 = lVar11 + 1;
              goto LAB_03366740;
            }
            if (local_c0[lVar11 + 2] == '\0') {
              lVar11 = lVar11 + 2;
              goto LAB_03366740;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_03366740:
          iVar3 = *(int *)(lVar8 + (long)iVar6 * 0xd8 + 0xa8);
          iVar2 = (int)lVar11;
          if (iVar3 <= (int)lVar11) {
            iVar2 = iVar3 + -1;
          }
          memcpy(puVar10,puVar5,(long)iVar2);
          puVar10[iVar2] = 0;
        }
        *(undefined4 *)(lVar8 + (long)iVar6 * 0xd8 + 0xd0) = local_90;
      }
    }
  }
  return;
}

