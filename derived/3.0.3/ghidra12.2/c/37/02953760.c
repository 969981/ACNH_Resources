
void FUN_02953760(long param_1,long param_2,undefined8 param_3)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint uVar4;
  uint *puVar5;
  int *piVar6;
  uint *puVar7;
  char cVar8;
  ulong uVar9;
  undefined *puVar10;
  
  if (param_2 != 0) {
    uVar4 = FUN_0277d6c4(param_3);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(param_1 + 0xb50);
    if ((uVar4 < *(uint *)(param_1 + 0xb30)) &&
       (puVar7 = *(uint **)(*(long *)(param_1 + 0xb38) + (long)(int)uVar4 * 8),
       puVar7 != (uint *)0x0)) {
      if (*puVar7 != 0) {
        cVar8 = DAT_055d6978;
        do {
          if (cVar8 == '\0') {
            cVar8 = '\x01';
            DAT_055d697c = 0xffffffffffffffff;
            DAT_055d6984 = 0xffffffffffffffff;
            DAT_055d6978 = '\x01';
            DAT_055d699c = 0xffffffffffffffff;
            DAT_055d69a4 = 0xffffffff;
            DAT_055d698c = 0xffffffffffffffff;
            DAT_055d6994 = 0xffffffffffffffff;
          }
          else {
            if (-1 < (int)DAT_055d699c) {
              puVar10 = (undefined *)((DAT_055d699c & 0xffffffff) + (long)puVar7);
              goto LAB_0295387c;
            }
            if ((int)DAT_055d699c != -1) break;
          }
          puVar5 = (uint *)(ulong)*puVar7;
          puVar10 = (undefined *)0x0;
          if ((*puVar7 == 0) || (puVar7 == puVar5)) goto LAB_0295387c;
          lVar2 = 0xc;
          if (*(char *)((long)puVar7 + (10 - (long)puVar5)) != '\0') {
            lVar2 = 0x1c;
          }
          lVar2 = (long)puVar7 + (lVar2 - (long)puVar5);
          if (lVar2 == 0) break;
          uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar5));
          DAT_055d699c = CONCAT44(DAT_055d699c._4_4_,0xfffffffe);
          puVar10 = (undefined *)0x0;
          if (uVar9 == 0) goto LAB_0295387c;
          piVar6 = (int *)(lVar2 + 4);
          while (piVar6[-1] != -0x7840ff18) {
            piVar6 = piVar6 + 2;
            uVar9 = uVar9 - 1;
            if (uVar9 == 0) {
              puVar10 = (undefined *)0x0;
              goto LAB_0295387c;
            }
          }
          iVar1 = 0;
          if (*piVar6 != -1) {
            iVar1 = *piVar6;
          }
          DAT_055d699c = CONCAT44(DAT_055d699c._4_4_,iVar1);
        } while (*puVar7 != 0);
      }
      puVar10 = (undefined *)0x0;
LAB_0295387c:
      puVar3 = PTR_DAT_04c487e8;
      if (puVar10 != (undefined *)0x0) {
        puVar3 = puVar10;
      }
      FUN_038d1270(param_2,&DAT_0409e973,puVar3);
      return;
    }
  }
  return;
}

