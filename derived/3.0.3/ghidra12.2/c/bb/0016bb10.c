
long FUN_0016bb10(byte *param_1,long param_2,byte *param_3,long param_4,int param_5)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  byte bVar6;
  long lVar7;
  undefined *puVar8;
  long lVar9;
  ulong uVar10;
  undefined1 *puVar11;
  
  puVar8 = PTR_DAT_04bcb6a0;
  if (param_4 != 0) {
    bVar1 = *param_1;
    lVar9 = param_4;
    do {
      bVar2 = *param_3;
      bVar5 = bVar2 >> 4;
      bVar6 = bVar2 >> 4;
      bVar3 = (puVar8 + (ulong)bVar5 * 2 + (ulong)bVar6 + (ulong)bVar1 * 0x30)[1];
      if ((bVar3 >> 2 & 1) != 0) {
        return -0x20b;
      }
      if ((bVar3 >> 1 & 1) != 0) {
        puVar11 = *(undefined1 **)(param_2 + 0x18);
        uVar4 = puVar8[(ulong)bVar5 * 3 + (ulong)bVar1 * 0x30 + 2];
        *(undefined1 **)(param_2 + 0x18) = puVar11 + 1;
        *puVar11 = uVar4;
        bVar2 = *param_3;
      }
      uVar10 = (ulong)(byte)puVar8[(ulong)bVar5 * 2 + (ulong)bVar6 + (ulong)bVar1 * 0x30];
      lVar7 = ((ulong)bVar2 & 0xf) * 3;
      bVar3 = (puVar8 + lVar7 + uVar10 * 0x30)[1];
      if ((bVar3 >> 2 & 1) != 0) {
        return -0x20b;
      }
      if ((bVar3 >> 1 & 1) != 0) {
        puVar11 = *(undefined1 **)(param_2 + 0x18);
        uVar4 = puVar8[lVar7 + uVar10 * 0x30 + 2];
        *(undefined1 **)(param_2 + 0x18) = puVar11 + 1;
        *puVar11 = uVar4;
      }
      bVar1 = puVar8[lVar7 + uVar10 * 0x30];
      lVar9 = lVar9 + -1;
      param_3 = param_3 + 1;
      param_1[1] = bVar3 & 1;
      *param_1 = bVar1;
    } while (lVar9 != 0);
  }
  if ((param_5 != 0) && (param_1[1] == 0)) {
    param_4 = -0x20b;
  }
  return param_4;
}

