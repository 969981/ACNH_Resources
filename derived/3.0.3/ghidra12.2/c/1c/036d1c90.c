
/* WARNING: Removing unreachable block (ram,0x036d1f24) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_036d1c90(undefined8 *param_1)

{
  ushort uVar1;
  undefined *puVar2;
  ushort *puVar3;
  uint uVar4;
  long lVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  char cVar12;
  uint uVar13;
  ulong uVar14;
  uint *puVar15;
  int *piVar16;
  undefined *local_70;
  undefined8 local_68;
  
  uVar9 = (uint)DAT_05ab4358;
  uVar1 = DAT_05ab435a + 1;
  uVar10 = (uint)DAT_05ab4358;
  if (uVar10 == uVar1) {
    return 0;
  }
  puVar2 = PTR_DAT_04bcac60 + 0x10;
  do {
    uVar4 = uVar10 & 0xffff;
    if (((uVar4 - uVar9 < DAT_05ab4338) &&
        (puVar11 = *(uint **)(DAT_05ab4340 + (long)(int)(uVar4 - uVar9) * 8), puVar11 != (uint *)0x0
        )) || (puVar11 = (uint *)&DAT_05ab43e0, (DAT_05ab43e8 & 1) != 0)) {
      if (*puVar11 != 0) goto LAB_036d1d6c;
LAB_036d1e84:
      uVar10 = 0;
    }
    else {
      iVar7 = __cxa_guard_acquire(&DAT_05ab43e8);
      if (iVar7 != 0) {
        DAT_05ab43e0 = 0;
        __cxa_guard_release(&DAT_05ab43e8);
      }
      puVar11 = (uint *)&DAT_05ab43e0;
      if (DAT_05ab43e0 == 0) goto LAB_036d1e84;
LAB_036d1d6c:
      cVar12 = DAT_05ab4368;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          DAT_05ab43bc = 0xffffffff;
          DAT_05ab4368 = '\x01';
          DAT_05ab436c = 0xffffffffffffffff;
          DAT_05ab4374 = 0xffffffffffffffff;
          DAT_05ab437c = 0xffffffffffffffff;
          DAT_05ab4384 = 0xffffffffffffffff;
          _DAT_05ab438c = 0xffffffffffffffff;
          DAT_05ab4394 = 0xffffffffffffffff;
          DAT_05ab439c = 0xffffffffffffffff;
          DAT_05ab43a4 = 0xffffffffffffffff;
          DAT_05ab43ac = 0xffffffffffffffff;
          DAT_05ab43b4 = 0xffffffffffffffff;
        }
        else {
          if (-1 < DAT_05ab438c) {
            puVar3 = (ushort *)((_DAT_05ab438c & 0xffffffff) + (long)puVar11);
            if (puVar3 == (ushort *)0x0) goto LAB_036d1e84;
            uVar10 = (uint)*puVar3;
            goto LAB_036d1e88;
          }
          if (DAT_05ab438c != -1) goto LAB_036d1e84;
        }
        puVar15 = (uint *)(ulong)*puVar11;
        uVar10 = 0;
        if ((*puVar11 == 0) || (puVar11 == puVar15)) goto LAB_036d1e88;
        lVar5 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar15)) != '\0') {
          lVar5 = 0x1c;
        }
        lVar5 = (long)puVar11 + (lVar5 - (long)puVar15);
        if (lVar5 == 0) goto LAB_036d1e84;
        uVar14 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar15));
        _DAT_05ab438c = CONCAT44(_DAT_05ab4390,0xfffffffe);
        uVar10 = 0;
        if (uVar14 == 0) goto LAB_036d1e88;
        piVar16 = (int *)(lVar5 + 4);
        while (piVar16[-1] != 0x54706054) {
          piVar16 = piVar16 + 2;
          uVar14 = uVar14 - 1;
          if (uVar14 == 0) {
            uVar10 = 0;
            goto LAB_036d1e88;
          }
        }
        iVar7 = 0;
        if (*piVar16 != -1) {
          iVar7 = *piVar16;
        }
        _DAT_05ab438c = CONCAT44(_DAT_05ab4390,iVar7);
      } while (*puVar11 != 0);
      uVar10 = 0;
    }
LAB_036d1e88:
    local_68 = 0;
    if (uVar10 - DAT_05ab4358 < DAT_05ab4338) {
      local_68 = *(undefined8 *)(DAT_05ab4340 + (long)(int)(uVar10 - DAT_05ab4358) * 8);
    }
    local_70 = puVar2;
    uVar8 = (**(code **)*param_1)(param_1,&local_70);
    if ((uVar8 & 1) != 0) {
      uVar8 = 1;
      goto LAB_036d1f2c;
    }
    uVar9 = (uint)DAT_05ab4358;
    uVar10 = uVar4;
    uVar13 = uVar4;
    if (uVar4 <= DAT_05ab435a) {
      uVar13 = (uint)DAT_05ab435a;
    }
    do {
      while( true ) {
        if (uVar13 == uVar10) {
          uVar10 = uVar4 + 1;
          goto LAB_036d1d24;
        }
        uVar6 = (uVar10 + 1 & 0xffff) - uVar9;
        if (uVar6 < DAT_05ab4338) break;
        uVar10 = uVar10 + 1;
      }
      uVar10 = uVar10 + 1;
    } while (*(long *)(DAT_05ab4340 + (long)(int)uVar6 * 8) == 0);
LAB_036d1d24:
    if ((uint)uVar1 == (uVar10 & 0xffff)) {
LAB_036d1f2c:
      return uVar8 & 1;
    }
  } while( true );
}

