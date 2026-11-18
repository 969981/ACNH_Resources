
void FUN_0322e36c(long param_1)

{
  undefined1 *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  byte bVar4;
  uint uVar5;
  
  if ((DAT_04cd19d8 == 0) || (*(int *)(DAT_04cd19d8 + 0x15c) == 0)) {
    uVar5 = 0;
  }
  else {
    bVar4 = *(byte *)(param_1 + 0x1f8);
    if (7 < bVar4) {
      bVar4 = 0xff;
    }
    uVar5 = (uint)(char)bVar4;
  }
  if (*(int *)(param_1 + 0x31c) == 2) {
    puVar1 = (undefined1 *)(param_1 + 0x310) + uVar5;
    if (3 < uVar5) {
      puVar1 = (undefined1 *)(param_1 + 0x310);
    }
    *puVar1 = 0;
  }
  else if (*(int *)(param_1 + 0x31c) != -1) {
    puVar2 = (undefined8 *)(param_1 + 0x2e8) + uVar5;
    if (3 < uVar5) {
      puVar2 = (undefined8 *)(param_1 + 0x2e8);
    }
    *puVar2 = 0xffffffff;
  }
  uVar3 = *(undefined4 *)(param_1 + 800);
  *(undefined4 *)(param_1 + 800) = 0xffffffff;
  *(undefined1 *)(param_1 + 0x30c) = 0;
  *(undefined4 *)(param_1 + 0x31c) = uVar3;
  return;
}

