
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0262bd70(undefined4 *param_1,long param_2,ushort param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined2 uVar5;
  ulong uVar6;
  uint *puVar7;
  int *piVar8;
  uint *puVar9;
  char cVar10;
  
  uVar4 = DAT_0558600c;
  if (((param_3 == 0x4c7b) ||
      (uVar3 = (uint)param_3 - (uint)*(ushort *)(param_2 + 0xea6e0),
      *(uint *)(param_2 + 0xea6c0) <= uVar3)) ||
     (puVar9 = *(uint **)(*(long *)(param_2 + 0xea6c8) + (long)(int)uVar3 * 8),
     puVar9 == (uint *)0x0)) {
    *param_1 = _DAT_05586008;
    param_1[1] = uVar4;
    return;
  }
  if (*puVar9 == 0) {
LAB_0262beb0:
    uVar5 = 0xfffe;
LAB_0262beb4:
    *(undefined2 *)param_1 = uVar5;
    *(undefined2 *)((long)param_1 + 2) = 0;
    param_1[1] = 0;
    FUN_0277d4ac(param_1);
    return;
  }
  cVar10 = DAT_055576f0;
  do {
    if (cVar10 == '\0') {
      cVar10 = '\x01';
      DAT_055576f4 = 0xffffffffffffffff;
      DAT_055576fc = 0xffffffffffffffff;
      DAT_055576f0 = '\x01';
      DAT_05557704 = 0xffffffffffffffff;
      DAT_0555770c = 0xffffffffffffffff;
      DAT_05557714 = 0xffffffffffffffff;
      DAT_0555771c = 0xffffffffffffffff;
      DAT_05557724 = 0xffffffffffffffff;
      DAT_0555772c = -1;
      DAT_05557734 = 0xffffffffffffffff;
      DAT_0555773c = 0xffffffffffffffff;
      DAT_05557744 = 0xffffffffffffffff;
      DAT_0555774c = 0xffffffffffffffff;
      DAT_05557754 = 0xffffffffffffffff;
      DAT_0555775c = 0xffffffffffffffff;
    }
    else {
      if (-1 < DAT_0555772c) {
        if ((undefined2 *)((ulong)DAT_0555772c._4_4_ + (long)puVar9) != (undefined2 *)0x0) {
          uVar5 = *(undefined2 *)((ulong)DAT_0555772c._4_4_ + (long)puVar9);
          goto LAB_0262beb4;
        }
        goto LAB_0262beb0;
      }
      if (DAT_0555772c._4_4_ != 0xffffffff) goto LAB_0262beb0;
    }
    puVar7 = (uint *)(ulong)*puVar9;
    uVar5 = 0xfffe;
    if ((*puVar9 == 0) || (puVar9 == puVar7)) goto LAB_0262beb4;
    lVar2 = 0xc;
    if (*(char *)((long)puVar9 + (10 - (long)puVar7)) != '\0') {
      lVar2 = 0x1c;
    }
    lVar2 = (long)puVar9 + (lVar2 - (long)puVar7);
    if (lVar2 == 0) goto LAB_0262beb0;
    uVar6 = (ulong)*(ushort *)((long)puVar9 + (8 - (long)puVar7));
    DAT_0555772c = CONCAT44(0xfffffffe,(undefined4)DAT_0555772c);
    if (uVar6 == 0) goto LAB_0262beb0;
    piVar8 = (int *)(lVar2 + 4);
    while (piVar8[-1] != -0x765cb7d4) {
      piVar8 = piVar8 + 2;
      uVar6 = uVar6 - 1;
      if (uVar6 == 0) goto LAB_0262beb0;
    }
    iVar1 = 0;
    if (*piVar8 != -1) {
      iVar1 = *piVar8;
    }
    DAT_0555772c = CONCAT44(iVar1,(undefined4)DAT_0555772c);
    if (*puVar9 == 0) goto LAB_0262beb0;
  } while( true );
}

