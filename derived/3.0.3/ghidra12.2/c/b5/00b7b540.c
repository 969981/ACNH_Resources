
void FUN_00b7b540(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  int iVar8;
  long lVar9;
  char cVar10;
  undefined2 uVar11;
  ulong uVar12;
  
  puVar4 = PTR_DAT_04bb57e8;
  puVar3 = PTR_DAT_04bb57e0;
  uVar2 = param_2 - 1;
  lVar9 = *(long *)PTR_DAT_04bb32f0;
  if ((int)*(uint *)(lVar9 + 0x1268) < 1) {
    if ((((*(long *)(lVar9 + 0x1158) == 0) ||
         (puVar7 = *(uint **)(*(long *)(lVar9 + 0x1158) + 8), puVar7 == (uint *)0x0)) ||
        ((uVar2 < *(uint *)(lVar9 + 0x1170) &&
         (*(char *)(*(long *)(lVar9 + 0x1178) + (long)(int)uVar2) == '\0')))) ||
       (((*puVar7 <= uVar2 || (puVar7[1] == 0)) || ((ushort)puVar7[2] == 0)))) goto LAB_00b7b6c4;
    iVar8 = 0xc;
    if (*(char *)((long)puVar7 + 10) != '\0') {
      iVar8 = 0x1c;
    }
    puVar7 = (uint *)((ulong)(puVar7[1] * uVar2 + (uint)(ushort)puVar7[2] * 8 + iVar8) +
                     (long)puVar7);
  }
  else {
    if (*(uint *)(lVar9 + 0x1268) <= uVar2) goto LAB_00b7b6c4;
    if (*(uint *)(lVar9 + 0x1258) <= uVar2) {
      uVar2 = 0;
    }
    puVar7 = *(uint **)(*(long *)(lVar9 + 0x1260) + (ulong)uVar2 * 8);
  }
  if (puVar7 != (uint *)0x0) {
    if (*puVar7 == 0) {
LAB_00b7b6e8:
      uVar11 = 0xfffe;
LAB_00b7b6ec:
      *(undefined2 *)param_1 = uVar11;
      *(undefined2 *)((long)param_1 + 2) = 0;
      param_1[1] = 0;
      FUN_0277d4ac(param_1);
      return;
    }
    cVar10 = *PTR_DAT_04bb57e0;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar4 = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
        *puVar3 = 1;
        *(undefined4 *)(puVar4 + 0x20) = 0xffffffff;
        *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
      }
      else {
        uVar2 = *(uint *)(puVar4 + 4);
        if (-1 < (int)uVar2) {
          if ((undefined2 *)((ulong)uVar2 + (long)puVar7) != (undefined2 *)0x0) {
            uVar11 = *(undefined2 *)((ulong)uVar2 + (long)puVar7);
            goto LAB_00b7b6ec;
          }
          goto LAB_00b7b6e8;
        }
        if (uVar2 != 0xffffffff) goto LAB_00b7b6e8;
      }
      puVar5 = (uint *)(ulong)*puVar7;
      uVar11 = 0xfffe;
      if ((*puVar7 == 0) || (puVar7 == puVar5)) goto LAB_00b7b6ec;
      lVar9 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar5)) != '\0') {
        lVar9 = 0x1c;
      }
      lVar9 = (long)puVar7 + (lVar9 - (long)puVar5);
      if (lVar9 == 0) goto LAB_00b7b6e8;
      uVar12 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar5));
      *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
      if (uVar12 == 0) goto LAB_00b7b6e8;
      piVar6 = (int *)(lVar9 + 4);
      while (piVar6[-1] != 0x20cb67bc) {
        piVar6 = piVar6 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_00b7b6e8;
      }
      iVar8 = 0;
      if (*piVar6 != -1) {
        iVar8 = *piVar6;
      }
      *(int *)(puVar4 + 4) = iVar8;
      if (*puVar7 == 0) goto LAB_00b7b6e8;
    } while( true );
  }
LAB_00b7b6c4:
  uVar1 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
  param_1[1] = uVar1;
  return;
}

