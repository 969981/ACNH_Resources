
void FUN_02b72930(undefined8 *param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  int *piVar7;
  long lVar8;
  undefined8 uVar9;
  uint *puVar10;
  int iVar11;
  char cVar12;
  ulong uVar13;
  
  *param_1 = &PTR_LAB_04aa50d0;
  puVar5 = PTR_DAT_04bc4698;
  puVar4 = PTR_DAT_04bc4690;
  lVar8 = *(long *)PTR_DAT_04bb5008;
  if (param_2 != 0) {
    if ((int)*(uint *)(lVar8 + 0x1e0) < 1) {
      if ((((*(long *)(lVar8 + 0xd0) == 0) ||
           (puVar10 = *(uint **)(*(long *)(lVar8 + 0xd0) + 8), puVar10 == (uint *)0x0)) ||
          ((param_2 < *(uint *)(lVar8 + 0xe8) &&
           (*(char *)(*(long *)(lVar8 + 0xf0) + (long)(int)param_2) == '\0')))) ||
         (((*puVar10 <= param_2 || (puVar10[1] == 0)) || ((ushort)puVar10[2] == 0))))
      goto LAB_02b72ad8;
      iVar11 = 0xc;
      if (*(char *)((long)puVar10 + 10) != '\0') {
        iVar11 = 0x1c;
      }
      puVar10 = (uint *)((ulong)(puVar10[1] * param_2 + (uint)(ushort)puVar10[2] * 8 + iVar11) +
                        (long)puVar10);
    }
    else {
      if (*(uint *)(lVar8 + 0x1e0) <= param_2) goto LAB_02b72ad8;
      if (*(uint *)(lVar8 + 0x1d0) <= param_2) {
        param_2 = 0;
      }
      puVar10 = *(uint **)(*(long *)(lVar8 + 0x1d8) + (ulong)param_2 * 8);
    }
    if ((puVar10 != (uint *)0x0) && (uVar2 = *puVar10, uVar2 != 0)) {
      cVar12 = *PTR_DAT_04bc4690;
      do {
        if (cVar12 == '\0') {
          cVar12 = '\x01';
          *(undefined8 *)puVar5 = 0xffffffffffffffff;
          *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
          *puVar4 = 1;
          *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
          *(undefined4 *)(puVar5 + 0x18) = 0xffffffff;
          uVar2 = *puVar10;
        }
        else {
          uVar6 = *(uint *)(puVar5 + 0x18);
          if (-1 < (int)uVar6) {
            if ((ushort *)((ulong)uVar6 + (long)puVar10) == (ushort *)0x0) break;
            uVar6 = (uint)*(ushort *)((ulong)uVar6 + (long)puVar10);
            goto LAB_02b72adc;
          }
          if (uVar6 != 0xffffffff) break;
        }
        puVar3 = (uint *)(ulong)uVar2;
        uVar6 = 0;
        if ((puVar3 == (uint *)0x0) || (uVar6 = 0, puVar10 == puVar3)) goto LAB_02b72adc;
        lVar1 = 0xc;
        if (*(char *)((long)puVar10 + (10 - (long)puVar3)) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar10 + (lVar1 - (long)puVar3);
        uVar6 = 0;
        if (lVar1 == 0) goto LAB_02b72adc;
        uVar13 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar3));
        *(undefined4 *)(puVar5 + 0x18) = 0xfffffffe;
        if (uVar13 == 0) break;
        piVar7 = (int *)(lVar1 + 4);
        while (piVar7[-1] != 0x54706054) {
          piVar7 = piVar7 + 2;
          uVar13 = uVar13 - 1;
          if (uVar13 == 0) goto LAB_02b72ad8;
        }
        uVar6 = 0;
        iVar11 = 0;
        if (*piVar7 != -1) {
          iVar11 = *piVar7;
        }
        *(int *)(puVar5 + 0x18) = iVar11;
        uVar2 = *puVar10;
        if (uVar2 == 0) goto LAB_02b72adc;
      } while( true );
    }
  }
LAB_02b72ad8:
  uVar6 = 0;
LAB_02b72adc:
  uVar6 = uVar6 - *(ushort *)(lVar8 + 0x15f0);
  if (uVar6 < *(uint *)(lVar8 + 0x15d0)) {
    uVar9 = *(undefined8 *)(*(long *)(lVar8 + 0x15d8) + (long)(int)uVar6 * 8);
  }
  else {
    uVar9 = 0;
  }
  param_1[1] = uVar9;
  return;
}

