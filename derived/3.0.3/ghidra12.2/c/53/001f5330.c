
void FUN_001f5330(long param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  
  if (param_1 == 0) {
    return;
  }
  lVar2 = *(long *)(param_1 + 0x30);
  if (lVar2 != 0) {
    while (iVar1 = FUN_001f6570(lVar2), iVar1 == 0) {
      puVar3 = (undefined8 *)FUN_001f6550(*(undefined8 *)(param_1 + 0x30));
      if (puVar3 != (undefined8 *)0x0) {
        FUN_001f4e60(*puVar3);
        FUN_001f4e60(puVar3);
      }
      FUN_001f6520(*(undefined8 *)(param_1 + 0x30));
      lVar2 = *(long *)(param_1 + 0x30);
    }
  }
  FUN_001f6410(*(undefined8 *)(param_1 + 0x30));
  lVar2 = *(long *)(param_1 + 0x48);
  if (lVar2 != 0) {
    while (iVar1 = FUN_001f6570(lVar2), iVar1 == 0) {
      puVar3 = (undefined8 *)FUN_001f6550(*(undefined8 *)(param_1 + 0x48));
      if (puVar3 != (undefined8 *)0x0) {
        FUN_001f4e60(*puVar3);
        FUN_001f4e60(puVar3);
      }
      FUN_001f6520(*(undefined8 *)(param_1 + 0x48));
      lVar2 = *(long *)(param_1 + 0x48);
    }
  }
  FUN_001f6410(*(undefined8 *)(param_1 + 0x48));
  lVar2 = *(long *)(param_1 + 0x80);
  if (lVar2 != 0) {
    while (iVar1 = FUN_001f6570(lVar2), iVar1 == 0) {
      lVar2 = FUN_001f6550(*(undefined8 *)(param_1 + 0x80));
      if (lVar2 != 0) {
        FUN_001f4e60(*(undefined8 *)(lVar2 + 8));
        FUN_001f4e60(lVar2);
      }
      FUN_001f6520(*(undefined8 *)(param_1 + 0x80));
      lVar2 = *(long *)(param_1 + 0x80);
    }
    FUN_001f6410(*(undefined8 *)(param_1 + 0x80));
  }
  lVar2 = *(long *)(param_1 + 0x88);
  if (lVar2 != 0) {
    while (iVar1 = FUN_001f6570(lVar2), iVar1 == 0) {
      lVar2 = FUN_001f6550(*(undefined8 *)(param_1 + 0x88));
      if (lVar2 != 0) {
        FUN_001f4e60(*(undefined8 *)(lVar2 + 8));
        FUN_001f4e60(lVar2);
      }
      FUN_001f6520(*(undefined8 *)(param_1 + 0x88));
      lVar2 = *(long *)(param_1 + 0x88);
    }
    FUN_001f6410(*(undefined8 *)(param_1 + 0x88));
  }
  thunk_FUN_001f4e60(*(undefined8 *)(param_1 + 0x18));
  lVar2 = *(long *)(param_1 + 0x78);
  if (lVar2 != 0) {
    FUN_001f4e60(*(undefined8 *)(lVar2 + 8));
    FUN_001f4e60(lVar2);
  }
  FUN_001f4e60(param_1);
  return;
}

