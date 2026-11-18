
/* WARNING: Removing unreachable block (ram,0x0376ee44) */

undefined8 FUN_0376ee00(long param_1,long param_2)

{
  long lVar1;
  void *pvVar2;
  ushort uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  ulong uVar8;
  int *piVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  uint *puVar15;
  char cVar16;
  void *pvVar17;
  uint *puVar18;
  void *pvVar19;
  
  lVar10 = *(long *)PTR_DAT_04bb46b0;
  if (lVar10 == 0) {
    return 0;
  }
  if (((*(byte *)(lVar10 + 0x50d) ^ 0xff) & 6) != 0) {
    return 0;
  }
  lVar10 = (**(code **)(**(long **)(*(long *)(lVar10 + 0x10) + 0x188) + 0x38))();
  if (lVar10 == 0) {
    return 0;
  }
  if (*(long **)(lVar10 + 0x36620) == (long *)0x0) {
    uVar8 = 0;
  }
  else {
    puVar7 = (undefined8 *)**(long **)(lVar10 + 0x36620);
    uVar8 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      uVar8 = (**(code **)*puVar7)();
    }
  }
  cVar16 = *(char *)(*(long *)(lVar10 + 0x36608) + *(long *)(lVar10 + 0x36600));
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar10 + 0x36620) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x36620) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if (cVar16 != '\x01') {
    return 0;
  }
  if ((*(long *)PTR_DAT_04bb27f8 != 0) && (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x18) == 1)) {
    return 0;
  }
  if ((*(long **)(lVar10 + 0x36658) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar10 + 0x36658), puVar7 == (undefined8 *)0x0)) {
    uVar8 = 0;
  }
  else {
    uVar8 = (**(code **)*puVar7)();
    uVar8 = uVar8 & 0xffffffff;
  }
  puVar6 = PTR_DAT_04bc0678;
  puVar5 = PTR_DAT_04bc0670;
  puVar4 = PTR_DAT_04bb4958;
  lVar11 = *(long *)PTR_DAT_04bb4958;
  if (lVar11 == 0) goto LAB_0376f3a8;
  uVar14 = (ulong)*(ushort *)(*(long *)(lVar10 + 0x36640) + *(long *)(lVar10 + 0x36638) + 0x48b0);
  if (uVar14 < 500) {
    uVar3 = *(ushort *)(lVar11 + uVar14 * 2 + 0x620);
    if ((int)*(uint *)(lVar11 + 0x1c0) < 1) {
      if ((((*(long *)(lVar11 + 0xb0) != 0) &&
           (puVar15 = *(uint **)(*(long *)(lVar11 + 0xb0) + 8), puVar15 != (uint *)0x0)) &&
          ((uVar12 = (uint)uVar3, *(uint *)(lVar11 + 200) <= uVar12 ||
           (*(char *)(*(long *)(lVar11 + 0xd0) + (ulong)uVar12) != '\0')))) &&
         (((uVar12 < *puVar15 && (puVar15[1] != 0)) && ((ushort)puVar15[2] != 0)))) {
        iVar13 = 0xc;
        if (*(char *)((long)puVar15 + 10) != '\0') {
          iVar13 = 0x1c;
        }
        puVar15 = (uint *)((ulong)(puVar15[1] * uVar12 + (uint)(ushort)puVar15[2] * 8 + iVar13) +
                          (long)puVar15);
        goto joined_r0x0376f140;
      }
    }
    else if ((uint)uVar3 < *(uint *)(lVar11 + 0x1c0)) {
      uVar12 = (uint)uVar3;
      if (*(uint *)(lVar11 + 0x1b0) <= uVar12) {
        uVar12 = 0;
      }
      puVar15 = *(uint **)(*(long *)(lVar11 + 0x1b8) + (ulong)uVar12 * 8);
joined_r0x0376f140:
      if (puVar15 != (uint *)0x0) {
        if (*puVar15 != 0) {
          cVar16 = *PTR_DAT_04bc0670;
          do {
            if (cVar16 == '\0') {
              cVar16 = '\x01';
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              *puVar5 = 1;
              *(undefined4 *)(puVar6 + 0x50) = 0xffffffff;
              *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x18) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x20) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x28) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x30) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x38) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x40) = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 0x48) = 0xffffffffffffffff;
            }
            else {
              uVar12 = *(uint *)(puVar6 + 0x48);
              if (-1 < (int)uVar12) {
                pvVar17 = (void *)((ulong)uVar12 + (long)puVar15);
                goto LAB_0376f07c;
              }
              if (uVar12 != 0xffffffff) break;
            }
            puVar18 = (uint *)(ulong)*puVar15;
            pvVar17 = (void *)0x0;
            if ((*puVar15 == 0) || (puVar15 == puVar18)) goto LAB_0376f07c;
            lVar1 = 0xc;
            if (*(char *)((long)puVar15 + (10 - (long)puVar18)) != '\0') {
              lVar1 = 0x1c;
            }
            lVar1 = (long)puVar15 + (lVar1 - (long)puVar18);
            if (lVar1 == 0) break;
            uVar14 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar18));
            *(undefined4 *)(puVar6 + 0x48) = 0xfffffffe;
            pvVar17 = (void *)0x0;
            if (uVar14 == 0) goto LAB_0376f07c;
            piVar9 = (int *)(lVar1 + 4);
            while (piVar9[-1] != 0x34c8eed5) {
              piVar9 = piVar9 + 2;
              uVar14 = uVar14 - 1;
              if (uVar14 == 0) {
                pvVar17 = (void *)0x0;
                goto LAB_0376f07c;
              }
            }
            iVar13 = 0;
            if (*piVar9 != -1) {
              iVar13 = *piVar9;
            }
            *(int *)(puVar6 + 0x48) = iVar13;
          } while (*puVar15 != 0);
        }
        pvVar17 = (void *)0x0;
LAB_0376f07c:
        pvVar19 = *(void **)(param_1 + 8);
        pvVar2 = *(void **)PTR_PTR_04bc0668;
        if (pvVar17 != (void *)0x0) {
          pvVar2 = pvVar17;
        }
        if (pvVar19 != pvVar2) {
          lVar11 = 0;
          do {
            if (*(char *)((long)pvVar2 + lVar11) == '\0') goto LAB_0376f154;
            if (*(char *)((long)pvVar2 + lVar11 + 1) == '\0') {
              lVar11 = lVar11 + 1;
              goto LAB_0376f154;
            }
            if (*(char *)((long)pvVar2 + lVar11 + 2) == '\0') {
              lVar11 = lVar11 + 2;
              goto LAB_0376f154;
            }
            lVar11 = lVar11 + 3;
          } while (lVar11 != 0x80001);
          lVar11 = 0;
LAB_0376f154:
          iVar13 = (int)lVar11;
          if (*(int *)(param_1 + 0x10) <= (int)lVar11) {
            iVar13 = *(int *)(param_1 + 0x10) + -1;
          }
          memcpy(pvVar19,pvVar2,(long)iVar13);
          *(undefined1 *)((long)pvVar19 + (long)iVar13) = 0;
          lVar11 = *(long *)puVar4;
        }
        if (lVar11 == 0) goto LAB_0376f3a8;
      }
    }
  }
  puVar5 = PTR_DAT_04bc0678;
  puVar4 = PTR_DAT_04bc0670;
  uVar14 = (ulong)*(ushort *)(*(long *)(lVar10 + 0x36640) + *(long *)(lVar10 + 0x36638) + 0x48b2);
  if (uVar14 < 500) {
    uVar3 = *(ushort *)(lVar11 + uVar14 * 2 + 0x620);
    if ((int)*(uint *)(lVar11 + 0x1c0) < 1) {
      if ((((*(long *)(lVar11 + 0xb0) == 0) ||
           (puVar15 = *(uint **)(*(long *)(lVar11 + 0xb0) + 8), puVar15 == (uint *)0x0)) ||
          ((uVar12 = (uint)uVar3, uVar12 < *(uint *)(lVar11 + 200) &&
           (*(char *)(*(long *)(lVar11 + 0xd0) + (ulong)uVar12) == '\0')))) ||
         (((*puVar15 <= uVar12 || (puVar15[1] == 0)) || ((ushort)puVar15[2] == 0))))
      goto LAB_0376f3a8;
      iVar13 = 0xc;
      if (*(char *)((long)puVar15 + 10) != '\0') {
        iVar13 = 0x1c;
      }
      puVar15 = (uint *)((ulong)(puVar15[1] * uVar12 + (uint)(ushort)puVar15[2] * 8 + iVar13) +
                        (long)puVar15);
    }
    else {
      if (*(uint *)(lVar11 + 0x1c0) <= (uint)uVar3) goto LAB_0376f3a8;
      uVar12 = (uint)uVar3;
      if (*(uint *)(lVar11 + 0x1b0) <= uVar12) {
        uVar12 = 0;
      }
      puVar15 = *(uint **)(*(long *)(lVar11 + 0x1b8) + (ulong)uVar12 * 8);
    }
    if (puVar15 != (uint *)0x0) {
      if (*puVar15 != 0) {
        cVar16 = *PTR_DAT_04bc0670;
        do {
          if (cVar16 == '\0') {
            cVar16 = '\x01';
            *(undefined8 *)puVar5 = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
            *puVar4 = 1;
            *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
            *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
          }
          else {
            uVar12 = *(uint *)(puVar5 + 0x48);
            if (-1 < (int)uVar12) {
              pvVar17 = (void *)((ulong)uVar12 + (long)puVar15);
              goto LAB_0376f2ac;
            }
            if (uVar12 != 0xffffffff) break;
          }
          puVar18 = (uint *)(ulong)*puVar15;
          pvVar17 = (void *)0x0;
          if ((*puVar15 == 0) || (puVar15 == puVar18)) goto LAB_0376f2ac;
          lVar11 = 0xc;
          if (*(char *)((long)puVar15 + (10 - (long)puVar18)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar15 + (lVar11 - (long)puVar18);
          if (lVar11 == 0) break;
          uVar14 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar18));
          *(undefined4 *)(puVar5 + 0x48) = 0xfffffffe;
          pvVar17 = (void *)0x0;
          if (uVar14 == 0) goto LAB_0376f2ac;
          piVar9 = (int *)(lVar11 + 4);
          while (piVar9[-1] != 0x34c8eed5) {
            piVar9 = piVar9 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) {
              pvVar17 = (void *)0x0;
              goto LAB_0376f2ac;
            }
          }
          iVar13 = 0;
          if (*piVar9 != -1) {
            iVar13 = *piVar9;
          }
          *(int *)(puVar5 + 0x48) = iVar13;
        } while (*puVar15 != 0);
      }
      pvVar17 = (void *)0x0;
LAB_0376f2ac:
      pvVar19 = *(void **)(param_2 + 8);
      pvVar2 = *(void **)PTR_PTR_04bc0668;
      if (pvVar17 != (void *)0x0) {
        pvVar2 = pvVar17;
      }
      if (pvVar19 != pvVar2) {
        lVar11 = 0;
        do {
          if (*(char *)((long)pvVar2 + lVar11) == '\0') goto LAB_0376f384;
          if (*(char *)((long)pvVar2 + lVar11 + 1) == '\0') {
            lVar11 = lVar11 + 1;
            goto LAB_0376f384;
          }
          if (*(char *)((long)pvVar2 + lVar11 + 2) == '\0') {
            lVar11 = lVar11 + 2;
            goto LAB_0376f384;
          }
          lVar11 = lVar11 + 3;
        } while (lVar11 != 0x80001);
        lVar11 = 0;
LAB_0376f384:
        iVar13 = (int)lVar11;
        if (*(int *)(param_2 + 0x10) <= (int)lVar11) {
          iVar13 = *(int *)(param_2 + 0x10) + -1;
        }
        memcpy(pvVar19,pvVar2,(long)iVar13);
        *(undefined1 *)((long)pvVar19 + (long)iVar13) = 0;
      }
    }
  }
LAB_0376f3a8:
  if ((((uVar8 & 1) != 0) && (*(long *)(lVar10 + 0x36658) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar10 + 0x36658) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return 1;
}

