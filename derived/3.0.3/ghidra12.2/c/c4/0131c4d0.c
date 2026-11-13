
void FUN_0131c4d0(long param_1,long param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint *puVar6;
  char cVar7;
  ulong uVar8;
  undefined *puVar9;
  uint *puVar10;
  int *piVar11;
  
  puVar4 = PTR_DAT_04bbbe00;
  puVar5 = PTR_DAT_04bbbdf8;
  if (param_2 == 0) {
    return;
  }
  puVar6 = *(uint **)(param_1 + 8);
  if (puVar6 == (uint *)0x0) {
    puVar5 = PTR_DAT_04c48258;
  }
  else {
    if (*puVar6 != 0) {
      cVar7 = *PTR_DAT_04bbbdf8;
      do {
        if (cVar7 == '\0') {
          cVar7 = '\x01';
          *(undefined8 *)puVar4 = 0xffffffffffffffff;
          *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
          *puVar5 = 1;
          *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
        }
        else {
          uVar3 = *(uint *)(puVar4 + 4);
          if (-1 < (int)uVar3) {
            puVar9 = (undefined *)((ulong)uVar3 + (long)puVar6);
            goto LAB_0131c5ac;
          }
          if (uVar3 != 0xffffffff) break;
        }
        puVar10 = (uint *)(ulong)*puVar6;
        puVar9 = (undefined *)0x0;
        if ((*puVar6 == 0) || (puVar6 == puVar10)) goto LAB_0131c5ac;
        lVar2 = 0xc;
        if (*(char *)((long)puVar6 + (10 - (long)puVar10)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar6 + (lVar2 - (long)puVar10);
        if (lVar2 == 0) break;
        uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar10));
        *(undefined4 *)(puVar4 + 4) = 0xfffffffe;
        puVar9 = (undefined *)0x0;
        if (uVar8 == 0) goto LAB_0131c5ac;
        piVar11 = (int *)(lVar2 + 4);
        while (piVar11[-1] != 0x6e1ac981) {
          piVar11 = piVar11 + 2;
          uVar8 = uVar8 - 1;
          if (uVar8 == 0) {
            puVar9 = (undefined *)0x0;
            goto LAB_0131c5ac;
          }
        }
        iVar1 = 0;
        if (*piVar11 != -1) {
          iVar1 = *piVar11;
        }
        *(int *)(puVar4 + 4) = iVar1;
      } while (*puVar6 != 0);
    }
    puVar9 = (undefined *)0x0;
LAB_0131c5ac:
    puVar5 = PTR_DAT_04c48250;
    if (puVar9 != (undefined *)0x0) {
      puVar5 = puVar9;
    }
  }
  FUN_038d1270(param_2,"%s_LandMaking",puVar5);
  return;
}

