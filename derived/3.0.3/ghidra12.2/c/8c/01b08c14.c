
void FUN_01b08c14(undefined2 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  ushort uVar5;
  uint *puVar6;
  
  puVar4 = *(uint **)(param_2 + 0x10);
  if (puVar4 == (uint *)0x0) goto LAB_01b08cd0;
  uVar3 = *puVar4;
  if (uVar3 == 0 || puVar4 == (uint *)(ulong)uVar3) {
LAB_01b08c38:
    uVar5 = 0;
  }
  else {
    puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
    uVar5 = 0;
    if (*puVar6 != 0) {
      uVar3 = puVar6[1];
      if ((uVar3 != 0) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ec0) &&
             (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar5 < 0xbd))
          goto LAB_01b08c3c;
        }
      }
      goto LAB_01b08c38;
    }
  }
LAB_01b08c3c:
  if (uVar5 == 0xab) {
LAB_01b08cfc:
    *param_1 = (short)*(undefined4 *)(param_2 + 0xc);
    return;
  }
  uVar3 = *puVar4;
  if ((uVar3 != 0) && (puVar4 != (uint *)(ulong)uVar3)) {
    puVar6 = (uint *)((long)puVar4 - (long)(ulong)uVar3);
    if ((*puVar6 != 0) && ((uVar3 = puVar6[1], uVar3 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar6 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar3 != 0) {
          uVar2 = (uint)((ulong)((long)puVar4 - lVar1) / (ulong)uVar3);
        }
        if (*puVar6 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_05326ec0) && (*(short *)(DAT_05326ec8 + (long)(int)uVar2 * 2) == 7))
        goto LAB_01b08cfc;
      }
    }
  }
LAB_01b08cd0:
  FUN_007ef010(param_1,PTR_DAT_04bb3170);
  return;
}

