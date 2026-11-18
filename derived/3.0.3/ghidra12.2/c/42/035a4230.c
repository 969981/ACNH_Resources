
void FUN_035a4230(ushort *param_1)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  byte bVar9;
  undefined2 *puVar10;
  byte bVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  if (*(long *)(param_1 + 0xc) != 0) {
    uVar3 = *param_1;
    uVar12 = 0;
    uVar4 = param_1[1];
    iVar1 = *(int *)(param_1 + 6) + (uint)uVar3;
    uVar14 = (uint)uVar4;
    iVar2 = uVar14 + *(int *)(param_1 + 8);
    uVar7 = (uint)uVar3;
    do {
      iVar5 = uVar7 - *param_1;
      uVar13 = (uint)uVar3;
      if ((((-1 < iVar5) && (iVar5 < *(int *)(param_1 + 6))) &&
          (iVar6 = uVar14 - param_1[1], -1 < iVar6)) &&
         ((iVar6 < *(int *)(param_1 + 8) && (*(long *)(param_1 + 0x10) != 0)))) {
        puVar10 = (undefined2 *)
                  (*(long *)(param_1 + 0x10) + (long)(iVar5 + *(int *)(param_1 + 6) * iVar6) * 0x28)
        ;
        *puVar10 = (short)uVar7;
        puVar10[1] = (short)uVar14;
        *(undefined1 *)(puVar10 + 3) = 0;
        *(undefined8 *)(puVar10 + 4) = 0;
        *(undefined8 *)(puVar10 + 8) = 0;
        *(undefined8 *)(puVar10 + 0xc) = 0;
        *(undefined1 *)(puVar10 + 0x10) = 0;
        bVar9 = 0x6e;
        pbVar8 = (byte *)(puVar10 + 2);
        pbVar8[0] = 0xff;
        pbVar8[1] = 0;
        if ((uVar7 == uVar13) || (bVar9 = 0x9d, uVar7 == iVar1 - 1U)) {
          *pbVar8 = bVar9;
        }
        else {
          bVar9 = 0xff;
        }
        bVar11 = 0xab;
        if ((uVar14 == uVar4) || (bVar11 = 0x57, uVar14 == iVar2 - 1U)) {
          *pbVar8 = bVar11 & bVar9;
        }
      }
      uVar12 = uVar12 + 1;
      if (uVar7 + 1 == iVar1) {
        uVar14 = uVar14 + 1;
      }
      else {
        uVar13 = uVar7 + 1;
      }
      uVar7 = uVar13;
    } while (uVar12 < *(ulong *)(param_1 + 0xc));
  }
  return;
}

