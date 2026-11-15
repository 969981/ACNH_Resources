
void FUN_021dd4e0(long param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  char *pcVar3;
  
  if (param_2 != 0) {
    uVar1 = *(uint *)(param_2 + 0x508);
    if (uVar1 != 0xffffffff) {
      puVar2 = &DAT_053fe348 + (ulong)uVar1 * 0xba0;
      if (9 < uVar1) {
        puVar2 = &DAT_053fe348;
      }
      *(undefined4 *)(puVar2 + 0x660) = *(undefined4 *)(param_1 + 8);
      *(undefined4 *)(puVar2 + 0x664) = *(undefined4 *)(param_1 + 0xc);
      *(undefined4 *)(puVar2 + 0x668) = *(undefined4 *)(param_1 + 0x10);
      *(undefined4 *)(puVar2 + 0x66c) = *(undefined4 *)(param_1 + 0x14);
      *(undefined4 *)(puVar2 + 0x670) = *(undefined4 *)(param_1 + 0x18);
      *(undefined4 *)(puVar2 + 0x674) = *(undefined4 *)(param_1 + 0x1c);
      *(undefined4 *)(puVar2 + 0x678) = *(undefined4 *)(param_1 + 0x20);
      *(undefined4 *)(puVar2 + 0x690) = *(undefined4 *)(param_1 + 0x38);
      *(undefined4 *)(puVar2 + 0x694) = *(undefined4 *)(param_1 + 0x3c);
      *(undefined4 *)(puVar2 + 0x6a0) = *(undefined4 *)(param_1 + 0x48);
      *(undefined4 *)(puVar2 + 0x6a4) = *(undefined4 *)(param_1 + 0x4c);
      *(undefined2 *)(puVar2 + 0x6a8) = *(undefined2 *)(param_1 + 0x50);
      puVar2[0x6aa] = *(undefined1 *)(param_1 + 0x52);
      puVar2[0x6ab] = *(undefined1 *)(param_1 + 0x53);
      *(undefined4 *)(puVar2 + 0x6ac) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(puVar2 + 0x6c0) = *(undefined4 *)(param_1 + 0x68);
      *(undefined4 *)(puVar2 + 0x6c4) = *(undefined4 *)(param_1 + 0x6c);
      *(undefined4 *)(puVar2 + 0x6d0) = *(undefined4 *)(param_1 + 0x78);
      *(undefined4 *)(puVar2 + 0x6d4) = *(undefined4 *)(param_1 + 0x7c);
      puVar2[0x6d8] = *(undefined1 *)(param_1 + 0x80);
      return;
    }
    uVar1 = *(uint *)(param_2 + 0x50c);
    if (uVar1 != 0xffffffff) {
      pcVar3 = &DAT_05454358 + (ulong)uVar1 * 0x2d8;
      if (0x10 < uVar1) {
        pcVar3 = &DAT_05454358;
      }
      if (*pcVar3 != '\0') {
        *(undefined4 *)(pcVar3 + 0x98) = *(undefined4 *)(param_1 + 8);
        *(undefined4 *)(pcVar3 + 0x9c) = *(undefined4 *)(param_1 + 0xc);
        *(undefined4 *)(pcVar3 + 0xa0) = *(undefined4 *)(param_1 + 0x10);
        *(undefined4 *)(pcVar3 + 0xa4) = *(undefined4 *)(param_1 + 0x14);
        *(undefined4 *)(pcVar3 + 0xa8) = *(undefined4 *)(param_1 + 0x18);
        *(undefined4 *)(pcVar3 + 0xac) = *(undefined4 *)(param_1 + 0x1c);
        *(undefined4 *)(pcVar3 + 0xb0) = *(undefined4 *)(param_1 + 0x20);
        *(undefined4 *)(pcVar3 + 200) = *(undefined4 *)(param_1 + 0x38);
        *(undefined4 *)(pcVar3 + 0xcc) = *(undefined4 *)(param_1 + 0x3c);
        *(undefined4 *)(pcVar3 + 0xd8) = *(undefined4 *)(param_1 + 0x48);
        *(undefined4 *)(pcVar3 + 0xdc) = *(undefined4 *)(param_1 + 0x4c);
        *(undefined2 *)(pcVar3 + 0xe0) = *(undefined2 *)(param_1 + 0x50);
        pcVar3[0xe2] = *(char *)(param_1 + 0x52);
        pcVar3[0xe3] = *(char *)(param_1 + 0x53);
        *(undefined4 *)(pcVar3 + 0xe4) = *(undefined4 *)(param_1 + 0x54);
        *(undefined4 *)(pcVar3 + 0xf8) = *(undefined4 *)(param_1 + 0x68);
        *(undefined4 *)(pcVar3 + 0xfc) = *(undefined4 *)(param_1 + 0x6c);
        *(undefined4 *)(pcVar3 + 0x108) = *(undefined4 *)(param_1 + 0x78);
        *(undefined4 *)(pcVar3 + 0x10c) = *(undefined4 *)(param_1 + 0x7c);
        pcVar3[0x110] = *(char *)(param_1 + 0x80);
      }
    }
  }
  return;
}

