
void FUN_016ce250(ushort *param_1,ushort param_2)

{
  ushort *__dest;
  ushort *__src;
  undefined4 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  char cVar9;
  ushort uVar10;
  ushort *puVar11;
  ulong uVar12;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  uint local_38;
  undefined4 local_34;
  
  __dest = param_1 + 0xe;
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *(ushort **)(param_1 + 8) = __dest;
  param_1[0xc] = 8;
  param_1[0xd] = 0;
  *(undefined1 *)((long)param_1 + 0x23) = 0;
  if (__dest != (ushort *)&DAT_0407ebb1) {
    *(undefined1 *)__dest = 0;
  }
  *(undefined **)(param_1 + 4) = PTR_DAT_04bb3768 + 0x10;
  puVar2 = PTR_DAT_04bb37e0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  uVar1 = *(undefined4 *)(puVar2 + 4);
  *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)puVar2;
  *(undefined4 *)(param_1 + 0x16) = uVar1;
  lVar8 = *(long *)PTR_DAT_04bb4930;
  uVar6 = (uint)param_2 - (uint)*(ushort *)(lVar8 + 0x1f8);
  if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
     (puVar15 = *(uint **)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8), puVar15 != (uint *)0x0)
     ) {
    *param_1 = param_2;
    *(undefined1 *)(param_1 + 1) = 1;
    puVar4 = PTR_DAT_04bbc450;
    puVar2 = PTR_DAT_04bbc448;
    if (*puVar15 != 0) {
      cVar9 = *PTR_DAT_04bbc448;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar2 = 1;
          *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar6 = *(uint *)(puVar4 + 0x14);
          if (-1 < (int)uVar6) {
            puVar11 = (ushort *)((ulong)uVar6 + (long)puVar15);
            goto LAB_016ce3d8;
          }
          if (uVar6 != 0xffffffff) break;
        }
        puVar13 = (uint *)(ulong)*puVar15;
        puVar11 = (ushort *)0x0;
        if ((*puVar15 == 0) || (puVar15 == puVar13)) goto LAB_016ce3d8;
        lVar8 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar13)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar15 + (lVar8 - (long)puVar13);
        if (lVar8 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar13));
        *(undefined4 *)(puVar4 + 0x14) = 0xfffffffe;
        puVar11 = (ushort *)0x0;
        if (uVar12 == 0) goto LAB_016ce3d8;
        piVar14 = (int *)(lVar8 + 4);
        while (piVar14[-1] != -0x54426bb7) {
          piVar14 = piVar14 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            puVar11 = (ushort *)0x0;
            goto LAB_016ce3d8;
          }
        }
        iVar7 = 0;
        if (*piVar14 != -1) {
          iVar7 = *piVar14;
        }
        *(int *)(puVar4 + 0x14) = iVar7;
      } while (*puVar15 != 0);
    }
    puVar11 = (ushort *)0x0;
LAB_016ce3d8:
    __src = *(ushort **)PTR_PTR_04bbddd8;
    if (puVar11 != (ushort *)0x0) {
      __src = puVar11;
    }
    if (__dest != __src) {
      lVar8 = 0;
      do {
        if (*(char *)((long)__src + lVar8) == '\0') goto LAB_016ce43c;
        if (*(char *)((long)__src + lVar8 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_016ce43c;
        }
        if (*(char *)((long)__src + lVar8 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_016ce43c;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_016ce43c:
      iVar7 = (int)lVar8;
      if (6 < iVar7) {
        iVar7 = 7;
      }
      memcpy(__dest,__src,(long)iVar7);
      *(undefined1 *)((long)__dest + (long)iVar7) = 0;
    }
    if (*puVar15 != 0) {
      cVar9 = *puVar2;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar2 = 1;
          *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar6 = *(uint *)(puVar4 + 8);
          if (-1 < (int)uVar6) {
            if ((ushort *)((ulong)uVar6 + (long)puVar15) != (ushort *)0x0) {
              uVar10 = *(ushort *)((ulong)uVar6 + (long)puVar15);
              goto LAB_016ce538;
            }
            break;
          }
          if (uVar6 != 0xffffffff) break;
        }
        puVar13 = (uint *)(ulong)*puVar15;
        uVar10 = 0xffff;
        if ((*puVar15 == 0) || (puVar15 == puVar13)) goto LAB_016ce538;
        lVar8 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar13)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar15 + (lVar8 - (long)puVar13);
        if (lVar8 == 0) break;
        uVar12 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar13));
        *(undefined4 *)(puVar4 + 8) = 0xfffffffe;
        if (uVar12 == 0) break;
        piVar14 = (int *)(lVar8 + 4);
        while (piVar14[-1] != -0x787186c2) {
          piVar14 = piVar14 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) goto LAB_016ce534;
        }
        iVar7 = 0;
        if (*piVar14 != -1) {
          iVar7 = *piVar14;
        }
        *(int *)(puVar4 + 8) = iVar7;
        if (*puVar15 == 0) break;
      } while( true );
    }
LAB_016ce534:
    uVar10 = 0xffff;
LAB_016ce538:
    local_38 = (uint)uVar10;
    local_34 = 0;
    FUN_0277d4ac(&local_38);
    puVar3 = PTR_DAT_04bb43c0;
    lVar8 = *(long *)PTR_DAT_04bb43c0;
    uVar6 = FUN_0277d6c4(&local_38);
    if (*(long *)puVar3 != 0) {
      lVar8 = *(long *)(lVar8 + 0x57e58);
      uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
      if ((uVar6 < *(uint *)(lVar8 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
        *(uint *)(param_1 + 0x14) = local_38;
        *(undefined4 *)(param_1 + 0x16) = local_34;
      }
    }
    if (*puVar15 == 0) {
LAB_016ce680:
      bVar5 = false;
    }
    else {
      cVar9 = *puVar2;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar2 = 1;
          *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
        }
        else {
          uVar6 = *(uint *)(puVar4 + 0x20);
          if (-1 < (int)uVar6) {
            if ((char *)((ulong)uVar6 + (long)puVar15) == (char *)0x0) goto LAB_016ce680;
            bVar5 = *(char *)((ulong)uVar6 + (long)puVar15) != '\0';
            goto LAB_016ce684;
          }
          if (uVar6 != 0xffffffff) goto LAB_016ce680;
        }
        puVar13 = (uint *)(ulong)*puVar15;
        bVar5 = false;
        if ((*puVar15 == 0) || (puVar15 == puVar13)) goto LAB_016ce684;
        lVar8 = 0xc;
        if (*(char *)((long)puVar15 + (10 - (long)puVar13)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar15 + (lVar8 - (long)puVar13);
        if (lVar8 == 0) goto LAB_016ce680;
        uVar12 = (ulong)*(ushort *)((long)puVar15 + (8 - (long)puVar13));
        *(undefined4 *)(puVar4 + 0x20) = 0xfffffffe;
        bVar5 = false;
        if (uVar12 == 0) goto LAB_016ce684;
        piVar14 = (int *)(lVar8 + 4);
        while (piVar14[-1] != -0xadf9240) {
          piVar14 = piVar14 + 2;
          uVar12 = uVar12 - 1;
          if (uVar12 == 0) {
            bVar5 = false;
            goto LAB_016ce684;
          }
        }
        iVar7 = 0;
        if (*piVar14 != -1) {
          iVar7 = *piVar14;
        }
        *(int *)(puVar4 + 0x20) = iVar7;
      } while (*puVar15 != 0);
      bVar5 = false;
    }
LAB_016ce684:
    *(bool *)(param_1 + 0x18) = bVar5;
  }
  return;
}

