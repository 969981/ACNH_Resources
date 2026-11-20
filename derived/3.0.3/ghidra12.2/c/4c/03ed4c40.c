
undefined4 FUN_03ed4c40(long param_1,long param_2,long *param_3,undefined8 *param_4)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  short sVar5;
  uint uVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  undefined4 uVar10;
  ulong uVar11;
  long *plVar12;
  undefined1 *puVar13;
  undefined **local_110;
  undefined *local_108;
  undefined *local_100;
  undefined1 *local_f8;
  int local_f0;
  undefined1 local_ec [127];
  undefined1 local_6d;
  
  plVar12 = *(long **)(param_2 + 0x30);
  uVar11 = 0;
  uVar10 = 0;
  puVar1 = PTR_DAT_04bb2e90 + 0x10;
  do {
    uVar6 = (**(code **)(*plVar12 + 0x18))(plVar12,uVar11 & 0xffffffff,param_3);
    sVar5 = (short)uVar6;
    if ((uVar6 >> 0xf & 1) == 0) {
LAB_03ed4cd0:
      uVar7 = (**(code **)(*plVar12 + 0x98))(plVar12,uVar11 & 0xffffffff,(int)sVar5);
      *param_4 = uVar7;
      uVar10 = 1;
      *(short *)(param_2 + 0x148 + uVar11 * 2) = sVar5;
      *(undefined4 *)(param_2 + 0x148 + uVar11 * 4 + 0x10) = 0;
      sVar5 = *(short *)(param_2 + 0xae) + 1;
      *(short *)(param_2 + 0xae) = sVar5;
      *(short *)(param_2 + 0x148 + uVar11 * 2 + 8) = sVar5;
    }
    else {
      if ((uVar11 == 1) && (*(char *)(param_1 + 0x18) != '\0')) {
        lVar9 = 0;
        do {
          local_6d = 0;
          local_f0 = 0x80;
          local_100 = puVar1;
          local_f8 = local_ec;
          (**(code **)(*param_3 + 0x18))(param_3);
          puVar13 = (undefined1 *)param_3[1];
          if (local_ec != puVar13) {
            (**(code **)(*param_3 + 0x18))(param_3);
            lVar8 = 0;
            do {
              if (*(char *)(param_3[1] + lVar8) == '\0') goto LAB_03ed4dec;
              lVar2 = param_3[1] + lVar8;
              if (*(char *)(lVar2 + 1) == '\0') {
                lVar8 = lVar8 + 1;
                goto LAB_03ed4dec;
              }
              if (*(char *)(lVar2 + 2) == '\0') {
                lVar8 = lVar8 + 2;
                goto LAB_03ed4dec;
              }
              lVar8 = lVar8 + 3;
            } while (lVar8 != 0x80001);
            lVar8 = 0;
LAB_03ed4dec:
            iVar3 = (int)lVar8;
            if (local_f0 <= (int)lVar8) {
              iVar3 = local_f0 + -1;
            }
            memcpy(local_ec,puVar13,(long)iVar3);
            local_ec[iVar3] = 0;
          }
          puVar13 = local_f8;
          lVar8 = 0;
          local_108 = (&PTR_DAT_04ba5cc8)[lVar9];
          local_110 = &PTR_LAB_048f9770;
          local_100 = &DAT_048fc708;
          local_f8[(long)local_f0 + -1] = 0;
          do {
            if (local_f8[lVar8] == '\0') goto LAB_03ed4e84;
            if (local_f8[lVar8 + 1] == '\0') {
              lVar8 = lVar8 + 1;
              goto LAB_03ed4e84;
            }
            if (local_f8[lVar8 + 2] == '\0') {
              lVar8 = lVar8 + 2;
              goto LAB_03ed4e84;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_03ed4e84:
          uVar6 = (uint)lVar8 & ((int)(uint)lVar8 >> 0x1f ^ 0xffffffffU);
          (*(code *)PTR_FUN_048f9788)(&local_110);
          lVar8 = 0;
          do {
            if (local_108[lVar8] == '\0') goto LAB_03ed4ee4;
            if (local_108[lVar8 + 1] == '\0') {
              lVar8 = lVar8 + 1;
              goto LAB_03ed4ee4;
            }
            if (local_108[lVar8 + 2] == '\0') {
              lVar8 = lVar8 + 2;
              goto LAB_03ed4ee4;
            }
            lVar8 = lVar8 + 3;
          } while (lVar8 != 0x80001);
          lVar8 = 0;
LAB_03ed4ee4:
          uVar4 = (uint)lVar8;
          if ((int)(local_f0 - uVar6) <= (int)(uint)lVar8) {
            uVar4 = local_f0 + ~uVar6;
          }
          if (0 < (int)uVar4) {
            (*(code *)local_110[3])(&local_110);
            memcpy(puVar13 + uVar6,local_108,(ulong)uVar4);
            puVar13[(int)(uVar4 + uVar6)] = 0;
          }
          uVar6 = (**(code **)(*plVar12 + 0x18))(plVar12,1,&local_100);
          sVar5 = (short)uVar6;
          if ((uVar6 >> 0xf & 1) == 0) goto LAB_03ed4cd0;
          lVar9 = lVar9 + 1;
        } while (lVar9 != 3);
      }
      *(undefined2 *)(param_2 + 0x148 + uVar11 * 2) = 0xffff;
    }
    uVar11 = uVar11 + 1;
    if (uVar11 == 4) {
      return uVar10;
    }
  } while( true );
}

