
void FUN_03fc2ff8(long param_1,uint param_2)

{
  long *plVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  long lVar7;
  char cVar8;
  undefined8 uVar9;
  
  plVar1 = (long *)(param_1 + 0x226a80);
  uVar6 = 0xe0;
  if ((param_2 & 4) != 0) {
    uVar6 = 0xef;
  }
  *(undefined2 *)(param_1 + 0x4594c) = uVar6;
  bVar2 = *(byte *)(param_1 + 0x3170f6);
  *(char *)(param_1 + 0x3170f6) = (char)(param_2 & 8);
  if ((uint)bVar2 == (param_2 & 8)) goto LAB_03fc3200;
  cVar3 = *(char *)(param_1 + 0x316a9f);
  if (cVar3 == '\x01') {
    *(undefined8 *)(&LAB_00316a88 + param_1) = *(undefined8 *)(param_1 + 0x45a00);
  }
  else {
    *(undefined8 *)(&LAB_00316a90 + param_1) = *(undefined8 *)(param_1 + 0x45a00);
    *(undefined1 *)(param_1 + 0x316a9f) = 1;
    *(undefined8 *)(param_1 + 0x45a00) = *(undefined8 *)(&LAB_00316a88 + param_1);
    *(undefined4 *)(&LAB_00316a98 + param_1) = 0x100;
  }
  if ((param_2 & 8) == 0) {
    cVar8 = '\x01';
    if (cVar3 != '\x01') {
LAB_03fc30e4:
      if ((ushort)*(byte *)(param_1 + 0x45e7c) != *(ushort *)(param_1 + 0x45e7a)) {
        *(char *)(param_1 + 0x45e7c) = (char)*(ushort *)(param_1 + 0x45e7a);
        *(char *)(*plVar1 + 0x7802b) = *(char *)(*plVar1 + 0x7802b) + '\x01';
        *(undefined1 *)(*plVar1 + (ulong)*(byte *)(*plVar1 + 0x7802b) * 3 + 0x7802c) =
             *(undefined1 *)(param_1 + 0x45e7a);
        *(undefined1 *)(*plVar1 + (ulong)*(byte *)(*plVar1 + 0x7802b) * 3 + 0x7802e) =
             *(undefined1 *)(param_1 + 0x45e71);
        cVar8 = *(char *)(param_1 + 0x316a9f);
      }
      *(char *)(*plVar1 + (ulong)*(byte *)(*plVar1 + 0x7802b) * 3 + 0x7802d) = cVar8 + -1;
    }
  }
  else {
    uVar9 = *(undefined8 *)(&LAB_00316a90 + param_1);
    cVar8 = '\x02';
    *(undefined1 *)(param_1 + 0x316a9f) = 2;
    *(long *)(param_1 + 0x45958) = param_1 + 0x29ea88;
    *(long *)(param_1 + 0x45950) = param_1 + 0x226a88;
    *(undefined4 *)(&LAB_00316a98 + param_1) = 0xfffffe00;
    *(undefined8 *)(param_1 + 0x45a00) = uVar9;
    *(undefined1 *)(param_1 + 0x3170e8) = *(undefined1 *)(param_1 + 0x45962);
    if (cVar3 != '\x02') goto LAB_03fc30e4;
  }
  FUN_03fe5eb0(param_1);
  if (*(char *)(param_1 + 0x3170e8) != '\0') {
    FUN_03fc56a4(param_1,param_1 + 0x45950);
  }
  FUN_03fc3320(param_1);
  if ((((((0x94U >> (ulong)(*(byte *)(param_1 + 0x316a9e) & 0x1f) & 1) == 0) &&
        (*(char *)(param_1 + 0x316a9f) != '\x02')) &&
       (*(int *)(*(long *)(param_1 + 0x45e68) + 0x50) == 0)) &&
      ((*(int *)(*(long *)(param_1 + 0x45e68) + 0x60) == 0 && (*(byte *)(param_1 + 0x316aa1) < 2))))
     && (*(char *)(param_1 + 0x3170e8) == '\0')) {
    *(undefined1 **)(param_1 + 0x3170f8) = &LAB_03fcb350;
    uVar5 = 4;
  }
  else {
    *(undefined1 **)(param_1 + 0x3170f8) = &LAB_03fcbe70;
    uVar5 = 1;
  }
  *(undefined1 *)(param_1 + 0x317100) = uVar5;
LAB_03fc3200:
  if ((param_2 & 1) != (uint)*(byte *)(param_1 + 0x3170f7)) {
    *(char *)(param_1 + 0x3170f7) = (char)(param_2 & 1);
    if ((param_2 & 1) == 0) {
      lVar7 = *(long *)(*plVar1 + 0x78020) + 0x3b000;
    }
    else {
      lVar7 = *(long *)(*plVar1 + 0x78020) + 0x77000;
    }
    cVar3 = *(char *)(param_1 + 0x316a9f);
    *(long *)(&LAB_00316a90 + param_1) = lVar7 + 0xc00;
    if (cVar3 == '\x02') {
      *(long *)(param_1 + 0x45a00) = lVar7 + 0xc00;
    }
  }
  uVar4 = (param_2 & 0xff) >> 6 & 1;
  if ((uVar4 == *(byte *)(param_1 + 0x3170f5)) ||
     (*(char *)(param_1 + 0x3170f5) = (char)uVar4, *(char *)(param_1 + 0x316a9e) != '\a')) {
    return;
  }
  if (uVar4 == 0) {
    *(byte *)(param_1 + 0x4596c) = *(byte *)(param_1 + 0x4596c) & 0x10 | 6;
    *(byte *)(param_1 + 0x45a1c) = *(byte *)(param_1 + 0x45a1c) & 0x10 | 6;
  }
  else {
    *(byte *)(param_1 + 0x4596d) = *(byte *)(param_1 + 0x4596d) & 0x10 | 7;
    *(byte *)(param_1 + 0x45a1d) = *(byte *)(param_1 + 0x45a1d) & 0x10 | 7;
  }
  FUN_03fc56a4(param_1,param_1 + 0x45a00);
  if (*(char *)(param_1 + 0x3170e8) != '\0') {
    FUN_03fc56a4(param_1,param_1 + 0x45950);
  }
  FUN_03fc3830(param_1);
  return;
}

