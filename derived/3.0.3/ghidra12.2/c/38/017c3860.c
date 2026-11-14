
int FUN_017c3860(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  ulong uVar9;
  int iVar10;
  
  uVar4 = *(uint *)(param_1 + 0x15c8);
  if (((int)uVar4 < 1) &&
     (((*(long *)(param_1 + 0x14b8) == 0 ||
       (puVar6 = *(uint **)(*(long *)(param_1 + 0x14b8) + 8), puVar6 == (uint *)0x0)) ||
      (uVar4 = *puVar6, (int)uVar4 < 1)))) {
    iVar8 = 0;
  }
  else {
    uVar9 = 0;
    iVar8 = 0;
    do {
      uVar3 = FUN_017fdae0(uVar9 & 0xffffffff);
      if ((uVar3 & 1) == 0) {
        if ((int)*(uint *)(param_1 + 0x15c8) < 1) {
          if (((((*(long *)(param_1 + 0x14b8) != 0) &&
                (puVar6 = *(uint **)(*(long *)(param_1 + 0x14b8) + 8), puVar6 != (uint *)0x0)) &&
               ((*(uint *)(param_1 + 0x14d0) <= uVar9 ||
                (*(char *)(*(long *)(param_1 + 0x14d8) + uVar9) != '\0')))) &&
              ((uVar9 < *puVar6 && (puVar6[1] != 0)))) && ((ushort)puVar6[2] != 0)) {
            iVar10 = 0xc;
            if (*(char *)((long)puVar6 + 10) != '\0') {
              iVar10 = 0x1c;
            }
            puVar6 = (uint *)((ulong)(puVar6[1] * (int)uVar9 + (uint)(ushort)puVar6[2] * 8 + iVar10)
                             + (long)puVar6);
            goto joined_r0x017c39f0;
          }
        }
        else if (uVar9 < *(uint *)(param_1 + 0x15c8)) {
          uVar3 = uVar9 & 0xffffffff;
          if (*(uint *)(param_1 + 0x15b8) <= uVar9) {
            uVar3 = 0;
          }
          puVar6 = *(uint **)(*(long *)(param_1 + 0x15c0) + uVar3 * 8);
joined_r0x017c39f0:
          if (puVar6 != (uint *)0x0) {
            uVar5 = *puVar6;
            if (uVar5 == 0 || puVar6 == (uint *)(ulong)uVar5) {
LAB_017c38b0:
              uVar5 = 0;
            }
            else {
              puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
              if (((*puVar7 == 0) || (uVar5 = puVar7[1], uVar5 == 0)) ||
                 ((ulong)(ushort)puVar7[2] == 0)) goto LAB_017c38b0;
              lVar1 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar1 == 0) goto LAB_017c38b0;
              uVar2 = 0;
              if ((ulong)uVar5 != 0) {
                uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar5);
              }
              if (*puVar7 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((DAT_05293048 <= uVar2) ||
                 (uVar5 = (uint)*(ushort *)(DAT_05293050 + (long)(int)uVar2 * 2), 8 < uVar5))
              goto LAB_017c38b0;
            }
            if (uVar5 == param_2) {
              iVar8 = iVar8 + 1;
            }
          }
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar4 != uVar9);
  }
  return iVar8;
}

