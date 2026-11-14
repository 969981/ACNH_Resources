
void FUN_01afbe90(long *param_1,long param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  undefined *puVar10;
  uint *puVar11;
  char cVar12;
  
  puVar4 = PTR_DAT_04bbfe90;
  puVar2 = PTR_DAT_04bbfe88;
  puVar11 = *(uint **)(param_2 + 0x10);
  if (puVar11 != (uint *)0x0) {
    uVar5 = 0;
    if (*puVar11 != 0) {
      cVar12 = *PTR_DAT_04bbfe88;
      do {
        if (cVar12 != '\0') {
          uVar3 = *(uint *)(puVar4 + 0x11c);
          if ((int)uVar3 < 0) {
            if (uVar3 == 0xffffffff) goto LAB_01afbf1c;
LAB_01afbf9c:
            uVar5 = 0;
          }
          else {
            uVar5 = 0;
            if ((ushort *)((ulong)uVar3 + (long)puVar11) != (ushort *)0x0) {
              uVar5 = (uint)*(ushort *)((ulong)uVar3 + (long)puVar11);
            }
          }
          goto LAB_01afbfb0;
        }
        cVar12 = '\x01';
        *puVar2 = 1;
        memset(puVar4,0xff,0x1ac);
LAB_01afbf1c:
        puVar6 = (uint *)(ulong)*puVar11;
        uVar5 = 0;
        if ((*puVar11 == 0) || (puVar11 == puVar6)) goto LAB_01afbfb0;
        lVar8 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar6)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar11 + (lVar8 - (long)puVar6);
        if (lVar8 == 0) goto LAB_01afbf9c;
        uVar9 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar6));
        *(undefined4 *)(puVar4 + 0x11c) = 0xfffffffe;
        uVar5 = 0;
        if (uVar9 == 0) goto LAB_01afbfb0;
        piVar7 = (int *)(lVar8 + 4);
        while (piVar7[-1] != -0x642fb95e) {
          piVar7 = piVar7 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) {
            uVar5 = 0;
            goto LAB_01afbfb0;
          }
        }
        iVar1 = 0;
        if (*piVar7 != -1) {
          iVar1 = *piVar7;
        }
        *(int *)(puVar4 + 0x11c) = iVar1;
      } while (*puVar11 != 0);
      uVar5 = 0;
    }
LAB_01afbfb0:
    puVar4 = PTR_DAT_04bbffd0;
    puVar2 = PTR_DAT_04bbffc8;
    uVar5 = uVar5 - *(ushort *)(DAT_0532a810 + 0x1f8);
    if ((uVar5 < *(uint *)(DAT_0532a810 + 0x1d8)) &&
       (puVar11 = *(uint **)(*(long *)(DAT_0532a810 + 0x1e0) + (long)(int)uVar5 * 8),
       puVar11 != (uint *)0x0)) {
      uVar5 = *puVar11;
      if (uVar5 == 0) {
LAB_01afc0a8:
        puVar10 = (undefined *)0x0;
LAB_01afc0ac:
        puVar2 = PTR_DAT_04c48590;
        if (puVar10 != (undefined *)0x0) {
          puVar2 = puVar10;
        }
        *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
        param_1[1] = (long)puVar2;
        return;
      }
      cVar12 = *PTR_DAT_04bbffc8;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *puVar2 = 1;
          uVar5 = *puVar11;
        }
        else {
          uVar3 = *(uint *)(puVar4 + 4);
          if (-1 < (int)uVar3) {
            puVar10 = (undefined *)((ulong)uVar3 + (long)puVar11);
            goto LAB_01afc0ac;
          }
          if (uVar3 != 0xffffffff) goto LAB_01afc0a8;
        }
        puVar6 = (uint *)(ulong)uVar5;
        puVar10 = (undefined *)0x0;
        if ((puVar6 == (uint *)0x0) || (puVar10 = (undefined *)0x0, puVar11 == puVar6))
        goto LAB_01afc0ac;
        lVar8 = 0xc;
        if (*(char *)((long)puVar11 + (10 - (long)puVar6)) != '\0') {
          lVar8 = 0x1c;
        }
        lVar8 = (long)puVar11 + (lVar8 - (long)puVar6);
        puVar10 = (undefined *)0x0;
        if (lVar8 == 0) goto LAB_01afc0ac;
        uVar9 = (ulong)*(ushort *)((long)puVar11 + (8 - (long)puVar6));
        *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
        if (uVar9 == 0) goto LAB_01afc0a8;
        piVar7 = (int *)(lVar8 + 4);
        while (piVar7[-1] != -0x2304ad18) {
          piVar7 = piVar7 + 2;
          uVar9 = uVar9 - 1;
          if (uVar9 == 0) goto LAB_01afc0a8;
        }
        iVar1 = 0;
        if (*piVar7 != -1) {
          iVar1 = *piVar7;
        }
        *(int *)(puVar4 + 4) = iVar1;
        uVar5 = *puVar11;
        if (uVar5 == 0) goto LAB_01afc0a8;
      } while( true );
    }
  }
  lVar8 = *(long *)(PTR_PTR_04bb2238 + 8);
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar8;
  return;
}

