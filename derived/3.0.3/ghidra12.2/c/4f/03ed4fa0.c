
bool FUN_03ed4fa0(long param_1,long param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  long lVar12;
  long *plVar13;
  undefined1 *puVar14;
  undefined *local_110;
  undefined *local_108;
  undefined *local_100;
  undefined1 *local_f8;
  int local_f0;
  undefined1 local_ec [127];
  undefined1 local_6d;
  
  puVar7 = PTR_DAT_04bb2020;
  plVar13 = *(long **)(param_2 + 0x30);
  uVar11 = 0;
  bVar8 = true;
  puVar1 = PTR_DAT_04bb2e90 + 0x10;
  puVar2 = PTR_DAT_04bb2d88 + 0x10;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  do {
    uVar9 = (**(code **)(*plVar13 + 0x18))(plVar13,uVar11,param_3);
    if ((uVar9 >> 0xf & 1) == 0) {
      return bVar8;
    }
    if ((uVar11 == 1) && (*(char *)(param_1 + 0x18) != '\0')) {
      lVar12 = 0;
      do {
        local_6d = 0;
        local_f0 = 0x80;
        local_100 = puVar1;
        local_f8 = local_ec;
        (**(code **)(*param_3 + 0x18))(param_3);
        puVar14 = (undefined1 *)param_3[1];
        if (local_ec != puVar14) {
          (**(code **)(*param_3 + 0x18))(param_3);
          lVar10 = 0;
          do {
            if (*(char *)(param_3[1] + lVar10) == '\0') goto LAB_03ed50ec;
            lVar4 = param_3[1] + lVar10;
            if (*(char *)(lVar4 + 1) == '\0') {
              lVar10 = lVar10 + 1;
              goto LAB_03ed50ec;
            }
            if (*(char *)(lVar4 + 2) == '\0') {
              lVar10 = lVar10 + 2;
              goto LAB_03ed50ec;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          lVar10 = 0;
LAB_03ed50ec:
          iVar5 = (int)lVar10;
          if (local_f0 <= (int)lVar10) {
            iVar5 = local_f0 + -1;
          }
          memcpy(local_ec,puVar14,(long)iVar5);
          local_ec[iVar5] = 0;
        }
        puVar14 = local_f8;
        local_108 = (&PTR_DAT_04ba5cc8)[lVar12];
        lVar10 = 0;
        local_f8[(long)local_f0 + -1] = 0;
        do {
          if (local_f8[lVar10] == '\0') goto LAB_03ed5184;
          if (local_f8[lVar10 + 1] == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_03ed5184;
          }
          if (local_f8[lVar10 + 2] == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_03ed5184;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_03ed5184:
        uVar9 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
        local_110 = puVar3;
        local_100 = puVar2;
        (**(code **)(puVar7 + 0x28))(&local_110);
        lVar10 = 0;
        do {
          if (local_108[lVar10] == '\0') goto LAB_03ed51e4;
          if (local_108[lVar10 + 1] == '\0') {
            lVar10 = lVar10 + 1;
            goto LAB_03ed51e4;
          }
          if (local_108[lVar10 + 2] == '\0') {
            lVar10 = lVar10 + 2;
            goto LAB_03ed51e4;
          }
          lVar10 = lVar10 + 3;
        } while (lVar10 != 0x80001);
        lVar10 = 0;
LAB_03ed51e4:
        uVar6 = (uint)lVar10;
        if ((int)(local_f0 - uVar9) <= (int)(uint)lVar10) {
          uVar6 = local_f0 + ~uVar9;
        }
        if (0 < (int)uVar6) {
          (**(code **)(local_110 + 0x18))(&local_110);
          memcpy(puVar14 + uVar9,local_108,(ulong)uVar6);
          puVar14[(int)(uVar6 + uVar9)] = 0;
        }
        uVar9 = (**(code **)(*plVar13 + 0x18))(plVar13,1,&local_100);
        if ((uVar9 >> 0xf & 1) == 0) {
          return bVar8;
        }
        lVar12 = lVar12 + 1;
      } while (lVar12 != 3);
    }
    bVar8 = uVar11 < 3;
    uVar11 = uVar11 + 1;
    if (uVar11 == 4) {
      return bVar8;
    }
  } while( true );
}

