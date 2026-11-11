
void FUN_00491030(int *param_1,ulong *param_2,undefined8 param_3)

{
  int *piVar1;
  undefined *puVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined8 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 local_a8;
  undefined1 auStack_a0 [64];
  int local_54;
  
  uVar3 = FUN_0048ef90(param_2);
  if (uVar3 >> 0x1f == 0) {
    if ((byte)param_2[3] != 0) goto LAB_00491080;
    if (-1 < *param_1) {
      iVar7 = (int)uVar3;
      if ((long)(param_2[1] - *param_2) / 5 < (long)iVar7) {
        if (DAT_04c70f78 != '\0') {
          FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
          lVar4 = FUN_004446b0(auStack_a0,&DAT_04070007,&DAT_04866780,
                               "numHashes > rb.remaining() / 5");
          uVar6 = 0x8ce;
LAB_00491178:
          *(char **)(lVar4 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar4 + 0x30) = uVar6;
          FUN_00444c00(auStack_a0);
        }
LAB_00491184:
        *param_1 = -0x7ffbfe00;
        return;
      }
      if ((param_1[0x4e] == 2) && ((int)(param_1[0x5f] & 0x3fffffffU) < iVar7)) {
        uVar6 = FUN_00426720(PTR_DAT_048607b8,uVar3 & 0xffffffff,8,*(undefined8 *)(param_1 + 0x5c),
                             param_1[0x5e],param_1 + 0x5f);
        *(undefined8 *)(param_1 + 0x5c) = uVar6;
      }
      puVar2 = PTR_DAT_048607b8;
      if (iVar7 < 1) {
        return;
      }
      iVar9 = 0;
      while( true ) {
        uVar3 = FUN_0048ef90(param_2);
        if (uVar3 >> 0x1f != 0) {
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
        }
        piVar1 = (int *)*param_2 + 1;
        if ((int *)param_2[1] < piVar1) break;
        local_54 = *(int *)*param_2;
        *param_2 = (ulong)piVar1;
        if ((char)param_2[3] != '\0') goto LAB_004912ec;
        if (*param_1 < 0) goto LAB_004912f8;
        iVar8 = (int)uVar3;
        if ((iVar8 < 1) || (param_1[0x1a] <= iVar8)) {
          if (DAT_04c70f78 == '\0') goto LAB_00491184;
          FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
          lVar4 = FUN_004446b0(auStack_a0,&DAT_04070007,&DAT_04866790,
                               "typeIdIsNullOrOutOfBounds(tid, m_bundle)");
          uVar6 = 0x8db;
          goto LAB_00491178;
        }
        lVar4 = FUN_0044e950(param_3,*(undefined8 *)
                                      (*(long *)(param_1 + 0x18) +
                                      (-(uVar3 >> 0x1f & 1) & 0xfffffff800000000 |
                                      (uVar3 & 0xffffffff) << 3)));
        if (lVar4 == 0) {
          if (DAT_04c70f78 == '\0') goto LAB_00491184;
          FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
          local_a8 = *(undefined8 *)(*(long *)(param_1 + 0x18) + (long)iVar8 * 8);
          lVar4 = FUN_004446b0(auStack_a0,"Type {} with hash {:x} does not match a native type",
                               &DAT_048667c0,&local_a8,&local_54);
          uVar6 = 0x8de;
          goto LAB_00491178;
        }
        *(long *)(*(long *)(param_1 + 4) + (long)iVar8 * 8) = lVar4;
        if (param_1[0x4e] == 2) {
          uVar5 = param_1[0x5e];
          if (uVar5 == (param_1[0x5f] & 0x3fffffffU)) {
            FUN_00426990(puVar2,param_1 + 0x5c,8);
            uVar5 = param_1[0x5e];
          }
          piVar1 = (int *)(*(long *)(param_1 + 0x5c) + (long)(int)uVar5 * 8);
          *piVar1 = iVar8;
          piVar1[1] = local_54;
          param_1[0x5e] = uVar5 + 1;
        }
        iVar9 = iVar9 + 1;
        if (iVar7 <= iVar9) {
          return;
        }
      }
      *param_2 = param_2[1];
      *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
      local_54 = 0;
LAB_004912ec:
      *param_1 = -0x7ffbfe00;
LAB_004912f8:
      if (DAT_04c70f78 == '\0') {
        return;
      }
      FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
      lVar4 = FUN_004446b0(auStack_a0,"Error in input stream.",&DAT_0413df78);
      uVar6 = 0x8da;
      goto LAB_004910d0;
    }
  }
  else {
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
LAB_00491080:
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_04c70f78 == '\0') {
    return;
  }
  FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
  lVar4 = FUN_004446b0(auStack_a0,"Error in input stream.",&DAT_0413df78);
  uVar6 = 0x8cc;
LAB_004910d0:
  *(char **)(lVar4 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar4 + 0x30) = uVar6;
  FUN_00444c00(auStack_a0);
  return;
}

