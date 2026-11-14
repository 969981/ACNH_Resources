
void FUN_01c42f30(long param_1,long param_2,uint param_3)

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
  
  if (((param_2 == 0) ||
      (uVar4 = (param_3 & 0xffff) - (uint)*(ushort *)(param_1 + 0x200),
      *(uint *)(param_1 + 0x1e0) <= uVar4)) ||
     (puVar7 = *(uint **)(*(long *)(param_1 + 0x1e8) + (long)(int)uVar4 * 8), puVar7 == (uint *)0x0)
     ) {
    return;
  }
  if (*puVar7 != 0) {
    cVar8 = DAT_0534cd78;
    do {
      if (cVar8 == '\0') {
        cVar8 = '\x01';
        DAT_0534cd7c = 0xffffffffffffffff;
        DAT_0534cd84 = 0xffffffffffffffff;
        DAT_0534cd78 = '\x01';
        DAT_0534cdac = 0xffffffff;
        DAT_0534cd8c = 0xffffffffffffffff;
        DAT_0534cd94 = 0xffffffffffffffff;
        DAT_0534cd9c = 0xffffffffffffffff;
        DAT_0534cda4 = -1;
      }
      else {
        if (-1 < DAT_0534cda4) {
          puVar10 = (undefined *)((ulong)DAT_0534cda4._4_4_ + (long)puVar7);
          goto LAB_01c43038;
        }
        if (DAT_0534cda4._4_4_ != 0xffffffff) break;
      }
      puVar5 = (uint *)(ulong)*puVar7;
      puVar10 = (undefined *)0x0;
      if ((*puVar7 == 0) || (puVar7 == puVar5)) goto LAB_01c43038;
      lVar2 = 0xc;
      if (*(char *)((long)puVar7 + (10 - (long)puVar5)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar7 + (lVar2 - (long)puVar5);
      if (lVar2 == 0) break;
      uVar9 = (ulong)*(ushort *)((long)puVar7 + (8 - (long)puVar5));
      DAT_0534cda4 = CONCAT44(0xfffffffe,(undefined4)DAT_0534cda4);
      puVar10 = (undefined *)0x0;
      if (uVar9 == 0) goto LAB_01c43038;
      piVar6 = (int *)(lVar2 + 4);
      while (piVar6[-1] != -0x52b0088) {
        piVar6 = piVar6 + 2;
        uVar9 = uVar9 - 1;
        if (uVar9 == 0) {
          puVar10 = (undefined *)0x0;
          goto LAB_01c43038;
        }
      }
      iVar1 = 0;
      if (*piVar6 != -1) {
        iVar1 = *piVar6;
      }
      DAT_0534cda4 = CONCAT44(iVar1,(undefined4)DAT_0534cda4);
    } while (*puVar7 != 0);
  }
  puVar10 = (undefined *)0x0;
LAB_01c43038:
  puVar3 = PTR_DAT_04c48608;
  if (puVar10 != (undefined *)0x0) {
    puVar3 = puVar10;
  }
  FUN_038d1270(param_2,&DAT_0409e973,puVar3);
  return;
}

