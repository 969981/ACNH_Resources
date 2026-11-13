
void FUN_014da220(long param_1)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  
  lVar1 = DAT_0538b8e8;
  if (*(int *)(param_1 + 0xf60) == 1) {
    *(ushort *)(param_1 + 0xa2a) = *(ushort *)(param_1 + 0xa2a) | 0x10;
    if ((((*(byte *)(param_1 + 0xa2c) >> 1 & 1) == 0) || (*(int *)(param_1 + 0x378) != 3)) ||
       (uVar4 = FUN_014cc45c(param_1), (uVar4 & 1) != 0)) {
      lVar1 = DAT_0538b8e8;
      *(undefined1 *)(*(long *)(DAT_0538c468 + 0x10) + 0x24) = 1;
      if (*(int *)(lVar1 + 0x10) != 0) {
        *(undefined8 *)(lVar1 + 0x58) = 0;
        *(undefined1 *)(lVar1 + 0x99) = 0;
        *(undefined4 *)(lVar1 + 0x9c) = 3;
        FUN_03ebb160(lVar1 + 8,0);
      }
    }
    else {
      if (*(int *)(DAT_0538b8e8 + 0x10) == 1) {
        return;
      }
      uVar6 = 0;
      if (*(long *)PTR_DAT_04bbbc38 != 0) {
        uVar6 = *(undefined8 *)(*(long *)PTR_DAT_04bbbc38 + 0xc);
      }
      bVar3 = (int)uVar6 != 3;
      bVar2 = 1 < (int)((ulong)uVar6 >> 0x20) - 5U;
      if (*(char *)(DAT_0538b8e8 + 0x99) != '\0') {
        uVar5 = 7;
        if (bVar3 || bVar2) {
          uVar5 = 1;
        }
        FUN_014c9540(param_1,uVar5);
        *(undefined4 *)(param_1 + 0xf60) = 3;
        return;
      }
      uVar5 = 8;
      if (bVar3 || bVar2) {
        uVar5 = 2;
      }
      FUN_014c9540(param_1,uVar5);
      FUN_014cc640(param_1);
    }
    *(undefined4 *)(param_1 + 0xf60) = 0;
    return;
  }
  if (*(int *)(param_1 + 0xf60) != 0) {
    return;
  }
  if (((*(byte *)(param_1 + 0xa2c) >> 1 & 1) != 0) && (*(int *)(param_1 + 0x378) == 3)) {
    uVar4 = FUN_014cc588(param_1);
    if ((uVar4 & 1) == 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0xf60) = 1;
    return;
  }
  if (*(int *)(DAT_0538b8e8 + 0x10) != 1) {
    return;
  }
  *(undefined1 *)(*(long *)(DAT_0538c468 + 0x10) + 0x24) = 1;
  if (*(int *)(lVar1 + 0x10) == 0) {
    return;
  }
  *(undefined8 *)(lVar1 + 0x58) = 0;
  *(undefined1 *)(lVar1 + 0x99) = 0;
  *(undefined4 *)(lVar1 + 0x9c) = 3;
  FUN_03ebb160(lVar1 + 8,0);
  return;
}

