
byte * FUN_0012db90(long param_1,int param_2,char param_3)

{
  byte *__dest;
  undefined4 *puVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  undefined4 uVar5;
  byte bVar6;
  int iVar7;
  long lVar8;
  int iVar9;
  int iVar10;
  
  if (param_2 < 0) {
    return (byte *)0x0;
  }
  if (4 < *(byte *)(param_1 + 0x62751) - 1 || (int)(uint)*(byte *)(param_1 + 0x62751) < param_2) {
    return (byte *)0x0;
  }
  __dest = (byte *)(param_1 + 0x625f0);
  iVar7 = param_2 + -1;
  bVar6 = *(byte *)(param_1 + 0x62750);
  if (param_2 < 1) {
    puVar1 = (undefined4 *)(param_1 + (ulong)bVar6 * 0x160 + 0x61f10);
    memcpy(__dest,puVar1,0x160);
    uVar5 = *puVar1;
    *(undefined4 *)__dest = uVar5;
  }
  else {
    iVar9 = (uint)bVar6 - iVar7;
    iVar10 = iVar9 + 5;
    if (iVar7 <= (int)(uint)bVar6) {
      iVar10 = iVar9;
    }
    puVar1 = (undefined4 *)(param_1 + (long)iVar10 * 0x160 + 0x61f10);
    memcpy(__dest,puVar1,0x160);
    if (param_3 == '\x01') {
      lVar8 = param_1 + (long)iVar10 * 0x160;
      *(undefined2 *)(param_1 + 0x625fc) = 0x200;
      FUN_00100380(param_1 + 0x625fe,lVar8 + 0x61f1c,*(undefined1 *)(lVar8 + 0x6206c));
      bVar6 = *(char *)(param_1 + 0x6274c) + 1;
      *(byte *)(param_1 + 0x6274c) = bVar6;
      ((undefined2 *)(param_1 + 0x625fc))[bVar6] = 0;
    }
    if (param_2 == 2) {
      iVar7 = 0;
      if (iVar10 < 4) {
        iVar7 = iVar10 + 1;
      }
      *(undefined4 *)__dest = *puVar1;
      pbVar2 = (byte *)(param_1 + (long)iVar7 * 0x160 + 0x6206c);
      if (0x37 < (uint)*pbVar2 + (uint)*(byte *)(param_1 + 0x6274c)) {
        return (byte *)0x0;
      }
      pbVar3 = (byte *)(param_1 + (long)iVar7 * 0x160 + 0x6206d);
      if (0x37 < (uint)*pbVar3 + (uint)*(byte *)(param_1 + 0x6274d)) {
        return (byte *)0x0;
      }
      lVar8 = param_1 + (long)iVar7 * 0x160;
      *(undefined2 *)(param_1 + 0x625f6) = *(undefined2 *)(lVar8 + 0x61f16);
      FUN_00100380(param_1 + 0x625fc + (ulong)*(byte *)(param_1 + 0x6274c) * 2,lVar8 + 0x61f1c);
      bVar6 = *(char *)(param_1 + 0x6274c) + *pbVar2;
      *(byte *)(param_1 + 0x6274c) = bVar6;
      *(undefined2 *)(param_1 + 0x625fc + (ulong)bVar6 * 2) = 0;
      FUN_00100380(param_1 + 0x6266c + (ulong)*(byte *)(param_1 + 0x6274d) * 2,lVar8 + 0x61f8c,
                   *pbVar3);
      bVar6 = *(char *)(param_1 + 0x6274d) + *pbVar3;
      *(byte *)(param_1 + 0x6274d) = bVar6;
      *(undefined2 *)(param_1 + 0x6266c + (ulong)bVar6 * 2) = 0;
      if ((*(byte *)(lVar8 + 0x61f13) & 0x7e) != 0) {
        __dest[0] = 0;
        __dest[1] = 0;
        __dest[2] = 0;
        __dest[3] = 0;
      }
      goto LAB_0012dcfc;
    }
    if (param_2 != 1) {
      iVar9 = 0;
      do {
        iVar4 = 0;
        if (iVar10 < 4) {
          iVar4 = iVar10 + 1;
        }
        pbVar2 = (byte *)(param_1 + (long)iVar4 * 0x160 + 0x6206c);
        if (0x37 < (uint)*pbVar2 + (uint)*(byte *)(param_1 + 0x6274c)) {
          return (byte *)0x0;
        }
        pbVar3 = (byte *)(param_1 + (long)iVar4 * 0x160 + 0x6206d);
        if (0x37 < (uint)*pbVar3 + (uint)*(byte *)(param_1 + 0x6274d)) {
          return (byte *)0x0;
        }
        lVar8 = param_1 + (long)iVar4 * 0x160;
        *(undefined2 *)(param_1 + 0x625f6) = *(undefined2 *)(lVar8 + 0x61f16);
        FUN_00100380(param_1 + 0x625fc + (ulong)*(byte *)(param_1 + 0x6274c) * 2,lVar8 + 0x61f1c);
        bVar6 = *(char *)(param_1 + 0x6274c) + *pbVar2;
        *(byte *)(param_1 + 0x6274c) = bVar6;
        *(undefined2 *)(param_1 + 0x625fc + (ulong)bVar6 * 2) = 0;
        FUN_00100380(param_1 + 0x6266c + (ulong)*(byte *)(param_1 + 0x6274d) * 2,lVar8 + 0x61f8c,
                     *pbVar3);
        bVar6 = *(char *)(param_1 + 0x6274d) + *pbVar3;
        iVar9 = iVar9 + 1;
        *(byte *)(param_1 + 0x6274d) = bVar6;
        *(undefined2 *)(param_1 + 0x6266c + (ulong)bVar6 * 2) = 0;
        iVar10 = iVar4;
      } while (iVar9 < iVar7);
      goto LAB_0012dcfc;
    }
    uVar5 = *puVar1;
    *(undefined4 *)__dest = uVar5;
  }
  *__dest = (byte)uVar5 | 0x40;
LAB_0012dcfc:
  if (0x37 < *(byte *)(param_1 + 0x6274c)) {
    return (byte *)0x0;
  }
  pbVar2 = (byte *)0x0;
  if (*(byte *)(param_1 + 0x6274d) < 0x38) {
    pbVar2 = __dest;
  }
  return pbVar2;
}

