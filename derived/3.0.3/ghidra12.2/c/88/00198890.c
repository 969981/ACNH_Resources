
/* WARNING: Type propagation algorithm not settling */

void FUN_00198890(long param_1,uint param_2,long *param_3)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  undefined4 *puVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  long *plVar8;
  long *plVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  long *plVar13;
  long *plVar14;
  long lVar15;
  
  param_3[1] = *param_3;
  plVar13 = (long *)(param_1 + 0x68);
  plVar6 = (long *)*plVar13;
  while( true ) {
    while( true ) {
      if (plVar6 == (long *)0x0) {
        return;
      }
      if (*(uint *)((long)plVar6 + 0x1c) <= param_2) break;
      plVar13 = plVar6;
      plVar6 = (long *)*plVar6;
    }
    if (param_2 <= *(uint *)((long)plVar6 + 0x1c)) break;
    plVar6 = (long *)plVar6[1];
  }
  plVar9 = (long *)*plVar6;
  plVar8 = plVar6;
  if (plVar9 != (long *)0x0) {
    plVar14 = plVar6;
    do {
      plVar8 = plVar9;
      if (*(uint *)((long)plVar9 + 0x1c) < param_2) {
        plVar8 = plVar14;
        plVar9 = plVar9 + 1;
      }
      plVar9 = (long *)*plVar9;
      plVar14 = plVar8;
    } while (plVar9 != (long *)0x0);
  }
  for (plVar6 = (long *)plVar6[1]; plVar6 != (long *)0x0; plVar6 = (long *)*plVar6) {
    plVar9 = plVar6;
    if (*(uint *)((long)plVar6 + 0x1c) <= param_2) {
      plVar9 = plVar13;
      plVar6 = plVar6 + 1;
    }
    plVar13 = plVar9;
  }
  do {
    if (plVar8 == plVar13) {
      return;
    }
    puVar10 = (undefined4 *)param_3[1];
    if (puVar10 == (undefined4 *)param_3[2]) {
      puVar4 = (undefined4 *)*param_3;
      uVar7 = (long)puVar10 - (long)puVar4;
      lVar15 = (long)uVar7 >> 2;
      uVar1 = lVar15 + 1;
      if (uVar1 >> 0x3e != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_001a3240(param_3);
      }
      uVar2 = (long)uVar7 >> 1;
      if ((ulong)((long)uVar7 >> 1) <= uVar1) {
        uVar2 = uVar1;
      }
      if (0x7ffffffffffffffb < uVar7) {
        uVar2 = 0x3fffffffffffffff;
      }
      if (uVar2 == 0) {
        lVar5 = 0;
        puVar12 = (undefined4 *)(lVar15 * 4);
        puVar11 = puVar12 + 1;
        *puVar12 = (int)plVar8[4];
        if (puVar10 != puVar4) goto LAB_001989e0;
      }
      else {
        lVar5 = FUN_00187df4(uVar2 << 2);
        puVar4 = (undefined4 *)*param_3;
        puVar10 = (undefined4 *)param_3[1];
        puVar12 = (undefined4 *)(lVar5 + lVar15 * 4);
        puVar11 = puVar12 + 1;
        *puVar12 = (int)plVar8[4];
        if (puVar10 != puVar4) {
LAB_001989e0:
          do {
            puVar10 = puVar10 + -1;
            puVar12 = puVar12 + -1;
            *puVar12 = *puVar10;
          } while (puVar10 != puVar4);
        }
      }
      *param_3 = (long)puVar12;
      param_3[1] = (long)puVar11;
      param_3[2] = lVar5 + uVar2 * 4;
      if (puVar4 != (undefined4 *)0x0) {
        FUN_00187e4c();
      }
    }
    else {
      *puVar10 = (int)plVar8[4];
      param_3[1] = (long)(puVar10 + 1);
    }
    plVar6 = (long *)plVar8[1];
    plVar9 = plVar8;
    if ((long *)plVar8[1] == (long *)0x0) {
      do {
        plVar8 = (long *)plVar9[2];
        bVar3 = (long *)*plVar8 != plVar9;
        plVar9 = plVar8;
      } while (bVar3);
    }
    else {
      do {
        plVar8 = plVar6;
        plVar6 = (long *)*plVar8;
      } while ((long *)*plVar8 != (long *)0x0);
    }
  } while( true );
}

