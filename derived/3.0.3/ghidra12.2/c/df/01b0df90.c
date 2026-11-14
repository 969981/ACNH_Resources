
float FUN_01b0df90(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *__s;
  uint *puVar5;
  ulong uVar6;
  int *piVar7;
  uint *puVar8;
  char cVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  
  __s = PTR_DAT_04bbfe90;
  puVar4 = PTR_DAT_04bbfe88;
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    return 0.0;
  }
  fVar11 = 0.0;
  if (*puVar8 != 0) {
    cVar9 = *PTR_DAT_04bbfe88;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *puVar4 = 1;
        memset(__s,0xff,0x1ac);
        uVar3 = *puVar8;
      }
      else {
        uVar3 = *(uint *)(__s + 0xf8);
        if (-1 < (int)uVar3) {
          fVar11 = 0.0;
          if ((float *)((ulong)uVar3 + (long)puVar8) != (float *)0x0) {
            fVar11 = *(float *)((ulong)uVar3 + (long)puVar8);
          }
          break;
        }
        if (uVar3 != 0xffffffff) goto LAB_01b0e098;
        uVar3 = *puVar8;
      }
      if ((uVar3 == 0) || (puVar5 = (uint *)(ulong)uVar3, puVar8 == puVar5)) goto LAB_01b0e098;
      lVar2 = 0xc;
      if (*(char *)((long)puVar8 + (10 - (long)puVar5)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar8 + (lVar2 - (long)puVar5);
      if (lVar2 == 0) goto LAB_01b0e098;
      uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar5));
      *(undefined4 *)(__s + 0xf8) = 0xfffffffe;
      if (uVar6 == 0) goto LAB_01b0e098;
      piVar7 = (int *)(lVar2 + 4);
      while (piVar7[-1] != -0x9893608) {
        piVar7 = piVar7 + 2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0) goto LAB_01b0e098;
      }
      iVar1 = 0;
      if (*piVar7 != -1) {
        iVar1 = *piVar7;
      }
      *(int *)(__s + 0xf8) = iVar1;
      if (*puVar8 == 0) goto LAB_01b0e098;
    } while( true );
  }
LAB_01b0e09c:
  fVar12 = 1.0;
  if (fVar11 <= 1.0) {
    fVar12 = fVar11;
  }
  fVar10 = 0.0;
  if (0.0 <= fVar11) {
    fVar10 = fVar12;
  }
  return fVar10;
LAB_01b0e098:
  fVar11 = 0.0;
  goto LAB_01b0e09c;
}

