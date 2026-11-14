
undefined2 FUN_01ad75b0(long param_1)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *__s;
  undefined2 uVar5;
  uint *puVar6;
  ulong uVar7;
  int *piVar8;
  uint *puVar9;
  char cVar10;
  
  __s = PTR_DAT_04bbfe90;
  puVar4 = PTR_DAT_04bbfe88;
  puVar9 = *(uint **)(param_1 + 0x10);
  if (puVar9 == (uint *)0x0) {
    uVar5 = 0xfffe;
  }
  else {
    if (*puVar9 != 0) {
      cVar10 = *PTR_DAT_04bbfe88;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *puVar4 = 1;
          memset(__s,0xff,0x1ac);
        }
        else {
          uVar3 = *(uint *)(__s + 0x128);
          if (-1 < (int)uVar3) {
            if ((undefined2 *)((ulong)uVar3 + (long)puVar9) != (undefined2 *)0x0) {
              return *(undefined2 *)((ulong)uVar3 + (long)puVar9);
            }
            break;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar6 = (uint *)(ulong)*puVar9;
        if (*puVar9 == 0) {
          return 0;
        }
        if (puVar9 == puVar6) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar6)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar9 + (lVar2 - (long)puVar6);
        if (lVar2 == 0) break;
        uVar7 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar6));
        *(undefined4 *)(__s + 0x128) = 0xfffffffe;
        if (uVar7 == 0) break;
        piVar8 = (int *)(lVar2 + 4);
        while (piVar8[-1] != 0x54706054) {
          piVar8 = piVar8 + 2;
          uVar7 = uVar7 - 1;
          if (uVar7 == 0) goto LAB_01ad76c8;
        }
        iVar1 = 0;
        if (*piVar8 != -1) {
          iVar1 = *piVar8;
        }
        *(int *)(__s + 0x128) = iVar1;
        if (*puVar9 == 0) {
          return 0;
        }
      } while( true );
    }
LAB_01ad76c8:
    uVar5 = 0;
  }
  return uVar5;
}

