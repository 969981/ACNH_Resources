
void FUN_03f4d578(long *param_1,uint param_2)

{
  ushort uVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  
  uVar1 = *(ushort *)((long)param_1 + 0x2c);
  uVar3 = (uint)uVar1;
  *(uint *)((long)param_1 + 0x24) = (uint)uVar1;
  *(undefined4 *)(param_1 + 5) = *(undefined4 *)((long)param_1 + 0x1c);
  if (uVar1 == 0) {
    uVar3 = 0x10000;
    *(undefined4 *)((long)param_1 + 0x24) = 0x10000;
  }
  if (*(int *)(param_1[1] + 0x14) == 0 && *(char *)((long)param_1 + 0x2e) == '\0') {
    *(uint *)(*param_1 + 0x34e0bc) = *(int *)(*param_1 + 0x34e0bc) + uVar3 * 0x800 + 0x800;
  }
  lVar4 = *param_1;
  if (((*(char *)(lVar4 + 0x34758) == '\0') || ((*(byte *)(lVar4 + 0x3472c) >> 4 & 1) == 0)) ||
     ((*(ushort *)((long)param_1 + 0x12) & 0xf0) != 0x40)) {
    if (*(char *)((long)param_1 + 0x2e) == '\0') {
      uVar3 = 1 << (ulong)(param_2 & 0x1f);
      if ((((uVar3 & *(byte *)(lVar4 + 0x34e159)) == 0) ||
          ((uVar3 & *(byte *)(lVar4 + 0x34e158)) == 0)) ||
         ((*(char *)(lVar4 + 0x34e15e) == '\0' || ((int)param_1[5] != 0)))) {
        FUN_03f4dae0(param_1);
      }
      else {
        uVar2 = FUN_03f4cd24(param_1);
        FUN_03f4cea0(param_1,uVar2);
        *(byte *)(*param_1 + 0x34e159) = *(byte *)(*param_1 + 0x34e159) & ((byte)uVar3 ^ 0xff);
      }
    }
    else {
      FUN_03f4d6b0(param_1);
    }
  }
  else {
    FUN_03f4d3d0(param_1);
  }
  *(undefined2 *)((long)param_1 + 0x2c) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  return;
}

