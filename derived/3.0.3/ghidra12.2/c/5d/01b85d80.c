
/* WARNING: Removing unreachable block (ram,0x01b85fc8) */
/* WARNING: Removing unreachable block (ram,0x01b85f6c) */
/* WARNING: Removing unreachable block (ram,0x01b86088) */
/* WARNING: Removing unreachable block (ram,0x01b86028) */

bool FUN_01b85d80(long param_1,undefined8 *param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  ushort uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  char cVar12;
  ushort *puVar13;
  undefined8 uVar14;
  ushort uVar15;
  long lVar16;
  uint uVar17;
  uint uVar18;
  byte bVar19;
  uint uVar20;
  ulong uVar21;
  uint *puVar22;
  int *piVar23;
  uint *puVar24;
  ushort uVar25;
  undefined8 local_40;
  undefined1 local_38 [7];
  undefined1 uStack_31;
  long local_18;
  
  lVar16 = *(long *)PTR_DAT_04bb4788;
  uVar17 = (uint)*(ushort *)(param_1 + 8) - (uint)*(ushort *)(lVar16 + 0x1f8);
  if ((uVar17 < *(uint *)(lVar16 + 0x1d8)) &&
     (puVar24 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar17 * 8),
     puVar24 != (uint *)0x0)) {
    local_40 = *param_2;
    if ((char)(local_40 >> 0x20) < '\x05') {
      local_18 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
      local_18 = local_18 + -0x15180;
      local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
    }
    puVar8 = PTR_DAT_04bc06e8;
    puVar7 = PTR_DAT_04bc06e0;
    uVar21 = local_40 >> 0x30;
    uVar6 = (undefined1)(local_40 >> 0x38);
    iVar9 = (int)local_40;
    local_40._0_6_ = CONCAT24(5,(int)local_40);
    local_40 = CONCAT26((short)uVar21,(undefined6)local_40) & 0xff00ffffffffffff;
    if (*puVar24 == 0) {
LAB_01b85f00:
      bVar19 = 0;
    }
    else {
      cVar12 = *PTR_DAT_04bc06e0;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar17 = *(uint *)(puVar8 + 0x4c);
          if (-1 < (int)uVar17) {
            if (((byte *)((ulong)uVar17 + (long)puVar24) == (byte *)0x0) ||
               (bVar19 = *(byte *)((ulong)uVar17 + (long)puVar24), 7 < bVar19)) goto LAB_01b85f00;
            goto LAB_01b85f04;
          }
          if (uVar17 != 0xffffffff) goto LAB_01b85f00;
        }
        puVar22 = (uint *)(ulong)*puVar24;
        bVar19 = 0;
        if ((*puVar24 == 0) || (puVar24 == puVar22)) goto LAB_01b85f04;
        lVar16 = 0xc;
        if (*(char *)((long)puVar24 + (10 - (long)puVar22)) != '\0') {
          lVar16 = 0x1c;
        }
        lVar16 = (long)puVar24 + (lVar16 - (long)puVar22);
        if (lVar16 == 0) goto LAB_01b85f00;
        uVar21 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar22));
        *(undefined4 *)(puVar8 + 0x4c) = 0xfffffffe;
        bVar19 = 0;
        if (uVar21 == 0) goto LAB_01b85f04;
        piVar23 = (int *)(lVar16 + 4);
        while (piVar23[-1] != -0x558c7013) {
          piVar23 = piVar23 + 2;
          uVar21 = uVar21 - 1;
          if (uVar21 == 0) {
            bVar19 = 0;
            goto LAB_01b85f04;
          }
        }
        iVar1 = 0;
        if (*piVar23 != -1) {
          iVar1 = *piVar23;
        }
        *(int *)(puVar8 + 0x4c) = iVar1;
      } while (*puVar24 != 0);
      bVar19 = 0;
    }
LAB_01b85f04:
    puVar8 = PTR_DAT_04bc06e8;
    puVar7 = PTR_DAT_04bc06e0;
    lVar16 = *(long *)PTR_DAT_04bb30a0;
    switch(bVar19) {
    case 0:
      bVar10 = true;
      break;
    case 1:
      local_38._0_6_ = CONCAT24(5,iVar9);
      local_38 = (undefined1  [7])CONCAT16(0,local_38._0_6_);
      _local_38 = CONCAT17(uVar6,local_38);
      cVar12 = FUN_00a8ae20(lVar16,local_40 >> 0x10,local_40 >> 0x18,5);
      bVar10 = cVar12 == '\0';
      break;
    case 2:
      local_38._0_6_ = CONCAT24(5,iVar9);
      local_38 = (undefined1  [7])CONCAT16(0,local_38._0_6_);
      _local_38 = CONCAT17(uVar6,local_38);
      cVar12 = FUN_00a8ae20(lVar16,local_40 >> 0x10,local_40 >> 0x18,5);
      bVar10 = cVar12 == '\x01';
      break;
    case 3:
      local_38._0_6_ = CONCAT24(5,(int)local_40);
      uStack_31 = (undefined1)(local_40 >> 0x38);
      local_38 = (undefined1  [7])CONCAT16(0,local_38._0_6_);
      cVar12 = FUN_00a8ae20(lVar16,local_40 >> 0x10,local_40 >> 0x18,5);
      bVar10 = cVar12 == '\x02';
      break;
    case 4:
      local_38._0_6_ = CONCAT24(5,iVar9);
      local_38 = (undefined1  [7])CONCAT16(0,local_38._0_6_);
      _local_38 = CONCAT17(uVar6,local_38);
      cVar12 = FUN_00a8ae20(lVar16,local_40 >> 0x10,local_40 >> 0x18,5);
      bVar10 = cVar12 == '\x03';
      break;
    case 5:
      if (*puVar24 == 0) {
        uVar17 = 0;
      }
      else {
        cVar12 = *PTR_DAT_04bc06e0;
        do {
          if (cVar12 != '\0') {
            uVar3 = *(uint *)(puVar8 + 0x28);
            if ((int)uVar3 < 0) {
              if (uVar3 == 0xffffffff) goto LAB_01b86140;
LAB_01b862a8:
              uVar17 = 0;
            }
            else {
              uVar17 = 0;
              if ((ushort *)((ulong)uVar3 + (long)puVar24) != (ushort *)0x0) {
                uVar17 = (uint)*(ushort *)((ulong)uVar3 + (long)puVar24);
              }
            }
LAB_01b862bc:
            uVar3 = *puVar24;
            if (uVar3 == 0) goto LAB_01b86360;
            uVar20 = *(uint *)(puVar8 + 0x30);
            goto LAB_01b862dc;
          }
          cVar12 = '\x01';
          *(undefined8 *)puVar8 = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
          *puVar7 = 1;
          *(undefined4 *)(puVar8 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
LAB_01b86140:
          puVar22 = (uint *)(ulong)*puVar24;
          uVar17 = 0;
          if ((*puVar24 == 0) || (puVar24 == puVar22)) goto LAB_01b862bc;
          lVar16 = 0xc;
          if (*(char *)((long)puVar24 + (10 - (long)puVar22)) != '\0') {
            lVar16 = 0x1c;
          }
          lVar16 = (long)puVar24 + (lVar16 - (long)puVar22);
          if (lVar16 == 0) goto LAB_01b862a8;
          uVar21 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar22));
          *(undefined4 *)(puVar8 + 0x28) = 0xfffffffe;
          uVar17 = 0;
          if (uVar21 == 0) goto LAB_01b862bc;
          piVar23 = (int *)(lVar16 + 4);
          while (piVar23[-1] != -0x6ac67c4c) {
            piVar23 = piVar23 + 2;
            uVar21 = uVar21 - 1;
            if (uVar21 == 0) {
              uVar17 = 0;
              goto LAB_01b862bc;
            }
          }
          iVar1 = 0;
          if (*piVar23 != -1) {
            iVar1 = *piVar23;
          }
          *(int *)(puVar8 + 0x28) = iVar1;
        } while (*puVar24 != 0);
        uVar17 = 0;
      }
LAB_01b86360:
      uVar18 = 0xffff;
      goto LAB_01b86364;
    case 6:
      uVar17 = *(uint *)(lVar16 + 0x65204);
      if (1 < uVar17) {
        uVar17 = 0;
      }
      if (uVar17 == 1) {
        puVar13 = (ushort *)FUN_01b83e70(puVar24,0xb,0xd299f964,0);
        if (puVar13 == (ushort *)0x0) {
          uVar25 = 0;
        }
        else {
          uVar25 = *puVar13;
        }
        uVar14 = 0xd;
        uVar5 = 0xea031e9a;
      }
      else {
        if (uVar17 != 0) {
          return false;
        }
        puVar13 = (ushort *)FUN_01b83e70(puVar24,10,0x953983b4,0);
        if (puVar13 == (ushort *)0x0) {
          uVar25 = 0;
        }
        else {
          uVar25 = *puVar13;
        }
        uVar5 = 0xada3644a;
        uVar14 = 0xc;
      }
      puVar13 = (ushort *)FUN_01b83e70(puVar24,uVar14,uVar5,0);
      if (puVar13 == (ushort *)0x0) {
        uVar15 = 0xffff;
      }
      else {
        uVar15 = *puVar13;
      }
      uVar4 = (short)local_40._3_1_ + local_40._2_1_ * 100;
      if (uVar15 < uVar25) {
        bVar11 = uVar4 < uVar25 && uVar15 <= uVar4;
        bVar10 = uVar4 < uVar25 && uVar4 == uVar15;
      }
      else {
        bVar10 = false;
        bVar11 = true;
        if (uVar25 <= uVar4) {
          bVar11 = uVar15 <= uVar4;
          bVar10 = uVar4 == uVar15;
        }
      }
      bVar10 = !bVar11 || bVar10;
      break;
    default:
      goto switchD_01b85f34_default;
    }
  }
  else {
switchD_01b85f34_default:
    bVar10 = false;
  }
  return bVar10;
  while( true ) {
    if ((uVar20 != 0xffffffff) || (lVar16 = (long)puVar24 - (ulong)uVar3, lVar16 == 0))
    goto LAB_01b86360;
    lVar2 = 0xc;
    if (*(char *)(lVar16 + 10) != '\0') {
      lVar2 = 0x1c;
    }
    if (lVar2 + lVar16 == 0) goto LAB_01b86360;
    uVar21 = (ulong)*(ushort *)(lVar16 + 8);
    *(undefined4 *)(puVar8 + 0x30) = 0xfffffffe;
    if (uVar21 == 0) goto LAB_01b86360;
    puVar22 = (uint *)(lVar2 + lVar16 + 4);
    while (puVar22[-1] != 0xada3644a) {
      puVar22 = puVar22 + 2;
      uVar21 = uVar21 - 1;
      if (uVar21 == 0) goto LAB_01b86360;
    }
    uVar20 = 0;
    if (*puVar22 != 0xffffffff) {
      uVar20 = *puVar22;
    }
    uVar18 = 0xffff;
    *(uint *)(puVar8 + 0x30) = uVar20;
    uVar3 = *puVar24;
    if (uVar3 == 0) break;
LAB_01b862dc:
    if (-1 < (int)uVar20) {
      if ((ushort *)((long)puVar24 + (ulong)uVar20) == (ushort *)0x0) goto LAB_01b86360;
      uVar18 = (uint)*(ushort *)((long)puVar24 + (ulong)uVar20);
      break;
    }
  }
LAB_01b86364:
  uVar3 = ((iVar9 << 8) >> 0x18) * 100 + (iVar9 >> 0x18) & 0xffff;
  bVar10 = uVar17 <= uVar3 && uVar3 <= uVar18;
  if (uVar18 < uVar17) {
    bVar10 = uVar17 <= uVar3 || uVar3 <= uVar18;
  }
  return bVar10;
}

