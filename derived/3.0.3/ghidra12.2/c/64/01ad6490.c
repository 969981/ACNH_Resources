
void FUN_01ad6490(long *param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *__s;
  ulong uVar4;
  long lVar5;
  long lVar6;
  uint *puVar7;
  int *piVar8;
  uint *puVar9;
  char cVar10;
  
  __s = PTR_DAT_04bbfe90;
  puVar3 = PTR_DAT_04bbfe88;
  puVar9 = *(uint **)(param_2 + 0x10);
  if (puVar9 == (uint *)0x0) {
    lVar6 = *(long *)(PTR_PTR_04bb2238 + 8);
  }
  else {
    if (*puVar9 != 0) {
      cVar10 = *PTR_DAT_04bbfe88;
      do {
        if (cVar10 == '\0') {
          cVar10 = '\x01';
          *puVar3 = 1;
          memset(__s,0xff,0x1ac);
        }
        else {
          uVar2 = *(uint *)(__s + 0x18c);
          if (-1 < (int)uVar2) {
            lVar5 = (ulong)uVar2 + (long)puVar9;
            goto LAB_01ad659c;
          }
          if (uVar2 != 0xffffffff) break;
        }
        puVar7 = (uint *)(ulong)*puVar9;
        lVar5 = 0;
        if ((*puVar9 == 0) || (puVar9 == puVar7)) goto LAB_01ad659c;
        lVar6 = 0xc;
        if (*(char *)((long)puVar9 + (10 - (long)puVar7)) != '\0') {
          lVar6 = 0x1c;
        }
        lVar6 = (long)puVar9 + (lVar6 - (long)puVar7);
        if (lVar6 == 0) break;
        uVar4 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar7));
        *(undefined4 *)(__s + 0x18c) = 0xfffffffe;
        lVar5 = 0;
        if (uVar4 == 0) goto LAB_01ad659c;
        piVar8 = (int *)(lVar6 + 4);
        while (piVar8[-1] != 0x3febc642) {
          piVar8 = piVar8 + 2;
          uVar4 = uVar4 - 1;
          if (uVar4 == 0) {
            lVar5 = 0;
            goto LAB_01ad659c;
          }
        }
        iVar1 = 0;
        if (*piVar8 != -1) {
          iVar1 = *piVar8;
        }
        *(int *)(__s + 0x18c) = iVar1;
      } while (*puVar9 != 0);
    }
    lVar5 = 0;
LAB_01ad659c:
    lVar6 = *(long *)PTR_PTR_04bc0008;
    if (lVar5 != 0) {
      lVar6 = lVar5;
    }
  }
  *param_1 = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[1] = lVar6;
  return;
}

