
void FUN_003d33d4(long *param_1,undefined4 *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  uint uVar4;
  
  if ((char)param_1[7] != '\0') {
    *(undefined1 *)((long)param_1 + 0x3b) = 1;
    if (*(char *)((long)param_1 + 0x16e) != '\0') {
      uVar3 = FUN_003ca198();
      FUN_003ca594(uVar3,param_1 + 0x1b);
      *(undefined1 *)((long)param_1 + 0x16e) = 0;
    }
    if (*(char *)((long)param_1 + 0x39) != '\0') {
      *(undefined1 *)((long)param_1 + 0x39) = 0;
    }
  }
  *(undefined4 *)(param_1 + 0x21) = *param_2;
  *(undefined4 *)((long)param_1 + 0x10c) = param_2[1];
  param_1[0x22] = (long)(int)param_2[2];
  uVar4 = param_2[4];
  if (uVar4 == 0) {
    uVar4 = (uint)param_2[3] / 5;
  }
  *(uint *)(param_1 + 0x23) = uVar4;
  iVar2 = param_2[5];
  *(int *)(param_1 + 0x24) = iVar2;
  *(undefined4 *)((long)param_1 + 0x11c) = param_2[6];
  *(byte *)((long)param_1 + 0x124) = *(byte *)(param_2 + 7) & (byte)((iVar2 << 0x1e) >> 0x1f);
  lVar1 = *(long *)(param_2 + 10);
  param_1[0x25] = *(long *)(param_2 + 8);
  param_1[0x26] = lVar1;
  *(undefined4 *)(param_1 + 0x2d) = param_2[0xc];
  param_1[0x1f] = *param_3;
  param_1[0x20] = param_3[1];
  *(char *)((long)param_1 + 0xf3) = (char)param_3[2];
  *(undefined1 *)((long)param_1 + 0x16c) = 3;
  (**(code **)(*param_1 + 0x38))(param_1,1);
  uVar3 = FUN_003c0010();
  FUN_003c0080(uVar3,param_1 + 0x18);
  uVar3 = FUN_003ca198();
  FUN_003ca570(uVar3,param_1 + 0x1b);
  *(undefined1 *)((long)param_1 + 0x16e) = 1;
  return;
}

