
uint FUN_018bbd90(long *param_1,undefined4 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  ulong uVar7;
  undefined8 *puVar8;
  int iVar9;
  int local_130;
  int iStack_12c;
  long local_128;
  undefined **local_120;
  undefined8 local_118;
  undefined1 local_110;
  undefined **local_108;
  undefined8 local_100;
  long local_f8;
  long lStack_f0;
  uint local_e8;
  undefined **local_e0;
  undefined ***local_d8;
  undefined **local_d0;
  undefined1 local_c8;
  undefined1 local_c7;
  undefined4 local_c4;
  uint uStack_c0;
  undefined *local_b8;
  undefined4 local_b0;
  undefined *local_a8;
  int local_a0;
  int local_9c;
  undefined **local_98;
  int local_90;
  int local_8c;
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  undefined4 local_6c;
  
  puVar3 = PTR_DAT_04bc39f8;
  if (DAT_04c487d4 != 0xffff) {
    puVar6 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)(short)DAT_04c487d4) {
      puVar6 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar6 >> 0x1a & 1) != 0) {
      local_e0 = (undefined **)CONCAT44(local_e0._4_4_,1);
      uVar5 = 0;
      if ((((param_1 == (long *)0x0) || ((*puVar6 & 2) == 0)) || (uVar5 = 0, *param_1 == 0)) ||
         ((param_1[1] == 0 || (param_1[2] == 0)))) goto LAB_018bc200;
      if (param_1[3] != 0) {
        local_80 = 0;
        local_88 = PTR_DAT_04bbfe68 + 0x10;
        if (DAT_05aed670 == 0) {
          puVar8 = &DAT_055c04a0;
        }
        else {
          puVar8 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar8 = (undefined8 *)
                     (**(code **)(*DAT_05aed668 + 0x18))
                               (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar4 = FUN_006bd550(*puVar8,0);
            puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar4 != 0x758f7eaf) {
              puVar8 = &DAT_055c04a0;
            }
          }
        }
        local_7c = *(undefined4 *)(puVar8 + 7);
        local_78 = FUN_017baf44();
        local_78 = local_78 & 1;
        local_98 = &PTR_FUN_048fc9b0;
        if (*(char *)((long)param_2 + 10) == '\0') {
          local_108 = (undefined **)(PTR_DAT_04bb2018 + 0x10);
          local_d8 = (undefined ***)0x0;
          local_100 = 0;
          local_e0 = local_108;
          FUN_01a1ff10(&local_e0,&local_108);
          iStack_12c = (int)((ulong)local_d8 >> 0x20);
          iVar4 = (int)local_d8;
          iVar9 = (int)local_100;
          local_130 = local_100._4_4_;
        }
        else {
          if ((long)(short)DAT_04c487d4 != 0xffffffffffffffff) {
            local_e0 = (undefined **)CONCAT44(local_e0._4_4_,0x1a);
            puVar6 = (uint *)(puVar3 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8);
            if (0xff < DAT_04c487d4) {
              puVar6 = (uint *)puVar3;
            }
            if ((((*puVar6 >> 0x1a & 1) != 0) &&
                (local_e0 = (undefined **)CONCAT44(local_e0._4_4_,1), (*puVar6 >> 1 & 1) != 0)) &&
               (DAT_05abff60 != 0)) {
              iStack_12c = *(int *)(DAT_05abff60 + 0x2c);
              iVar4 = *(int *)(DAT_05abff60 + 0x28);
              iVar9 = *(int *)(DAT_05abff60 + 0x38);
              local_130 = *(int *)(DAT_05abff60 + 0x3c);
              goto LAB_018bbfd8;
            }
          }
          iVar4 = 0;
          local_130 = 0;
          iStack_12c = 0;
          iVar9 = 0;
        }
LAB_018bbfd8:
        puVar6 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar2 = puVar6[3];
        uVar5 = *puVar6 ^ *puVar6 << 0xb;
        *puVar6 = puVar6[1];
        puVar6[1] = puVar6[2];
        uVar5 = uVar5 >> 8 ^ uVar2 >> 0x13 ^ uVar5 ^ uVar2;
        puVar6[2] = uVar2;
        puVar6[3] = uVar5;
        iVar1 = iVar4 + (int)((ulong)uVar5 * (ulong)((iVar9 - iVar4) + 1) >> 0x20);
        puVar6 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar5 = *puVar6;
        local_d8 = &local_98;
        uVar2 = puVar6[3];
        *puVar6 = puVar6[1];
        puVar6[1] = puVar6[2];
        uVar5 = uVar5 ^ uVar5 << 0xb;
        local_120 = &local_a8;
        local_b8 = (undefined *)0x0;
        local_a8 = PTR_DAT_04bb2e18 + 0x10;
        uVar5 = uVar5 >> 8 ^ uVar2 >> 0x13 ^ uVar5 ^ uVar2;
        puVar6[2] = uVar2;
        puVar6[3] = uVar5;
        local_e0 = &local_88;
        local_b0 = 0;
        local_c8 = *(undefined1 *)(param_2 + 2);
        local_c4 = *param_2;
        local_e8 = param_2[1];
        local_110 = *(undefined1 *)((long)param_2 + 10);
        local_f8 = param_1[2];
        lStack_f0 = param_1[3];
        local_9c = iStack_12c + (int)((ulong)uVar5 * (ulong)((local_130 - iStack_12c) + 1) >> 0x20);
        local_118 = (ulong)local_e8;
        local_108 = &local_b8;
        local_128 = *param_1;
        local_100 = param_1[1];
        if ((long)(short)DAT_04c487d4 != 0xffffffffffffffff) {
          puVar6 = (uint *)(puVar3 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8);
          if (0xff < DAT_04c487d4) {
            puVar6 = (uint *)puVar3;
          }
          if ((*puVar6 >> 0x1a & 1) != 0) {
            local_6c = 1;
            local_d0 = local_120;
            local_c7 = local_110;
            uStack_c0 = local_e8;
            local_a0 = iVar1;
            local_90 = iVar1;
            local_8c = local_9c;
            if ((*puVar6 >> 1 & 1) != 0) {
              while (uVar7 = (**(code **)*param_3)(param_3,&local_108,&local_e0), (uVar7 & 1) == 0)
              {
                *(int *)(local_d0 + 1) = *(int *)(local_d0 + 1) + 1;
                if ((*(int *)(local_d0 + 1) == *(int *)(local_d8 + 1)) &&
                   (*(int *)((long)local_d0 + 0xc) == *(int *)((long)local_d8 + 0xc)))
                goto LAB_018bc1fc;
                if (iVar9 < *(int *)(local_d0 + 1)) {
                  *(int *)(local_d0 + 1) = iVar4;
                  if ((*(int *)(local_d0 + 1) == *(int *)(local_d8 + 1)) &&
                     (*(int *)((long)local_d0 + 0xc) == *(int *)((long)local_d8 + 0xc)))
                  goto LAB_018bc1fc;
                  *(int *)((long)local_d0 + 0xc) = *(int *)((long)local_d0 + 0xc) + 1;
                  if ((*(int *)(local_d0 + 1) == *(int *)(local_d8 + 1)) &&
                     (*(int *)((long)local_d0 + 0xc) == *(int *)((long)local_d8 + 0xc)))
                  goto LAB_018bc1fc;
                  if (local_130 < *(int *)((long)local_d0 + 0xc)) {
                    *(int *)((long)local_d0 + 0xc) = iStack_12c;
                  }
                }
              }
              local_118 = CONCAT44(local_e8,(undefined4)local_118);
              uVar5 = (**(code **)*param_4)(param_4,&local_128,&local_120);
              goto LAB_018bc200;
            }
          }
        }
      }
    }
  }
LAB_018bc1fc:
  uVar5 = 0;
LAB_018bc200:
  return uVar5 & 1;
}

