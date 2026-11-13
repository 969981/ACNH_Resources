
/* WARNING: Removing unreachable block (ram,0x012a8d00) */

void FUN_012a8a70(undefined8 *param_1)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  char cVar12;
  ulong uVar13;
  int *piVar14;
  undefined **local_70;
  undefined8 local_68;
  
  lVar7 = DAT_0519d040;
  puVar6 = PTR_DAT_04bbbe10;
  uVar9 = (uint)*(ushort *)(DAT_0519d040 + 0x1368);
  uVar1 = *(short *)(DAT_0519d040 + 0x136a) + 1;
  if (*(ushort *)(DAT_0519d040 + 0x1368) != uVar1) {
    do {
      uVar2 = uVar9 & 0xffff;
      uVar9 = uVar2 - *(ushort *)(lVar7 + 0x1368);
      if (((uVar9 < *(uint *)(lVar7 + 0x1348)) &&
          (puVar11 = *(uint **)(*(long *)(lVar7 + 0x1350) + (long)(int)uVar9 * 8),
          puVar11 != (uint *)0x0)) || (puVar11 = &DAT_0516c9f8, (DAT_0516ca00 & 1) != 0)) {
        uVar9 = *puVar11;
      }
      else {
        iVar8 = __cxa_guard_acquire(&DAT_0516ca00);
        if (iVar8 != 0) {
          DAT_0516c9f8 = 0;
          __cxa_guard_release(&DAT_0516ca00);
        }
        puVar11 = &DAT_0516c9f8;
        uVar9 = DAT_0516c9f8;
      }
      if (uVar9 != 0) {
        cVar12 = DAT_051602a8;
        do {
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *PTR_DAT_04bbbe08 = 1;
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            uVar9 = *puVar11;
          }
          else {
            uVar10 = *(uint *)puVar6;
            if (-1 < (int)uVar10) {
              if ((ushort *)((ulong)uVar10 + (long)puVar11) != (ushort *)0x0) {
                uVar9 = (uint)*(ushort *)((ulong)uVar10 + (long)puVar11);
                goto LAB_012a8c68;
              }
              break;
            }
            if (uVar10 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar9;
          uVar9 = 0;
          if ((puVar5 == (uint *)0x0) || (uVar9 = 0, puVar11 == puVar5)) goto LAB_012a8c68;
          lVar3 = 0xc;
          if (*(char *)((long)puVar11 + (10 - (long)puVar5)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar11 + (lVar3 - (long)puVar5);
          uVar9 = 0;
          if (lVar3 == 0) goto LAB_012a8c68;
          uVar13 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar5));
          *(undefined4 *)puVar6 = 0xfffffffe;
          if (uVar13 == 0) break;
          piVar14 = (int *)(lVar3 + 4);
          while (piVar14[-1] != 0x54706054) {
            piVar14 = piVar14 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) goto LAB_012a8c64;
          }
          iVar8 = 0;
          if (*piVar14 != -1) {
            iVar8 = *piVar14;
          }
          *(int *)puVar6 = iVar8;
          uVar9 = *puVar11;
          if (uVar9 == 0) break;
        } while( true );
      }
LAB_012a8c64:
      uVar9 = 0;
LAB_012a8c68:
      local_68 = 0;
      local_70 = &PTR_LAB_0498b770;
      uVar9 = uVar9 - *(ushort *)(DAT_0519d040 + 0x1368);
      if (uVar9 < *(uint *)(DAT_0519d040 + 0x1348)) {
        local_68 = *(undefined8 *)(*(long *)(DAT_0519d040 + 0x1350) + (long)(int)uVar9 * 8);
      }
      (**(code **)*param_1)(param_1,&local_70);
      uVar10 = uVar2;
      if (uVar2 <= *(ushort *)(lVar7 + 0x136a)) {
        uVar10 = (uint)*(ushort *)(lVar7 + 0x136a);
      }
      uVar9 = uVar2;
      do {
        while( true ) {
          if (uVar10 == uVar9) {
            uVar9 = uVar2 + 1;
            goto LAB_012a8b04;
          }
          uVar4 = (uVar9 + 1 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1368);
          if (uVar4 < *(uint *)(lVar7 + 0x1348)) break;
          uVar9 = uVar9 + 1;
        }
        uVar9 = uVar9 + 1;
      } while (*(long *)(*(long *)(lVar7 + 0x1350) + (long)(int)uVar4 * 8) == 0);
LAB_012a8b04:
    } while ((uint)uVar1 != (uVar9 & 0xffff));
  }
  return;
}

