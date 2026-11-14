
void FUN_01b086f4(undefined2 *param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = *(uint **)(param_2 + 0x10);
  if (puVar5 == (uint *)0x0) {
    uVar4 = 0xbc;
  }
  else {
    uVar3 = *puVar5;
    if (uVar3 != 0 && puVar5 != (uint *)(ulong)uVar3) {
      puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      if (((*puVar6 != 0) && (uVar3 = puVar6[1], uVar3 != 0)) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ec0) &&
             (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar4 < 0xbd))
          goto LAB_01b08798;
        }
      }
    }
    uVar4 = 0;
  }
LAB_01b08798:
  if (uVar4 == 0xac) {
    *param_1 = (short)*(undefined4 *)(param_2 + 0xc);
    return;
  }
  FUN_007ef010(param_1,PTR_DAT_04bb3170);
  return;
}

