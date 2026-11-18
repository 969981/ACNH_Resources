
undefined8 FUN_03264940(int *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined *puVar5;
  long lVar6;
  undefined *puVar7;
  undefined8 *puVar8;
  long lVar9;
  uint *puVar10;
  
  puVar3 = PTR_DAT_04bb5ce0;
  puVar2 = PTR_DAT_04bb37e0;
  if (*param_1 != 0) {
    puVar8 = *(undefined8 **)(param_1 + 2);
    lVar9 = (long)*param_1 << 3;
    do {
      puVar10 = (uint *)*puVar8;
      uVar1 = *puVar10;
      puVar5 = puVar2;
      if (uVar1 == 7) {
        lVar6 = *(long *)puVar3;
        if (*puVar10 < 9 && (1 << (ulong)(*puVar10 & 0x1f) & 0x1eaU) != 0) {
          puVar7 = (undefined *)(lVar6 + 0xe54);
LAB_03264a20:
          if (lVar6 != 0) {
            puVar5 = puVar7;
          }
LAB_03264a48:
          uVar4 = FUN_0277d7b4(puVar10 + 1,puVar5);
          if ((uVar4 & 1) == 0) {
            *puVar10 = 3;
          }
        }
      }
      else if (uVar1 == 6) {
        lVar6 = *(long *)puVar3;
        if (lVar6 != 0) {
          if (*(char *)(lVar6 + 0xe9e) != '\0') {
            puVar5 = (undefined *)(lVar6 + 0xe94);
          }
        }
        if (*puVar10 < 9 && (1 << (ulong)(*puVar10 & 0x1f) & 0x1eaU) != 0) goto LAB_03264a48;
      }
      else if ((uVar1 == 5) &&
              (lVar6 = *(long *)puVar3,
              *puVar10 < 9 && (1 << (ulong)(*puVar10 & 0x1f) & 0x1eaU) != 0)) {
        puVar7 = (undefined *)(lVar6 + 0xe70);
        goto LAB_03264a20;
      }
      puVar8 = puVar8 + 1;
      lVar9 = lVar9 + -8;
    } while (lVar9 != 0);
  }
  return 1;
}

