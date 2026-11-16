
undefined8 FUN_029535f0(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  undefined8 uVar7;
  uint *puVar8;
  char cVar9;
  ulong uVar10;
  undefined *puVar11;
  
  if (param_2 == 0) {
    return 0;
  }
  uVar4 = FUN_0277d6c4(param_3);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(param_1 + 0xb50);
  if ((uVar4 < *(uint *)(param_1 + 0xb30)) &&
     (puVar8 = *(uint **)(*(long *)(param_1 + 0xb38) + (long)(int)uVar4 * 8), puVar8 != (uint *)0x0)
     ) {
    if (*puVar8 != 0) {
      cVar9 = DAT_055d6978;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          DAT_055d697c = 0xffffffffffffffff;
          DAT_055d6984 = 0xffffffffffffffff;
          DAT_055d6978 = '\x01';
          DAT_055d699c = -1;
          DAT_055d69a4 = 0xffffffff;
          DAT_055d698c = 0xffffffffffffffff;
          DAT_055d6994 = 0xffffffffffffffff;
        }
        else {
          if (-1 < DAT_055d699c) {
            puVar11 = (undefined *)((ulong)DAT_055d699c._4_4_ + (long)puVar8);
            goto LAB_0295370c;
          }
          if (DAT_055d699c._4_4_ != 0xffffffff) break;
        }
        puVar5 = (uint *)(ulong)*puVar8;
        puVar11 = (undefined *)0x0;
        if ((*puVar8 == 0) || (puVar8 == puVar5)) goto LAB_0295370c;
        lVar2 = 0xc;
        if (*(char *)((long)puVar8 + (10 - (long)puVar5)) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar8 + (lVar2 - (long)puVar5);
        if (lVar2 == 0) break;
        uVar10 = (ulong)*(ushort *)((long)puVar8 + (8 - (long)puVar5));
        DAT_055d699c = CONCAT44(0xfffffffe,(undefined4)DAT_055d699c);
        puVar11 = (undefined *)0x0;
        if (uVar10 == 0) goto LAB_0295370c;
        piVar6 = (int *)(lVar2 + 4);
        while (piVar6[-1] != 0x48ef0398) {
          piVar6 = piVar6 + 2;
          uVar10 = uVar10 - 1;
          if (uVar10 == 0) {
            puVar11 = (undefined *)0x0;
            goto LAB_0295370c;
          }
        }
        iVar1 = 0;
        if (*piVar6 != -1) {
          iVar1 = *piVar6;
        }
        DAT_055d699c = CONCAT44(iVar1,(undefined4)DAT_055d699c);
      } while (*puVar8 != 0);
    }
    puVar11 = (undefined *)0x0;
LAB_0295370c:
    puVar3 = PTR_DAT_04c487d8;
    if (puVar11 != (undefined *)0x0) {
      puVar3 = puVar11;
    }
    FUN_038d1270(param_2,&DAT_0409e973,puVar3);
    uVar7 = 1;
  }
  else {
    uVar7 = 0;
  }
  return uVar7;
}

