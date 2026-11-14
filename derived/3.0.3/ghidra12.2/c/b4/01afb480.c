
void FUN_01afb480(long param_1,long param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  char cVar13;
  undefined1 auStack_38 [8];
  undefined8 local_30;
  int local_24;
  
  if (((DAT_0532aca8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0532aca8), iVar6 != 0)) {
    DAT_0532ac98 = PTR_DAT_04bb2010 + 0x10;
    DAT_0532aca0 = 0;
    __cxa_guard_release(&DAT_0532aca8);
  }
  local_30 = 0;
  FUN_01afb1a0(param_1,auStack_38);
  uVar7 = FUN_01ae59b0(param_1);
  if ((uVar7 & 1) == 0) {
    iVar6 = DAT_0532aca0._4_4_;
    local_30._0_4_ = (int)local_30 + (int)DAT_0532aca0;
    local_30._4_4_ = local_30._4_4_ + DAT_0532aca0._4_4_;
    *(int *)(param_2 + 0x10) = (int)DAT_0532aca0;
    *(int *)(param_2 + 0x14) = iVar6;
    *(int *)(param_2 + 0x20) = (int)local_30 + -1;
    *(int *)(param_2 + 0x24) = local_30._4_4_ + -1;
    return;
  }
  local_24 = 1;
  iVar6 = FUN_01afb8e8(param_1);
  puVar4 = PTR_DAT_04bbfeb8;
  puVar3 = PTR_DAT_04bbfeb0;
  puVar10 = *(uint **)(param_1 + 0x10);
  if (puVar10 == (uint *)0x0) {
    uVar9 = 0xbc;
  }
  else {
    uVar2 = *puVar10;
    uVar9 = 0;
    if ((uVar2 != 0) && (puVar10 != (uint *)(ulong)uVar2)) {
      puVar12 = (uint *)((long)puVar10 - (long)(ulong)uVar2);
      uVar9 = 0;
      if (*puVar12 != 0) {
        uVar9 = puVar12[1];
        if ((uVar9 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar1 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar1 = 0x1c;
          }
          lVar1 = (long)puVar12 + lVar1 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar1 != 0) {
            uVar2 = 0;
            if ((ulong)uVar9 != 0) {
              uVar2 = (uint)((ulong)((long)puVar10 - lVar1) / (ulong)uVar9);
            }
            if (*puVar12 <= uVar2) {
              uVar2 = 0xffffffff;
            }
            if ((uVar2 < *(uint *)PTR_DAT_04bc00c8) &&
               (uVar9 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar2 * 2),
               uVar9 < 0xbd)) goto LAB_01afb5a8;
          }
        }
        uVar9 = 0;
      }
    }
  }
LAB_01afb5a8:
  if ((int)*(uint *)(DAT_0532a778 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a778 + 0xb0) == 0) ||
         (puVar10 = *(uint **)(*(long *)(DAT_0532a778 + 0xb0) + 8), puVar10 == (uint *)0x0)) ||
        ((uVar9 < *(uint *)(DAT_0532a778 + 200) &&
         (*(char *)(*(long *)(DAT_0532a778 + 0xd0) + (long)(int)uVar9) == '\0')))) ||
       (((*puVar10 <= uVar9 || (puVar10[1] == 0)) || ((ushort)puVar10[2] == 0)))) goto LAB_01afb748;
    iVar11 = 0xc;
    if (*(char *)((long)puVar10 + 10) != '\0') {
      iVar11 = 0x1c;
    }
    puVar10 = (uint *)((ulong)(puVar10[1] * uVar9 + (uint)(ushort)puVar10[2] * 8 + iVar11) +
                      (long)puVar10);
  }
  else {
    if (*(uint *)(DAT_0532a778 + 0x1c0) <= uVar9) goto LAB_01afb748;
    if (*(uint *)(DAT_0532a778 + 0x1b0) <= uVar9) {
      uVar9 = 0;
    }
    puVar10 = *(uint **)(*(long *)(DAT_0532a778 + 0x1b8) + (ulong)uVar9 * 8);
  }
  if ((puVar10 != (uint *)0x0) && (*puVar10 != 0)) {
    cVar13 = *PTR_DAT_04bbfeb0;
    do {
      if (cVar13 == '\0') {
        cVar13 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined8 *)(puVar4 + 0x70) = 0xffffffffffffffff;
        *(undefined4 *)(puVar4 + 0x78) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x68) = 0xffffffffffffffff;
      }
      else {
        uVar9 = *(uint *)(puVar4 + 0x2c);
        if (-1 < (int)uVar9) {
          if (((char *)((ulong)uVar9 + (long)puVar10) == (char *)0x0) ||
             (*(char *)((ulong)uVar9 + (long)puVar10) == '\0')) break;
          bVar5 = *(byte *)(param_1 + 10) & 3;
          goto LAB_01afb74c;
        }
        if (uVar9 != 0xffffffff) break;
      }
      puVar12 = (uint *)(ulong)*puVar10;
      bVar5 = 0;
      if ((*puVar10 == 0) || (puVar10 == puVar12)) goto LAB_01afb74c;
      lVar1 = 0xc;
      if (*(char *)((long)puVar10 + (10 - (long)puVar12)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar10 + (lVar1 - (long)puVar12);
      if (lVar1 == 0) break;
      uVar7 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar12));
      *(undefined4 *)(puVar4 + 0x2c) = 0xfffffffe;
      bVar5 = 0;
      if (uVar7 == 0) goto LAB_01afb74c;
      piVar8 = (int *)(lVar1 + 4);
      while (piVar8[-1] != -0x6f43f7ab) {
        piVar8 = piVar8 + 2;
        uVar7 = uVar7 - 1;
        if (uVar7 == 0) {
          bVar5 = 0;
          goto LAB_01afb74c;
        }
      }
      bVar5 = 0;
      iVar11 = 0;
      if (*piVar8 != -1) {
        iVar11 = *piVar8;
      }
      *(int *)(puVar4 + 0x2c) = iVar11;
      if (*puVar10 == 0) goto LAB_01afb74c;
    } while( true );
  }
LAB_01afb748:
  bVar5 = 0;
LAB_01afb74c:
  iVar11 = local_30._4_4_;
  if (iVar6 != local_24) {
    iVar11 = (int)local_30;
    iVar6 = local_30._4_4_;
    if ((bVar5 & 1) != 1) {
      iVar11 = local_30._4_4_;
      iVar6 = (int)local_30;
    }
    local_30._0_4_ = iVar6;
  }
  iVar6 = DAT_0532aca0._4_4_;
  local_30._0_4_ = (int)local_30 + (int)DAT_0532aca0;
  iVar11 = iVar11 + DAT_0532aca0._4_4_;
  *(int *)(param_2 + 0x10) = (int)DAT_0532aca0;
  *(int *)(param_2 + 0x14) = iVar6;
  *(int *)(param_2 + 0x20) = (int)local_30 + -1;
  *(int *)(param_2 + 0x24) = iVar11 + -1;
  return;
}

