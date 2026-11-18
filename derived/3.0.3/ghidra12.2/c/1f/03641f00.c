
uint FUN_03641f00(undefined8 *param_1)

{
  int iVar1;
  byte bVar2;
  undefined8 uVar3;
  uint uVar4;
  
  bVar2 = *(byte *)(param_1[9] + (ulong)*(uint *)((long)param_1 + 0x2c));
  uVar4 = (uint)bVar2;
  if (*(char *)((long)param_1 + 0x3a) != '\0') {
    if (*(int *)((long)param_1 + 0xc) == 1) {
      *(uint *)(param_1 + 3) = (uint)bVar2;
    }
    else {
      uVar4 = *(uint *)((long)param_1 + 0x14);
      *(undefined1 *)(param_1 + 0x8fa) = 1;
      if (*(int *)(param_1 + 4) - 2U < 2) {
        *(char *)(param_1[9] + (ulong)*(uint *)((long)param_1 + 0x2c)) = (char)uVar4;
        *(undefined1 *)
         (param_1[0x10] +
         ((param_1[9] - param_1[0xb]) + (ulong)*(uint *)((long)param_1 + 0x2c) >> 10)) = 1;
      }
      else if ((*(int *)(param_1 + 4) == 1) && (uVar4 == 0x80)) {
        iVar1 = *(int *)(param_1 + 6);
        *(undefined4 *)(param_1 + 6) = 0;
        *(int *)(param_1 + 5) = *(int *)(param_1 + 5) + iVar1;
        *(undefined4 *)(param_1 + 4) = 2;
      }
    }
    if (*(char *)((long)param_1 + 0x11) != '\0') {
      uVar3 = nn::os::GetSystemTick();
      param_1[0x8fb] = uVar3;
      *(uint *)*param_1 = *(uint *)*param_1 | 0x40;
    }
  }
  *(int *)((long)param_1 + 0x2c) = *(int *)((long)param_1 + 0x2c) + 1;
  return uVar4;
}

