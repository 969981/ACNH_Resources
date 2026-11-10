
void FUN_002b3cf8(long param_1,byte param_2)

{
  byte bVar1;
  undefined *puVar2;
  long lVar3;
  
  puVar2 = PTR_DAT_04bc1510;
  if (param_2 < 0x20) {
    lVar3 = FUN_002ba798(*(undefined8 *)PTR_DAT_04bc1510);
    lVar3 = lVar3 + (ulong)param_2 * 0x20;
    *(undefined8 *)(lVar3 + 0x3510) = 0;
    *(undefined8 *)(lVar3 + 0x3518) = 0;
    *(undefined8 *)(lVar3 + 0x3520) = 0;
    *(undefined4 *)(lVar3 + 0x3528) = 0;
    *(undefined1 *)(lVar3 + 0x352c) = 0;
    bVar1 = *(byte *)(param_1 + 0x38);
  }
  else {
    bVar1 = *(byte *)(param_1 + 0x38);
  }
  if (bVar1 < 0x20) {
    lVar3 = FUN_002ba798(*(undefined8 *)puVar2);
    lVar3 = lVar3 + (ulong)*(byte *)(param_1 + 0x38) * 0x20;
    *(undefined8 *)(lVar3 + 0x3510) = 0;
    *(undefined8 *)(lVar3 + 0x3518) = 0;
    *(undefined8 *)(lVar3 + 0x3520) = 0;
    *(undefined4 *)(lVar3 + 0x3528) = 0;
    *(undefined1 *)(lVar3 + 0x352c) = 0;
    *(byte *)(param_1 + 0x38) = param_2;
    return;
  }
  *(byte *)(param_1 + 0x38) = param_2;
  return;
}

