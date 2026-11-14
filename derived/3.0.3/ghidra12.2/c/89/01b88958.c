
void FUN_01b88958(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
  uint *puVar6;
  
  lVar3 = *(long *)PTR_DAT_04bb4788;
  uVar2 = (param_2 & 0xffff) - (uint)*(ushort *)(lVar3 + 0x1f8);
  if (((((uVar2 < *(uint *)(lVar3 + 0x1d8)) &&
        (lVar5 = *(long *)(*(long *)(lVar3 + 0x1e0) + (long)(int)uVar2 * 8), lVar5 != 0)) &&
       (*(long *)(lVar3 + 0xb0) != 0)) &&
      ((puVar6 = *(uint **)(*(long *)(lVar3 + 0xb0) + 8), puVar6 != (uint *)0x0 && (*puVar6 != 0))))
     && ((uVar2 = puVar6[1], uVar2 != 0 && ((ulong)(ushort)puVar6[2] != 0)))) {
    lVar1 = 0xc;
    if (*(char *)((long)puVar6 + 10) != '\0') {
      lVar1 = 0x1c;
    }
    lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
    if (lVar1 != 0) {
      uVar4 = 0;
      if ((ulong)uVar2 != 0) {
        uVar4 = (uint)((ulong)(lVar5 - lVar1) / (ulong)uVar2);
      }
      if (*puVar6 <= uVar4) {
        uVar4 = 0xffffffff;
      }
      if ((0 < *(int *)(lVar3 + 0x1c0)) && (uVar4 < *(uint *)(lVar3 + 0x1c8))) {
        uVar4 = (uint)*(short *)(*(long *)(lVar3 + 0x1d0) + (long)(int)uVar4 * 2);
      }
      if (uVar4 < 0x80) {
        *(byte *)(param_1 + (ulong)(uVar4 >> 3)) =
             *(byte *)(param_1 + (ulong)(uVar4 >> 3)) | (byte)(1 << (ulong)(uVar4 & 7));
      }
    }
  }
  return;
}

