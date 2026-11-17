
undefined8 FUN_02f5a0e0(byte *param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 *puVar6;
  long lVar7;
  uint uVar8;
  byte local_14 [4];
  
  uVar2 = FUN_02f5a2f0(param_2);
  if ((int)uVar2 < 0) {
    return 0;
  }
  if (*(char *)(&DAT_056c6838)[(ulong)uVar2 * 7] != '\0') {
    uVar4 = FUN_0274bce0(param_1,&DAT_056c6830 + (ulong)uVar2 * 7);
    if ((int)uVar4 == 0) {
      return uVar4;
    }
    if (param_2 == 6) {
      uVar2 = FUN_02f5a2f0(7);
      if (-1 < (int)uVar2) {
        if (*(char *)(&DAT_056c6838)[(ulong)uVar2 * 7] == '\0') {
          return 0;
        }
        iVar3 = FUN_0274bce0(param_1,&DAT_056c6830 + (ulong)uVar2 * 7);
        if (iVar3 != 0) {
          return 0;
        }
      }
    }
    else if (param_2 == 3) {
      uVar2 = FUN_02f5a2f0(4);
      if ((((int)uVar2 < 0) ||
          ((*(char *)(&DAT_056c6838)[(ulong)uVar2 * 7] != '\0' &&
           (iVar3 = FUN_0274bce0(param_1,&DAT_056c6830 + (ulong)uVar2 * 7), iVar3 == 0)))) &&
         (lVar1 = DAT_055588d0, DAT_055588d0 != 0)) {
        local_14[0] = *param_1;
        if (7 < local_14[0]) {
          local_14[0] = 0xff;
        }
        lVar5 = FUN_025830c0(DAT_055021a0,local_14,1);
        if (lVar5 == 0) {
          return 0;
        }
        lVar7 = lVar5 + 0x194b0;
        if (*(long *)(lVar5 + 0x194b8) == 0) {
          lVar7 = *(long *)(DAT_05574040 + 0x20);
        }
        if ((*(long **)(lVar7 + 0x86b0) == (long *)0x0) ||
           (puVar6 = (undefined8 *)**(long **)(lVar7 + 0x86b0), puVar6 == (undefined8 *)0x0)) {
          uVar2 = 1;
        }
        else {
          uVar2 = (**(code **)*puVar6)();
          uVar2 = uVar2 ^ 1;
        }
        uVar8 = 0;
        iVar3 = 0;
        do {
          if ((*(byte *)(lVar1 + 0xe98e0 + (ulong)(uVar8 >> 3)) >> (ulong)(uVar8 & 7) & 1) != 0) {
            iVar3 = (*(byte *)(*(long *)(lVar7 + 0x8698) + *(long *)(lVar7 + 0x8690) +
                              (ulong)(uVar8 >> 3)) >> (ulong)(uVar8 & 7) & 1) + iVar3;
          }
          uVar8 = uVar8 + 1;
        } while (uVar8 != 0x800);
        if ((((uVar2 & 1) == 0) && (*(long *)(lVar7 + 0x86b0) != 0)) &&
           (puVar6 = *(undefined8 **)(*(long *)(lVar7 + 0x86b0) + 8), puVar6 != (undefined8 *)0x0))
        {
          (**(code **)*puVar6)();
        }
        if (iVar3 != 0) {
          return 1;
        }
      }
      return 0;
    }
  }
  return 1;
}

