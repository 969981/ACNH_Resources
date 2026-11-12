
void FUN_009457c0(long param_1,byte param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  uint uVar5;
  ushort uVar6;
  char *pcVar7;
  uint *puVar8;
  undefined8 *puVar9;
  undefined8 *__src;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined *puVar13;
  uint uVar14;
  long lVar15;
  ushort *puVar16;
  long lVar17;
  uint *puVar18;
  uint *puVar19;
  long lVar20;
  undefined *local_110;
  undefined1 *local_108;
  undefined8 local_100;
  char *local_f8;
  int local_f0;
  char local_ec [127];
  undefined1 local_6d;
  
  lVar10 = *(long *)PTR_DAT_04bb27a8;
  if (lVar10 == 0) {
    return;
  }
  if ((param_2 & 1) == 0) {
    local_100 = (undefined *)((ulong)local_100._4_4_ << 0x20);
  }
  else {
    if (*(int *)(lVar10 + 0x200) == 0) {
      uVar14 = 1;
    }
    else {
      uVar14 = 0x32;
    }
    local_110 = (undefined *)CONCAT44(local_110._4_4_,uVar14);
    if (uVar14 == 0) {
      return;
    }
    local_100 = (undefined *)CONCAT44(local_100._4_4_,uVar14);
    if (uVar14 != 0) {
      plVar3 = (long *)(lVar10 + 0x30) + uVar14;
      if (0x38 < uVar14) {
        plVar3 = (long *)(lVar10 + 0x30);
      }
      lVar10 = *plVar3;
      goto joined_r0x00945854;
    }
  }
  lVar10 = *(long *)(lVar10 + 0x1f8);
joined_r0x00945854:
  if ((lVar10 != 0) && (lVar10 = *(long *)(lVar10 + 0xb8), lVar10 != 0)) {
    lVar11 = *(long *)(param_1 + 0x80);
    lVar15 = *(long *)(param_1 + 0x68);
    FUN_00954ee0(*(undefined8 *)PTR_DAT_04bb2228);
    lVar12 = *(long *)PTR_DAT_04bb27a8;
    lVar17 = 0;
    puVar1 = PTR_DAT_04bb2d88 + 0x10;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    puVar8 = (uint *)PTR_DAT_04bbbd58;
    do {
      lVar20 = 0;
      do {
        puVar16 = (ushort *)(lVar10 + (lVar20 + lVar17 * 9) * 0x18 + 0x18);
        uVar14 = (uint)*puVar16 - (uint)*(ushort *)(lVar12 + 0xb90);
        if (uVar14 < *(uint *)(lVar12 + 0xb70)) {
          puVar18 = *(uint **)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar14 * 8);
          if (puVar18 != (uint *)0x0) {
            uVar14 = *puVar18;
            if (uVar14 == 0 || puVar18 == (uint *)(ulong)uVar14) {
LAB_00945a04:
              uVar14 = 0;
            }
            else {
              puVar19 = (uint *)((long)puVar18 - (long)(ulong)uVar14);
              if (((*puVar19 == 0) || (uVar14 = puVar19[1], uVar14 == 0)) ||
                 ((ulong)(ushort)puVar19[2] == 0)) goto LAB_00945a04;
              lVar4 = 0xc;
              if (*(char *)((long)puVar19 + 10) != '\0') {
                lVar4 = 0x1c;
              }
              lVar4 = (long)puVar19 + lVar4 + (ulong)(ushort)puVar19[2] * 8;
              if (lVar4 == 0) goto LAB_00945a04;
              uVar5 = 0;
              if ((ulong)uVar14 != 0) {
                uVar5 = (uint)((ulong)((long)puVar18 - lVar4) / (ulong)uVar14);
              }
              if (*puVar19 <= uVar5) {
                uVar5 = 0xffffffff;
              }
              if ((*puVar8 <= uVar5) ||
                 (uVar6 = *(ushort *)(*(long *)(puVar8 + 2) + (long)(int)uVar5 * 2),
                 uVar14 = (uint)uVar6, 0x1f < uVar6)) goto LAB_00945a04;
            }
            local_100 = (undefined *)CONCAT44(local_100._4_4_,uVar14);
            if (uVar14 != 0x1f) {
              __src = &DAT_0407ebb1;
              uVar14 = (uint)*puVar16 - (uint)*(ushort *)(lVar12 + 0xb90);
              if ((uVar14 < *(uint *)(lVar12 + 0xb70)) &&
                 (lVar12 = *(long *)(*(long *)(lVar12 + 0xb78) + (long)(int)uVar14 * 8), lVar12 != 0
                 )) {
                puVar9 = (undefined8 *)
                         FUN_012660e0(lVar12,3,0x39b5a93d,*(undefined8 *)PTR_DAT_04bbc3a0);
                __src = *(undefined8 **)PTR_PTR_04bbc3a8;
                if (puVar9 != (undefined8 *)0x0) {
                  __src = puVar9;
                }
              }
              lVar12 = 0;
              local_f0 = 0x80;
              local_ec[0] = '\0';
              local_6d = 0;
              do {
                if (local_ec[lVar12] == '\0') goto LAB_00945abc;
                if (local_ec[lVar12 + 1] == '\0') {
                  lVar12 = lVar12 + 1;
                  goto LAB_00945abc;
                }
                if (local_ec[lVar12 + 2] == '\0') {
                  lVar12 = lVar12 + 2;
                  goto LAB_00945abc;
                }
                lVar12 = lVar12 + 3;
              } while (lVar12 != 0x80001);
              lVar12 = 0;
LAB_00945abc:
              uVar14 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
              lVar12 = 0;
              do {
                if (*(char *)((long)__src + lVar12) == '\0') goto LAB_00945b00;
                if (*(char *)((long)__src + lVar12 + 1) == '\0') {
                  lVar12 = lVar12 + 1;
                  goto LAB_00945b00;
                }
                if (*(char *)((long)__src + lVar12 + 2) == '\0') {
                  lVar12 = lVar12 + 2;
                  goto LAB_00945b00;
                }
                lVar12 = lVar12 + 3;
              } while (lVar12 != 0x80001);
              lVar12 = 0;
LAB_00945b00:
              uVar5 = (uint)lVar12;
              if ((int)(0x80 - uVar14) <= (int)(uint)lVar12) {
                uVar5 = 0x7f - uVar14;
              }
              local_100 = puVar1;
              local_f8 = local_ec;
              if ((int)uVar5 < 1) {
                puVar13 = PTR_DAT_04bb2d88 + 0x10;
              }
              else {
                memcpy(local_ec + uVar14,__src,(ulong)uVar5);
                local_ec[(int)(uVar5 + uVar14)] = '\0';
                puVar13 = local_100;
              }
              pcVar7 = local_f8;
              local_108 = &DAT_040b50da;
              local_110 = puVar2;
              (**(code **)(puVar13 + 0x18))(&local_100);
              lVar12 = 0;
              do {
                if (local_f8[lVar12] == '\0') goto LAB_00945bac;
                if (local_f8[lVar12 + 1] == '\0') {
                  lVar12 = lVar12 + 1;
                  goto LAB_00945bac;
                }
                if (local_f8[lVar12 + 2] == '\0') {
                  lVar12 = lVar12 + 2;
                  goto LAB_00945bac;
                }
                lVar12 = lVar12 + 3;
              } while (lVar12 != 0x80001);
              lVar12 = 0;
LAB_00945bac:
              uVar14 = (uint)lVar12 & ((int)(uint)lVar12 >> 0x1f ^ 0xffffffffU);
              (**(code **)(local_110 + 0x18))(&local_110);
              lVar12 = 0;
              do {
                if (local_108[lVar12] == '\0') goto LAB_00945c0c;
                if (local_108[lVar12 + 1] == '\0') {
                  lVar12 = lVar12 + 1;
                  goto LAB_00945c0c;
                }
                if (local_108[lVar12 + 2] == '\0') {
                  lVar12 = lVar12 + 2;
                  goto LAB_00945c0c;
                }
                lVar12 = lVar12 + 3;
              } while (lVar12 != 0x80001);
              lVar12 = 0;
LAB_00945c0c:
              uVar5 = (uint)lVar12;
              if ((int)(local_f0 - uVar14) <= (int)(uint)lVar12) {
                uVar5 = local_f0 + ~uVar14;
              }
              if (0 < (int)uVar5) {
                (**(code **)(local_110 + 0x18))(&local_110);
                memcpy(pcVar7 + uVar14,local_108,(ulong)uVar5);
                pcVar7[(int)(uVar5 + uVar14)] = '\0';
              }
              FUN_0095ef30(*(undefined8 *)PTR_DAT_04bb2228,&local_100,param_2 & 1 | lVar11 == lVar15
                          );
              lVar12 = *(long *)PTR_DAT_04bb27a8;
              puVar8 = (uint *)PTR_DAT_04bbbd58;
            }
          }
        }
        lVar20 = lVar20 + 1;
      } while (lVar20 != 9);
      lVar17 = lVar17 + 1;
    } while (lVar17 != 8);
  }
  return;
}

