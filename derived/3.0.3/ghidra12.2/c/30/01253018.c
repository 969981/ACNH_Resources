
uint FUN_01253018(undefined2 *param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined *puVar5;
  undefined2 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  ushort uVar12;
  long lVar13;
  uint *puVar14;
  uint *puVar15;
  uint uVar16;
  undefined *local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined2 local_60;
  undefined2 local_5e;
  uint local_5c;
  
  local_78 = PTR_DAT_04bb2020 + 0x10;
  local_70 = "MushroomProbability";
  iVar9 = FUN_0273ea30(&local_78);
  piVar2 = (int *)&UNK_04174b10;
  if (iVar9 != 1) {
    piVar2 = &DAT_04174afc;
  }
  piVar3 = &DAT_04174b24;
  if (iVar9 != 2) {
    piVar3 = piVar2;
  }
  uVar11 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
  DAT_0514cb58 = DAT_0514cb5c;
  DAT_0514cb5c = DAT_0514cb60;
  uVar11 = uVar11 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar11 ^ DAT_0514cb64;
  DAT_0514cb60 = DAT_0514cb64;
  iVar9 = (int)((ulong)uVar11 * 100 >> 0x20);
  DAT_0514cb64 = uVar11;
  if (iVar9 < *piVar3) {
    uVar11 = 0;
    lVar13 = 0;
  }
  else {
    iVar1 = piVar3[1] + *piVar3;
    if (iVar9 < iVar1) {
      uVar11 = 0;
      lVar13 = 1;
    }
    else {
      iVar1 = piVar3[2] + iVar1;
      if (iVar9 < iVar1) {
        uVar11 = 0;
        lVar13 = 2;
      }
      else {
        iVar1 = piVar3[3] + iVar1;
        if (iVar9 < iVar1) {
          uVar11 = 0;
          lVar13 = 3;
        }
        else {
          if (piVar3[4] + iVar1 <= iVar9) {
            uVar11 = FUN_01253018(param_1);
            goto LAB_012532f0;
          }
          uVar11 = 1;
          lVar13 = 4;
        }
      }
    }
  }
  local_5e = 0;
  local_5c = 0;
  local_60 = (undefined2)(&DAT_04174ae8)[lVar13];
  FUN_0277d4ac(&local_60);
  uVar16 = local_5c;
  uVar6 = local_60;
  puVar5 = PTR_DAT_04bb43c0;
  local_68 = 0;
  uVar7 = (undefined1)local_5e;
  local_78 = PTR_DAT_04bc0510 + 0x10;
  uVar8 = local_5e._1_1_;
  local_70 = (char *)CONCAT44(local_5c,CONCAT13(local_5e._1_1_,
                                                CONCAT12((undefined1)local_5e,local_60)));
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(&local_70);
  if (*(long *)puVar5 == 0) {
LAB_012532b0:
    uVar12 = 0xbc;
  }
  else {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar10) ||
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar10 * 8) == 0)) goto LAB_012532b0;
    lVar13 = *(long *)PTR_DAT_04bc0428;
    uVar10 = FUN_0277d6c4(&local_60);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((*(uint *)(lVar13 + 0x1d8) <= uVar10) ||
       (puVar14 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar10 * 8),
       puVar14 == (uint *)0x0)) goto LAB_012532b0;
    uVar12 = 0;
    uVar10 = *puVar14;
    if ((uVar10 != 0) && (puVar14 != (uint *)(ulong)uVar10)) {
      puVar15 = (uint *)((long)puVar14 - (long)(ulong)uVar10);
      uVar12 = 0;
      if (*puVar15 != 0) {
        uVar10 = puVar15[1];
        if ((uVar10 != 0) && ((ulong)(ushort)puVar15[2] != 0)) {
          lVar13 = 0xc;
          if (*(char *)((long)puVar15 + 10) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar15 + lVar13 + (ulong)(ushort)puVar15[2] * 8;
          if (lVar13 != 0) {
            uVar4 = 0;
            if ((ulong)uVar10 != 0) {
              uVar4 = (uint)((ulong)((long)puVar14 - lVar13) / (ulong)uVar10);
            }
            if (*puVar15 <= uVar4) {
              uVar4 = 0xffffffff;
            }
            if ((uVar4 < DAT_05326ec0) &&
               (uVar12 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar4 * 2), uVar12 < 0xbd))
            goto LAB_012532bc;
          }
        }
        uVar12 = 0;
      }
    }
  }
LAB_012532bc:
  if (uVar12 == 0x58) {
    local_70._4_4_ =
         (uint)(CONCAT26((short)(uVar16 >> 0x10),(undefined6)local_70) >> 0x20) | 0x10000;
    uVar16 = local_70._4_4_;
  }
  *param_1 = uVar6;
  *(undefined1 *)(param_1 + 1) = uVar7;
  *(undefined1 *)((long)param_1 + 3) = uVar8;
  *(uint *)(param_1 + 2) = uVar16;
LAB_012532f0:
  return uVar11 & 1;
}

