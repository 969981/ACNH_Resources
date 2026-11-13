
void FUN_01393e80(long param_1)

{
  int *piVar1;
  undefined *puVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  ushort uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  int iVar12;
  
  puVar6 = PTR_DAT_04bc39f8;
  puVar5 = PTR_DAT_04bb6298;
  uVar3 = *(uint *)(param_1 + 8);
  if (uVar3 != 0) {
    lVar9 = *(long *)(param_1 + 0x10);
    uVar10 = 0;
    do {
      piVar1 = (int *)(lVar9 + ((long)((ulong)uVar10 << 0x20) >> 0x1c));
      iVar4 = *piVar1;
      if (iVar4 != 0) {
        lVar11 = *(long *)(piVar1 + 2);
        iVar12 = 0;
        uVar7 = *(ushort *)puVar5;
        do {
          if (uVar7 == 0xffff) {
            uVar7 = 0xffff;
          }
          else {
            puVar2 = puVar6 + ((long)(short)uVar7 & 0xffffffffU) * 8;
            if ((uVar7 & 0xff00) != 0) {
              puVar2 = puVar6;
            }
            if (((((*(uint *)(puVar2 + 4) & 1) != 0) &&
                 (lVar8 = lVar11 + (long)iVar12 * 0x518,
                 *(long *)(lVar8 + 0x118) != 0 || *(long *)(lVar8 + 0x110) != 0)) &&
                ((*(byte *)(lVar8 + 0x120) & 1) != 0)) &&
               (((*(long *)(lVar8 + 0x170) == 0 && *(long *)(lVar8 + 0x168) == 0 &&
                 (*(int *)(lVar8 + 0x124) - 0x1aU < 3)) && (*(ushort *)(lVar8 + 300) == uVar7)))) {
              FUN_0138e1e0(lVar8 + 0x108);
              uVar7 = *(ushort *)puVar5;
            }
          }
          iVar12 = iVar12 + 1;
        } while (iVar4 != iVar12);
      }
      uVar10 = uVar10 + 1;
    } while (uVar3 != uVar10);
  }
  return;
}

