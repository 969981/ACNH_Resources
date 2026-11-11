
void FUN_0039a020(long param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  cVar3 = *(char *)(param_1 + 0x109);
  if ('\0' < cVar3) {
    lVar5 = 0;
    lVar6 = 8;
    do {
      lVar7 = *(long *)(param_1 + 0x110);
      lVar4 = *(long *)(lVar7 + lVar6);
      if ((*(byte *)(lVar4 + 0x14) & 3) != 0) {
        FUN_0037a00c(lVar4,param_2,param_3);
        uVar1 = FUN_0036515c(param_2,*(undefined8 *)(lVar4 + 0x20),*(undefined2 *)(lVar4 + 0x4a));
        if ((uVar1 & 1) != 0) {
          FUN_0037bb40(lVar4,param_3);
        }
        FUN_00365144(param_2,param_3);
        FUN_0037b59c(*(undefined8 *)(lVar7 + lVar6),param_3,param_2);
        if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) {
          uVar2 = FUN_00366284(*(undefined8 *)(param_2 + 0xb8),1);
          FUN_00348090(param_3,uVar2);
        }
        FUN_00364c60(param_3,param_2);
        cVar3 = *(char *)(param_1 + 0x109);
      }
      lVar5 = lVar5 + 1;
      lVar6 = lVar6 + 0x10;
    } while (lVar5 < cVar3);
  }
  if ((*(byte *)(param_1 + 0x10a) >> 2 & 1) != 0) {
    return;
  }
  FUN_0037a00c(*(undefined8 *)(param_1 + 0x118),param_2,param_3);
  FUN_00364bf0(param_3,param_2,*(undefined8 *)(param_1 + 0x118));
  if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) {
    FUN_0037ec68(param_1,param_3,param_2);
  }
  FUN_00364c60(param_3,param_2);
  return;
}

