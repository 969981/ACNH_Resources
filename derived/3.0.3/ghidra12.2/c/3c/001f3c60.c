
void FUN_001f3c60(undefined8 *param_1,ulong param_2)

{
  undefined *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  *param_1 = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 1) = 0xffffffff;
  param_1[4] = 0;
  param_1[5] = 0;
  if (param_2 != 0) {
    if ((long)param_2 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01c6e7e8();
    }
    puVar4 = (undefined8 *)FUN_00187df4(param_2);
    puVar2 = (undefined8 *)((long)puVar4 + param_2);
    param_1[3] = puVar4;
    param_1[5] = puVar2;
    for (uVar3 = param_2 & 7; uVar3 != 0; uVar3 = uVar3 - 1) {
      *(undefined1 *)puVar4 = 0;
      puVar4 = (undefined8 *)((long)puVar4 + 1);
    }
    if (7 < param_2) {
      do {
        puVar5 = puVar4 + 1;
        *puVar4 = 0;
        puVar4 = puVar5;
      } while (puVar5 != puVar2);
    }
    param_1[4] = puVar2;
  }
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined4 *)(param_1 + 10) = 0x101;
  param_1[8] = 0;
  param_1[9] = param_2;
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0x20) = 0;
  param_1[0x26] = 0;
  param_1[0xb] = puVar1;
  param_1[0x10] = puVar1;
  param_1[0x15] = puVar1;
  param_1[0x1a] = puVar1;
  param_1[0x1f] = puVar1;
  param_1[0xe] = param_1 + 0xc;
  param_1[0xf] = 0x10;
  *(undefined1 *)(param_1 + 0x11) = 0;
  param_1[0x13] = param_1 + 0x11;
  param_1[0x14] = 0x10;
  param_1[0x22] = param_1 + 0x20;
  param_1[0x23] = 0x10;
  *(undefined4 *)(param_1 + 0x27) = 1;
  param_1[0x18] = param_1 + 0x16;
  param_1[0x19] = 0x10;
  param_1[0x1d] = param_1 + 0x1b;
  param_1[0x1e] = 0x10;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  return;
}

