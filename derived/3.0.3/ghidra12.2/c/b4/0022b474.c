
void FUN_0022b474(undefined8 param_1,long param_2,uint *param_3,undefined4 *param_4,uint param_5)

{
  uint uVar1;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if (((param_3 == (uint *)0x0) || (param_4 == (undefined4 *)0x0)) || (param_5 < 0x20)) {
    local_24 = 0x10c07;
  }
  else {
    local_24 = 0;
    uVar1 = (*(uint *)(param_2 + 8) & 0xff00ff00) >> 8 | (*(uint *)(param_2 + 8) & 0xff00ff) << 8;
    *param_3 = uVar1 >> 0x10 | uVar1 << 0x10;
    *(undefined1 *)(param_3 + 1) = *(undefined1 *)(param_2 + 0xc);
    uVar1 = (*(uint *)(param_2 + 0x10) & 0xff00ff00) >> 8 |
            (*(uint *)(param_2 + 0x10) & 0xff00ff) << 8;
    *(uint *)((long)param_3 + 5) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_2 + 0x14) & 0xff00ff00) >> 8 |
            (*(uint *)(param_2 + 0x14) & 0xff00ff) << 8;
    *(uint *)((long)param_3 + 9) = uVar1 >> 0x10 | uVar1 << 0x10;
    *(ushort *)((long)param_3 + 0xd) =
         *(ushort *)(param_2 + 0x18) >> 8 | *(ushort *)(param_2 + 0x18) << 8;
    *(undefined1 *)((long)param_3 + 0xf) = *(undefined1 *)(param_2 + 0x1a);
    *(undefined1 *)(param_3 + 4) = *(undefined1 *)(param_2 + 0x1b);
    *(undefined1 *)((long)param_3 + 0x11) = *(undefined1 *)(param_2 + 0x1c);
    *(undefined1 *)((long)param_3 + 0x12) = *(undefined1 *)(param_2 + 0x1d);
    *(undefined1 *)((long)param_3 + 0x13) = *(undefined1 *)(param_2 + 0x1e);
    *(undefined1 *)(param_3 + 5) = *(undefined1 *)(param_2 + 0x1f);
    *(undefined1 *)((long)param_3 + 0x15) = *(undefined1 *)(param_2 + 0x20);
    *(undefined1 *)((long)param_3 + 0x16) = *(undefined1 *)(param_2 + 0x21);
    *(undefined1 *)((long)param_3 + 0x17) = *(undefined1 *)(param_2 + 0x22);
    *(undefined1 *)(param_3 + 6) = *(undefined1 *)(param_2 + 0x23);
    *(undefined1 *)((long)param_3 + 0x19) = *(undefined1 *)(param_2 + 0x24);
    *(undefined1 *)((long)param_3 + 0x1a) = *(undefined1 *)(param_2 + 0x25);
    *(undefined1 *)((long)param_3 + 0x1b) = *(undefined1 *)(param_2 + 0x26);
    *(undefined1 *)(param_3 + 7) = *(undefined1 *)(param_2 + 0x27);
    *(undefined1 *)((long)param_3 + 0x1d) = *(undefined1 *)(param_2 + 0x28);
    *(undefined1 *)((long)param_3 + 0x1e) = *(undefined1 *)(param_2 + 0x29);
    *(undefined1 *)((long)param_3 + 0x1f) = *(undefined1 *)(param_2 + 0x2a);
    *param_4 = 0x20;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

