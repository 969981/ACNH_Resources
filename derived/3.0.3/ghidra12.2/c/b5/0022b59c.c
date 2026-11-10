
void FUN_0022b59c(undefined8 param_1,long param_2)

{
  uint uVar1;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  if ((uint *)(param_2 + 0x38) == (uint *)0x0) {
    local_24 = 0x10c07;
  }
  else {
    uVar1 = *(uint *)(param_2 + 0x38);
    local_24 = 0;
    uVar1 = (uVar1 & 0xff00ff00) >> 8 | (uVar1 & 0xff00ff) << 8;
    *(uint *)(param_2 + 8) = uVar1 >> 0x10 | uVar1 << 0x10;
    *(undefined1 *)(param_2 + 0xc) = *(undefined1 *)(param_2 + 0x3c);
    uVar1 = (*(uint *)(param_2 + 0x3d) & 0xff00ff00) >> 8 |
            (*(uint *)(param_2 + 0x3d) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0x10) = uVar1 >> 0x10 | uVar1 << 0x10;
    uVar1 = (*(uint *)(param_2 + 0x41) & 0xff00ff00) >> 8 |
            (*(uint *)(param_2 + 0x41) & 0xff00ff) << 8;
    *(uint *)(param_2 + 0x14) = uVar1 >> 0x10 | uVar1 << 0x10;
    *(ushort *)(param_2 + 0x18) =
         *(ushort *)(param_2 + 0x45) >> 8 | *(ushort *)(param_2 + 0x45) << 8;
    *(undefined1 *)(param_2 + 0x1a) = *(undefined1 *)(param_2 + 0x47);
    *(undefined1 *)(param_2 + 0x1b) = *(undefined1 *)(param_2 + 0x48);
    *(undefined1 *)(param_2 + 0x1c) = *(undefined1 *)(param_2 + 0x49);
    *(undefined1 *)(param_2 + 0x1d) = *(undefined1 *)(param_2 + 0x4a);
    *(undefined1 *)(param_2 + 0x1e) = *(undefined1 *)(param_2 + 0x4b);
    *(undefined1 *)(param_2 + 0x1f) = *(undefined1 *)(param_2 + 0x4c);
    *(undefined1 *)(param_2 + 0x20) = *(undefined1 *)(param_2 + 0x4d);
    *(undefined1 *)(param_2 + 0x21) = *(undefined1 *)(param_2 + 0x4e);
    *(undefined1 *)(param_2 + 0x22) = *(undefined1 *)(param_2 + 0x4f);
    *(undefined1 *)(param_2 + 0x23) = *(undefined1 *)(param_2 + 0x50);
    *(undefined1 *)(param_2 + 0x24) = *(undefined1 *)(param_2 + 0x51);
    *(undefined1 *)(param_2 + 0x25) = *(undefined1 *)(param_2 + 0x52);
    *(undefined1 *)(param_2 + 0x26) = *(undefined1 *)(param_2 + 0x53);
    *(undefined1 *)(param_2 + 0x27) = *(undefined1 *)(param_2 + 0x54);
    *(undefined1 *)(param_2 + 0x28) = *(undefined1 *)(param_2 + 0x55);
    *(undefined1 *)(param_2 + 0x29) = *(undefined1 *)(param_2 + 0x56);
    *(undefined1 *)(param_2 + 0x2a) = *(undefined1 *)(param_2 + 0x57);
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

