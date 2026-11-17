
bool FUN_02a8ec10(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  
  uVar3 = *(uint *)(param_1 + 0xc);
  if ((uVar3 == 0) || ((*(byte *)(param_1 + 8) & 1) != 0)) {
    return false;
  }
  if (uVar3 != 0) {
    if ((int)*(uint *)(DAT_05635578 + 0x1e0) < 1) {
      if ((((*(long *)(DAT_05635578 + 0xd0) != 0) &&
           (puVar5 = *(uint **)(*(long *)(DAT_05635578 + 0xd0) + 8), puVar5 != (uint *)0x0)) &&
          ((*(uint *)(DAT_05635578 + 0xe8) <= uVar3 ||
           (*(char *)(*(long *)(DAT_05635578 + 0xf0) + (long)(int)uVar3) != '\0')))) &&
         (((uVar3 < *puVar5 && (puVar5[1] != 0)) && ((ushort)puVar5[2] != 0)))) {
        iVar6 = 0xc;
        if (*(char *)((long)puVar5 + 10) != '\0') {
          iVar6 = 0x1c;
        }
        puVar5 = (uint *)((ulong)(puVar5[1] * uVar3 + (uint)(ushort)puVar5[2] * 8 + iVar6) +
                         (long)puVar5);
        if (puVar5 == (uint *)0x0) {
          uVar4 = 0;
          goto LAB_02a8ed70;
        }
        goto LAB_02a8ec6c;
      }
    }
    else if (uVar3 < *(uint *)(DAT_05635578 + 0x1e0)) {
      if (*(uint *)(DAT_05635578 + 0x1d0) <= uVar3) {
        uVar3 = 0;
      }
      puVar5 = *(uint **)(*(long *)(DAT_05635578 + 0x1d8) + (ulong)uVar3 * 8);
      uVar4 = 0;
      if (puVar5 == (uint *)0x0) goto LAB_02a8ed70;
LAB_02a8ec6c:
      uVar3 = *puVar5;
      if (uVar3 != 0 && puVar5 != (uint *)(ulong)uVar3) {
        puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
        if (((*puVar7 != 0) && (uVar3 = puVar7[1], uVar3 != 0)) && ((ulong)(ushort)puVar7[2] != 0))
        {
          lVar1 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar3 != 0) {
              uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
            }
            if (*puVar7 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_0560bac8) &&
               (uVar4 = *(ushort *)(DAT_0560bad0 + (long)(int)uVar2 * 2), uVar4 < 4))
            goto LAB_02a8ed70;
          }
        }
      }
    }
  }
  uVar4 = 0;
LAB_02a8ed70:
  return uVar4 == 1;
}

