
void FUN_0262b4c0(long param_1,long param_2,long param_3)

{
  int iVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte bVar6;
  char cVar7;
  uint *puVar8;
  ulong uVar9;
  int *piVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  
  uVar4 = FUN_0262b678(param_3);
  uVar12 = 0;
  do {
    uVar11 = (uint)uVar12;
    uVar13 = uVar12 >> 3;
    uVar3 = 1 << (ulong)(uVar11 & 7);
    bVar6 = *(byte *)(param_2 + uVar13);
    if ((uVar3 & bVar6) != 0) {
      if ((((uVar3 & *(byte *)(param_3 + uVar13)) == 0) ||
          (uVar3 = uVar11 - *(ushort *)(param_1 + 0xea6e0), *(uint *)(param_1 + 0xea6c0) <= uVar3))
         || (puVar5 = *(uint **)(*(long *)(param_1 + 0xea6c8) + (long)(int)uVar3 * 8),
            puVar5 == (uint *)0x0)) {
LAB_0262b520:
        *(byte *)(param_2 + uVar13) = bVar6 & ((byte)(1 << (uVar12 & 7)) ^ 0xff);
      }
      else if (*puVar5 != 0) {
        cVar7 = DAT_055576f0;
        do {
          if (cVar7 == '\0') {
            cVar7 = '\x01';
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
            uVar3 = *puVar5;
          }
          else {
            if (-1 < (int)DAT_05557714) {
              puVar5 = (uint *)((DAT_05557714 & 0xffffffff) + (long)puVar5);
              if ((puVar5 != (uint *)0x0) && (uVar4 < *puVar5)) {
                bVar6 = *(byte *)(param_2 + uVar13);
                goto LAB_0262b520;
              }
              break;
            }
            if ((int)DAT_05557714 != -1) break;
            uVar3 = *puVar5;
          }
          if ((uVar3 == 0) || (puVar8 = (uint *)(ulong)uVar3, puVar5 == puVar8)) break;
          lVar2 = 0xc;
          if (*(char *)((long)puVar5 + (10 - (long)puVar8)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar5 + (lVar2 - (long)puVar8);
          if (lVar2 == 0) break;
          uVar9 = (ulong)*(ushort *)((long)puVar5 + (8 - (long)puVar8));
          DAT_05557714._4_4_ = (undefined4)(DAT_05557714 >> 0x20);
          DAT_05557714 = CONCAT44(DAT_05557714._4_4_,0xfffffffe);
          if (uVar9 == 0) break;
          piVar10 = (int *)(lVar2 + 4);
          while (piVar10[-1] != 0x3711677b) {
            piVar10 = piVar10 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) goto LAB_0262b530;
          }
          iVar1 = 0;
          if (*piVar10 != -1) {
            iVar1 = *piVar10;
          }
          DAT_05557714 = CONCAT44(DAT_05557714._4_4_,iVar1);
          if (*puVar5 == 0) break;
        } while( true );
      }
    }
LAB_0262b530:
    uVar12 = (ulong)(uVar11 + 1);
    if (uVar11 + 1 == 0x800) {
      return;
    }
  } while( true );
}

