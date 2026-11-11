
void FUN_00488110(int *param_1,ulong *param_2,ulong param_3,long *param_4)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  undefined8 uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int *local_128;
  int *piStack_120;
  ulong local_118;
  ulong local_110;
  long *local_108;
  undefined1 auStack_100 [40];
  ulong local_d8;
  ulong uStack_d0;
  ulong local_c8;
  ulong uStack_c0;
  undefined8 local_b8;
  int local_ac;
  undefined1 auStack_a8 [72];
  
  if ((param_3 & 1) != 0) {
    if (param_4 == (long *)0x0) {
      FUN_0044e560(auStack_a8);
      local_d8 = *param_2;
      uStack_d0 = param_2[1];
      local_c8 = param_2[2];
      uStack_c0 = param_2[3];
      FUN_00491030(param_1,&local_d8,auStack_a8);
      FUN_0044ebe0(auStack_a8);
      return;
    }
    local_108 = param_4;
    FUN_00450fe0(auStack_100,0xffffffffffffffff);
    local_128 = (int *)*param_2;
    piStack_120 = (int *)param_2[1];
    local_118 = param_2[2];
    local_110 = param_2[3];
    uVar7 = FUN_0048ef90(&local_128);
    if (uVar7 >> 0x1f == 0) {
      if ((char)local_110 != '\0') goto LAB_004881ec;
      if (-1 < *param_1) {
        iVar11 = (int)uVar7;
        if (((long)piStack_120 - (long)local_128) / 5 < (long)iVar11) {
          if (DAT_04c70f78 != '\0') {
            FUN_00444bc0(auStack_a8,&DAT_04c70f28,1);
            lVar8 = FUN_004446b0(auStack_a8,&DAT_04070007,&DAT_04866780,
                                 "numHashes > rb.remaining() / 5");
            uVar10 = 0x8ce;
LAB_00488350:
            *(char **)(lVar8 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
            ;
            *(undefined8 *)(lVar8 + 0x30) = uVar10;
            FUN_00444c00(auStack_a8);
          }
LAB_0048835c:
          *param_1 = -0x7ffbfe00;
        }
        else {
          if ((param_1[0x4e] == 2) && ((int)(param_1[0x5f] & 0x3fffffffU) < iVar11)) {
            uVar10 = FUN_00426720(PTR_DAT_048607b8,uVar7 & 0xffffffff,8,
                                  *(undefined8 *)(param_1 + 0x5c),param_1[0x5e],param_1 + 0x5f);
            *(undefined8 *)(param_1 + 0x5c) = uVar10;
          }
          puVar5 = PTR_DAT_048607b8;
          if (0 < iVar11) {
            iVar13 = 0;
            do {
              uVar7 = FUN_0048ef90(&local_128);
              if (uVar7 >> 0x1f != 0) {
                local_110 = local_110 | 2;
              }
              piVar2 = local_128 + 1;
              if (piStack_120 < piVar2) {
                local_128 = piStack_120;
                local_ac = 0;
                local_110 = local_110 | 3;
LAB_00488698:
                *param_1 = -0x7ffbfe00;
LAB_004886a4:
                if (DAT_04c70f78 != '\0') {
                  FUN_00444bc0(auStack_a8,&DAT_04c70f28,1);
                  lVar8 = FUN_004446b0(auStack_a8,"Error in input stream.",&DAT_0413df78);
                  uVar10 = 0x8da;
                  goto LAB_0048823c;
                }
                break;
              }
              iVar4 = *local_128;
              local_128 = piVar2;
              local_ac = iVar4;
              if ((char)local_110 != '\0') goto LAB_00488698;
              if (*param_1 < 0) goto LAB_004886a4;
              iVar12 = (int)uVar7;
              if ((iVar12 < 1) || (param_1[0x1a] <= iVar12)) {
                if (DAT_04c70f78 == '\0') goto LAB_0048835c;
                FUN_00444bc0(auStack_a8,&DAT_04c70f28,1);
                lVar8 = FUN_004446b0(auStack_a8,&DAT_04070007,&DAT_04866790,
                                     "typeIdIsNullOrOutOfBounds(tid, m_bundle)");
                uVar10 = 0x8db;
                goto LAB_00488350;
              }
              lVar8 = (**(code **)(*local_108 + 0x30))
                                (local_108,
                                 *(undefined8 *)
                                  (*(long *)(param_1 + 0x18) +
                                  (-(uVar7 >> 0x1f & 1) & 0xfffffff800000000 |
                                  (uVar7 & 0xffffffff) << 3)));
              if ((lVar8 == 0) || (iVar6 = FUN_004514d0(auStack_100,lVar8), iVar6 != iVar4)) {
                if (DAT_04c70f78 == '\0') goto LAB_0048835c;
                FUN_00444bc0(auStack_a8,&DAT_04c70f28,1);
                local_b8 = *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar12 * 8);
                lVar8 = FUN_004446b0(auStack_a8,
                                     "Type {} with hash {:x} does not match a native type",
                                     &DAT_048667c0,&local_b8,&local_ac);
                uVar10 = 0x8de;
                goto LAB_00488350;
              }
              *(long *)(*(long *)(param_1 + 4) + (long)iVar12 * 8) = lVar8;
              if (param_1[0x4e] == 2) {
                uVar9 = param_1[0x5e];
                if (uVar9 == (param_1[0x5f] & 0x3fffffffU)) {
                  FUN_00426990(puVar5,param_1 + 0x5c,8);
                  uVar9 = param_1[0x5e];
                }
                piVar2 = (int *)(*(long *)(param_1 + 0x5c) + (long)(int)uVar9 * 8);
                *piVar2 = iVar12;
                piVar2[1] = local_ac;
                param_1[0x5e] = uVar9 + 1;
              }
              iVar13 = iVar13 + 1;
            } while (iVar13 < iVar11);
          }
        }
        goto LAB_00488248;
      }
    }
    else {
      local_110 = local_110 | 2;
LAB_004881ec:
      *param_1 = -0x7ffbfe00;
    }
    if (DAT_04c70f78 != '\0') {
      FUN_00444bc0(auStack_a8,&DAT_04c70f28,1);
      lVar8 = FUN_004446b0(auStack_a8,"Error in input stream.",&DAT_0413df78);
      uVar10 = 0x8cc;
LAB_0048823c:
      *(char **)(lVar8 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar8 + 0x30) = uVar10;
      FUN_00444c00(auStack_a8);
    }
LAB_00488248:
    FUN_00451010(auStack_100);
    return;
  }
  if (param_1[0x4e] != 2) {
    return;
  }
  uVar7 = FUN_0048ef90(param_2);
  if (uVar7 >> 0x1f == 0) {
    if ((byte)param_2[3] != 0) goto LAB_00488258;
    if (-1 < *param_1) {
      iVar11 = (int)uVar7;
      if ((int)(param_1[0x5f] & 0x3fffffffU) < iVar11) {
        uVar10 = FUN_00426720(PTR_DAT_048607b8,uVar7 & 0xffffffff,8,*(undefined8 *)(param_1 + 0x5c),
                              param_1[0x5e],param_1 + 0x5f);
        *(undefined8 *)(param_1 + 0x5c) = uVar10;
      }
      puVar5 = PTR_DAT_048607b8;
      if (iVar11 < 1) {
        return;
      }
      iVar13 = 0;
      while( true ) {
        uVar7 = FUN_0048ef90(param_2);
        if (uVar7 >> 0x1f != 0) {
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
        }
        puVar1 = (undefined4 *)*param_2 + 1;
        if ((undefined4 *)param_2[1] < puVar1) break;
        uVar3 = *(undefined4 *)*param_2;
        *param_2 = (ulong)puVar1;
        if ((char)param_2[3] != '\0') goto LAB_004885d4;
        if (*param_1 < 0) goto LAB_004885e0;
        uVar9 = param_1[0x5e];
        if (uVar9 == (param_1[0x5f] & 0x3fffffffU)) {
          FUN_00426990(puVar5,param_1 + 0x5c,8);
          uVar9 = param_1[0x5e];
        }
        puVar1 = (undefined4 *)(*(long *)(param_1 + 0x5c) + (long)(int)uVar9 * 8);
        iVar13 = iVar13 + 1;
        *puVar1 = (int)uVar7;
        puVar1[1] = uVar3;
        param_1[0x5e] = uVar9 + 1;
        if (iVar11 <= iVar13) {
          return;
        }
      }
      *param_2 = param_2[1];
      *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
LAB_004885d4:
      *param_1 = -0x7ffbfe00;
LAB_004885e0:
      if (DAT_04c70f78 == '\0') {
        return;
      }
      FUN_00444bc0(auStack_a8,&DAT_04c70f28,1);
      lVar8 = FUN_004446b0(auStack_a8,"Error in input stream.",&DAT_0413df78);
      uVar10 = 0x908;
      goto LAB_004882a8;
    }
  }
  else {
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
LAB_00488258:
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_04c70f78 == '\0') {
    return;
  }
  FUN_00444bc0(auStack_a8,&DAT_04c70f28,1);
  lVar8 = FUN_004446b0(auStack_a8,"Error in input stream.",&DAT_0413df78);
  uVar10 = 0x900;
LAB_004882a8:
  *(char **)(lVar8 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar8 + 0x30) = uVar10;
  FUN_00444c00(auStack_a8);
  return;
}

