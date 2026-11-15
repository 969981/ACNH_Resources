
void FUN_021dd680(long param_1)

{
  uint uVar1;
  char *pcVar2;
  undefined *puVar3;
  undefined8 local_8;
  
  if (param_1 == 0) {
    return;
  }
  uVar1 = *(uint *)(param_1 + 0x508);
  if (uVar1 == 0xffffffff) {
    uVar1 = *(uint *)(param_1 + 0x50c);
    if (uVar1 == 0xffffffff) {
      return;
    }
    pcVar2 = &DAT_05454358 + (ulong)uVar1 * 0x2d8;
    if (0x10 < uVar1) {
      pcVar2 = &DAT_05454358;
    }
    if (*pcVar2 == '\0') {
      return;
    }
    pcVar2[200] = '\0';
    pcVar2[0xc9] = '\0';
    pcVar2[0xca] = '\0';
    pcVar2[0xcb] = '\0';
    pcVar2[0xcc] = '\0';
    pcVar2[0xcd] = '\0';
    pcVar2[0xce] = '\0';
    pcVar2[0xcf] = '\0';
    pcVar2[0x98] = '\x10';
    pcVar2[0x99] = '\0';
    pcVar2[0x9a] = '\0';
    pcVar2[0x9b] = '\0';
    pcVar2[0xd8] = '\0';
    pcVar2[0xd9] = '\0';
    pcVar2[0xda] = '\0';
    pcVar2[0xdb] = '\0';
    pcVar2[0xdc] = '\0';
    pcVar2[0xdd] = '\0';
    pcVar2[0xde] = '\0';
    pcVar2[0xdf] = '\0';
    pcVar2[0x9c] = '\0';
    pcVar2[0x9d] = '\0';
    pcVar2[0x9e] = '\0';
    pcVar2[0x9f] = '\0';
    pcVar2[0xa0] = '\0';
    pcVar2[0xa1] = '\0';
    pcVar2[0xa2] = '\0';
    pcVar2[0xa3] = '\0';
    pcVar2[0xa4] = '\0';
    pcVar2[0xa5] = '\0';
    pcVar2[0xa6] = '\0';
    pcVar2[0xa7] = '\0';
    pcVar2[0xa8] = '\0';
    pcVar2[0xa9] = '\0';
    pcVar2[0xaa] = '\0';
    pcVar2[0xab] = '\0';
    pcVar2[0xac] = '\0';
    pcVar2[0xad] = '\0';
    pcVar2[0xae] = '\0';
    pcVar2[0xaf] = '\0';
    pcVar2[0xb0] = '\0';
    pcVar2[0xb1] = '\0';
    pcVar2[0xb2] = '\0';
    pcVar2[0xb3] = '\0';
    local_8 = 0xfffe;
    FUN_0277d4ac(&local_8);
    pcVar2[0xf8] = '\0';
    pcVar2[0xf9] = '\0';
    pcVar2[0xfa] = '\0';
    pcVar2[0xfb] = '\0';
    pcVar2[0xfc] = '\0';
    pcVar2[0xfd] = '\0';
    pcVar2[0xfe] = '\0';
    pcVar2[0xff] = '\0';
    *(undefined4 *)(pcVar2 + 0xe0) = (undefined4)local_8;
    *(undefined4 *)(pcVar2 + 0xe4) = local_8._4_4_;
    pcVar2 = pcVar2 + 0x108;
  }
  else {
    puVar3 = &DAT_053fe348 + (ulong)uVar1 * 0xba0;
    if (9 < uVar1) {
      puVar3 = &DAT_053fe348;
    }
    *(undefined4 *)(puVar3 + 0x660) = 0x10;
    *(undefined8 *)(puVar3 + 0x690) = 0;
    *(undefined8 *)(puVar3 + 0x6a0) = 0;
    *(undefined8 *)(puVar3 + 0x664) = 0;
    *(undefined8 *)(puVar3 + 0x66c) = 0;
    *(undefined8 *)(puVar3 + 0x674) = 0;
    local_8 = 0xfffe;
    FUN_0277d4ac(&local_8);
    *(undefined8 *)(puVar3 + 0x6c0) = 0;
    *(undefined4 *)(puVar3 + 0x6a8) = (undefined4)local_8;
    *(undefined4 *)(puVar3 + 0x6ac) = local_8._4_4_;
    pcVar2 = puVar3 + 0x6d0;
  }
  pcVar2[8] = '\0';
  pcVar2[0] = '\0';
  pcVar2[1] = '\0';
  pcVar2[2] = '\0';
  pcVar2[3] = '\0';
  pcVar2[4] = '\0';
  pcVar2[5] = '\0';
  pcVar2[6] = '\0';
  pcVar2[7] = '\0';
  return;
}

