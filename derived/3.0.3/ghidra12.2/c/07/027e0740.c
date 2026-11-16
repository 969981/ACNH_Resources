
void FUN_027e0740(long param_1,byte *param_2,undefined1 param_3)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  uint uVar7;
  undefined *puVar8;
  int iVar9;
  int iVar10;
  long lVar11;
  undefined8 *puVar12;
  ulong uVar13;
  long lVar14;
  int *piVar15;
  undefined8 uVar16;
  ushort *puVar17;
  int *piVar18;
  
  uVar13 = (ulong)*param_2;
  if (((uVar13 < 0x23) && (param_2[1] <= (byte)PTR_DAT_04bc27f0[uVar13])) &&
     (((uint)(&DAT_053e6eb8)[uVar13] >> (ulong)(param_2[1] & 0x1f) & 1) != 0)) {
    iVar9 = FUN_020fdb40(param_2);
    uVar7 = iVar9 - 1;
    if (uVar7 < 0x1a4) {
      puVar17 = (ushort *)(param_1 + 0x1cb6bc + (ulong)uVar7 * 0xe8);
      puVar17[0] = 0;
      puVar17[1] = 0;
      puVar17[2] = 0;
      puVar17[3] = 0;
      puVar17[0x6c] = 0;
      puVar17[0x6d] = 0;
      puVar17[0x6e] = 0;
      puVar17[0x6f] = 0;
      puVar17[0x70] = 0;
      puVar17[0x71] = 0;
      puVar17[0x72] = 0;
      puVar17[0x73] = 0;
      puVar17[100] = 0;
      puVar17[0x65] = 0;
      puVar17[0x66] = 0;
      puVar17[0x67] = 0;
      puVar17[0x68] = 0;
      puVar17[0x69] = 0;
      puVar17[0x6a] = 0;
      puVar17[0x6b] = 0;
      puVar17[0x5c] = 0;
      puVar17[0x5d] = 0;
      puVar17[0x5e] = 0;
      puVar17[0x5f] = 0;
      puVar17[0x60] = 0;
      puVar17[0x61] = 0;
      puVar17[0x62] = 0;
      puVar17[99] = 0;
      puVar17[0x54] = 0;
      puVar17[0x55] = 0;
      puVar17[0x56] = 0;
      puVar17[0x57] = 0;
      puVar17[0x58] = 0;
      puVar17[0x59] = 0;
      puVar17[0x5a] = 0;
      puVar17[0x5b] = 0;
      puVar17[0x4c] = 0;
      puVar17[0x4d] = 0;
      puVar17[0x4e] = 0;
      puVar17[0x4f] = 0;
      puVar17[0x50] = 0;
      puVar17[0x51] = 0;
      puVar17[0x52] = 0;
      puVar17[0x53] = 0;
      puVar17[0x44] = 0;
      puVar17[0x45] = 0;
      puVar17[0x46] = 0;
      puVar17[0x47] = 0;
      puVar17[0x48] = 0;
      puVar17[0x49] = 0;
      puVar17[0x4a] = 0;
      puVar17[0x4b] = 0;
      puVar17[0x3c] = 0;
      puVar17[0x3d] = 0;
      puVar17[0x3e] = 0;
      puVar17[0x3f] = 0;
      puVar17[0x40] = 0;
      puVar17[0x41] = 0;
      puVar17[0x42] = 0;
      puVar17[0x43] = 0;
      puVar17[0x34] = 0;
      puVar17[0x35] = 0;
      puVar17[0x36] = 0;
      puVar17[0x37] = 0;
      puVar17[0x38] = 0;
      puVar17[0x39] = 0;
      puVar17[0x3a] = 0;
      puVar17[0x3b] = 0;
      puVar17[0x2c] = 0;
      puVar17[0x2d] = 0;
      puVar17[0x2e] = 0;
      puVar17[0x2f] = 0;
      puVar17[0x30] = 0;
      puVar17[0x31] = 0;
      puVar17[0x32] = 0;
      puVar17[0x33] = 0;
      puVar17[0x24] = 0;
      puVar17[0x25] = 0;
      puVar17[0x26] = 0;
      puVar17[0x27] = 0;
      puVar17[0x28] = 0;
      puVar17[0x29] = 0;
      puVar17[0x2a] = 0;
      puVar17[0x2b] = 0;
      puVar17[0x1c] = 0;
      puVar17[0x1d] = 0;
      puVar17[0x1e] = 0;
      puVar17[0x1f] = 0;
      puVar17[0x20] = 0;
      puVar17[0x21] = 0;
      puVar17[0x22] = 0;
      puVar17[0x23] = 0;
      puVar17[0x14] = 0;
      puVar17[0x15] = 0;
      puVar17[0x16] = 0;
      puVar17[0x17] = 0;
      puVar17[0x18] = 0;
      puVar17[0x19] = 0;
      puVar17[0x1a] = 0;
      puVar17[0x1b] = 0;
      puVar17[0xc] = 0;
      puVar17[0xd] = 0;
      puVar17[0xe] = 0;
      puVar17[0xf] = 0;
      puVar17[0x10] = 0;
      puVar17[0x11] = 0;
      puVar17[0x12] = 0;
      puVar17[0x13] = 0;
      puVar17[4] = 0;
      puVar17[5] = 0;
      puVar17[6] = 0;
      puVar17[7] = 0;
      puVar17[8] = 0;
      puVar17[9] = 0;
      puVar17[10] = 0;
      puVar17[0xb] = 0;
      FUN_027c5694(puVar17);
      *(undefined1 *)(puVar17 + 2) = param_3;
      uVar6 = *(ushort *)(DAT_04da6480 + 0x4060);
      bVar4 = *(byte *)(DAT_04da6480 + 0x4062);
      bVar5 = *(byte *)(DAT_04da6480 + 0x4063);
      uVar13 = nn::time::IsValidDate((uint)uVar6,(uint)bVar4,(uint)bVar5);
      if ((uVar13 & 1) != 0) {
        *puVar17 = uVar6;
        *(byte *)(puVar17 + 1) = bVar4;
        *(byte *)((long)puVar17 + 3) = bVar5;
      }
      puVar8 = PTR_DAT_04bb46b0;
      lVar14 = param_1 + 0x1cb6bc + (ulong)uVar7 * 0xe8;
      iVar9 = 0;
      do {
        if ((*(long *)puVar8 != 0) && (lVar11 = FUN_026eec4c(*(long *)puVar8,iVar9), lVar11 != 0)) {
          if ((*(long **)(lVar11 + 0x17bb0) == (long *)0x0) ||
             (puVar12 = (undefined8 *)**(long **)(lVar11 + 0x17bb0), puVar12 == (undefined8 *)0x0))
          {
            uVar13 = 0;
          }
          else {
            uVar13 = (**(code **)*puVar12)();
            uVar13 = uVar13 & 0xffffffff;
          }
          lVar1 = *(long *)(lVar11 + 0x17b98) + *(long *)(lVar11 + 0x17b90);
          piVar18 = (int *)(lVar1 + 0x1c);
          if (((*piVar18 != 0 &&
                *(int *)(*(long *)(lVar11 + 0x17b98) + *(long *)(lVar11 + 0x17b90)) != 0) &&
              (iVar10 = FUN_026b318c(param_2,piVar18), -1 < iVar10)) &&
             ((((piVar15 = (int *)(lVar14 + 8), *(int *)(lVar14 + 8) == 0 ||
                ((((piVar15 = (int *)(lVar14 + 0x24), *(int *)(lVar14 + 0x24) == 0 ||
                   (piVar15 = (int *)(lVar14 + 0x40), *(int *)(lVar14 + 0x40) == 0)) ||
                  (piVar15 = (int *)(lVar14 + 0x5c), *(int *)(lVar14 + 0x5c) == 0)) ||
                 ((piVar15 = (int *)(lVar14 + 0x78), *(int *)(lVar14 + 0x78) == 0 ||
                  (piVar15 = (int *)(lVar14 + 0x94), *(int *)(lVar14 + 0x94) == 0)))))) ||
               (piVar15 = (int *)(lVar14 + 0xb0), *(int *)(lVar14 + 0xb0) == 0)) ||
              (piVar15 = (int *)(lVar14 + 0xcc), *(int *)(lVar14 + 0xcc) == 0)))) {
            uVar2 = *(undefined8 *)piVar18;
            uVar3 = *(undefined8 *)(lVar1 + 0x24);
            uVar16 = *(undefined8 *)(lVar1 + 0x2c);
            piVar15[6] = *(int *)(lVar1 + 0x34);
            *(undefined8 *)piVar15 = uVar2;
            *(undefined8 *)(piVar15 + 2) = uVar3;
            *(undefined8 *)(piVar15 + 4) = uVar16;
          }
          if ((((uVar13 & 1) != 0) && (*(long *)(lVar11 + 0x17bb0) != 0)) &&
             (puVar12 = *(undefined8 **)(*(long *)(lVar11 + 0x17bb0) + 8),
             puVar12 != (undefined8 *)0x0)) {
            (**(code **)*puVar12)();
          }
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != 8);
    }
  }
  return;
}

