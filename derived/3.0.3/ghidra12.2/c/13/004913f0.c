
void FUN_004913f0(int *param_1,ulong *param_2,undefined8 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  long lVar7;
  int iVar8;
  int local_a4;
  undefined1 auStack_a0 [64];
  int local_58;
  int local_54;
  
  lVar7 = *(long *)(param_1 + 4);
  iVar2 = param_1[6];
  uVar4 = FUN_0048ef90(param_2);
  if (uVar4 >> 0x1f == 0) {
    if ((byte)param_2[3] != 0) goto LAB_00491448;
    if (-1 < *param_1) {
      if ((int)uVar4 < 1) {
        return;
      }
      iVar8 = 0;
      while( true ) {
        uVar5 = FUN_0048ef90(param_2);
        if (uVar5 >> 0x1f != 0) {
          *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
        }
        local_54 = (int)uVar5;
        piVar1 = (int *)*param_2 + 1;
        if ((int *)param_2[1] < piVar1) break;
        iVar3 = *(int *)*param_2;
        *param_2 = (ulong)piVar1;
        local_58 = iVar3;
        if ((char)param_2[3] != '\0') goto LAB_0049158c;
        if (*param_1 < 0) goto LAB_00491598;
        if ((local_54 < 1) || (iVar2 <= local_54)) {
          if (DAT_04c70f78 == '\0') goto LAB_004916dc;
          FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
          lVar7 = FUN_004446b0(auStack_a0,
                               "Invalid type ID (out of bounds) when reading property hash",
                               &DAT_0413df78);
          uVar6 = 0x922;
LAB_004916d0:
          *(char **)(lVar7 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
          ;
          *(undefined8 *)(lVar7 + 0x30) = uVar6;
          FUN_00444c00(auStack_a0);
LAB_004916dc:
          *param_1 = -0x7ffbfe00;
          return;
        }
        if (*(long *)(lVar7 + (-(uVar5 >> 0x1f & 1) & 0xfffffff800000000 | (uVar5 & 0xffffffff) << 3
                              )) == 0) {
          if (DAT_04c70f78 == '\0') goto LAB_004916dc;
          FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
          lVar7 = FUN_004446b0(auStack_a0,
                               "Type ${} is not initialized; HASHES section must have been loaded before PROPS_HASHES"
                               ,&DAT_04853780,&local_54);
          uVar6 = 0x925;
          goto LAB_004916d0;
        }
        local_a4 = FUN_0044eaf0(param_3);
        if (iVar3 != local_a4) {
          if (DAT_04c70f78 == '\0') goto LAB_004916dc;
          FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
          lVar7 = FUN_004446b0(auStack_a0,
                               "Property hash in file for type ${}, \'{}\' ({}) does not match native hash ({})"
                               ,&DAT_048667d8,&local_54,
                               *(long *)(param_1 + 0x18) + (long)local_54 * 8,&local_58,&local_a4);
          uVar6 = 0x92c;
          goto LAB_004916d0;
        }
        iVar8 = iVar8 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x76) + (long)local_54) = 1;
        if ((int)uVar4 <= iVar8) {
          return;
        }
      }
      *param_2 = param_2[1];
      *(byte *)(param_2 + 3) = (byte)param_2[3] | 3;
      local_58 = 0;
LAB_0049158c:
      *param_1 = -0x7ffbfe00;
LAB_00491598:
      if (DAT_04c70f78 == '\0') {
        return;
      }
      FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
      lVar7 = FUN_004446b0(auStack_a0,"Error in input stream.",&DAT_0413df78);
      uVar6 = 0x91d;
      goto LAB_00491498;
    }
  }
  else {
    *(byte *)(param_2 + 3) = (byte)param_2[3] | 2;
LAB_00491448:
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_04c70f78 == '\0') {
    return;
  }
  FUN_00444bc0(auStack_a0,&DAT_04c70f28,1);
  lVar7 = FUN_004446b0(auStack_a0,"Error in input stream.",&DAT_0413df78);
  uVar6 = 0x917;
LAB_00491498:
  *(char **)(lVar7 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar7 + 0x30) = uVar6;
  FUN_00444c00(auStack_a0);
  return;
}

