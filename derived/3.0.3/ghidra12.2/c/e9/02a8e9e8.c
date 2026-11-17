
/* WARNING: Removing unreachable block (ram,0x02a8eaf4) */

bool FUN_02a8e9e8(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ushort uVar5;
  int iVar6;
  uint *puVar7;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  if ((uVar3 == 0) || ((*(byte *)(param_1 + 8) & 1) != 0)) {
    return false;
  }
  if (uVar3 != 0) {
    if ((int)*(uint *)(DAT_05635578 + 0x1e0) < 1) {
      if ((((*(long *)(DAT_05635578 + 0xd0) != 0) &&
           (puVar4 = *(uint **)(*(long *)(DAT_05635578 + 0xd0) + 8), puVar4 != (uint *)0x0)) &&
          ((*(uint *)(DAT_05635578 + 0xe8) <= uVar3 ||
           (*(char *)(*(long *)(DAT_05635578 + 0xf0) + (long)(int)uVar3) != '\0')))) &&
         (((uVar3 < *puVar4 && (puVar4[1] != 0)) && ((ushort)puVar4[2] != 0)))) {
        iVar6 = 0xc;
        if (*(char *)((long)puVar4 + 10) != '\0') {
          iVar6 = 0x1c;
        }
        puVar4 = (uint *)((ulong)(puVar4[1] * uVar3 + (uint)(ushort)puVar4[2] * 8 + iVar6) +
                         (long)puVar4);
        goto joined_r0x02a8eae0;
      }
    }
    else if (uVar3 < *(uint *)(DAT_05635578 + 0x1e0)) {
      if (*(uint *)(DAT_05635578 + 0x1d0) <= uVar3) {
        uVar3 = 0;
      }
      puVar4 = *(uint **)(*(long *)(DAT_05635578 + 0x1d8) + (ulong)uVar3 * 8);
joined_r0x02a8eae0:
      if (puVar4 != (uint *)0x0) {
        uVar3 = *puVar4;
        if (uVar3 == 0 || puVar4 == (uint *)(ulong)uVar3) {
LAB_02a8ea54:
          uVar5 = 0;
        }
        else {
          puVar7 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
          uVar5 = 0;
          if (*puVar7 != 0) {
            uVar3 = puVar7[1];
            if ((uVar3 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar1 != 0) {
                uVar2 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
                }
                if (*puVar7 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_0560bac8) &&
                   (uVar5 = *(ushort *)(DAT_0560bad0 + (long)(int)uVar2 * 2), uVar5 < 4))
                goto LAB_02a8ea58;
              }
            }
            goto LAB_02a8ea54;
          }
        }
LAB_02a8ea58:
        if (uVar5 != 0) {
          return false;
        }
        uVar5 = 0;
        if (puVar4 != (uint *)0x0) {
          uVar3 = *puVar4;
          if (uVar3 != 0 && puVar4 != (uint *)(ulong)uVar3) {
            puVar7 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
            if (((*puVar7 != 0) && (uVar3 = puVar7[1], uVar3 != 0)) &&
               ((ulong)(ushort)puVar7[2] != 0)) {
              lVar1 = 0xc;
              if (*(char *)((long)puVar7 + 10) != '\0') {
                lVar1 = 0x1c;
              }
              lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
              if (lVar1 != 0) {
                uVar2 = 0;
                if ((ulong)uVar3 != 0) {
                  uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
                }
                if (*puVar7 <= uVar2) {
                  uVar2 = 0xffffffff;
                }
                if ((uVar2 < DAT_0560bae8) &&
                   (uVar5 = *(ushort *)(DAT_0560baf0 + (long)(int)uVar2 * 2), uVar5 < 5))
                goto LAB_02a8ec00;
              }
            }
          }
          uVar5 = 0;
        }
        goto LAB_02a8ec00;
      }
    }
  }
  uVar5 = 0;
LAB_02a8ec00:
  return uVar5 == 4;
}

