
void FUN_002b775c(undefined8 param_1,long param_2,undefined1 *param_3,uint param_4)

{
  uint uVar1;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  if ((param_3 != (undefined1 *)0x0) && (0x59f < param_4)) {
    *(undefined1 *)(param_2 + 8) = *param_3;
    *(undefined1 *)(param_2 + 9) = param_3[1];
    *(undefined1 *)(param_2 + 10) = param_3[2];
    uVar1 = (*(uint *)(param_3 + 3) & 0xff00ff00) >> 8 | (*(uint *)(param_3 + 3) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0xc) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_3 + 7) & 0xff00ff00) >> 8 | (*(uint *)(param_3 + 7) & 0xff00ff) << 8;
    uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
    *(uint *)(param_2 + 0x10) = uVar1;
    if (uVar1 < 0x596) {
      memcpy((void *)(param_2 + 0x14),param_3 + 0xb,(ulong)uVar1);
      if (*(int *)(param_2 + 0x10) + 0xb ==
          ((int)(param_3 + 0xb) + *(int *)(param_2 + 0x10)) - (int)param_3) {
        local_40 = 0;
        goto LAB_002b7800;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0x10) = 0;
    }
  }
  local_40 = 0x10c07;
LAB_002b7800:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

