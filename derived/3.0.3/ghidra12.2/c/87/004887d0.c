
void FUN_004887d0(int *param_1,long param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 *puVar7;
  char *pcVar8;
  short *psVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  int iVar12;
  undefined8 local_98;
  undefined8 local_90;
  uint local_84;
  undefined8 local_80 [8];
  
  if ((param_3 & 1) != 0) {
    return;
  }
  if (param_1[6] != param_1[0x1a]) {
    if (DAT_04c70f78 != '\0') {
      FUN_00444bc0(local_80,&DAT_04c70f28,1);
      lVar3 = FUN_004446b0(local_80,"Type bodies have not been read yet",&DAT_0413df78);
      uVar10 = 0x7b0;
LAB_00488868:
      *(char **)(lVar3 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar3 + 0x30) = uVar10;
      FUN_00444c00(local_80);
    }
LAB_00488874:
    *param_1 = -0x7ffbfe00;
    return;
  }
  uVar2 = FUN_0048ef90(param_2);
  if (uVar2 >> 0x1f == 0) {
    if (*(byte *)(param_2 + 0x18) != 0) goto LAB_00488888;
    if (-1 < *param_1) {
      if ((int)uVar2 < 1) {
        return;
      }
      iVar12 = 0;
      while( true ) {
        uVar4 = FUN_0048ef90(param_2);
        if (uVar4 >> 0x1f != 0) {
          *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
        }
        uVar5 = FUN_0048ef90(param_2);
        if (uVar5 >> 0x20 != 0) {
          *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
        }
        local_84 = (uint)uVar5;
        uVar6 = FUN_0048ef90(param_2);
        if (0xffff < uVar6) break;
        if (*(byte *)(param_2 + 0x18) != 0) goto LAB_00488a7c;
        if (*param_1 < 0) goto LAB_00488a88;
        if (((int)uVar4 < 1) || (param_1[0x1a] <= (int)uVar4)) {
          if (DAT_04c70f78 == '\0') goto LAB_00488874;
          FUN_00444bc0(local_80,&DAT_04c70f28,1);
          lVar3 = FUN_004446b0(local_80,"Invalid context ID (out of bounds) when reading decl",
                               &DAT_0413df78);
          uVar10 = 0x7bc;
          goto LAB_00488868;
        }
        local_90 = *(undefined8 *)
                    (*(long *)(param_1 + 4) +
                    (-(uVar4 >> 0x1f & 1) & 0xfffffff800000000 | (uVar4 & 0xffffffff) << 3));
        uVar1 = (uint)uVar6 & 0xffff;
        if (param_1[0x22] <= (int)uVar1) {
          if (DAT_04c70f78 == '\0') goto LAB_00488874;
          FUN_00444bc0(local_80,&DAT_04c70f28,1);
          lVar3 = FUN_004446b0(local_80,"Invalid field name string ID (out of bounds)",&DAT_0413df78
                              );
          uVar10 = 0x7c0;
          goto LAB_00488868;
        }
        uVar10 = *(undefined8 *)(*(long *)(param_1 + 0x20) + (ulong)uVar1 * 8);
        local_98 = uVar10;
        puVar7 = (undefined8 *)FUN_00426e00(local_90,0x800000);
        if ((puVar7 == (undefined8 *)0x0) || (psVar9 = (short *)*puVar7, psVar9 == (short *)0x0)) {
          if (DAT_04c70f78 == '\0') goto LAB_00488874;
          FUN_00444bc0(local_80,&DAT_04c70f28,1);
          lVar3 = FUN_004446b0(local_80,"Cannot add decl to \'{}\' as it does not have Opt::DECLS",
                               &DAT_048537e8,&local_90);
          uVar10 = 0x7c5;
          goto LAB_00488868;
        }
        if ((uint)((int)psVar9[1] + (int)*psVar9) <= (uint)uVar5) {
          if (DAT_04c70f78 == '\0') goto LAB_00488874;
          FUN_00444bc0(local_80,&DAT_04c70f28,1);
          lVar3 = FUN_004446b0(local_80,"Invalid decl index (out of bounds)",&DAT_0413df78);
          uVar10 = 0x7c6;
          goto LAB_00488868;
        }
        uVar11 = *(undefined8 *)((long)psVar9 + ((long)(uVar5 << 0x20) >> 0x1d) + 8);
        local_80[0] = uVar11;
        pcVar8 = (char *)FUN_00427b40(local_80);
        if (*pcVar8 != '$') {
          if (DAT_04c70f78 == '\0') goto LAB_00488874;
          FUN_00444bc0(local_80,&DAT_04c70f28,1);
          lVar3 = FUN_004446b0(local_80,"Decl {} of \'{}\' (\'{}\') has already been read",
                               &DAT_04866718,&local_84,&local_90,&local_98);
          uVar10 = 0x7c9;
          goto LAB_00488868;
        }
        puVar7 = (undefined8 *)FUN_00426d40(uVar11,0x10000);
        iVar12 = iVar12 + 1;
        *puVar7 = uVar10;
        if ((int)uVar2 <= iVar12) {
          return;
        }
      }
      *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
LAB_00488a7c:
      *param_1 = -0x7ffbfe00;
LAB_00488a88:
      if (DAT_04c70f78 == '\0') {
        return;
      }
      FUN_00444bc0(local_80,&DAT_04c70f28,1);
      lVar3 = FUN_004446b0(local_80,"Error in input stream.",&DAT_0413df78);
      uVar10 = 0x7b9;
      goto LAB_004888d8;
    }
  }
  else {
    *(byte *)(param_2 + 0x18) = *(byte *)(param_2 + 0x18) | 2;
LAB_00488888:
    *param_1 = -0x7ffbfe00;
  }
  if (DAT_04c70f78 == '\0') {
    return;
  }
  FUN_00444bc0(local_80,&DAT_04c70f28,1);
  lVar3 = FUN_004446b0(local_80,"Error in input stream.",&DAT_0413df78);
  uVar10 = 0x7b3;
LAB_004888d8:
  *(char **)(lVar3 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
  ;
  *(undefined8 *)(lVar3 + 0x30) = uVar10;
  FUN_00444c00(local_80);
  return;
}

