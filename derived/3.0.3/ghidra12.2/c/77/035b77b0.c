
void FUN_035b77b0(undefined4 *param_1)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint uVar3;
  
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  if (*(char *)(param_1 + -0x4b) != '\0') {
    return;
  }
  puVar1 = param_1 + 0x3c0;
  if (param_1[0x4c3] != 0) {
    FUN_03611480(puVar1);
  }
  pbVar2 = (byte *)((long)param_1 + 0x13fa);
  if ((char)*pbVar2 < '\0') {
    FUN_036095a8(param_1 + 0x4e2,0x7f);
  }
  if (param_1[0x4c3] != 0) {
    FUN_03611480(puVar1);
  }
  uVar3 = (uint)(char)*pbVar2;
  if (((char)*pbVar2 < '\0') || (*(byte *)((long)param_1 + -0x12e) < 3)) {
    *(undefined2 *)((long)param_1 + 0x13a6) = 1;
  }
  if (param_1[0x4c3] != 0) {
    FUN_03611480(puVar1);
    uVar3 = (uint)*pbVar2;
  }
  if ((uVar3 >> 7 & 1) != 0) {
    *(undefined1 *)((long)param_1 + 0x13be) = 0;
    if (*(char *)((long)param_1 + 0x1389) == '\0') {
      *(undefined2 *)(param_1 + 0x500) = 0;
    }
    else {
      if ((*(char *)(param_1 + 0x4e2) != '\0') && (*(char *)((long)param_1 + 0x13aa) == '\0')) {
        uVar3 = 4;
        if (*(char *)((long)param_1 + 0x13bf) == '\0') {
          uVar3 = ((uint)*(byte *)(param_1 + 0x4eb) << 2 ^ 0xffffffff) & 4;
        }
        *(byte *)((long)param_1 + 0x13bd) = *(byte *)((long)param_1 + 0x13ab) >> (ulong)uVar3 & 0xf;
        *(undefined2 *)(param_1 + 0x500) = 0x186;
        goto LAB_035b78e4;
      }
      *(undefined2 *)(param_1 + 0x500) = 0x186;
    }
    *(undefined1 *)((long)param_1 + 0x13bd) = 0;
  }
LAB_035b78e4:
  if (param_1[0x4c3] != 0) {
    FUN_03611480(puVar1);
  }
  uVar3 = (uint)(char)*pbVar2;
  if ((char)*pbVar2 < '\0') {
    param_1[0x4e8] = param_1[0x4e8] & 0x700 | 0xbf;
  }
  if (param_1[0x4c3] != 0) {
    FUN_03611480(puVar1);
    uVar3 = (uint)*pbVar2;
  }
  if (((uVar3 >> 7 & 1) != 0) || (*(byte *)((long)param_1 + -0x12e) < 3)) {
    *(undefined2 *)((long)param_1 + 0x13e6) = 1;
  }
  if (param_1[0x4c3] != 0) {
    FUN_03611480(puVar1);
    uVar3 = (uint)*pbVar2;
  }
  if ((uVar3 >> 7 & 1) != 0) {
    FUN_03609bb4(param_1 + 0x4f2,0);
  }
  if (param_1[0x4c3] != 0) {
    FUN_03611480(puVar1);
  }
  uVar3 = (uint)(char)*pbVar2;
  if ((char)*pbVar2 < '\0') {
    *(undefined2 *)((long)param_1 + 0x13f2) = 0;
    *(undefined1 *)(param_1 + 0x4fd) = 0;
    param_1[0x4f8] = 8;
  }
  if (param_1[0x4c3] != 0) {
    FUN_03611480(puVar1);
    uVar3 = (uint)*pbVar2;
  }
  if ((uVar3 >> 7 & 1) != 0) {
    FUN_03609dc4(param_1 + 0x4f2,0xbf);
  }
  if (((2 < *(byte *)((long)param_1 + -0x12e)) &&
      (*(undefined1 *)((long)param_1 + 1) = 0, 2 < *(byte *)((long)param_1 + -0x12e))) &&
     (*(undefined1 *)((long)param_1 + 2) = 0, 2 < *(byte *)((long)param_1 + -0x12e))) {
    *(undefined1 *)(param_1 + 1) = 0;
  }
  return;
}

