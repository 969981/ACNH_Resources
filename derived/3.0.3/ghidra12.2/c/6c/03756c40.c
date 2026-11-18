
undefined2 FUN_03756c40(undefined8 *param_1,int *param_2,ulong param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  uint *puVar7;
  undefined2 uVar8;
  int *piVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  long lVar13;
  uint uVar14;
  char cVar15;
  
  puVar5 = PTR_DAT_04bb7f70;
  puVar4 = PTR_DAT_04bb7f68;
  lVar13 = *(long *)*param_1;
  uVar12 = *(uint *)(lVar13 + 0x1c0);
  if (((int)uVar12 < 1) &&
     (((*(long *)(lVar13 + 0xb0) == 0 ||
       (puVar7 = *(uint **)(*(long *)(lVar13 + 0xb0) + 8), puVar7 == (uint *)0x0)) ||
      (uVar12 = *puVar7, uVar12 == 0)))) {
    return 0;
  }
  uVar14 = -(uint)*(ushort *)(lVar13 + 0x1f8);
  if ((param_3 & 1) == 0) {
    if (*(uint *)(lVar13 + 0x1d8) <= uVar14) {
      return 0;
    }
    puVar7 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (ulong)*(ushort *)(lVar13 + 0x1f8) * -8);
    if (puVar7 == (uint *)0x0) {
      return 0;
    }
    uVar14 = 0;
    uVar8 = 0;
    cVar15 = *PTR_DAT_04bb7f68;
    do {
      iVar2 = *param_2;
      uVar10 = 0;
      if (*puVar7 != 0) {
        do {
          if (cVar15 != '\0') {
            uVar3 = *(uint *)(puVar5 + 0x14);
            if ((int)uVar3 < 0) {
              if (uVar3 == 0xffffffff) {
                uVar3 = *puVar7;
                if (uVar3 != 0) goto LAB_03756f4c;
                uVar10 = 0;
              }
              else {
LAB_03756fbc:
                uVar10 = 0;
              }
            }
            else {
              uVar10 = 0;
              if ((ushort *)((ulong)uVar3 + (long)puVar7) != (ushort *)0x0) {
                uVar10 = (uint)*(ushort *)((ulong)uVar3 + (long)puVar7);
              }
            }
            goto LAB_03756fc0;
          }
          cVar15 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar3 = *puVar7;
          uVar10 = 0;
          if (uVar3 == 0) goto LAB_03756fc0;
LAB_03756f4c:
          puVar11 = (uint *)(ulong)uVar3;
          if (puVar7 == puVar11) goto LAB_03756fbc;
          lVar13 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar7 + (lVar13 - (long)puVar11);
          if (lVar13 == 0) goto LAB_03756fbc;
          uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
          *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
          uVar10 = 0;
          if (uVar6 == 0) goto LAB_03756fc0;
          piVar9 = (int *)(lVar13 + 4);
          while (piVar9[-1] != 0x7500325b) {
            piVar9 = piVar9 + 2;
            uVar6 = uVar6 - 1;
            if (uVar6 == 0) {
              uVar10 = 0;
              goto LAB_03756fc0;
            }
          }
          iVar1 = 0;
          if (*piVar9 != -1) {
            iVar1 = *piVar9;
          }
          *(int *)(puVar5 + 0x14) = iVar1;
        } while (*puVar7 != 0);
        uVar10 = 0;
      }
LAB_03756fc0:
      if (iVar2 < (int)uVar10) {
        return uVar8;
      }
      if (*puVar7 != 0) {
        do {
          if (cVar15 == '\0') {
            cVar15 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            uVar10 = *puVar7;
          }
          else {
            uVar10 = *(uint *)(puVar5 + 0x10);
            if (-1 < (int)uVar10) {
              if ((undefined2 *)((ulong)uVar10 + (long)puVar7) != (undefined2 *)0x0) {
                uVar8 = *(undefined2 *)((ulong)uVar10 + (long)puVar7);
                goto LAB_037570a4;
              }
              break;
            }
            if (uVar10 != 0xffffffff) break;
            uVar10 = *puVar7;
          }
          if ((uVar10 == 0) || (puVar11 = (uint *)(ulong)uVar10, puVar7 == puVar11)) break;
          lVar13 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar7 + (lVar13 - (long)puVar11);
          uVar8 = 0;
          if (lVar13 == 0) goto LAB_037570a4;
          uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
          *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
          if (uVar6 == 0) break;
          piVar9 = (int *)(lVar13 + 4);
          while (piVar9[-1] != -0x59e976fd) {
            piVar9 = piVar9 + 2;
            uVar6 = uVar6 - 1;
            if (uVar6 == 0) goto LAB_037570a0;
          }
          iVar2 = 0;
          if (*piVar9 != -1) {
            iVar2 = *piVar9;
          }
          *(int *)(puVar5 + 0x10) = iVar2;
          if (*puVar7 == 0) break;
        } while( true );
      }
LAB_037570a0:
      uVar8 = 0;
LAB_037570a4:
      uVar14 = uVar14 + 1;
      if (uVar14 == uVar12) {
        return uVar8;
      }
      lVar13 = *(long *)*param_1;
      uVar10 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if (*(uint *)(lVar13 + 0x1d8) <= uVar10) {
        return 0;
      }
      puVar7 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar10 * 8);
    } while (puVar7 != (uint *)0x0);
  }
  else {
    if (*(uint *)(lVar13 + 0x1d8) <= uVar14) {
      return 0;
    }
    puVar7 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar14 * 8);
    if (puVar7 == (uint *)0x0) {
      return 0;
    }
    uVar14 = 0;
    uVar8 = 0;
    cVar15 = *PTR_DAT_04bb7f68;
    do {
      iVar2 = *param_2;
      uVar10 = 0;
      if (*puVar7 != 0) {
        do {
          if (cVar15 != '\0') {
            uVar3 = *(uint *)(puVar5 + 0x18);
            if ((int)uVar3 < 0) {
              if (uVar3 == 0xffffffff) {
                uVar3 = *puVar7;
                if (uVar3 != 0) goto LAB_03756d00;
                uVar10 = 0;
              }
              else {
LAB_03756d6c:
                uVar10 = 0;
              }
            }
            else {
              uVar10 = 0;
              if ((ushort *)((ulong)uVar3 + (long)puVar7) != (ushort *)0x0) {
                uVar10 = (uint)*(ushort *)((ulong)uVar3 + (long)puVar7);
              }
            }
            goto LAB_03756d70;
          }
          cVar15 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
          uVar3 = *puVar7;
          uVar10 = 0;
          if (uVar3 == 0) goto LAB_03756d70;
LAB_03756d00:
          puVar11 = (uint *)(ulong)uVar3;
          if (puVar7 == puVar11) goto LAB_03756d6c;
          lVar13 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar7 + (lVar13 - (long)puVar11);
          if (lVar13 == 0) goto LAB_03756d6c;
          uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
          *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
          uVar10 = 0;
          if (uVar6 == 0) goto LAB_03756d70;
          piVar9 = (int *)(lVar13 + 4);
          while (piVar9[-1] != 0x7813d35b) {
            piVar9 = piVar9 + 2;
            uVar6 = uVar6 - 1;
            if (uVar6 == 0) {
              uVar10 = 0;
              goto LAB_03756d70;
            }
          }
          iVar1 = 0;
          if (*piVar9 != -1) {
            iVar1 = *piVar9;
          }
          *(int *)(puVar5 + 0x18) = iVar1;
        } while (*puVar7 != 0);
        uVar10 = 0;
      }
LAB_03756d70:
      if (iVar2 < (int)uVar10) {
        return uVar8;
      }
      if (*puVar7 != 0) {
        do {
          if (cVar15 == '\0') {
            cVar15 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined4 *)(puVar5 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            uVar10 = *puVar7;
          }
          else {
            uVar10 = *(uint *)(puVar5 + 0x10);
            if (-1 < (int)uVar10) {
              if ((undefined2 *)((ulong)uVar10 + (long)puVar7) != (undefined2 *)0x0) {
                uVar8 = *(undefined2 *)((ulong)uVar10 + (long)puVar7);
                goto LAB_03756e54;
              }
              break;
            }
            if (uVar10 != 0xffffffff) break;
            uVar10 = *puVar7;
          }
          if ((uVar10 == 0) || (puVar11 = (uint *)(ulong)uVar10, puVar7 == puVar11)) break;
          lVar13 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
            lVar13 = 0x1c;
          }
          lVar13 = (long)puVar7 + (lVar13 - (long)puVar11);
          uVar8 = 0;
          if (lVar13 == 0) goto LAB_03756e54;
          uVar6 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
          *(undefined4 *)(puVar5 + 0x10) = 0xfffffffe;
          if (uVar6 == 0) break;
          piVar9 = (int *)(lVar13 + 4);
          while (piVar9[-1] != -0x59e976fd) {
            piVar9 = piVar9 + 2;
            uVar6 = uVar6 - 1;
            if (uVar6 == 0) goto LAB_03756e50;
          }
          iVar2 = 0;
          if (*piVar9 != -1) {
            iVar2 = *piVar9;
          }
          *(int *)(puVar5 + 0x10) = iVar2;
          if (*puVar7 == 0) break;
        } while( true );
      }
LAB_03756e50:
      uVar8 = 0;
LAB_03756e54:
      uVar14 = uVar14 + 1;
      if (uVar14 == uVar12) {
        return uVar8;
      }
      lVar13 = *(long *)*param_1;
      uVar10 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if (*(uint *)(lVar13 + 0x1d8) <= uVar10) {
        return 0;
      }
      puVar7 = *(uint **)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar10 * 8);
    } while (puVar7 != (uint *)0x0);
  }
  return 0;
}

