
/* WARNING: Removing unreachable block (ram,0x0131cbe0) */

void FUN_0131c950(undefined8 *param_1)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  uint *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  char cVar13;
  ulong uVar14;
  int *piVar15;
  undefined **local_70;
  undefined8 local_68;
  
  lVar8 = DAT_0519d040;
  puVar7 = PTR_DAT_04bbbe00;
  uVar10 = (uint)*(ushort *)(DAT_0519d040 + 0x1168);
  uVar1 = *(short *)(DAT_0519d040 + 0x116a) + 1;
  if (*(ushort *)(DAT_0519d040 + 0x1168) != uVar1) {
    do {
      uVar2 = uVar10 & 0xffff;
      uVar10 = uVar2 - *(ushort *)(lVar8 + 0x1168);
      if (((uVar10 < *(uint *)(lVar8 + 0x1148)) &&
          (puVar12 = *(uint **)(*(long *)(lVar8 + 0x1150) + (long)(int)uVar10 * 8),
          puVar12 != (uint *)0x0)) || (puVar12 = &DAT_0518b140, (DAT_0518b148 & 1) != 0)) {
        uVar10 = *puVar12;
      }
      else {
        iVar9 = __cxa_guard_acquire(&DAT_0518b148);
        if (iVar9 != 0) {
          DAT_0518b140 = 0;
          __cxa_guard_release(&DAT_0518b148);
        }
        puVar12 = &DAT_0518b140;
        uVar10 = DAT_0518b140;
      }
      if (uVar10 != 0) {
        cVar13 = DAT_0516028c;
        do {
          puVar6 = PTR_DAT_04bbbdf8;
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *puVar6 = 1;
            uVar10 = *puVar12;
          }
          else {
            uVar11 = *(uint *)puVar7;
            if (-1 < (int)uVar11) {
              if ((ushort *)((ulong)uVar11 + (long)puVar12) != (ushort *)0x0) {
                uVar10 = (uint)*(ushort *)((ulong)uVar11 + (long)puVar12);
                goto LAB_0131cb48;
              }
              break;
            }
            if (uVar11 != 0xffffffff) break;
          }
          puVar5 = (uint *)(ulong)uVar10;
          uVar10 = 0;
          if ((puVar5 == (uint *)0x0) || (uVar10 = 0, puVar12 == puVar5)) goto LAB_0131cb48;
          lVar3 = 0xc;
          if (*(char *)((long)puVar12 + (10 - (long)puVar5)) != '\0') {
            lVar3 = 0x1c;
          }
          lVar3 = (long)puVar12 + (lVar3 - (long)puVar5);
          uVar10 = 0;
          if (lVar3 == 0) goto LAB_0131cb48;
          uVar14 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar5));
          *(undefined4 *)puVar7 = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar15 = (int *)(lVar3 + 4);
          while (piVar15[-1] != 0x54706054) {
            piVar15 = piVar15 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_0131cb44;
          }
          iVar9 = 0;
          if (*piVar15 != -1) {
            iVar9 = *piVar15;
          }
          *(int *)puVar7 = iVar9;
          uVar10 = *puVar12;
          if (uVar10 == 0) break;
        } while( true );
      }
LAB_0131cb44:
      uVar10 = 0;
LAB_0131cb48:
      local_68 = 0;
      local_70 = &PTR_LAB_0498df00;
      uVar10 = uVar10 - *(ushort *)(DAT_0519d040 + 0x1168);
      if (uVar10 < *(uint *)(DAT_0519d040 + 0x1148)) {
        local_68 = *(undefined8 *)(*(long *)(DAT_0519d040 + 0x1150) + (long)(int)uVar10 * 8);
      }
      (**(code **)*param_1)(param_1,&local_70);
      uVar11 = uVar2;
      if (uVar2 <= *(ushort *)(lVar8 + 0x116a)) {
        uVar11 = (uint)*(ushort *)(lVar8 + 0x116a);
      }
      uVar10 = uVar2;
      do {
        while( true ) {
          if (uVar11 == uVar10) {
            uVar10 = uVar2 + 1;
            goto LAB_0131c9e4;
          }
          uVar4 = (uVar10 + 1 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1168);
          if (uVar4 < *(uint *)(lVar8 + 0x1148)) break;
          uVar10 = uVar10 + 1;
        }
        uVar10 = uVar10 + 1;
      } while (*(long *)(*(long *)(lVar8 + 0x1150) + (long)(int)uVar4 * 8) == 0);
LAB_0131c9e4:
    } while ((uint)uVar1 != (uVar10 & 0xffff));
  }
  return;
}

