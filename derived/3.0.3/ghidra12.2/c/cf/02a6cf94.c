
/* WARNING: Removing unreachable block (ram,0x02a6d2d0) */
/* WARNING: Removing unreachable block (ram,0x02a6d29c) */
/* WARNING: Removing unreachable block (ram,0x02a6d2b0) */
/* WARNING: Removing unreachable block (ram,0x02a6d2e0) */

bool FUN_02a6cf94(long param_1,long param_2)

{
  ulong uVar1;
  ushort uVar2;
  uint uVar3;
  uint *puVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  uint *puVar9;
  
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 == 0) {
    return *(int *)(param_2 + 8) != 0;
  }
  if (uVar3 == 0) {
LAB_02a6d104:
    uVar2 = 0;
  }
  else {
    lVar8 = *(long *)PTR_DAT_04bb5008;
    if (0 < (int)*(uint *)(lVar8 + 0x1e0)) {
      if (uVar3 < *(uint *)(lVar8 + 0x1e0)) {
        if (*(uint *)(lVar8 + 0x1d0) <= uVar3) {
          uVar3 = 0;
        }
        puVar4 = *(uint **)(*(long *)(lVar8 + 0x1d8) + (ulong)uVar3 * 8);
        uVar2 = 0;
        if (puVar4 == (uint *)0x0) goto LAB_02a6d108;
LAB_02a6cffc:
        uVar3 = *puVar4;
        if (uVar3 != 0 && puVar4 != (uint *)(ulong)uVar3) {
          puVar9 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
          if (((*puVar9 != 0) && (uVar3 = puVar9[1], uVar3 != 0)) && ((ulong)(ushort)puVar9[2] != 0)
             ) {
            lVar8 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar9 + lVar8 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar8 != 0) {
              uVar6 = 0;
              if ((ulong)uVar3 != 0) {
                uVar6 = (uint)((ulong)((long)puVar4 - lVar8) / (ulong)uVar3);
              }
              if (*puVar9 <= uVar6) {
                uVar6 = 0xffffffff;
              }
              if ((uVar6 < DAT_0560bad8) &&
                 (uVar2 = *(ushort *)(DAT_0560bae0 + (long)(int)uVar6 * 2), uVar2 < 5))
              goto LAB_02a6d108;
            }
          }
        }
      }
      goto LAB_02a6d104;
    }
    if ((((*(long *)(lVar8 + 0xd0) == 0) ||
         (puVar4 = *(uint **)(*(long *)(lVar8 + 0xd0) + 8), puVar4 == (uint *)0x0)) ||
        ((uVar3 < *(uint *)(lVar8 + 0xe8) &&
         (*(char *)(*(long *)(lVar8 + 0xf0) + (long)(int)uVar3) == '\0')))) ||
       (((*puVar4 <= uVar3 || (puVar4[1] == 0)) || ((ushort)puVar4[2] == 0)))) goto LAB_02a6d104;
    iVar7 = 0xc;
    if (*(char *)((long)puVar4 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar4 = (uint *)((ulong)(puVar4[1] * uVar3 + (uint)(ushort)puVar4[2] * 8 + iVar7) +
                     (long)puVar4);
    if (puVar4 != (uint *)0x0) goto LAB_02a6cffc;
    uVar2 = 0;
  }
LAB_02a6d108:
  uVar3 = *(uint *)(param_2 + 8);
  if (uVar3 == 0) {
LAB_02a6d24c:
    uVar5 = 0;
  }
  else {
    lVar8 = *(long *)PTR_DAT_04bb5008;
    if (0 < (int)*(uint *)(lVar8 + 0x1e0)) {
      if (uVar3 < *(uint *)(lVar8 + 0x1e0)) {
        if (*(uint *)(lVar8 + 0x1d0) <= uVar3) {
          uVar3 = 0;
        }
        puVar4 = *(uint **)(*(long *)(lVar8 + 0x1d8) + (ulong)uVar3 * 8);
        uVar5 = 0;
        if (puVar4 == (uint *)0x0) goto LAB_02a6d250;
LAB_02a6d154:
        uVar3 = *puVar4;
        if (uVar3 != 0 && puVar4 != (uint *)(ulong)uVar3) {
          puVar9 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
          if (((*puVar9 != 0) && (uVar3 = puVar9[1], uVar3 != 0)) && ((ulong)(ushort)puVar9[2] != 0)
             ) {
            lVar8 = 0xc;
            if (*(char *)((long)puVar9 + 10) != '\0') {
              lVar8 = 0x1c;
            }
            lVar8 = (long)puVar9 + lVar8 + (ulong)(ushort)puVar9[2] * 8;
            if (lVar8 != 0) {
              uVar6 = 0;
              if ((ulong)uVar3 != 0) {
                uVar6 = (uint)((ulong)((long)puVar4 - lVar8) / (ulong)uVar3);
              }
              if (*puVar9 <= uVar6) {
                uVar6 = 0xffffffff;
              }
              if ((uVar6 < DAT_0560bad8) &&
                 (uVar5 = *(ushort *)(DAT_0560bae0 + (long)(int)uVar6 * 2), uVar5 < 5))
              goto LAB_02a6d250;
            }
          }
        }
      }
      goto LAB_02a6d24c;
    }
    if ((((*(long *)(lVar8 + 0xd0) == 0) ||
         (puVar4 = *(uint **)(*(long *)(lVar8 + 0xd0) + 8), puVar4 == (uint *)0x0)) ||
        ((uVar3 < *(uint *)(lVar8 + 0xe8) &&
         (*(char *)(*(long *)(lVar8 + 0xf0) + (long)(int)uVar3) == '\0')))) ||
       (((*puVar4 <= uVar3 || (puVar4[1] == 0)) || ((ushort)puVar4[2] == 0)))) goto LAB_02a6d24c;
    iVar7 = 0xc;
    if (*(char *)((long)puVar4 + 10) != '\0') {
      iVar7 = 0x1c;
    }
    puVar4 = (uint *)((ulong)(puVar4[1] * uVar3 + (uint)(ushort)puVar4[2] * 8 + iVar7) +
                     (long)puVar4);
    if (puVar4 != (uint *)0x0) goto LAB_02a6d154;
    uVar5 = 0;
  }
LAB_02a6d250:
  if (uVar2 != uVar5) {
LAB_02a6d518:
    return false;
  }
  switch(uVar2) {
  case 0:
    if (*(int *)(param_1 + 0x28) != *(int *)(param_2 + 0x28)) {
      return false;
    }
    if (*(int *)(param_1 + 0x2c) != *(int *)(param_2 + 0x2c)) {
      return false;
    }
    if (*(short *)(param_1 + 0x10) != *(short *)(param_2 + 0x10)) {
      return false;
    }
    if (*(short *)(param_1 + 0x12) != *(short *)(param_2 + 0x12)) {
      return false;
    }
    if (*(short *)(param_1 + 0x14) != *(short *)(param_2 + 0x14)) {
      return false;
    }
    uVar1 = FUN_0277d7b4(param_1 + 0x18,param_2 + 0x18);
    if ((uVar1 & 1) == 0) {
      return false;
    }
    if (*(char *)(param_1 + 0x1b) != *(char *)(param_2 + 0x1b)) {
      return false;
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c)) {
      return false;
    }
    uVar1 = FUN_0277d7b4(param_1 + 0x20,param_2 + 0x20);
    if ((uVar1 & 1) == 0) {
      return false;
    }
    if (*(char *)(param_1 + 0x23) != *(char *)(param_2 + 0x23)) {
      return false;
    }
    if (*(int *)(param_1 + 0x24) != *(int *)(param_2 + 0x24)) {
      return false;
    }
    if (*(char *)(param_1 + 0x30) != *(char *)(param_2 + 0x30)) {
      return false;
    }
    uVar3 = *(uint *)(param_1 + 0x34);
    uVar6 = *(uint *)(param_2 + 0x34);
    break;
  case 1:
    if (*(short *)(param_1 + 0x10) != *(short *)(param_2 + 0x10)) {
      return false;
    }
    if (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14)) {
      return false;
    }
    if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
      return false;
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c)) {
      return false;
    }
    if (*(int *)(param_1 + 0x20) != *(int *)(param_2 + 0x20)) {
      return false;
    }
    if (*(int *)(param_1 + 0x24) != *(int *)(param_2 + 0x24)) {
      return false;
    }
    if (*(char *)(param_1 + 0x28) != *(char *)(param_2 + 0x28)) {
      return false;
    }
    if (*(int *)(param_1 + 0x2c) != *(int *)(param_2 + 0x2c)) {
      return false;
    }
    if (*(char *)(param_1 + 0x30) != *(char *)(param_2 + 0x30)) {
      return false;
    }
    uVar1 = FUN_0277d7b4(param_1 + 0x34,param_2 + 0x34);
    if ((uVar1 & 1) == 0) {
      return false;
    }
    if (*(char *)(param_1 + 0x37) != *(char *)(param_2 + 0x37)) {
      return false;
    }
    uVar3 = *(uint *)(param_1 + 0x38);
    uVar6 = *(uint *)(param_2 + 0x38);
    break;
  case 2:
    if (*(short *)(param_1 + 0x10) != *(short *)(param_2 + 0x10)) {
      return false;
    }
    if (*(int *)(param_1 + 0x14) != *(int *)(param_2 + 0x14)) {
      return false;
    }
    if (*(int *)(param_1 + 0x18) != *(int *)(param_2 + 0x18)) {
      return false;
    }
    if (*(int *)(param_1 + 0x1c) != *(int *)(param_2 + 0x1c)) {
      return false;
    }
    uVar3 = (uint)*(byte *)(param_1 + 0x20);
    uVar6 = (uint)*(byte *)(param_2 + 0x20);
    break;
  case 3:
    if (*(short *)(param_1 + 0x10) == *(short *)(param_2 + 0x10)) {
      return *(char *)(param_1 + 0x12) == *(char *)(param_2 + 0x12);
    }
    return false;
  case 4:
    if (*(short *)(param_1 + 0x10) != *(short *)(param_2 + 0x10)) {
      return false;
    }
    if (*(short *)(param_1 + 0x12) != *(short *)(param_2 + 0x12)) {
      return false;
    }
    if (*(short *)(param_1 + 0x14) != *(short *)(param_2 + 0x14)) {
      return false;
    }
    if (*(short *)(param_1 + 0x16) != *(short *)(param_2 + 0x16)) {
      return false;
    }
    uVar3 = (uint)*(ushort *)(param_1 + 0x18);
    uVar6 = (uint)*(ushort *)(param_2 + 0x18);
    break;
  default:
    goto LAB_02a6d518;
  }
  return uVar3 == uVar6;
}

