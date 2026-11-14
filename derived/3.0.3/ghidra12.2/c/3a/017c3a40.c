
ulong FUN_017c3a40(long param_1,uint param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  ulong uVar10;
  int iVar11;
  
  if (((-1 < param_3) && (iVar4 = FUN_017c3860(param_1,param_2), param_3 < iVar4)) &&
     ((uVar6 = *(uint *)(param_1 + 0x15c8), 0 < (int)uVar6 ||
      (((*(long *)(param_1 + 0x14b8) != 0 &&
        (puVar8 = *(uint **)(*(long *)(param_1 + 0x14b8) + 8), puVar8 != (uint *)0x0)) &&
       (uVar6 = *puVar8, 0 < (int)uVar6)))))) {
    uVar10 = 0;
    iVar4 = 0;
    do {
      uVar5 = FUN_017fdae0(uVar10 & 0xffffffff);
      if ((uVar5 & 1) == 0) {
        if ((int)*(uint *)(param_1 + 0x15c8) < 1) {
          if (((*(long *)(param_1 + 0x14b8) != 0) &&
              (puVar8 = *(uint **)(*(long *)(param_1 + 0x14b8) + 8), puVar8 != (uint *)0x0)) &&
             (((*(uint *)(param_1 + 0x14d0) <= uVar10 ||
               (*(char *)(*(long *)(param_1 + 0x14d8) + uVar10) != '\0')) &&
              (((uVar10 < *puVar8 && (puVar8[1] != 0)) && ((ushort)puVar8[2] != 0)))))) {
            iVar11 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              iVar11 = 0x1c;
            }
            puVar8 = (uint *)((ulong)(puVar8[1] * (int)uVar10 + (uint)(ushort)puVar8[2] * 8 + iVar11
                                     ) + (long)puVar8);
            goto joined_r0x017c3bf4;
          }
        }
        else if (uVar10 < *(uint *)(param_1 + 0x15c8)) {
          uVar5 = uVar10 & 0xffffffff;
          if (*(uint *)(param_1 + 0x15b8) <= uVar10) {
            uVar5 = 0;
          }
          puVar8 = *(uint **)(*(long *)(param_1 + 0x15c0) + uVar5 * 8);
joined_r0x017c3bf4:
          if (puVar8 != (uint *)0x0) {
            uVar7 = *puVar8;
            if (uVar7 == 0 || puVar8 == (uint *)(ulong)uVar7) {
LAB_017c3b6c:
              uVar7 = 0;
            }
            else {
              puVar9 = (uint *)((long)puVar8 - (long)(ulong)uVar7);
              if (((*puVar9 == 0) || (uVar7 = puVar9[1], uVar7 == 0)) ||
                 ((ulong)(ushort)puVar9[2] == 0)) goto LAB_017c3b6c;
              lVar1 = 0xc;
              if (*(char *)((long)puVar9 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar9 + lVar1 + (ulong)(ushort)puVar9[2] * 8;
              if (lVar1 == 0) goto LAB_017c3b6c;
              uVar2 = 0;
              if ((ulong)uVar7 != 0) {
                uVar2 = (uint)((ulong)((long)puVar8 - lVar1) / (ulong)uVar7);
              }
              if (*puVar9 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((DAT_05293048 <= uVar2) ||
                 (uVar3 = *(ushort *)(DAT_05293050 + (long)(int)uVar2 * 2), uVar7 = (uint)uVar3,
                 8 < uVar3)) goto LAB_017c3b6c;
            }
            if (uVar7 == param_2) {
              if (iVar4 == param_3) {
                return uVar10 & 0xffffffff;
              }
              iVar4 = iVar4 + 1;
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar6 != uVar10);
  }
  return 0xffffffff;
}

