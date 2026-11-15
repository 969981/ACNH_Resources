
void FUN_0248d900(byte *param_1,long param_2)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  byte local_40 [4];
  undefined4 local_3c;
  undefined8 local_38;
  
  if ((*(byte *)(param_2 + 0x37) & 1) == 0) {
    local_38 = 0xfffe;
    FUN_0277d4ac(&local_38);
    local_38 = *(undefined8 *)(param_2 + 0x20);
    local_3c = 0;
    FUN_02326c70(param_1,&local_38,&local_3c);
  }
  puVar1 = PTR_DAT_04bb4f78;
  lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*param_1 * 0x740;
  if (7 < *param_1) {
    lVar4 = *(long *)PTR_DAT_04bb4f78 + 0x20;
  }
  if (*(short *)(param_2 + 1) == DAT_04c487d4) {
    *(undefined4 *)(lVar4 + 0xc) = 3;
    FUN_01393458(lVar4 + 0xb0);
  }
  else {
    *(undefined4 *)(lVar4 + 0xc) = 4;
  }
  if ((((*param_1 < 8) && (uVar2 = FUN_02582d8c(param_1,1), uVar2 < 8)) &&
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d4) != '\0')) &&
     (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar2 * 0x13f0 + 0x13d6) != '\0')) {
    local_40[0] = *param_1;
    if (7 < local_40[0]) {
      local_40[0] = 0xff;
    }
    lVar4 = FUN_025830c0(*(undefined8 *)puVar1,local_40,1);
    if (lVar4 != 0) {
      if ((*(long **)(lVar4 + 0x1aa0) == (long *)0x0) ||
         (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x1aa0), puVar5 == (undefined8 *)0x0)) {
        uVar2 = 1;
      }
      else {
        uVar2 = (**(code **)*puVar5)();
        uVar2 = uVar2 ^ 1;
      }
      uVar3 = FUN_028169a0(*(long *)(lVar4 + 0x1a88) + *(long *)(lVar4 + 0x1a80));
      if ((((uVar2 & 1) == 0) && (*(long *)(lVar4 + 0x1aa0) != 0)) &&
         (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x1aa0) + 8), puVar5 != (undefined8 *)0x0)) {
        (**(code **)*puVar5)();
      }
      if (uVar3 < 0x28) {
        uVar6 = FUN_02677ea0(param_1,uVar3);
        FUN_02326130(param_1,uVar6,1);
      }
    }
  }
  return;
}

