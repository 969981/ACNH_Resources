
ulong FUN_017c36d0(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  uint *puVar7;
  uint *puVar8;
  ulong uVar9;
  long lVar10;
  
  uVar2 = *(uint *)(param_1 + 0x15c8);
  lVar10 = *(long *)(param_1 + 0x14b8);
  uVar9 = 0;
  do {
    uVar6 = (ulong)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
    if ((int)uVar2 < 1 && lVar10 != 0) {
      uVar6 = 0;
      if (*(uint **)(lVar10 + 8) != (uint *)0x0) {
        uVar6 = (ulong)**(uint **)(lVar10 + 8);
      }
    }
    if (uVar6 <= uVar9) {
      return 0xffffffff;
    }
    if ((int)uVar2 < 1) {
      if ((((lVar10 != 0) && (puVar7 = *(uint **)(lVar10 + 8), puVar7 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 0x14d0) <= uVar9 ||
           (*(char *)(*(long *)(param_1 + 0x14d8) + uVar9) != '\0')))) &&
         (((uVar9 < *puVar7 && (puVar7[1] != 0)) && ((ushort)puVar7[2] != 0)))) {
        iVar4 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          iVar4 = 0x1c;
        }
        puVar7 = (uint *)((ulong)(puVar7[1] * (int)uVar9 + (uint)(ushort)puVar7[2] * 8 + iVar4) +
                         (long)puVar7);
        goto joined_r0x017c3848;
      }
    }
    else if (uVar9 < uVar2) {
      uVar6 = uVar9;
      if (*(uint *)(param_1 + 0x15b8) <= uVar9) {
        uVar6 = 0;
      }
      puVar7 = *(uint **)(*(long *)(param_1 + 0x15c0) + uVar6 * 8);
joined_r0x017c3848:
      if (puVar7 != (uint *)0x0) {
        uVar3 = *puVar7;
        uVar5 = 0;
        if ((uVar3 != 0) && (puVar7 != (uint *)(ulong)uVar3)) {
          puVar8 = (uint *)((long)puVar7 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar8 != 0) {
            uVar3 = puVar8[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar8[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar8 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar8 + lVar1 + (ulong)(ushort)puVar8[2] * 8;
              if (lVar1 != 0) {
                uVar5 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar5 = (uint)((ulong)((long)puVar7 - lVar1) / (ulong)uVar3);
                }
                if (*puVar8 <= uVar5) {
                  uVar5 = 0xffffffff;
                }
                if ((uVar5 < DAT_05293048) &&
                   (uVar5 = (uint)*(ushort *)(DAT_05293050 + (long)(int)uVar5 * 2), uVar5 < 9))
                goto LAB_017c372c;
              }
            }
            uVar5 = 0;
          }
        }
LAB_017c372c:
        if (uVar5 == param_2) {
          return uVar9 & 0xffffffff;
        }
      }
    }
    uVar9 = uVar9 + 1;
  } while( true );
}

