
/* WARNING: Removing unreachable block (ram,0x01316fd0) */

void FUN_01316d20(undefined8 *param_1,undefined4 param_2)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  long lVar11;
  char cVar12;
  ulong uVar13;
  uint *puVar14;
  int *piVar15;
  undefined **local_78;
  long local_70;
  undefined4 local_68;
  
  lVar6 = DAT_0519d040;
  puVar5 = PTR_DAT_04bbbde0;
  uVar8 = (uint)*(ushort *)(DAT_0519d040 + 0x408);
  uVar1 = *(short *)(DAT_0519d040 + 0x40a) + 1;
  if (*(ushort *)(DAT_0519d040 + 0x408) != uVar1) {
    do {
      uVar2 = uVar8 & 0xffff;
      uVar8 = uVar2 - *(ushort *)(lVar6 + 0x408);
      if (((uVar8 < *(uint *)(lVar6 + 1000)) &&
          (puVar10 = *(uint **)(*(long *)(lVar6 + 0x3f0) + (long)(int)uVar8 * 8),
          puVar10 != (uint *)0x0)) || (puVar10 = (uint *)&DAT_05189950, (DAT_05189958 & 1) != 0)) {
        if (*puVar10 != 0) goto LAB_01316e00;
LAB_01316f24:
        uVar8 = 0;
      }
      else {
        iVar7 = __cxa_guard_acquire(&DAT_05189958);
        if (iVar7 != 0) {
          DAT_05189950 = 0;
          __cxa_guard_release(&DAT_05189958);
        }
        puVar10 = (uint *)&DAT_05189950;
        if (DAT_05189950 == 0) goto LAB_01316f24;
LAB_01316e00:
        cVar12 = DAT_05160171;
        do {
          puVar4 = PTR_DAT_04bbbdd8;
          if (cVar12 == '\0') {
            cVar12 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0xa0) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x98) = 0xffffffffffffffff;
          }
          else {
            uVar8 = *(uint *)(puVar5 + 0x1c);
            if (-1 < (int)uVar8) {
              if ((ushort *)((ulong)uVar8 + (long)puVar10) == (ushort *)0x0) goto LAB_01316f24;
              uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)puVar10);
              goto LAB_01316f28;
            }
            if (uVar8 != 0xffffffff) goto LAB_01316f24;
          }
          puVar14 = (uint *)(ulong)*puVar10;
          uVar8 = 0;
          if ((*puVar10 == 0) || (puVar10 == puVar14)) goto LAB_01316f28;
          lVar11 = 0xc;
          if (*(char *)((long)puVar10 + (10 - (long)puVar14)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar10 + (lVar11 - (long)puVar14);
          if (lVar11 == 0) goto LAB_01316f24;
          uVar13 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar14));
          *(undefined4 *)(puVar5 + 0x1c) = 0xfffffffe;
          uVar8 = 0;
          if (uVar13 == 0) goto LAB_01316f28;
          piVar15 = (int *)(lVar11 + 4);
          while (piVar15[-1] != 0x54706054) {
            piVar15 = piVar15 + 2;
            uVar13 = uVar13 - 1;
            if (uVar13 == 0) {
              uVar8 = 0;
              goto LAB_01316f28;
            }
          }
          iVar7 = 0;
          if (*piVar15 != -1) {
            iVar7 = *piVar15;
          }
          *(int *)(puVar5 + 0x1c) = iVar7;
        } while (*puVar10 != 0);
        uVar8 = 0;
      }
LAB_01316f28:
      local_78 = &PTR_LAB_0498dc80;
      local_70 = 0;
      uVar8 = uVar8 - *(ushort *)(DAT_0519d040 + 0x408);
      if ((uVar8 < *(uint *)(DAT_0519d040 + 1000)) &&
         (lVar11 = *(long *)(*(long *)(DAT_0519d040 + 0x3f0) + (long)(int)uVar8 * 8), lVar11 != 0))
      {
        local_70 = lVar11;
      }
      local_68 = param_2;
      (**(code **)*param_1)(param_1,&local_78);
      uVar9 = uVar2;
      if (uVar2 <= *(ushort *)(lVar6 + 0x40a)) {
        uVar9 = (uint)*(ushort *)(lVar6 + 0x40a);
      }
      uVar8 = uVar2;
      do {
        while( true ) {
          if (uVar9 == uVar8) {
            uVar8 = uVar2 + 1;
            goto LAB_01316db4;
          }
          uVar3 = (uVar8 + 1 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x408);
          if (uVar3 < *(uint *)(lVar6 + 1000)) break;
          uVar8 = uVar8 + 1;
        }
        uVar8 = uVar8 + 1;
      } while (*(long *)(*(long *)(lVar6 + 0x3f0) + (long)(int)uVar3 * 8) == 0);
LAB_01316db4:
    } while ((uint)uVar1 != (uVar8 & 0xffff));
  }
  return;
}

