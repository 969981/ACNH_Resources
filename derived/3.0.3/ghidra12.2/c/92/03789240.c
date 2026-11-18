
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03789240(undefined4 *param_1,long param_2)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  ulong uVar6;
  undefined2 uVar7;
  int *piVar8;
  uint *puVar9;
  char cVar10;
  
  uVar5 = DAT_0558600c;
  puVar9 = *(uint **)(param_2 + 8);
  if (puVar9 == (uint *)0x0) {
    *param_1 = _DAT_05586008;
    param_1[1] = uVar5;
    return;
  }
  uVar3 = *puVar9;
  if (uVar3 == 0) {
LAB_03789350:
    uVar7 = 0xfffe;
LAB_03789354:
    *(undefined2 *)param_1 = uVar7;
    *(undefined2 *)((long)param_1 + 2) = 0;
    param_1[1] = 0;
    FUN_0277d4ac(param_1);
    return;
  }
  cVar10 = DAT_05ac19b8;
  do {
    if (cVar10 == '\0') {
      DAT_05ac19bc = -1;
      cVar10 = '\x01';
      DAT_05ac19c4 = 0xffffffff;
      uVar3 = *puVar9;
      DAT_05ac19b8 = '\x01';
    }
    else {
      if (-1 < DAT_05ac19bc) {
        if ((undefined2 *)((ulong)DAT_05ac19bc._4_4_ + (long)puVar9) != (undefined2 *)0x0) {
          uVar7 = *(undefined2 *)((ulong)DAT_05ac19bc._4_4_ + (long)puVar9);
          goto LAB_03789354;
        }
        goto LAB_03789350;
      }
      if (DAT_05ac19bc._4_4_ != 0xffffffff) goto LAB_03789350;
    }
    puVar4 = (uint *)(ulong)uVar3;
    uVar7 = 0xfffe;
    if ((puVar4 == (uint *)0x0) || (uVar7 = 0xfffe, puVar9 == puVar4)) goto LAB_03789354;
    lVar2 = 0xc;
    if (*(char *)((long)puVar9 + (10 - (long)puVar4)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar9 + (lVar2 - (long)puVar4);
    if (lVar2 == 0) goto LAB_03789350;
    uVar6 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar4));
    DAT_05ac19bc = CONCAT44(0xfffffffe,(undefined4)DAT_05ac19bc);
    if (uVar6 == 0) goto LAB_03789350;
    piVar8 = (int *)(lVar2 + 4);
    while (piVar8[-1] != 0x20cb67bc) {
      piVar8 = piVar8 + 2;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) goto LAB_03789350;
    }
    iVar1 = 0;
    if (*piVar8 != -1) {
      iVar1 = *piVar8;
    }
    DAT_05ac19bc = CONCAT44(iVar1,(undefined4)DAT_05ac19bc);
    uVar3 = *puVar9;
    if (uVar3 == 0) goto LAB_03789350;
  } while( true );
}

