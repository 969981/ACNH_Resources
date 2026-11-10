
void FUN_002a6cdc(undefined8 param_1,long param_2,undefined1 *param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if ((param_3 != (undefined1 *)0x0) && (8 < param_4)) {
    *(undefined1 *)(param_2 + 8) = *param_3;
    *(undefined1 *)(param_2 + 9) = param_3[1];
    uVar3 = *(ushort *)(param_3 + 2) >> 8 | *(ushort *)(param_3 + 2) << 8;
    *(ushort *)(param_2 + 10) = uVar3;
    if (uVar3 < 0x5a1) {
      *(ushort *)(param_2 + 0xc) = *(ushort *)(param_3 + 4) >> 8 | *(ushort *)(param_3 + 4) << 8;
      *(ushort *)(param_2 + 0xe) = *(ushort *)(param_3 + 6) >> 8 | *(ushort *)(param_3 + 6) << 8;
      bVar1 = param_3[8];
      *(byte *)(param_2 + 0x10) = bVar1;
      if (bVar1 < 0x20) {
        if (bVar1 != 0) {
          uVar2 = (*(uint *)(param_3 + 9) & 0xff00ff00) >> 8 |
                  (*(uint *)(param_3 + 9) & 0xff00ff) << 8;
          *(uint *)(param_2 + 0x14) = uVar2 >> 0x10 | uVar2 << 0x10;
        }
        local_24 = 0;
        goto LAB_002a6d60;
      }
      *(undefined1 *)(param_2 + 0x10) = 0;
    }
    else {
      *(undefined2 *)(param_2 + 10) = 0;
    }
  }
  local_24 = 0x10c07;
LAB_002a6d60:
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

