
void FUN_002cb3c8(undefined8 param_1,long param_2,uint *param_3,undefined4 *param_4,uint param_5)

{
  uint uVar1;
  ulong uVar2;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (((param_3 == (uint *)0x0) || (param_4 == (undefined4 *)0x0)) || (param_5 < 0x14)) {
    local_24 = 0x10c07;
  }
  else {
    local_24 = 0;
    uVar1 = (*(uint *)(param_2 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 8) & 0xff00ff) << 8;
    *param_3 = uVar1 >> 0x10 | uVar1 << 0x10;
    *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_2 + 0xc);
    *(undefined1 *)((long)param_3 + 5) = *(undefined1 *)(param_2 + 0xd);
    *(undefined1 *)((long)param_3 + 6) = *(undefined1 *)(param_2 + 0xe);
    *(undefined1 *)((long)param_3 + 7) = *(undefined1 *)(param_2 + 0xf);
    uVar2 = (*(ulong *)(param_2 + 0x10) & 0xff00ff00ff00ff00) >> 8 |
            (*(ulong *)(param_2 + 0x10) & 0xff00ff00ff00ff) << 8;
    uVar2 = (uVar2 & 0xffff0000ffff0000) >> 0x10 | (uVar2 & 0xffff0000ffff) << 0x10;
    *(ulong *)(param_3 + 2) = uVar2 >> 0x20 | uVar2 << 0x20;
    uVar1 = (*(uint *)(param_2 + 0x18) & 0xff00ff00) >> 8 |
            (*(uint *)(param_2 + 0x18) & 0xff00ff) << 8;
    param_3[4] = uVar1 >> 0x10 | uVar1 << 0x10;
    *param_4 = 0x14;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

