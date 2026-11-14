
void FUN_016beae0(long param_1,undefined2 *param_2)

{
  long lVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined2 uVar5;
  ushort uVar6;
  uint uVar7;
  uint *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  uint *puVar12;
  char cVar13;
  ulong uVar14;
  int *piVar15;
  void *__dest;
  void *__src;
  long *plVar16;
  uint local_28;
  undefined4 local_24;
  
  if (*(char *)(param_2 + 1) == '\0') {
    if (*(char *)(param_1 + 0x12) != '\0') {
      *(undefined1 *)(param_1 + 0x12) = 0;
    }
  }
  else {
    uVar5 = *param_2;
    if (*(char *)(param_1 + 0x12) == '\0') {
      *(undefined1 *)(param_1 + 0x12) = 1;
    }
    *(undefined2 *)(param_1 + 0x10) = uVar5;
  }
  __dest = *(void **)(param_1 + 0x20);
  plVar16 = (long *)(param_2 + 4);
  (**(code **)(*plVar16 + 0x18))(plVar16);
  __src = *(void **)(param_2 + 8);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_2 + 4) + 0x18))(plVar16);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 8) + lVar11) == '\0') goto LAB_016bebac;
      lVar1 = *(long *)(param_2 + 8) + lVar11;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_016bebac;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_016bebac;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_016bebac:
    iVar2 = (int)lVar11;
    if (*(int *)(param_1 + 0x28) <= (int)lVar11) {
      iVar2 = *(int *)(param_1 + 0x28) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(undefined2 *)(param_1 + 0x38) = param_2[0x14];
  *(undefined1 *)(param_1 + 0x3a) = *(undefined1 *)(param_2 + 0x15);
  *(undefined1 *)(param_1 + 0x3b) = *(undefined1 *)((long)param_2 + 0x2b);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_2 + 0x16);
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_2 + 0x18);
  puVar10 = PTR_DAT_04bbc450;
  puVar9 = PTR_DAT_04bbc448;
  if (*(char *)(param_1 + 0x12) != '\0') {
    lVar11 = *(long *)PTR_DAT_04bb4930;
    uVar7 = (uint)*(ushort *)(param_1 + 0x10) - (uint)*(ushort *)(lVar11 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar11 + 0x1d8)) &&
       (puVar12 = *(uint **)(*(long *)(lVar11 + 0x1e0) + (long)(int)uVar7 * 8),
       puVar12 != (uint *)0x0)) {
      uVar7 = *puVar12;
      if (uVar7 != 0) {
        cVar13 = *PTR_DAT_04bbc448;
        do {
          if (cVar13 == '\0') {
            cVar13 = '\x01';
            *(undefined8 *)puVar10 = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
            *puVar9 = 1;
            *(undefined4 *)(puVar10 + 0x20) = 0xffffffff;
            *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar10 + 0x18) = 0xffffffffffffffff;
            uVar7 = *puVar12;
          }
          else {
            uVar4 = *(uint *)puVar10;
            if (-1 < (int)uVar4) {
              if (((ushort *)((ulong)uVar4 + (long)puVar12) != (ushort *)0x0) &&
                 (uVar6 = *(ushort *)((ulong)uVar4 + (long)puVar12), uVar6 != 0xffff)) {
                local_28 = (uint)uVar6;
                local_24 = 0;
                FUN_0277d4ac(&local_28);
                *(uint *)(param_1 + 0x4c) = local_28;
                *(undefined4 *)(param_1 + 0x50) = local_24;
                goto LAB_016bed50;
              }
              break;
            }
            if (uVar4 != 0xffffffff) break;
          }
          puVar8 = (uint *)(ulong)uVar7;
          if ((puVar8 == (uint *)0x0) || (puVar12 == puVar8)) break;
          lVar11 = 0xc;
          if (*(char *)((long)puVar12 + (10 - (long)puVar8)) != '\0') {
            lVar11 = 0x1c;
          }
          lVar11 = (long)puVar12 + (lVar11 - (long)puVar8);
          if (lVar11 == 0) break;
          uVar14 = (ulong)*(ushort *)((long)puVar12 + (8 - (long)puVar8));
          *(undefined4 *)puVar10 = 0xfffffffe;
          if (uVar14 == 0) break;
          piVar15 = (int *)(lVar11 + 4);
          while (piVar15[-1] != -0x59d9ee3) {
            piVar15 = piVar15 + 2;
            uVar14 = uVar14 - 1;
            if (uVar14 == 0) goto LAB_016bed40;
          }
          iVar2 = 0;
          if (*piVar15 != -1) {
            iVar2 = *piVar15;
          }
          *(int *)puVar10 = iVar2;
          uVar7 = *puVar12;
          if (uVar7 == 0) break;
        } while( true );
      }
LAB_016bed40:
      uVar3 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
      *(undefined4 *)(param_1 + 0x4c) = *(undefined4 *)PTR_DAT_04bb37e0;
      *(undefined4 *)(param_1 + 0x50) = uVar3;
    }
  }
LAB_016bed50:
  FUN_016bed70(param_1);
  return;
}

