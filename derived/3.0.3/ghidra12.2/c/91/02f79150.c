
void FUN_02f79150(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  byte local_4c [12];
  
  *(undefined1 *)(param_1 + 0x2e0) = 0xff;
  *(undefined1 *)(param_1 + 0x4b0) = 0xff;
  *(undefined1 *)(param_1 + 0x680) = 0xff;
  *(undefined1 *)(param_1 + 0x850) = 0xff;
  *(undefined1 *)(param_1 + 0xa20) = 0xff;
  *(undefined1 *)(param_1 + 0xbf0) = 0xff;
  *(undefined1 *)(param_1 + 0xdc0) = 0xff;
  *(undefined1 *)(param_1 + 0xf90) = 0xff;
  *(undefined2 *)(param_1 + 0x310) = 0;
  *(undefined8 *)(param_1 + 0x2e8) = 0;
  *(undefined2 *)(param_1 + 0x4e0) = 0;
  *(undefined8 *)(param_1 + 0x4b8) = 0;
  *(undefined2 *)(param_1 + 0x6b0) = 0;
  *(undefined8 *)(param_1 + 0x688) = 0;
  *(undefined2 *)(param_1 + 0x880) = 0;
  *(undefined8 *)(param_1 + 0x858) = 0;
  *(undefined2 *)(param_1 + 0xa50) = 0;
  *(undefined8 *)(param_1 + 0xa28) = 0;
  *(undefined2 *)(param_1 + 0xc20) = 0;
  *(undefined8 *)(param_1 + 0xbf8) = 0;
  *(undefined2 *)(param_1 + 0xdf0) = 0;
  *(undefined8 *)(param_1 + 0xdc8) = 0;
  *(undefined2 *)(param_1 + 0xfc0) = 0;
  *(undefined8 *)(param_1 + 0xf98) = 0;
  *(undefined4 *)(param_1 + 0x1160) = 0;
  uVar4 = (uint)*(byte *)(param_1 + 0x1f8);
  if (*(int *)(param_1 + 0x1fc) == 0x40) {
    FUN_02507c6c(local_4c,7,1,0,0);
    puVar1 = PTR_DAT_04bb5038;
    uVar3 = (uint)local_4c[0];
    if (local_4c[0] < 8) {
      do {
        if (((7 < uVar4) || (uVar4 != uVar3)) && (*(uint *)(param_1 + 0x1160) < 8)) {
          *(char *)(param_1 + 0x2e0 + (ulong)*(uint *)(param_1 + 0x1160) * 0x1d0) = (char)uVar3;
          *(int *)(param_1 + 0x1160) = *(int *)(param_1 + 0x1160) + 1;
        }
        uVar5 = (ulong)uVar3;
        do {
          if (uVar5 == 7) {
            return;
          }
          uVar5 = uVar5 + 1;
          uVar2 = FUN_02507924(local_4c,puVar1 + uVar5);
        } while ((uVar2 & 1) == 0);
        local_4c[0] = puVar1[uVar5];
        uVar3 = (uint)local_4c[0];
      } while (uVar3 < 8);
    }
  }
  else if (uVar4 < 8) {
    *(byte *)(param_1 + 0x2e0) = *(byte *)(param_1 + 0x1f8);
    *(undefined4 *)(param_1 + 0x1160) = 1;
  }
  return;
}

