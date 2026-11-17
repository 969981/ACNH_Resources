
/* WARNING: Removing unreachable block (ram,0x02acd754) */

void FUN_02acd4a0(undefined8 *param_1)

{
  ushort uVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  long lVar5;
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
  
  lVar8 = DAT_05635578;
  puVar7 = PTR_DAT_04bc4618;
  uVar10 = (uint)*(ushort *)(DAT_05635578 + 0x3f0);
  uVar1 = *(short *)(DAT_05635578 + 0x3f2) + 1;
  if (*(ushort *)(DAT_05635578 + 0x3f0) != uVar1) {
    do {
      uVar2 = uVar10 & 0xffff;
      uVar10 = uVar2 - *(ushort *)(lVar8 + 0x3f0);
      if (((uVar10 < *(uint *)(lVar8 + 0x3d0)) &&
          (puVar12 = *(uint **)(*(long *)(lVar8 + 0x3d8) + (long)(int)uVar10 * 8),
          puVar12 != (uint *)0x0)) || (puVar12 = &DAT_056122e4, (DAT_056122e8 & 1) != 0)) {
        uVar10 = *puVar12;
      }
      else {
        iVar9 = __cxa_guard_acquire(&DAT_056122e8);
        if (iVar9 != 0) {
          DAT_056122e4 = 0;
          __cxa_guard_release(&DAT_056122e8);
        }
        puVar12 = &DAT_056122e4;
        uVar10 = DAT_056122e4;
      }
      if (uVar10 != 0) {
        cVar13 = DAT_0560abf0;
        while( true ) {
          puVar6 = PTR_DAT_04bc4610;
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar7 = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 8) = 0xffffffffffffffff;
            *puVar6 = 1;
            *(undefined8 *)(puVar7 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar7 + 0x88) = 0xffffffffffffffff;
          }
          else {
            uVar10 = *(uint *)(puVar7 + 0x44);
            if (-1 < (int)uVar10) {
              if ((ushort *)((ulong)uVar10 + (long)puVar12) != (ushort *)0x0) {
                local_68 = 0;
                uVar10 = (uint)*(ushort *)((ulong)uVar10 + (long)puVar12);
                if (((uVar10 != 0) && (*(long *)(DAT_05635578 + 0x2a8) != 0)) &&
                   (*(long *)(*(long *)(DAT_05635578 + 0x2a8) + 8) != 0)) {
                  uVar10 = uVar10 - *(ushort *)(DAT_05635578 + 0x3f0);
                  if (uVar10 < *(uint *)(DAT_05635578 + 0x3d0)) {
                    local_68 = *(undefined8 *)
                                (*(long *)(DAT_05635578 + 0x3d8) + (long)(int)uVar10 * 8);
                  }
                  else {
                    local_68 = 0;
                  }
                }
                goto LAB_02acd6ec;
              }
              break;
            }
            if (uVar10 != 0xffffffff) break;
          }
          lVar5 = (long)puVar12 - (ulong)*puVar12;
          if ((*puVar12 == 0) || (lVar5 == 0)) break;
          lVar3 = 0xc;
          if (*(char *)(lVar5 + 10) != '\0') {
            lVar3 = 0x1c;
          }
          if (lVar3 + lVar5 == 0) break;
          uVar14 = (ulong)*(ushort *)(lVar5 + 8);
          *(undefined4 *)(puVar7 + 0x44) = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar15 = (int *)(lVar3 + lVar5 + 4);
          while (piVar15[-1] != 0x54706054) {
            piVar15 = piVar15 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_02acd6e0;
          }
          iVar9 = 0;
          if (*piVar15 != -1) {
            iVar9 = *piVar15;
          }
          *(int *)(puVar7 + 0x44) = iVar9;
          if (*puVar12 == 0) break;
        }
      }
LAB_02acd6e0:
      local_68 = 0;
LAB_02acd6ec:
      local_70 = &PTR_LAB_04a9ea08;
      (**(code **)*param_1)(param_1,&local_70);
      uVar11 = uVar2;
      if (uVar2 <= *(ushort *)(lVar8 + 0x3f2)) {
        uVar11 = (uint)*(ushort *)(lVar8 + 0x3f2);
      }
      uVar10 = uVar2;
      do {
        while( true ) {
          if (uVar11 == uVar10) {
            uVar10 = uVar2 + 1;
            goto LAB_02acd534;
          }
          uVar4 = (uVar10 + 1 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x3f0);
          if (uVar4 < *(uint *)(lVar8 + 0x3d0)) break;
          uVar10 = uVar10 + 1;
        }
        uVar10 = uVar10 + 1;
      } while (*(long *)(*(long *)(lVar8 + 0x3d8) + (long)(int)uVar4 * 8) == 0);
LAB_02acd534:
    } while ((uint)uVar1 != (uVar10 & 0xffff));
  }
  return;
}

