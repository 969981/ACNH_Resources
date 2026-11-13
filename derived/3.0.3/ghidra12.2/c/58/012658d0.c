
/* WARNING: Removing unreachable block (ram,0x01265b60) */

undefined2 FUN_012658d0(uint *param_1)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  char cVar11;
  undefined2 uVar12;
  uint *puVar13;
  int *piVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  char *pcVar18;
  undefined8 *puVar19;
  ulong uVar20;
  undefined2 local_70 [32];
  
  puVar5 = PTR_DAT_04bbbd80;
  lVar15 = *(long *)PTR_DAT_04bb27a8;
  uVar8 = (uint)*(ushort *)(lVar15 + 0xb90);
  uVar1 = *(short *)(lVar15 + 0xb92) + 1;
  if (*(ushort *)(lVar15 + 0xb90) != uVar1) {
    uVar20 = 0;
    puVar7 = (uint *)PTR_DAT_04bbbd58;
    puVar17 = (uint *)PTR_DAT_04bbbd78;
    pcVar18 = PTR_DAT_04bbbd60;
    puVar19 = (undefined8 *)PTR_DAT_04bbbd68;
    do {
      uVar2 = uVar8 & 0xffff;
      uVar8 = uVar2 - *(ushort *)(lVar15 + 0xb90);
      if (((*(uint *)(lVar15 + 0xb70) <= uVar8) ||
          (puVar10 = *(uint **)(*(long *)(lVar15 + 0xb78) + (long)(int)uVar8 * 8),
          puVar10 == (uint *)0x0)) && (puVar10 = puVar17, (*puVar5 & 1) == 0)) {
        iVar6 = __cxa_guard_acquire(puVar5);
        puVar10 = (uint *)PTR_DAT_04bbbd78;
        if (iVar6 != 0) {
          *(undefined4 *)PTR_DAT_04bbbd78 = 0;
          __cxa_guard_release(puVar5);
        }
        puVar7 = (uint *)PTR_DAT_04bbbd58;
        puVar17 = puVar10;
        pcVar18 = PTR_DAT_04bbbd60;
        puVar19 = (undefined8 *)PTR_DAT_04bbbd68;
      }
      uVar8 = *puVar10;
      if (uVar8 == 0 || puVar10 == (uint *)(ulong)uVar8) {
LAB_012659ac:
        uVar8 = 0;
      }
      else {
        puVar13 = (uint *)((long)puVar10 - (long)(ulong)uVar8);
        uVar8 = 0;
        if (*puVar13 != 0) {
          uVar8 = puVar13[1];
          if ((uVar8 != 0) && ((ulong)(ushort)puVar13[2] != 0)) {
            lVar3 = 0xc;
            if (*(char *)((long)puVar13 + 10) != '\0') {
              lVar3 = 0x1c;
            }
            lVar3 = (long)puVar13 + lVar3 + (ulong)(ushort)puVar13[2] * 8;
            if (lVar3 != 0) {
              uVar9 = 0;
              if ((ulong)uVar8 != 0) {
                uVar9 = (uint)((ulong)((long)puVar10 - lVar3) / (ulong)uVar8);
              }
              if (*puVar13 <= uVar9) {
                uVar9 = 0xffffffff;
              }
              if ((uVar9 < *puVar7) &&
                 (uVar8 = (uint)*(ushort *)(*(long *)(puVar7 + 2) + (long)(int)uVar9 * 2),
                 uVar8 < 0x20)) goto LAB_012659b0;
            }
          }
          goto LAB_012659ac;
        }
      }
LAB_012659b0:
      if (uVar8 == *param_1) {
        if (0x1f < uVar20) goto LAB_01265c08;
        if (*puVar10 == 0) {
LAB_01265b00:
          uVar12 = 0;
        }
        else {
          cVar11 = *pcVar18;
          do {
            if (cVar11 == '\0') {
              cVar11 = '\x01';
              *puVar19 = 0xffffffffffffffff;
              puVar19[1] = 0xffffffffffffffff;
              *pcVar18 = '\x01';
            }
            else {
              uVar8 = *(uint *)(puVar19 + 1);
              if (-1 < (int)uVar8) {
                if ((undefined2 *)((ulong)uVar8 + (long)puVar10) == (undefined2 *)0x0)
                goto LAB_01265b00;
                uVar12 = *(undefined2 *)((ulong)uVar8 + (long)puVar10);
                goto LAB_01265b04;
              }
              if (uVar8 != 0xffffffff) goto LAB_01265b00;
            }
            puVar13 = (uint *)(ulong)*puVar10;
            uVar12 = 0;
            if ((*puVar10 == 0) || (puVar10 == puVar13)) goto LAB_01265b04;
            lVar3 = 0xc;
            if (*(char *)((long)puVar10 + (10 - (long)puVar13)) != '\0') {
              lVar3 = 0x1c;
            }
            lVar3 = (long)puVar10 + (lVar3 - (long)puVar13);
            if (lVar3 == 0) goto LAB_01265b00;
            uVar16 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar13));
            *(undefined4 *)(puVar19 + 1) = 0xfffffffe;
            uVar12 = 0;
            if (uVar16 == 0) goto LAB_01265b04;
            piVar14 = (int *)(lVar3 + 4);
            while (piVar14[-1] != 0x54706054) {
              piVar14 = piVar14 + 2;
              uVar16 = uVar16 - 1;
              if (uVar16 == 0) {
                uVar12 = 0;
                goto LAB_01265b04;
              }
            }
            iVar6 = 0;
            if (*piVar14 != -1) {
              iVar6 = *piVar14;
            }
            *(int *)(puVar19 + 1) = iVar6;
          } while (*puVar10 != 0);
          uVar12 = 0;
        }
LAB_01265b04:
        local_70[uVar20] = uVar12;
        uVar20 = uVar20 + 1;
      }
      uVar9 = uVar2;
      if (uVar2 <= *(ushort *)(lVar15 + 0xb92)) {
        uVar9 = (uint)*(ushort *)(lVar15 + 0xb92);
      }
      uVar8 = uVar2;
      do {
        while( true ) {
          if (uVar9 == uVar8) {
            uVar8 = uVar2 + 1;
            goto LAB_01265964;
          }
          uVar4 = (uVar8 + 1 & 0xffff) - (uint)*(ushort *)(lVar15 + 0xb90);
          if (uVar4 < *(uint *)(lVar15 + 0xb70)) break;
          uVar8 = uVar8 + 1;
        }
        uVar8 = uVar8 + 1;
      } while (*(long *)(*(long *)(lVar15 + 0xb78) + (long)(int)uVar4 * 8) == 0);
LAB_01265964:
    } while ((uint)uVar1 != (uVar8 & 0xffff));
    if (uVar20 != 0) {
LAB_01265c08:
      uVar8 = nn::os::GetSystemTick();
      uVar2 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
      uVar8 = uVar2 ^ uVar2 * 0x800;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 2;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 3;
      uVar2 = (uVar2 ^ uVar2 >> 0x1e) * 0x6c078965 + 4;
      uVar20 = (uVar8 >> 8 ^ uVar2 >> 0x13 ^ uVar8 ^ uVar2) * uVar20;
      uVar16 = uVar20 >> 0x20;
      if (uVar20 >> 0x25 != 0) {
        uVar16 = 0;
      }
      return local_70[uVar16];
    }
  }
  return 0;
}

