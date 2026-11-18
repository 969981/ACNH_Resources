
void FUN_03640c30(undefined8 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if (*(char *)((long)param_1 + 9) != '\0') {
    uVar1 = param_2 & 1;
    uVar2 = param_2 >> 1 & 1;
    uVar3 = param_2 >> 2 & 1;
    uVar4 = param_2 >> 3 & 1;
    uVar5 = param_2 >> 4 & 1;
    if (((((uVar1 != *(byte *)((long)param_1 + 0xb)) || (*(uint *)((long)param_1 + 0xc) != uVar3))
         || ((uint)*(byte *)((long)param_1 + 0x11) != (param_2 & 0x80) >> 7)) ||
        ((uVar5 != *(byte *)(param_1 + 2) || (*(uint *)(param_1 + 0x11) != uVar4)))) ||
       (uVar2 != *(byte *)((long)param_1 + 0x39))) {
      *(undefined4 *)((long)param_1 + 0x8c) = 0;
    }
    if (*(int *)(param_1 + 8) == -1) {
      bVar6 = false;
      *(undefined1 *)((long)param_1 + 0x12) = 0;
    }
    else {
      bVar6 = uVar1 != 0;
      if ((uVar1 != 0) && (*(byte *)((long)param_1 + 0xb) == 0)) {
        *(undefined1 *)((long)param_1 + 0x12) = 0;
        bVar6 = true;
        *(undefined4 *)((long)param_1 + 0x3c) = 0x2b8a4;
        param_1[4] = 0xff00000000;
        param_1[5] = 0;
        param_1[6] = 0;
      }
    }
    *(uint *)((long)param_1 + 0xc) = uVar3;
    *(char *)((long)param_1 + 0x39) = (char)uVar2;
    *(bool *)((long)param_1 + 0xb) = bVar6;
    *(char *)(param_1 + 2) = (char)uVar5;
    *(byte *)((long)param_1 + 0x11) = (byte)(param_2 >> 7) & 1;
    *(char *)(param_1 + 7) = (char)((param_2 & 0x40) >> 6);
    *(bool *)((long)param_1 + 0x3a) = (param_2 & 0x40) != 0 && uVar3 == 0;
    if (*(uint *)(param_1 + 0x11) != uVar4) {
      *(uint *)(param_1 + 0x11) = uVar4;
      (*(code *)param_1[0x8f6])(uVar4,param_1[0x8f7]);
    }
    if ((param_2 & 0x80) == 0) {
      *(uint *)*param_1 = *(uint *)*param_1 & 0xffffffbf;
    }
  }
  return;
}

