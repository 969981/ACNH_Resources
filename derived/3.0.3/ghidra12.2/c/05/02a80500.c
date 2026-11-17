
/* WARNING: Removing unreachable block (ram,0x02a80780) */

void FUN_02a80500(undefined8 *param_1)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  char cVar13;
  uint *puVar14;
  int *piVar15;
  undefined **local_70;
  undefined8 local_68;
  
  lVar7 = DAT_05635578;
  puVar6 = PTR_DAT_04bb5c00;
  uVar10 = (uint)*(ushort *)(DAT_05635578 + 0x11f0);
  uVar1 = *(short *)(DAT_05635578 + 0x11f2) + 1;
  if (*(ushort *)(DAT_05635578 + 0x11f0) != uVar1) {
    do {
      uVar2 = uVar10 & 0xffff;
      uVar10 = uVar2 - *(ushort *)(lVar7 + 0x11f0);
      if (((uVar10 < *(uint *)(lVar7 + 0x11d0)) &&
          (puVar12 = *(uint **)(*(long *)(lVar7 + 0x11d8) + (long)(int)uVar10 * 8),
          puVar12 != (uint *)0x0)) || (puVar12 = (uint *)&DAT_05605a78, (DAT_05605a80 & 1) != 0)) {
        if (*puVar12 != 0) goto LAB_02a805e0;
LAB_02a806e4:
        uVar10 = 0;
      }
      else {
        iVar8 = __cxa_guard_acquire(&DAT_05605a80);
        if (iVar8 != 0) {
          DAT_05605a78 = 0;
          __cxa_guard_release(&DAT_05605a80);
        }
        puVar12 = (uint *)&DAT_05605a78;
        if (DAT_05605a78 == 0) goto LAB_02a806e4;
LAB_02a805e0:
        cVar13 = DAT_04cf8618;
        do {
          puVar5 = PTR_DAT_04bb5bf8;
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar6 = 0xffffffffffffffff;
            *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
            *(undefined4 *)(puVar6 + 0x10) = 0xffffffff;
            *puVar5 = 1;
          }
          else {
            uVar10 = *(uint *)(puVar6 + 8);
            if (-1 < (int)uVar10) {
              if ((ushort *)((ulong)uVar10 + (long)puVar12) == (ushort *)0x0) goto LAB_02a806e4;
              uVar10 = (uint)*(ushort *)((ulong)uVar10 + (long)puVar12);
              goto LAB_02a806e8;
            }
            if (uVar10 != 0xffffffff) goto LAB_02a806e4;
          }
          puVar14 = (uint *)(ulong)*puVar12;
          uVar10 = 0;
          if ((*puVar12 == 0) || (puVar12 == puVar14)) goto LAB_02a806e8;
          lVar3 = 0xc;
          if (*(char *)((long)puVar12 + (10 - (long)puVar14)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar12 + (lVar3 - (long)puVar14);
          if (lVar3 == 0) goto LAB_02a806e4;
          uVar9 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar14));
          *(undefined4 *)(puVar6 + 8) = 0xfffffffe;
          uVar10 = 0;
          if (uVar9 == 0) goto LAB_02a806e8;
          piVar15 = (int *)(lVar3 + 4);
          while (piVar15[-1] != 0x54706054) {
            piVar15 = piVar15 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              uVar10 = 0;
              goto LAB_02a806e8;
            }
          }
          iVar8 = 0;
          if (*piVar15 != -1) {
            iVar8 = *piVar15;
          }
          *(int *)(puVar6 + 8) = iVar8;
        } while (*puVar12 != 0);
        uVar10 = 0;
      }
LAB_02a806e8:
      local_68 = 0;
      local_70 = &PTR_LAB_04a9c9d0;
      uVar10 = uVar10 - *(ushort *)(DAT_05635578 + 0x11f0);
      if (uVar10 < *(uint *)(DAT_05635578 + 0x11d0)) {
        local_68 = *(undefined8 *)(*(long *)(DAT_05635578 + 0x11d8) + (long)(int)uVar10 * 8);
      }
      uVar9 = (**(code **)*param_1)(param_1,&local_70);
      if ((uVar9 & 1) != 0) {
        return;
      }
      uVar11 = uVar2;
      if (uVar2 <= *(ushort *)(lVar7 + 0x11f2)) {
        uVar11 = (uint)*(ushort *)(lVar7 + 0x11f2);
      }
      uVar10 = uVar2;
      do {
        while( true ) {
          if (uVar11 == uVar10) {
            uVar10 = uVar2 + 1;
            goto LAB_02a80594;
          }
          uVar4 = (uVar10 + 1 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x11f0);
          if (uVar4 < *(uint *)(lVar7 + 0x11d0)) break;
          uVar10 = uVar10 + 1;
        }
        uVar10 = uVar10 + 1;
      } while (*(long *)(*(long *)(lVar7 + 0x11d8) + (long)(int)uVar4 * 8) == 0);
LAB_02a80594:
    } while ((uint)uVar1 != (uVar10 & 0xffff));
  }
  return;
}

