
void FUN_01c9aadc(undefined4 *param_1,undefined1 *param_2,uint param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 uVar2;
  
  if ((DAT_05357c98 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_05357c98);
    if (iVar1 != 0) {
      DAT_05357bc0 = 0;
      DAT_05357bc4 = 0;
      DAT_05357bc8 = 1;
      DAT_05357bcc = 0;
      DAT_05357bd0 = 2;
      DAT_05357bd4 = 0;
      DAT_05357bd8 = 3;
      DAT_05357bdc = 1;
      DAT_05357be0 = 3;
      DAT_05357be4 = 1;
      DAT_05357be8 = 3;
      DAT_05357bec = 1;
      DAT_05357bf0 = 3;
      DAT_05357bf4 = 1;
      DAT_05357bf8 = 3;
      DAT_05357bfc = 1;
      DAT_05357c00 = 1;
      DAT_05357c04 = 1;
      DAT_05357c08 = 1;
      DAT_05357c0c = 1;
      DAT_05357c10 = 1;
      DAT_05357c14 = 1;
      DAT_05357c18 = 1;
      DAT_05357c1c = 1;
      DAT_05357c20 = 1;
      DAT_05357c24 = 1;
      DAT_05357c28 = 1;
      DAT_05357c2c = 1;
      DAT_05357c30 = 1;
      DAT_05357c34 = 1;
      DAT_05357c38 = 1;
      DAT_05357c3c = 1;
      DAT_05357c40 = 1;
      DAT_05357c44 = 1;
      DAT_05357c48 = 1;
      DAT_05357c4c = 1;
      DAT_05357c50 = 3;
      DAT_05357c54 = 1;
      DAT_05357c58 = 1;
      DAT_05357c5c = 1;
      DAT_05357c60 = 1;
      DAT_05357c64 = 1;
      DAT_05357c68 = 1;
      DAT_05357c6c = 1;
      DAT_05357c70 = 1;
      DAT_05357c74 = 1;
      DAT_05357c78 = 1;
      DAT_05357c7c = 1;
      DAT_05357c80 = 1;
      DAT_05357c84 = 1;
      DAT_05357c88 = 1;
      DAT_05357c8c = 1;
      DAT_05357c90 = 2;
      DAT_05357c94 = 1;
      __cxa_guard_release(&DAT_05357c98);
    }
  }
  if ((param_3 & 0xfffffffe) == 0x18) {
    FUN_01c9ad64(param_1,param_2,param_4);
    uVar2 = 1;
  }
  else {
    *param_1 = (&DAT_05357bc0)[(long)(int)param_3 * 2];
    uVar2 = (&DAT_05357bc4)[(long)(int)param_3 * 8];
  }
  *param_2 = uVar2;
  return;
}

