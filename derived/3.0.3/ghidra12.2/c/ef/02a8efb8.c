
undefined4 FUN_02a8efb8(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 uVar5;
  uint *puVar6;
  uint *puVar7;
  int iVar8;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  if (uVar3 == 0) {
switchD_02a8f0b4_default:
    return 0;
  }
  if (uVar3 != 0) {
    if ((int)*(uint *)(DAT_05635578 + 0x1e0) < 1) {
      if (*(long *)(DAT_05635578 + 0xd0) == 0) {
        return 1;
      }
      puVar6 = *(uint **)(*(long *)(DAT_05635578 + 0xd0) + 8);
      if (puVar6 == (uint *)0x0) {
        return 1;
      }
      if ((uVar3 < *(uint *)(DAT_05635578 + 0xe8)) &&
         (*(char *)(*(long *)(DAT_05635578 + 0xf0) + (long)(int)uVar3) == '\0')) {
        return 1;
      }
      if (*puVar6 <= uVar3) {
        return 1;
      }
      if (puVar6[1] == 0) {
        return 1;
      }
      if ((ushort)puVar6[2] == 0) {
        return 1;
      }
      iVar8 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        iVar8 = 0x1c;
      }
      puVar6 = (uint *)((ulong)(puVar6[1] * uVar3 + (uint)(ushort)puVar6[2] * 8 + iVar8) +
                       (long)puVar6);
    }
    else {
      if (*(uint *)(DAT_05635578 + 0x1e0) <= uVar3) {
        return 1;
      }
      if (*(uint *)(DAT_05635578 + 0x1d0) <= uVar3) {
        uVar3 = 0;
      }
      puVar6 = *(uint **)(*(long *)(DAT_05635578 + 0x1d8) + (ulong)uVar3 * 8);
    }
    if (puVar6 == (uint *)0x0) {
      return 1;
    }
    uVar3 = *puVar6;
    if (uVar3 == 0 || puVar6 == (uint *)(ulong)uVar3) {
      return 1;
    }
    puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar3);
    if (*puVar7 == 0) {
      return 1;
    }
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
          uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar3);
        }
        if (*puVar7 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_0560bac8) &&
           (uVar4 = *(ushort *)(DAT_0560bad0 + (long)(int)uVar2 * 2), uVar4 < 4)) {
          uVar5 = 3;
          switch(uVar4) {
          case 0:
            break;
          case 1:
            goto switchD_02a8f0b4_caseD_1;
          case 2:
            return 4;
          case 3:
            return 5;
          default:
            goto switchD_02a8f0b4_default;
          }
        }
      }
    }
    if (((*puVar7 != 0) && (uVar3 = puVar7[1], uVar3 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar7 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar3 != 0) {
          uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar3);
        }
        if (*puVar7 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < *(uint *)PTR_DAT_04bc46b0) &&
           (uVar4 = *(ushort *)(*(long *)(PTR_DAT_04bc46b0 + 8) + (long)(int)uVar2 * 2), uVar4 < 5))
        {
          uVar5 = *(undefined4 *)(&DAT_0417eefc + (long)(short)uVar4 * 4);
switchD_02a8f0b4_caseD_1:
          return uVar5;
        }
      }
    }
  }
  return 1;
}

