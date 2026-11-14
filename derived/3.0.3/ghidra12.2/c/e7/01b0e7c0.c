
void FUN_01b0e7c0(undefined4 *param_1,uint param_2)

{
  long lVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  char cVar10;
  undefined2 uVar11;
  ulong uVar12;
  
  puVar5 = PTR_DAT_04bbffc0;
  puVar4 = PTR_DAT_04bbffb8;
  if ((int)*(uint *)(DAT_0532a808 + 0x1c0) < 1) {
    if ((((*(long *)(DAT_0532a808 + 0xb0) == 0) ||
         (puVar8 = *(uint **)(*(long *)(DAT_0532a808 + 0xb0) + 8), puVar8 == (uint *)0x0)) ||
        ((param_2 < *(uint *)(DAT_0532a808 + 200) &&
         (*(char *)(*(long *)(DAT_0532a808 + 0xd0) + (long)(int)param_2) == '\0')))) ||
       (((*puVar8 <= param_2 || (puVar8[1] == 0)) || ((ushort)puVar8[2] == 0)))) goto LAB_01b0e944;
    iVar9 = 0xc;
    if (*(char *)((long)puVar8 + 10) != '\0') {
      iVar9 = 0x1c;
    }
    puVar8 = (uint *)((ulong)(puVar8[1] * param_2 + (uint)(ushort)puVar8[2] * 8 + iVar9) +
                     (long)puVar8);
  }
  else {
    if (*(uint *)(DAT_0532a808 + 0x1c0) <= param_2) goto LAB_01b0e944;
    if (*(uint *)(DAT_0532a808 + 0x1b0) <= param_2) {
      param_2 = 0;
    }
    puVar8 = *(uint **)(*(long *)(DAT_0532a808 + 0x1b8) + (ulong)param_2 * 8);
  }
  if (puVar8 != (uint *)0x0) {
    if (*puVar8 == 0) {
LAB_01b0e96c:
      uVar11 = 0xfffe;
LAB_01b0e970:
      *(undefined2 *)param_1 = uVar11;
      *(undefined2 *)((long)param_1 + 2) = 0;
      param_1[1] = 0;
      FUN_0277d4ac(param_1);
      return;
    }
    cVar10 = *PTR_DAT_04bbffb8;
    do {
      if (cVar10 == '\0') {
        cVar10 = '\x01';
        *(undefined8 *)puVar5 = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
        *puVar4 = 1;
        *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
      }
      else {
        uVar3 = *(uint *)(puVar5 + 0x14);
        if (-1 < (int)uVar3) {
          if ((undefined2 *)((ulong)uVar3 + (long)puVar8) != (undefined2 *)0x0) {
            uVar11 = *(undefined2 *)((ulong)uVar3 + (long)puVar8);
            goto LAB_01b0e970;
          }
          goto LAB_01b0e96c;
        }
        if (uVar3 != 0xffffffff) goto LAB_01b0e96c;
      }
      puVar6 = (uint *)(ulong)*puVar8;
      uVar11 = 0xfffe;
      if ((*puVar8 == 0) || (puVar8 == puVar6)) goto LAB_01b0e970;
      lVar1 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar6)) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar8 + (lVar1 - (long)puVar6);
      if (lVar1 == 0) goto LAB_01b0e96c;
      uVar12 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar6));
      *(undefined4 *)(puVar5 + 0x14) = 0xfffffffe;
      if (uVar12 == 0) goto LAB_01b0e96c;
      piVar7 = (int *)(lVar1 + 4);
      while (piVar7[-1] != 0x2ca34410) {
        piVar7 = piVar7 + 2;
        uVar12 = uVar12 - 1;
        if (uVar12 == 0) goto LAB_01b0e96c;
      }
      iVar9 = 0;
      if (*piVar7 != -1) {
        iVar9 = *piVar7;
      }
      *(int *)(puVar5 + 0x14) = iVar9;
      if (*puVar8 == 0) goto LAB_01b0e96c;
    } while( true );
  }
LAB_01b0e944:
  uVar2 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  *param_1 = *(undefined4 *)PTR_DAT_04bb37e0;
  param_1[1] = uVar2;
  return;
}

