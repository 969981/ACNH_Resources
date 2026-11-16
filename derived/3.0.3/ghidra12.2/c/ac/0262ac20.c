
void FUN_0262ac20(long param_1,long param_2,uint param_3,long param_4)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  uint *puVar4;
  char cVar5;
  uint uVar6;
  ulong uVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  
  uVar10 = 0;
  do {
    uVar3 = (ulong)(uVar10 >> 3);
    uVar6 = 1 << (ulong)(uVar10 & 7);
    if (((((uVar6 & *(byte *)(param_2 + uVar3)) == 0) && ((uVar6 & *(byte *)(param_4 + uVar3)) != 0)
         ) && (uVar6 = uVar10 - *(ushort *)(param_1 + 0xea6e0), uVar6 < *(uint *)(param_1 + 0xea6c0)
              )) &&
       (puVar4 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar6 * 8),
       puVar4 != (uint *)0x0)) {
      if (*puVar4 == 0) {
LAB_0262ad8c:
        uVar6 = 0;
      }
      else {
        cVar5 = DAT_055576f0;
        do {
          if (cVar5 == '\0') {
            cVar5 = '\x01';
            DAT_055576f4 = 0xffffffffffffffff;
            DAT_055576fc = 0xffffffffffffffff;
            DAT_055576f0 = '\x01';
            DAT_05557704 = 0xffffffffffffffff;
            DAT_0555770c = 0xffffffffffffffff;
            DAT_05557714 = 0xffffffffffffffff;
            DAT_0555771c = 0xffffffffffffffff;
            DAT_05557724 = 0xffffffffffffffff;
            DAT_0555772c = 0xffffffffffffffff;
            DAT_05557734 = 0xffffffffffffffff;
            DAT_0555773c = 0xffffffffffffffff;
            DAT_05557744 = 0xffffffffffffffff;
            DAT_0555774c = 0xffffffffffffffff;
            DAT_05557754 = 0xffffffffffffffff;
            DAT_0555775c = 0xffffffffffffffff;
          }
          else {
            if (-1 < (int)DAT_05557714) {
              puVar4 = (uint *)((DAT_05557714 & 0xffffffff) + (long)puVar4);
              if (puVar4 == (uint *)0x0) goto LAB_0262ad8c;
              uVar6 = *puVar4;
              goto LAB_0262ad90;
            }
            if ((int)DAT_05557714 != -1) goto LAB_0262ad8c;
          }
          puVar8 = (uint *)(ulong)*puVar4;
          uVar6 = 0;
          if ((*puVar4 == 0) || (puVar4 == puVar8)) goto LAB_0262ad90;
          lVar2 = 0xc;
          if (*(char *)((long)puVar4 + (10 - (long)puVar8)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar4 + (lVar2 - (long)puVar8);
          if (lVar2 == 0) goto LAB_0262ad8c;
          uVar7 = (ulong)*(ushort *)((long)puVar4 + (8 - (long)puVar8));
          DAT_05557714 = CONCAT44(DAT_05557714._4_4_,0xfffffffe);
          uVar6 = 0;
          if (uVar7 == 0) goto LAB_0262ad90;
          piVar9 = (int *)(lVar2 + 4);
          while (piVar9[-1] != 0x3711677b) {
            piVar9 = piVar9 + 2;
            uVar7 = uVar7 - 1;
            if (uVar7 == 0) {
              uVar6 = 0;
              goto LAB_0262ad90;
            }
          }
          iVar1 = 0;
          if (*piVar9 != -1) {
            iVar1 = *piVar9;
          }
          DAT_05557714 = CONCAT44(DAT_05557714._4_4_,iVar1);
        } while (*puVar4 != 0);
        uVar6 = 0;
      }
LAB_0262ad90:
      if (param_3 <= uVar6) {
        *(byte *)(param_2 + uVar3) = *(byte *)(param_2 + uVar3) | (byte)(1 << (ulong)(uVar10 & 7));
      }
    }
    uVar10 = uVar10 + 1;
    if (uVar10 == 0x800) {
      return;
    }
  } while( true );
}

