
void FUN_012fa9b0(long param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  short sVar10;
  uint uVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  
  if (param_2 != 0) {
    *(undefined4 *)(param_2 + 8) = 0;
    sVar7 = *(short *)(param_1 + 0xd4);
    sVar8 = *(short *)(param_1 + 0xd8);
    sVar9 = *(short *)(param_1 + 0xd6);
    sVar10 = *(short *)(param_1 + 0xda);
    iVar15 = *(int *)(param_1 + 0x68);
    iVar3 = *(int *)(param_1 + 0x6c);
    iVar4 = *(int *)(param_1 + 0x80);
    *(int *)(param_2 + 0x18) = iVar4;
    puVar12 = PTR_DAT_04bbc2f8;
    if (sVar8 <= sVar7) {
      sVar7 = sVar8;
    }
    if (sVar10 <= sVar9) {
      sVar9 = sVar10;
    }
    uVar16 = iVar15 - sVar7;
    uVar11 = iVar3 - sVar9;
    iVar3 = *(int *)(param_1 + 0x84);
    *(int *)(param_2 + 0x1c) = iVar3;
    iVar15 = *(int *)(param_1 + 0x84);
    puVar2 = (undefined *)(param_1 + 0xdc + (ulong)(uVar11 * 3 + uVar16) * 0xe);
    if (2 < uVar11 || 2 < uVar16) {
      puVar2 = puVar12;
    }
    bVar6 = puVar2[0xc];
    iVar1 = *(int *)(param_1 + 0x94) + 1;
    if (iVar1 != iVar15) {
      iVar5 = *(int *)(param_1 + 0x80);
      uVar16 = 0;
      iVar14 = iVar5;
      iVar13 = iVar5;
      do {
        if (iVar13 != *(int *)(param_1 + 0x68) || iVar15 != *(int *)(param_1 + 0x6c)) {
          sVar8 = *(short *)(param_1 + 0xd4);
          if (*(short *)(param_1 + 0xd8) <= *(short *)(param_1 + 0xd4)) {
            sVar8 = *(short *)(param_1 + 0xd8);
          }
          sVar10 = *(short *)(param_1 + 0xd6);
          if (*(short *)(param_1 + 0xda) <= *(short *)(param_1 + 0xd6)) {
            sVar10 = *(short *)(param_1 + 0xda);
          }
          puVar2 = (undefined *)
                   (param_1 + 0xdc + (ulong)(uint)((iVar15 - sVar10) * 3 + (iVar13 - sVar8)) * 0xe);
          if (2 < (uint)(iVar15 - sVar10) || 2 < (uint)(iVar13 - sVar8)) {
            puVar2 = puVar12;
          }
          if (((((puVar2[0xc] != 4) && (bVar6 <= (byte)puVar2[0xc])) && (iVar4 <= iVar13)) &&
              ((iVar13 <= iVar4 + 3 && (iVar3 <= iVar15)))) &&
             ((iVar15 <= iVar3 + 3 && (((uint)(iVar13 - iVar4) < 3 && ((uint)(iVar15 - iVar3) < 3)))
              ))) {
            uVar16 = uVar16 | 1 << (ulong)((iVar15 - iVar3) * 3 + (iVar13 - iVar4) & 0x1f);
            *(uint *)(param_2 + 8) = uVar16;
            iVar14 = *(int *)(param_1 + 0x80);
          }
        }
        if (iVar13 < *(int *)(param_1 + 0x90)) {
          iVar13 = iVar13 + 1;
        }
        else {
          iVar15 = iVar15 + 1;
          iVar13 = iVar14;
        }
      } while (iVar5 != iVar13 || iVar1 != iVar15);
    }
  }
  return;
}

