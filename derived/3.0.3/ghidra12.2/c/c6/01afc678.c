
void FUN_01afc678(long param_1,undefined8 param_2,undefined2 *param_3,undefined1 *param_4)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  ushort uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar6 = *(uint **)(param_1 + 0x10);
  if (puVar6 == (uint *)0x0) {
    uVar4 = 0xbc;
  }
  else {
    uVar5 = *puVar6;
    if (uVar5 != 0 && puVar6 != (uint *)(ulong)uVar5) {
      puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
      if (((*puVar7 != 0) && (uVar5 = puVar7[1], uVar5 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar5 != 0) {
            uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar5);
          }
          if (*puVar7 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ec0) &&
             (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar4 < 0xbd))
          goto LAB_01afc740;
        }
      }
    }
    uVar4 = 0;
  }
LAB_01afc740:
  if (uVar4 != 0x7f) {
    return;
  }
  iVar3 = FUN_0277d6c4(param_1 + 8);
  if (iVar3 != 0x3100) {
    puVar6 = *(uint **)(param_1 + 0x10);
    if (puVar6 == (uint *)0x0) {
      uVar4 = 0xbc;
    }
    else {
      uVar5 = *puVar6;
      uVar4 = 0;
      if ((uVar5 != 0) && (puVar6 != (uint *)(ulong)uVar5)) {
        puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
        uVar4 = 0;
        if (*puVar7 != 0) {
          uVar5 = puVar7[1];
          if ((uVar5 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
            lVar1 = 0xc;
            if (*(char *)((long)puVar7 + 10) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
            if (lVar1 != 0) {
              uVar2 = 0;
              if ((ulong)uVar5 != 0) {
                uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar5);
              }
              if (*puVar7 <= uVar2) {
                uVar2 = 0xffffffff;
              }
              if ((uVar2 < DAT_05326ec0) &&
                 (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar4 < 0xbd))
              goto LAB_01afc810;
            }
          }
          uVar4 = 0;
        }
      }
    }
LAB_01afc810:
    if (uVar4 != 0x7f) {
      return;
    }
  }
  iVar3 = FUN_0277d6c4(param_1 + 8);
  if (iVar3 == 0x3100) goto LAB_01afc8ec;
  puVar6 = *(uint **)(param_1 + 0x10);
  if (puVar6 == (uint *)0x0) {
    uVar4 = 0xbc;
  }
  else {
    uVar5 = *puVar6;
    uVar4 = 0;
    if ((uVar5 != 0) && (puVar6 != (uint *)(ulong)uVar5)) {
      puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar5);
      uVar4 = 0;
      if (*puVar7 != 0) {
        uVar5 = puVar7[1];
        if ((uVar5 != 0) && ((ulong)(ushort)puVar7[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar7 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar7 + lVar1 + (ulong)(ushort)puVar7[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar5 != 0) {
              uVar2 = (uint)((ulong)((long)puVar6 - lVar1) / (ulong)uVar5);
            }
            if (*puVar7 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < DAT_05326ec0) &&
               (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar4 < 0xbd))
            goto LAB_01afc8d8;
          }
        }
        uVar4 = 0;
      }
    }
  }
LAB_01afc8d8:
  if (uVar4 != 0x7f) {
    return;
  }
LAB_01afc8ec:
  uVar5 = *(uint *)(param_1 + 0xc);
  if (uVar5 >> 0x18 < 0x23) {
    FUN_020fd218(param_2,uVar5 >> 0x18,uVar5 >> 0x10 & 0xff);
    uVar5 = *(uint *)(param_1 + 0xc);
  }
  *param_3 = (short)uVar5;
  *param_4 = *(undefined1 *)(param_1 + 0xb);
  return;
}

