
void FUN_01e32928(long param_1,long param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  byte bVar5;
  int iVar6;
  int iVar7;
  undefined *puVar8;
  bool bVar9;
  ushort uVar10;
  int iVar11;
  undefined4 *puVar12;
  uint uVar13;
  long lVar14;
  int iVar15;
  undefined8 uVar16;
  long lVar17;
  int *piVar18;
  undefined1 local_58;
  byte bStack_57;
  char cStack_56;
  undefined1 uStack_55;
  byte bStack_54;
  undefined1 uStack_53;
  undefined1 uStack_52;
  undefined1 uStack_51;
  undefined6 uStack_50;
  undefined2 local_4a;
  undefined2 local_28 [2];
  undefined4 local_24;
  
  FUN_01e37ad0(param_2);
  puVar8 = PTR_DAT_04bb27d0;
  lVar17 = param_1 + 0x78;
  bVar2 = *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476);
  uVar13 = *(uint *)(param_2 + 0xc);
  if (bVar2 < 2) {
    uVar10 = *(ushort *)(param_1 + 0x74) >> (ulong)(uVar13 & 0x1f) & 1;
  }
  else {
    lVar14 = lVar17 + (ulong)uVar13 * 0x28;
    if (9 < uVar13) {
      lVar14 = lVar17;
    }
    uVar10 = (ushort)((*(byte *)(lVar14 + 0xc) & 0x20) == 0);
  }
  FUN_01e37c08(param_2,uVar10);
  lVar14 = **(long **)puVar8;
  bVar3 = *(byte *)(lVar14 + 0x473);
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    pbVar1 = (byte *)(lVar14 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x80;
    if (7 < bVar3) {
      pbVar1 = (byte *)(lVar14 + 0x48);
    }
    if ((*pbVar1 >> 3 & 1) != 0) {
      bVar9 = *(byte *)(lVar14 + 0x472) == bVar3;
      goto LAB_01e329ec;
    }
  }
  bVar9 = true;
LAB_01e329ec:
  if (1 < bVar2 && bVar9) {
    iVar11 = *(int *)(param_2 + 0x48);
    if (iVar11 < 1) {
      piVar18 = &DAT_0538ea6c;
    }
    else {
      iVar6 = iVar11 + *(int *)(param_2 + 0x44) + -1;
      iVar15 = 0;
      if (*(int *)(param_2 + 0x40) <= iVar6) {
        iVar15 = *(int *)(param_2 + 0x40);
      }
      piVar18 = (int *)(*(long *)(param_2 + 0x38) + (long)(iVar6 - iVar15) * 0x14 + 8);
    }
    uVar13 = *(uint *)(param_2 + 0xc);
    if (*piVar18 == 0) {
      local_28[0] = (short)uVar13;
      local_24 = 0;
      local_58 = 0;
      bStack_57 = 0;
      cStack_56 = 0;
      uStack_55 = 0;
      uStack_52 = 0;
      bStack_54 = 0;
      uStack_53 = 0xff;
      if (-1 < DAT_053d0f50) {
        FUN_01db1df0(**(long **)puVar8 + 0x480,DAT_053d0f50,&local_58,local_28,8,0);
        uVar13 = *(uint *)(param_2 + 0xc);
        iVar11 = *(int *)(param_2 + 0x48);
      }
    }
    lVar14 = lVar17 + (ulong)uVar13 * 0x28;
    if (9 < uVar13) {
      lVar14 = lVar17;
    }
    uVar16 = *(undefined8 *)(lVar14 + 8);
    bStack_57 = (byte)((ulong)uVar16 >> 8);
    cStack_56 = (char)((ulong)uVar16 >> 0x10);
    bStack_54 = (byte)((ulong)uVar16 >> 0x20);
    uStack_53 = (undefined1)((ulong)uVar16 >> 0x28);
    if (iVar11 < 1) {
      iVar15 = 0;
    }
    else {
      iVar15 = 0;
      iVar7 = iVar11 + *(int *)(param_2 + 0x44) + -1;
      iVar6 = 0;
      if (*(int *)(param_2 + 0x40) <= iVar7) {
        iVar6 = *(int *)(param_2 + 0x40);
      }
      piVar18 = (int *)(*(long *)(param_2 + 0x38) + (long)(iVar7 - iVar6) * 0x14);
      if ((char)piVar18[4] == '\0') {
        iVar15 = *piVar18;
      }
    }
    bVar2 = bStack_57 & 3 | (byte)(iVar15 << 2);
    if (iVar11 < 1) {
      puVar12 = &DAT_0538ea6c;
    }
    else {
      iVar15 = iVar11 + *(int *)(param_2 + 0x44) + -1;
      iVar11 = 0;
      if (*(int *)(param_2 + 0x40) <= iVar15) {
        iVar11 = *(int *)(param_2 + 0x40);
      }
      puVar12 = (undefined4 *)(*(long *)(param_2 + 0x38) + (long)(iVar15 - iVar11) * 0x14 + 8);
    }
    uVar16 = *(undefined8 *)(param_2 + 0x24);
    uStack_52 = (undefined1)uVar16;
    uStack_51 = (undefined1)((ulong)uVar16 >> 8);
    uStack_50 = (undefined6)((ulong)uVar16 >> 0x10);
    lVar17 = *(long *)(param_2 + 0x2c);
    uVar4 = (undefined1)*(undefined4 *)(param_2 + 0x20);
    local_4a = (undefined2)lVar17;
    bVar3 = (byte)*puVar12 & 3 | (byte)((*(uint *)(param_2 + 0x1dc) & 3) << 2) |
            (*(byte *)(param_2 + 0x1e0) & 1) << 4 | (char)(*(ushort *)(lVar14 + 0xb) >> 6) << 6;
    bVar5 = bStack_54 & 0xc0 | (byte)(*(ushort *)(lVar14 + 0xb) >> 8) & 0x3f;
    if ((*(long *)(lVar14 + 8) !=
         CONCAT17(uStack_51,
                  CONCAT16(uStack_52,
                           CONCAT15(uStack_53,
                                    CONCAT14(bVar5,CONCAT13(bVar3,CONCAT12(cStack_56 + '\x01',
                                                                           CONCAT11(bVar2,uVar4)))))
                          )) || *(long *)(lVar14 + 0x10) != CONCAT26(local_4a,uStack_50)) ||
        *(long *)(lVar14 + 0x16) != lVar17) {
      *(undefined8 *)(lVar14 + 8) =
           CONCAT17(uStack_51,
                    CONCAT16(uStack_52,
                             CONCAT15(uStack_53,
                                      CONCAT14(bVar5,CONCAT13(bVar3,CONCAT12(cStack_56 + '\x01',
                                                                             CONCAT11(bVar2,uVar4)))
                                              ))));
      *(ulong *)(lVar14 + 0x10) = CONCAT26(local_4a,uStack_50);
      *(long *)(lVar14 + 0x16) = lVar17;
      *(undefined1 *)(lVar14 + 0x1e) = 1;
    }
  }
  return;
}

