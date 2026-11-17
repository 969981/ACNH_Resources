
void FUN_02a8f958(long param_1,uint *param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  
  *(undefined1 *)(param_1 + 8) = 0;
  *(uint *)(param_1 + 0xc) = *param_2;
  *(uint *)(param_1 + 0x18) = param_2[4];
  *(uint *)(param_1 + 0x1c) = param_2[5];
  *(uint *)(param_1 + 0x20) = param_2[6];
  uVar4 = param_2[8];
  *(byte *)(param_1 + 8) = (byte)uVar4;
  *(byte *)(param_1 + 8) = (byte)uVar4 | *(char *)((long)param_2 + 0x21) << 1;
  uVar4 = *param_2;
  if (uVar4 != 0) {
    if ((int)*(uint *)(DAT_05635578 + 0x1e0) < 1) {
      if (*(long *)(DAT_05635578 + 0xd0) == 0) {
        return;
      }
      puVar5 = *(uint **)(*(long *)(DAT_05635578 + 0xd0) + 8);
      if (puVar5 == (uint *)0x0) {
        return;
      }
      if ((uVar4 < *(uint *)(DAT_05635578 + 0xe8)) &&
         (*(char *)(*(long *)(DAT_05635578 + 0xf0) + (long)(int)uVar4) == '\0')) {
        return;
      }
      if (*puVar5 <= uVar4) {
        return;
      }
      if (puVar5[1] == 0) {
        return;
      }
      if ((ushort)puVar5[2] == 0) {
        return;
      }
      iVar6 = 0xc;
      if (*(char *)((long)puVar5 + 10) != '\0') {
        iVar6 = 0x1c;
      }
      puVar5 = (uint *)((ulong)(puVar5[1] * uVar4 + (uint)(ushort)puVar5[2] * 8 + iVar6) +
                       (long)puVar5);
    }
    else {
      if (*(uint *)(DAT_05635578 + 0x1e0) <= uVar4) {
        return;
      }
      if (*(uint *)(DAT_05635578 + 0x1d0) <= uVar4) {
        uVar4 = 0;
      }
      puVar5 = *(uint **)(*(long *)(DAT_05635578 + 0x1d8) + (ulong)uVar4 * 8);
    }
    if ((puVar5 != (uint *)0x0) && (uVar4 = *puVar5, uVar4 != 0 && puVar5 != (uint *)(ulong)uVar4))
    {
      puVar7 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
      if ((*puVar7 != 0) && ((uVar4 = puVar7[1], uVar4 != 0 && ((ulong)(ushort)puVar7[2] != 0)))) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar4 != 0) {
            uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar4);
          }
          if (*puVar7 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if (uVar2 < DAT_0560bac8) {
            uVar3 = *(ushort *)(DAT_0560bad0 + (long)(int)uVar2 * 2);
            if (uVar3 < 4) {
              if (uVar3 == 3) {
                param_2 = (uint *)((long)param_2 + 0x1e);
              }
              else {
                if (uVar3 != 2) {
                  return;
                }
                param_2 = param_2 + 7;
              }
              *(short *)(param_1 + 0x24) = (short)*param_2;
            }
          }
        }
      }
    }
  }
  return;
}

