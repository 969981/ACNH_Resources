
void FUN_01b12a30(undefined4 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined4 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  uint *puVar7;
  char cVar8;
  undefined2 uVar9;
  ulong uVar10;
  uint *puVar11;
  int *piVar12;
  
  lVar2 = DAT_0532a830;
  if (DAT_0532a830 != 0) {
    uVar6 = FUN_0277d6c4(param_2 + 8);
    puVar5 = PTR_DAT_04bc0000;
    puVar4 = PTR_DAT_04bbfff8;
    uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar2 + 0x1f8);
    if ((uVar6 < *(uint *)(lVar2 + 0x1d8)) &&
       (puVar7 = *(uint **)(*(long *)(lVar2 + 0x1e0) + (long)(int)uVar6 * 8), puVar7 != (uint *)0x0)
       ) {
      if (*puVar7 == 0) {
LAB_01b12b74:
        uVar9 = 0xfffe;
LAB_01b12b78:
        *(undefined2 *)param_1 = uVar9;
        *(undefined2 *)((long)param_1 + 2) = 0;
        param_1[1] = 0;
        FUN_0277d4ac(param_1);
        return;
      }
      cVar8 = *PTR_DAT_04bbfff8;
      do {
        if (cVar8 == '\0') {
          cVar8 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined4 *)(puVar5 + 0x10) = 0xffffffff;
        }
        else {
          uVar6 = *(uint *)(puVar5 + 8);
          if (-1 < (int)uVar6) {
            if ((undefined2 *)((ulong)uVar6 + (long)puVar7) != (undefined2 *)0x0) {
              uVar9 = *(undefined2 *)((ulong)uVar6 + (long)puVar7);
              goto LAB_01b12b78;
            }
            goto LAB_01b12b74;
          }
          if (uVar6 != 0xffffffff) goto LAB_01b12b74;
        }
        puVar11 = (uint *)(ulong)*puVar7;
        uVar9 = 0xfffe;
        if ((*puVar7 == 0) || (puVar7 == puVar11)) goto LAB_01b12b78;
        lVar2 = 0xc;
        if (*(char *)((long)puVar7 + (10 - (long)puVar11)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar7 + (lVar2 - (long)puVar11);
        if (lVar2 == 0) goto LAB_01b12b74;
        uVar10 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar11));
        *(undefined4 *)(puVar5 + 8) = 0xfffffffe;
        if (uVar10 == 0) goto LAB_01b12b74;
        piVar12 = (int *)(lVar2 + 4);
        while (piVar12[-1] != 0x3d69b890) {
          piVar12 = piVar12 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) goto LAB_01b12b74;
        }
        iVar1 = 0;
        if (*piVar12 != -1) {
          iVar1 = *piVar12;
        }
        *(int *)(puVar5 + 8) = iVar1;
        if (*puVar7 == 0) goto LAB_01b12b74;
      } while( true );
    }
  }
  uVar3 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
  param_1[1] = uVar3;
  return;
}

