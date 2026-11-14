
uint FUN_01b863a0(long param_1,short *param_2,undefined8 *param_3)

{
  uint uVar1;
  int iVar2;
  byte bVar3;
  undefined4 uVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  uint uVar9;
  ushort *puVar10;
  undefined8 uVar11;
  long lVar12;
  uint uVar13;
  uint uVar14;
  char cVar15;
  ulong uVar16;
  uint *puVar17;
  int *piVar18;
  uint *puVar19;
  undefined8 local_38;
  long local_18;
  
  lVar12 = *(long *)PTR_DAT_04bb4788;
  uVar13 = (uint)*(ushort *)(param_1 + 8) - (uint)*(ushort *)(lVar12 + 0x1f8);
  if ((*(uint *)(lVar12 + 0x1d8) <= uVar13) ||
     (puVar19 = *(uint **)(*(long *)(lVar12 + 0x1e0) + (long)(int)uVar13 * 8),
     puVar19 == (uint *)0x0)) goto switchD_01b8654c_default;
  local_38 = *param_3;
  if ((char)(local_38 >> 0x20) < '\x05') {
    lVar12 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
    local_18 = lVar12 + -0x15180;
    local_38 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_18);
  }
  puVar7 = PTR_DAT_04bc06e8;
  puVar6 = PTR_DAT_04bc06e0;
  uVar16 = local_38 >> 0x30;
  uVar13 = (uint)local_38;
  local_38._0_6_ = CONCAT24(5,(uint)local_38);
  local_38 = CONCAT26((short)uVar16,(undefined6)local_38) & 0xff00ffffffffffff;
  if (*puVar19 == 0) {
LAB_01b86520:
    uVar9 = 0;
  }
  else {
    cVar15 = *PTR_DAT_04bc06e0;
    do {
      if (cVar15 == '\0') {
        cVar15 = '\x01';
        *(undefined8 *)puVar7 = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
        *puVar6 = 1;
        *(undefined4 *)(puVar7 + 0x50) = 0xffffffff;
        *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
      }
      else {
        uVar9 = *(uint *)(puVar7 + 0x4c);
        if (-1 < (int)uVar9) {
          if (((byte *)((ulong)uVar9 + (long)puVar19) == (byte *)0x0) ||
             (bVar3 = *(byte *)((ulong)uVar9 + (long)puVar19), uVar9 = (uint)bVar3, 7 < bVar3))
          goto LAB_01b86520;
          goto LAB_01b86524;
        }
        if (uVar9 != 0xffffffff) goto LAB_01b86520;
      }
      puVar17 = (uint *)(ulong)*puVar19;
      uVar9 = 0;
      if ((*puVar19 == 0) || (puVar19 == puVar17)) goto LAB_01b86524;
      lVar12 = 0xc;
      if (*(char *)((long)puVar19 + (10 - (long)puVar17)) != '\0') {
        lVar12 = 0x1c;
      }
      lVar12 = (long)puVar19 + (lVar12 - (long)puVar17);
      if (lVar12 == 0) goto LAB_01b86520;
      uVar16 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar17));
      *(undefined4 *)(puVar7 + 0x4c) = 0xfffffffe;
      uVar9 = 0;
      if (uVar16 == 0) goto LAB_01b86524;
      piVar18 = (int *)(lVar12 + 4);
      while (piVar18[-1] != -0x558c7013) {
        piVar18 = piVar18 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) {
          uVar9 = 0;
          goto LAB_01b86524;
        }
      }
      iVar2 = 0;
      if (*piVar18 != -1) {
        iVar2 = *piVar18;
      }
      *(int *)(puVar7 + 0x4c) = iVar2;
    } while (*puVar19 != 0);
    uVar9 = 0;
  }
LAB_01b86524:
  puVar7 = PTR_DAT_04bc06e8;
  puVar6 = PTR_DAT_04bc06e0;
  local_18 = CONCAT44(local_18._4_4_,uVar9);
  switch(uVar9) {
  case 1:
    uVar11 = 0;
    break;
  case 2:
    uVar9 = 1;
    FUN_01b868b0(param_2,1,&local_38);
    goto LAB_01b86854;
  case 3:
    uVar11 = 2;
    break;
  case 4:
    uVar11 = 3;
    break;
  case 5:
    if (*puVar19 != 0) {
      cVar15 = *PTR_DAT_04bc06e0;
      do {
        if (cVar15 == '\0') {
          cVar15 = '\x01';
          *(undefined8 *)puVar7 = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
          *puVar6 = 1;
          *(undefined4 *)(puVar7 + 0x50) = 0xffffffff;
          *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
        }
        else {
          uVar9 = *(uint *)(puVar7 + 0x30);
          if (-1 < (int)uVar9) {
            if ((ushort *)((ulong)uVar9 + (long)puVar19) != (ushort *)0x0) {
              uVar9 = (uint)*(ushort *)((ulong)uVar9 + (long)puVar19);
              goto LAB_01b867d0;
            }
            break;
          }
          if (uVar9 != 0xffffffff) break;
        }
        puVar17 = (uint *)(ulong)*puVar19;
        uVar9 = 0xffff;
        if ((*puVar19 == 0) || (puVar19 == puVar17)) goto LAB_01b867d0;
        lVar12 = 0xc;
        if (*(char *)((long)puVar19 + (10 - (long)puVar17)) != '\0') {
          lVar12 = 0x1c;
        }
        lVar12 = (long)puVar19 + (lVar12 - (long)puVar17);
        if (lVar12 == 0) break;
        uVar16 = (ulong)*(ushort *)((long)puVar19 + (8 - (long)puVar17));
        *(undefined4 *)(puVar7 + 0x30) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar18 = (int *)(lVar12 + 4);
        while (piVar18[-1] != -0x525c9bb6) {
          piVar18 = piVar18 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_01b867cc;
        }
        iVar2 = 0;
        if (*piVar18 != -1) {
          iVar2 = *piVar18;
        }
        *(int *)(puVar7 + 0x30) = iVar2;
        if (*puVar19 == 0) break;
      } while( true );
    }
LAB_01b867cc:
    uVar9 = 0xffff;
LAB_01b867d0:
    param_2[2] = 5;
    *(undefined1 *)(param_2 + 3) = 0;
    cVar15 = (char)(uVar9 / 100);
    *(char *)(param_2 + 1) = cVar15;
    uVar14 = uVar9 % 100;
    if (uVar9 < (((int)(uVar13 << 8) >> 0x18) * 100 + ((int)uVar13 >> 0x18) & 0xffffU)) {
      uVar13 = uVar13 + 1;
    }
    uVar1 = uVar13 & 0xffff;
    sVar5 = (short)uVar13;
    *param_2 = sVar5;
    *(char *)((long)param_2 + 3) = (char)uVar14;
    if ((uVar13 & 3) == 0) {
      if (0x28f < (uVar1 * 0x170a4000 & 0xffff | uVar1 * 0x5c29 >> 2 & 0x3fff)) goto LAB_01b86894;
      bVar8 = (uVar13 & 0xf) != 0;
    }
    else {
      bVar8 = true;
    }
    if (((uVar14 == 0x1d) && ((uVar9 / 100 & 0xff) == 2)) && (bVar8)) {
      uVar14 = 0x1c;
      param_2[1] = 0x1c02;
      cVar15 = '\x02';
    }
    if (uVar1 != 0) {
LAB_01b86894:
      uVar9 = nn::time::IsValidDate((int)sVar5,(int)cVar15,uVar14);
      goto LAB_01b86854;
    }
  default:
switchD_01b8654c_default:
    uVar9 = 0;
    goto LAB_01b86854;
  case 6:
    uVar13 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
    if (1 < uVar13) {
      uVar13 = 0;
    }
    if (uVar13 == 1) {
      uVar11 = 0xd;
      uVar4 = 0xea031e9a;
    }
    else {
      uVar9 = 0;
      if (uVar13 != 0) goto LAB_01b86854;
      uVar4 = 0xada3644a;
      uVar11 = 0xc;
    }
    puVar10 = (ushort *)FUN_01b83e70(puVar19,uVar11,uVar4,0);
    if (puVar10 == (ushort *)0x0) {
      uVar13 = 0xffff;
    }
    else {
      uVar13 = (uint)*puVar10;
    }
    param_2[2] = local_38._4_2_;
    cVar15 = (char)(uVar13 / 100);
    uVar9 = (uint)(ushort)local_38;
    if (uVar13 < ((int)local_38._3_1_ + local_38._2_1_ * 100 & 0xffffU)) {
      uVar9 = uVar9 + 1;
    }
    uVar14 = uVar13 % 100;
    *(char *)(param_2 + 1) = cVar15;
    sVar5 = (short)uVar9;
    *param_2 = sVar5;
    *(char *)((long)param_2 + 3) = (char)uVar14;
    *(undefined1 *)(param_2 + 3) = local_38._6_1_;
    uVar1 = uVar9 & 0xffff;
    if ((uVar9 & 3) == 0) {
      if (0x28f < (uVar1 * 0x170a4000 & 0xffff | uVar1 * 0x5c29 >> 2 & 0x3fff)) goto LAB_01b86894;
      bVar8 = (uVar9 & 0xf) != 0;
    }
    else {
      bVar8 = true;
    }
    if (((uVar14 == 0x1d) && ((uVar13 / 100 & 0xff) == 2)) && (bVar8)) {
      uVar14 = 0x1c;
      param_2[1] = 0x1c02;
      cVar15 = '\x02';
    }
    if (uVar1 != 0) goto LAB_01b86894;
    goto switchD_01b8654c_default;
  }
  FUN_01b868b0(param_2,uVar11,&local_38);
  uVar9 = 1;
LAB_01b86854:
  return uVar9 & 1;
}

