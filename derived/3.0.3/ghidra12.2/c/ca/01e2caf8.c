
/* WARNING: Removing unreachable block (ram,0x01e2ccb0) */
/* WARNING: Removing unreachable block (ram,0x01e2ccb4) */

void FUN_01e2caf8(long param_1,long param_2,byte param_3,int *param_4,ulong param_5,uint param_6)

{
  uint *puVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  undefined1 uVar6;
  byte bVar7;
  int iVar8;
  int iVar9;
  undefined8 *puVar10;
  bool bVar11;
  ulong uVar12;
  int iVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  uint uVar16;
  long lVar17;
  int iVar18;
  undefined8 uVar19;
  long lVar20;
  int *piVar21;
  undefined1 local_68;
  byte bStack_67;
  char cStack_66;
  undefined1 uStack_65;
  byte bStack_64;
  undefined1 uStack_63;
  undefined1 uStack_62;
  undefined1 uStack_61;
  undefined6 uStack_60;
  undefined2 local_5a;
  undefined4 local_4c;
  undefined4 local_48;
  int local_44;
  
  if (*(int *)(param_2 + 0x48) < 1) {
    piVar21 = &DAT_0538ea6c;
  }
  else {
    iVar18 = *(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x44) + -1;
    iVar13 = 0;
    if (*(int *)(param_2 + 0x40) <= iVar18) {
      iVar13 = *(int *)(param_2 + 0x40);
    }
    piVar21 = (int *)(*(long *)(param_2 + 0x38) + (long)(iVar18 - iVar13) * 0x14 + 8);
  }
  iVar13 = *piVar21;
  local_44 = *param_4;
  if (local_44 == 2) {
    if ((DAT_05292338 != 0) && (DAT_04c487d4 != -1)) {
      local_68 = 7;
      bStack_67 = 0;
      cStack_66 = 0;
      uStack_65 = 0;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar1 >> 7 & 1) != 0) &&
         ((*(ushort *)(param_1 + 0x74) >> (ulong)(*(uint *)(param_2 + 0xc) & 0x1f) & 1) != 0)) {
        local_44 = 1;
        goto LAB_01e2cbe8;
      }
    }
    local_44 = 2;
    FUN_01e2b514(param_1,param_2,param_3 & 1,0,param_6 & 1);
  }
  else {
LAB_01e2cbe8:
    FUN_01e37980(param_2,&local_44,param_3 & 1,0,param_6 & 1);
  }
  uVar12 = FUN_01e2d0a0(param_1,param_2,&local_44,0,param_6 & 1);
  if (((uVar12 & 1) == 0) && ((param_5 & 1) != 0)) {
    if ((param_6 & 1) == 0) {
      local_4c = 1;
      if (*(int *)(param_2 + 0x48) != 0) {
        if (*(long *)(param_2 + 0x38) != 0) {
          iVar8 = *(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x44) + -1;
          iVar18 = 0;
          if (*(int *)(param_2 + 0x40) <= iVar8) {
            iVar18 = *(int *)(param_2 + 0x40);
          }
          *(undefined4 *)(*(long *)(param_2 + 0x38) + (long)(iVar8 - iVar18) * 0x14 + 8) = 1;
        }
        if ((param_3 & 1) != 0) {
          local_68 = 1;
          uStack_65 = 0;
          cStack_66 = 0;
          bStack_67 = 0;
          FUN_021dafb0(param_2 + 0xc,&local_68,0,0,0,1);
        }
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x120) = 1;
      *(byte *)(param_2 + 300) = param_3 & 1;
    }
    local_68 = 1;
    bStack_67 = 0;
    cStack_66 = 0;
    uStack_65 = 0;
    FUN_01e2d0a0(param_1,param_2,&local_68,0,param_6 & 1);
  }
  uVar3 = *(uint *)(param_2 + 0xc);
  uVar16 = 1 << (ulong)(uVar3 & 0x1f) & 0xffff;
  puVar10 = (undefined8 *)PTR_DAT_04bb27d0;
  if ((uVar16 & *(ushort *)(param_1 + 0x74)) == 0) {
    if (iVar13 == 0) {
      if (*(int *)(param_2 + 0x48) < 1) {
        uVar15 = 0;
        if (DAT_0538ea6c != 0) goto LAB_01e2cdd4;
      }
      else {
        iVar18 = *(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x44) + -1;
        iVar13 = 0;
        if (*(int *)(param_2 + 0x40) <= iVar18) {
          iVar13 = *(int *)(param_2 + 0x40);
        }
        if (*(int *)(*(long *)(param_2 + 0x38) + (long)(iVar18 - iVar13) * 0x14 + 8) != 0)
        goto LAB_01e2cdd4;
        uVar15 = 0;
      }
    }
    else {
      if (iVar13 == 1) {
        iVar13 = DAT_0538ea6c;
        if (0 < *(int *)(param_2 + 0x48)) {
          iVar18 = *(int *)(param_2 + 0x48) + *(int *)(param_2 + 0x44) + -1;
          iVar13 = 0;
          if (*(int *)(param_2 + 0x40) <= iVar18) {
            iVar13 = *(int *)(param_2 + 0x40);
          }
          iVar13 = *(int *)(*(long *)(param_2 + 0x38) + (long)(iVar18 - iVar13) * 0x14 + 8);
        }
        if (iVar13 == 0) {
          uVar15 = 1;
          goto LAB_01e2cdd8;
        }
      }
LAB_01e2cdd4:
      uVar15 = 2;
    }
LAB_01e2cdd8:
    *(undefined4 *)(param_2 + 0x148) = uVar15;
    puVar10 = (undefined8 *)PTR_DAT_04bb27d0;
  }
  if ((param_6 & 1) != 0) {
    PTR_DAT_04bb27d0 = (undefined *)puVar10;
    return;
  }
  lVar20 = param_1 + 0x78;
  bVar4 = *(byte *)(*(long *)*puVar10 + 0x476);
  if (bVar4 < 2) {
    bVar11 = (*(ushort *)(param_1 + 0x74) & uVar16) != 0;
  }
  else {
    lVar17 = lVar20 + (ulong)uVar3 * 0x28;
    if (9 < uVar3) {
      lVar17 = lVar20;
    }
    bVar11 = (*(byte *)(lVar17 + 0xc) & 0x20) == 0;
  }
  PTR_DAT_04bb27d0 = (undefined *)puVar10;
  FUN_01e37c08(param_2,bVar11);
  lVar17 = *(long *)*puVar10;
  bVar5 = *(byte *)(lVar17 + 0x473);
  if ((long)(char)bVar5 != 0xffffffffffffffff) {
    pbVar2 = (byte *)(lVar17 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x80;
    if (7 < bVar5) {
      pbVar2 = (byte *)(lVar17 + 0x48);
    }
    if ((*pbVar2 >> 3 & 1) != 0) {
      bVar11 = *(byte *)(lVar17 + 0x472) == bVar5;
      goto joined_r0x01e2ce6c;
    }
  }
  bVar11 = true;
joined_r0x01e2ce6c:
  if ((1 < bVar4) && (bVar11)) {
    iVar13 = *(int *)(param_2 + 0x48);
    if (iVar13 < 1) {
      piVar21 = &DAT_0538ea6c;
    }
    else {
      iVar8 = iVar13 + *(int *)(param_2 + 0x44) + -1;
      iVar18 = 0;
      if (*(int *)(param_2 + 0x40) <= iVar8) {
        iVar18 = *(int *)(param_2 + 0x40);
      }
      piVar21 = (int *)(*(long *)(param_2 + 0x38) + (long)(iVar8 - iVar18) * 0x14 + 8);
    }
    uVar16 = *(uint *)(param_2 + 0xc);
    if (*piVar21 == 0) {
      local_4c = CONCAT22(local_4c._2_2_,(short)uVar16);
      local_48 = 0;
      local_68 = 0;
      bStack_67 = 0;
      cStack_66 = 0;
      uStack_65 = 0;
      uStack_62 = 0;
      bStack_64 = 0;
      uStack_63 = 0xff;
      if (-1 < DAT_053d0f50) {
        FUN_01db1df0(*(long *)*puVar10 + 0x480,DAT_053d0f50,&local_68,&local_4c,8,0);
        uVar16 = *(uint *)(param_2 + 0xc);
        iVar13 = *(int *)(param_2 + 0x48);
      }
    }
    lVar17 = lVar20 + (ulong)uVar16 * 0x28;
    if (9 < uVar16) {
      lVar17 = lVar20;
    }
    uVar19 = *(undefined8 *)(lVar17 + 8);
    bStack_67 = (byte)((ulong)uVar19 >> 8);
    cStack_66 = (char)((ulong)uVar19 >> 0x10);
    bStack_64 = (byte)((ulong)uVar19 >> 0x20);
    uStack_63 = (undefined1)((ulong)uVar19 >> 0x28);
    if (iVar13 < 1) {
      iVar18 = 0;
    }
    else {
      iVar18 = 0;
      iVar9 = iVar13 + *(int *)(param_2 + 0x44) + -1;
      iVar8 = 0;
      if (*(int *)(param_2 + 0x40) <= iVar9) {
        iVar8 = *(int *)(param_2 + 0x40);
      }
      piVar21 = (int *)(*(long *)(param_2 + 0x38) + (long)(iVar9 - iVar8) * 0x14);
      if ((char)piVar21[4] == '\0') {
        iVar18 = *piVar21;
      }
    }
    bVar4 = bStack_67 & 3 | (byte)(iVar18 << 2);
    if (iVar13 < 1) {
      puVar14 = &DAT_0538ea6c;
    }
    else {
      iVar18 = iVar13 + *(int *)(param_2 + 0x44) + -1;
      iVar13 = 0;
      if (*(int *)(param_2 + 0x40) <= iVar18) {
        iVar13 = *(int *)(param_2 + 0x40);
      }
      puVar14 = (undefined4 *)(*(long *)(param_2 + 0x38) + (long)(iVar18 - iVar13) * 0x14 + 8);
    }
    uVar19 = *(undefined8 *)(param_2 + 0x24);
    uStack_62 = (undefined1)uVar19;
    uStack_61 = (undefined1)((ulong)uVar19 >> 8);
    uStack_60 = (undefined6)((ulong)uVar19 >> 0x10);
    lVar20 = *(long *)(param_2 + 0x2c);
    uVar6 = (undefined1)*(undefined4 *)(param_2 + 0x20);
    local_5a = (undefined2)lVar20;
    bVar5 = (byte)*puVar14 & 3 | (byte)((*(uint *)(param_2 + 0x1dc) & 3) << 2) |
            (*(byte *)(param_2 + 0x1e0) & 1) << 4 | (char)(*(ushort *)(lVar17 + 0xb) >> 6) << 6;
    bVar7 = bStack_64 & 0xc0 | (byte)(*(ushort *)(lVar17 + 0xb) >> 8) & 0x3f;
    if ((*(long *)(lVar17 + 8) !=
         CONCAT17(uStack_61,
                  CONCAT16(uStack_62,
                           CONCAT15(uStack_63,
                                    CONCAT14(bVar7,CONCAT13(bVar5,CONCAT12(cStack_66 + '\x01',
                                                                           CONCAT11(bVar4,uVar6)))))
                          )) || *(long *)(lVar17 + 0x10) != CONCAT26(local_5a,uStack_60)) ||
        *(long *)(lVar17 + 0x16) != lVar20) {
      *(undefined8 *)(lVar17 + 8) =
           CONCAT17(uStack_61,
                    CONCAT16(uStack_62,
                             CONCAT15(uStack_63,
                                      CONCAT14(bVar7,CONCAT13(bVar5,CONCAT12(cStack_66 + '\x01',
                                                                             CONCAT11(bVar4,uVar6)))
                                              ))));
      *(ulong *)(lVar17 + 0x10) = CONCAT26(local_5a,uStack_60);
      *(long *)(lVar17 + 0x16) = lVar20;
      *(undefined1 *)(lVar17 + 0x1e) = 1;
    }
  }
  return;
}

