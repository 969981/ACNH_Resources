
void FUN_01afb1a0(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  uint uVar11;
  uint *puVar12;
  int *piVar13;
  
  if (((DAT_0532ac90 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_0532ac90), iVar6 != 0)) {
    DAT_0532ac80 = PTR_DAT_04bb2e18 + 0x10;
    DAT_0532ac88 = 0x200000002;
    __cxa_guard_release(&DAT_0532ac90);
  }
  uVar5 = FUN_01aee3b4(param_1);
  puVar4 = PTR_DAT_04bbfea0;
  puVar3 = PTR_DAT_04bbfe98;
  if ((int)*(uint *)(DAT_0532a770 + 0x1c0) < 1) {
    if (*(long *)(DAT_0532a770 + 0xb0) == 0) {
      return;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a770 + 0xb0) + 8);
    if (puVar8 == (uint *)0x0) {
      return;
    }
    if ((uVar5 < *(uint *)(DAT_0532a770 + 200)) &&
       (*(char *)(*(long *)(DAT_0532a770 + 0xd0) + (long)(int)uVar5) == '\0')) {
      return;
    }
    if (*puVar8 <= uVar5) {
      return;
    }
    if (puVar8[1] == 0) {
      return;
    }
    if ((ushort)puVar8[2] == 0) {
      return;
    }
    iVar6 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar6 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * uVar5 + (uint)(ushort)puVar8[2] * 8 + iVar6) +
                     (long)puVar8);
  }
  else {
    if (*(uint *)(DAT_0532a770 + 0x1c0) <= uVar5) {
      return;
    }
    if (*(uint *)(DAT_0532a770 + 0x1b0) <= uVar5) {
      uVar5 = 0;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a770 + 0x1b8) + (ulong)uVar5 * 8);
  }
  if (puVar8 != (uint *)0x0) {
    if (*(long *)(param_1 + 0x10) == 0) {
      *(undefined4 *)(param_2 + 8) = (undefined4)DAT_0532ac88;
      uVar7 = DAT_0532ac88._4_4_;
    }
    else {
      if (*puVar8 == 0) {
        uVar5 = 0;
      }
      else {
        cVar9 = *PTR_DAT_04bbfe98;
        do {
          if (cVar9 != '\0') {
            uVar7 = *(uint *)(puVar4 + 0x10);
            if ((int)uVar7 < 0) {
              if (uVar7 == 0xffffffff) goto LAB_01afb270;
LAB_01afb378:
              uVar5 = 0;
            }
            else {
              uVar5 = 0;
              if ((byte *)((ulong)uVar7 + (long)puVar8) != (byte *)0x0) {
                uVar5 = (uint)*(byte *)((ulong)uVar7 + (long)puVar8);
              }
            }
LAB_01afb38c:
            uVar7 = *puVar8;
            if (uVar7 == 0) goto LAB_01afb418;
            uVar11 = *(uint *)(puVar4 + 0x14);
            goto LAB_01afb3ac;
          }
          cVar9 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
LAB_01afb270:
          puVar12 = (uint *)(ulong)*puVar8;
          uVar5 = 0;
          if ((*puVar8 == 0) || (puVar8 == puVar12)) goto LAB_01afb38c;
          lVar2 = 0xc;
          if (*(char *)((long)puVar8 + (10 - (long)puVar12)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar8 + (lVar2 - (long)puVar12);
          if (lVar2 == 0) goto LAB_01afb378;
          uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar12));
          *(undefined4 *)(puVar4 + 0x10) = 0xfffffffe;
          uVar5 = 0;
          if (uVar10 == 0) goto LAB_01afb38c;
          piVar13 = (int *)(lVar2 + 4);
          while (piVar13[-1] != 0x16b8f524) {
            piVar13 = piVar13 + 2;
            uVar10 = uVar10 - 1;
            if (uVar10 == 0) {
              uVar5 = 0;
              goto LAB_01afb38c;
            }
          }
          iVar6 = 0;
          if (*piVar13 != -1) {
            iVar6 = *piVar13;
          }
          *(int *)(puVar4 + 0x10) = iVar6;
        } while (*puVar8 != 0);
        uVar5 = 0;
      }
LAB_01afb418:
      uVar7 = 0;
LAB_01afb41c:
      *(uint *)(param_2 + 8) = uVar5;
    }
    *(uint *)(param_2 + 0xc) = uVar7;
  }
  return;
LAB_01afb3ac:
  if (-1 < (int)uVar11) {
    uVar7 = 0;
    if ((byte *)((long)puVar8 + (ulong)uVar11) != (byte *)0x0) {
      uVar7 = (uint)*(byte *)((long)puVar8 + (ulong)uVar11);
    }
    goto LAB_01afb41c;
  }
  if ((uVar11 != 0xffffffff) || (lVar2 = (long)puVar8 - (ulong)uVar7, lVar2 == 0))
  goto LAB_01afb418;
  lVar1 = 0xc;
  if (*(char *)(lVar2 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar2 == 0) goto LAB_01afb418;
  uVar10 = (ulong)*(ushort *)(lVar2 + 8);
  *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
  if (uVar10 == 0) goto LAB_01afb418;
  puVar12 = (uint *)(lVar1 + lVar2 + 4);
  while (puVar12[-1] != 0xbcb13daf) {
    puVar12 = puVar12 + 2;
    uVar10 = uVar10 - 1;
    if (uVar10 == 0) goto LAB_01afb418;
  }
  uVar11 = 0;
  if (*puVar12 != 0xffffffff) {
    uVar11 = *puVar12;
  }
  *(uint *)(puVar4 + 0x14) = uVar11;
  uVar7 = *puVar8;
  if (uVar7 == 0) goto LAB_01afb418;
  goto LAB_01afb3ac;
}

