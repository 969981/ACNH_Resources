
/* WARNING: Removing unreachable block (ram,0x01c5fe14) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_01c5fba0(undefined8 *param_1)

{
  ushort uVar1;
  ushort *puVar2;
  uint uVar3;
  long lVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  char cVar10;
  uint uVar11;
  ulong uVar12;
  uint *puVar13;
  int *piVar14;
  undefined **local_70;
  undefined8 local_68;
  
  uVar7 = (uint)DAT_0534f428;
  uVar1 = DAT_0534f42a + 1;
  uVar8 = (uint)DAT_0534f428;
  if (uVar8 != uVar1) {
    do {
      uVar3 = uVar8 & 0xffff;
      if (((uVar3 - uVar7 < DAT_0534f408) &&
          (puVar9 = *(uint **)(DAT_0534f410 + (long)(int)(uVar3 - uVar7) * 8), puVar9 != (uint *)0x0
          )) || (puVar9 = (uint *)&DAT_0534f818, (DAT_0534f820 & 1) != 0)) {
        if (*puVar9 != 0) goto LAB_01c5fc6c;
LAB_01c5fd74:
        uVar8 = 0;
      }
      else {
        iVar6 = __cxa_guard_acquire(&DAT_0534f820);
        if (iVar6 != 0) {
          DAT_0534f818 = 0;
          __cxa_guard_release(&DAT_0534f820);
        }
        puVar9 = (uint *)&DAT_0534f818;
        if (DAT_0534f818 == 0) goto LAB_01c5fd74;
LAB_01c5fc6c:
        cVar10 = DAT_0534f430;
        do {
          if (cVar10 == '\0') {
            cVar10 = '\x01';
            DAT_0534f430 = '\x01';
            DAT_0534f434 = 0xffffffffffffffff;
            DAT_0534f43c = 0xffffffffffffffff;
            DAT_0534f444 = 0xffffffffffffffff;
            DAT_0534f44c = 0xffffffffffffffff;
            _DAT_0534f454 = 0xffffffffffffffff;
            DAT_0534f45c = 0xffffffffffffffff;
            DAT_0534f464 = 0xffffffffffffffff;
            DAT_0534f46c = 0xffffffffffffffff;
          }
          else {
            if (-1 < DAT_0534f454) {
              puVar2 = (ushort *)((_DAT_0534f454 & 0xffffffff) + (long)puVar9);
              if (puVar2 == (ushort *)0x0) goto LAB_01c5fd74;
              uVar8 = (uint)*puVar2;
              goto LAB_01c5fd78;
            }
            if (DAT_0534f454 != -1) goto LAB_01c5fd74;
          }
          puVar13 = (uint *)(ulong)*puVar9;
          uVar8 = 0;
          if ((*puVar9 == 0) || (puVar9 == puVar13)) goto LAB_01c5fd78;
          lVar4 = 0xc;
          if (*(char *)((long)puVar9 + (10 - (long)puVar13)) != '\0') {
            lVar4 = 0x1c;
          }
          lVar4 = (long)puVar9 + (lVar4 - (long)puVar13);
          if (lVar4 == 0) goto LAB_01c5fd74;
          uVar12 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar13));
          _DAT_0534f454 = CONCAT44(_DAT_0534f458,0xfffffffe);
          uVar8 = 0;
          if (uVar12 == 0) goto LAB_01c5fd78;
          piVar14 = (int *)(lVar4 + 4);
          while (piVar14[-1] != 0x54706054) {
            piVar14 = piVar14 + 2;
            uVar12 = uVar12 - 1;
            if (uVar12 == 0) {
              uVar8 = 0;
              goto LAB_01c5fd78;
            }
          }
          iVar6 = 0;
          if (*piVar14 != -1) {
            iVar6 = *piVar14;
          }
          _DAT_0534f454 = CONCAT44(_DAT_0534f458,iVar6);
        } while (*puVar9 != 0);
        uVar8 = 0;
      }
LAB_01c5fd78:
      local_68 = 0;
      local_70 = &PTR_LAB_04a42100;
      if (uVar8 - DAT_0534f428 < DAT_0534f408) {
        local_68 = *(undefined8 *)(DAT_0534f410 + (long)(int)(uVar8 - DAT_0534f428) * 8);
      }
      (**(code **)*param_1)(param_1,&local_70);
      uVar7 = (uint)DAT_0534f428;
      uVar8 = uVar3;
      uVar11 = uVar3;
      if (uVar3 <= DAT_0534f42a) {
        uVar11 = (uint)DAT_0534f42a;
      }
      do {
        while( true ) {
          if (uVar11 == uVar8) {
            uVar8 = uVar3 + 1;
            goto LAB_01c5fc24;
          }
          uVar5 = (uVar8 + 1 & 0xffff) - uVar7;
          if (uVar5 < DAT_0534f408) break;
          uVar8 = uVar8 + 1;
        }
        uVar8 = uVar8 + 1;
      } while (*(long *)(DAT_0534f410 + (long)(int)uVar5 * 8) == 0);
LAB_01c5fc24:
    } while ((uint)uVar1 != (uVar8 & 0xffff));
  }
  return;
}

