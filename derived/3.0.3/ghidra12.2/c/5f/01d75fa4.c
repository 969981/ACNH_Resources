
void FUN_01d75fa4(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  long lVar4;
  undefined *local_40;
  undefined8 *puStack_38;
  undefined8 local_30;
  undefined8 local_28;
  undefined1 *puStack_20;
  undefined1 local_18;
  
  lVar4 = FUN_0040b8d0(*(undefined8 *)(param_2 + 8));
  if (lVar4 != 0) {
    puVar1 = *(undefined8 **)(lVar4 + 0xc0);
    puVar2 = *(undefined8 **)(lVar4 + 200);
    puVar3 = (undefined8 *)0x0;
    if (puVar2 != puVar1) {
      puVar3 = puVar1;
    }
    if ((puVar2 != puVar1 && puVar3 != (undefined8 *)0x0) && ((int)puVar2 - (int)puVar1 == 0x58)) {
      puStack_38 = puVar3 + 2;
      local_18 = 0;
      local_40 = PTR_DAT_04bb8610 + 0x10;
      local_30 = *puVar3;
      local_28 = puVar3[1];
      puStack_20 = (undefined1 *)&local_40;
      FUN_01d8424c(DAT_05373f28,&local_30);
    }
  }
  return;
}

