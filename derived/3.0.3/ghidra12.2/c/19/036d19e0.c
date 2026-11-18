
/* WARNING: Removing unreachable block (ram,0x036d1c64) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_036d19e0(undefined8 *param_1)

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
  uint *puVar10;
  char cVar11;
  uint uVar12;
  ulong uVar13;
  uint *puVar14;
  int *piVar15;
  undefined *local_70;
  undefined8 local_68;
  
  uVar8 = (uint)DAT_05ab4358;
  uVar1 = DAT_05ab435a + 1;
  uVar9 = (uint)DAT_05ab4358;
  if (uVar9 != uVar1) {
    puVar2 = PTR_DAT_04bcac60 + 0x10;
    do {
      uVar4 = uVar9 & 0xffff;
      if (((uVar4 - uVar8 < DAT_05ab4338) &&
          (puVar10 = *(uint **)(DAT_05ab4340 + (long)(int)(uVar4 - uVar8) * 8),
          puVar10 != (uint *)0x0)) || (puVar10 = (uint *)&DAT_05ab43e0, (DAT_05ab43e8 & 1) != 0)) {
        if (*puVar10 != 0) goto LAB_036d1ab0;
LAB_036d1bc4:
        uVar9 = 0;
      }
      else {
        iVar7 = __cxa_guard_acquire(&DAT_05ab43e8);
        if (iVar7 != 0) {
          DAT_05ab43e0 = 0;
          __cxa_guard_release(&DAT_05ab43e8);
        }
        puVar10 = (uint *)&DAT_05ab43e0;
        if (DAT_05ab43e0 == 0) goto LAB_036d1bc4;
LAB_036d1ab0:
        cVar11 = DAT_05ab4368;
        do {
          if (cVar11 == '\0') {
            cVar11 = '\x01';
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
              puVar3 = (ushort *)((_DAT_05ab438c & 0xffffffff) + (long)puVar10);
              if (puVar3 == (ushort *)0x0) goto LAB_036d1bc4;
              uVar9 = (uint)*puVar3;
              goto LAB_036d1bc8;
            }
            if (DAT_05ab438c != -1) goto LAB_036d1bc4;
          }
          puVar14 = (uint *)(ulong)*puVar10;
          uVar9 = 0;
          if ((*puVar10 == 0) || (puVar10 == puVar14)) goto LAB_036d1bc8;
          lVar5 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar14)) != '\0') {
            lVar5 = 0x1c;
          }
          lVar5 = (long)puVar10 + (lVar5 - (long)puVar14);
          if (lVar5 == 0) goto LAB_036d1bc4;
          uVar13 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar14));
          _DAT_05ab438c = CONCAT44(_DAT_05ab4390,0xfffffffe);
          uVar9 = 0;
          if (uVar13 == 0) goto LAB_036d1bc8;
          piVar15 = (int *)(lVar5 + 4);
          while (piVar15[-1] != 0x54706054) {
            piVar15 = piVar15 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) {
              uVar9 = 0;
              goto LAB_036d1bc8;
            }
          }
          iVar7 = 0;
          if (*piVar15 != -1) {
            iVar7 = *piVar15;
          }
          _DAT_05ab438c = CONCAT44(_DAT_05ab4390,iVar7);
        } while (*puVar10 != 0);
        uVar9 = 0;
      }
LAB_036d1bc8:
      local_68 = 0;
      if (uVar9 - DAT_05ab4358 < DAT_05ab4338) {
        local_68 = *(undefined8 *)(DAT_05ab4340 + (long)(int)(uVar9 - DAT_05ab4358) * 8);
      }
      local_70 = puVar2;
      (**(code **)*param_1)(param_1,&local_70);
      uVar8 = (uint)DAT_05ab4358;
      uVar9 = uVar4;
      uVar12 = uVar4;
      if (uVar4 <= DAT_05ab435a) {
        uVar12 = (uint)DAT_05ab435a;
      }
      do {
        while( true ) {
          if (uVar12 == uVar9) {
            uVar9 = uVar4 + 1;
            goto LAB_036d1a68;
          }
          uVar6 = (uVar9 + 1 & 0xffff) - uVar8;
          if (uVar6 < DAT_05ab4338) break;
          uVar9 = uVar9 + 1;
        }
        uVar9 = uVar9 + 1;
      } while (*(long *)(DAT_05ab4340 + (long)(int)uVar6 * 8) == 0);
LAB_036d1a68:
    } while ((uint)uVar1 != (uVar9 & 0xffff));
  }
  return;
}

