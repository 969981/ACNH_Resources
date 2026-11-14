
uint FUN_01ae0cf0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  undefined *__s;
  uint uVar4;
  uint *puVar5;
  ulong uVar6;
  int *piVar7;
  uint *puVar8;
  char cVar9;
  
  __s = PTR_DAT_04bbfe90;
  puVar3 = PTR_DAT_04bbfe88;
  puVar8 = *(uint **)(param_1 + 0x10);
  if (puVar8 == (uint *)0x0) {
    uVar4 = 1;
  }
  else {
    if (*puVar8 != 0) {
      cVar9 = *PTR_DAT_04bbfe88;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *puVar3 = 1;
          memset(__s,0xff,0x1ac);
        }
        else {
          uVar4 = *(uint *)(__s + 0x8c);
          if (-1 < (int)uVar4) {
            if (((uint *)((ulong)uVar4 + (long)puVar8) != (uint *)0x0) &&
               (uVar4 = *(uint *)((ulong)uVar4 + (long)puVar8), uVar4 < 7)) {
              return uVar4;
            }
            break;
          }
          if (uVar4 != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)*puVar8;
        if (*puVar8 == 0) {
          return 0;
        }
        if (puVar8 == puVar5) {
          return 0;
        }
        lVar2 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar5)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar8 + (lVar2 - (long)puVar5);
        if (lVar2 == 0) break;
        uVar6 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar5));
        *(undefined4 *)(__s + 0x8c) = 0xfffffffe;
        if (uVar6 == 0) break;
        piVar7 = (int *)(lVar2 + 4);
        while (piVar7[-1] != -0x645fbf3e) {
          piVar7 = piVar7 + 2;
          uVar6 = uVar6 - 1;
          if (uVar6 == 0) goto LAB_01ae0e08;
        }
        iVar1 = 0;
        if (*piVar7 != -1) {
          iVar1 = *piVar7;
        }
        *(int *)(__s + 0x8c) = iVar1;
        if (*puVar8 == 0) break;
      } while( true );
    }
LAB_01ae0e08:
    uVar4 = 0;
  }
  return uVar4;
}

