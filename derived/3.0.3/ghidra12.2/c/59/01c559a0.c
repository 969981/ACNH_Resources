
undefined * FUN_01c559a0(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  uint *puVar4;
  int *piVar5;
  uint *puVar6;
  char cVar7;
  ulong uVar8;
  undefined *puVar9;
  
  puVar6 = *(uint **)(param_1 + 8);
  if (puVar6 == (uint *)0x0) {
    return PTR_DAT_04c48618;
  }
  if (*puVar6 != 0) {
    cVar7 = DAT_0534e328;
    do {
      if (cVar7 == '\0') {
        cVar7 = '\x01';
        DAT_0534e32c = 0xffffffffffffffff;
        DAT_0534e334 = 0xffffffffffffffff;
        DAT_0534e328 = '\x01';
        DAT_0534e33c = 0xffffffffffffffff;
        DAT_0534e344 = 0xffffffffffffffff;
        DAT_0534e34c = 0xffffffffffffffff;
        DAT_0534e354 = 0xffffffffffffffff;
      }
      else {
        if (-1 < (int)DAT_0534e354) {
          puVar9 = (undefined *)((DAT_0534e354 & 0xffffffff) + (long)puVar6);
          goto LAB_01c55a7c;
        }
        if ((int)DAT_0534e354 != -1) break;
      }
      puVar4 = (uint *)(ulong)*puVar6;
      puVar9 = (undefined *)0x0;
      if ((*puVar6 == 0) || (puVar6 == puVar4)) goto LAB_01c55a7c;
      lVar2 = 0xc;
      if (*(char *)((long)puVar6 + (10 - (long)puVar4)) != '\0') {
        lVar2 = 0x1c;
      }
      lVar2 = (long)puVar6 + (lVar2 - (long)puVar4);
      if (lVar2 == 0) break;
      uVar8 = (ulong)*(ushort *)((long)puVar6 + (8 - (long)puVar4));
      DAT_0534e354 = CONCAT44(DAT_0534e354._4_4_,0xfffffffe);
      puVar9 = (undefined *)0x0;
      if (uVar8 == 0) goto LAB_01c55a7c;
      piVar5 = (int *)(lVar2 + 4);
      while (piVar5[-1] != -0x7742f63e) {
        piVar5 = piVar5 + 2;
        uVar8 = uVar8 - 1;
        if (uVar8 == 0) {
          puVar9 = (undefined *)0x0;
          goto LAB_01c55a7c;
        }
      }
      iVar1 = 0;
      if (*piVar5 != -1) {
        iVar1 = *piVar5;
      }
      DAT_0534e354 = CONCAT44(DAT_0534e354._4_4_,iVar1);
    } while (*puVar6 != 0);
  }
  puVar9 = (undefined *)0x0;
LAB_01c55a7c:
  puVar3 = PTR_DAT_04c48610;
  if (puVar9 != (undefined *)0x0) {
    puVar3 = puVar9;
  }
  return puVar3;
}

