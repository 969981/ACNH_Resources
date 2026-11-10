
void FUN_0021edd4(undefined8 param_1,long param_2,undefined1 *param_3,uint param_4)

{
  uint uVar1;
  ushort uVar2;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if ((param_3 != (undefined1 *)0x0) && (0x12 < param_4)) {
    *(undefined1 *)(param_2 + 8) = *param_3;
    *(ushort *)(param_2 + 10) = *(ushort *)(param_3 + 1) >> 8 | *(ushort *)(param_3 + 1) << 8;
    *(ushort *)(param_2 + 0xc) = *(ushort *)(param_3 + 3) >> 8 | *(ushort *)(param_3 + 3) << 8;
    uVar2 = *(ushort *)(param_3 + 5) >> 8 | *(ushort *)(param_3 + 5) << 8;
    *(ushort *)(param_2 + 0xe) = uVar2;
    if (uVar2 < 0x5a1) {
      local_24 = 0;
      uVar1 = (*(uint *)(param_3 + 7) & 0xff00ff00) >> 8 | (*(uint *)(param_3 + 7) & 0xff00ff) << 8;
      *(uint *)(param_2 + 0x10) = uVar1 >> 0x10 | uVar1 << 0x10;
      uVar1 = (*(uint *)(param_3 + 0xf) & 0xff00ff00) >> 8 |
              (*(uint *)(param_3 + 0xf) & 0xff00ff) << 8;
      *(uint *)(param_2 + 0x14) = uVar1 >> 0x10 | uVar1 << 0x10;
      goto LAB_0021ee38;
    }
    *(undefined2 *)(param_2 + 0xe) = 0;
  }
  local_24 = 0x10c07;
LAB_0021ee38:
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

