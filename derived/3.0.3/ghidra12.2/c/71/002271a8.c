
void FUN_002271a8(undefined2 *param_1,long param_2,char param_3)

{
  uint uVar1;
  undefined1 auStack_30 [16];
  uint local_14;
  
  if (param_3 == '\x02') {
    local_14 = 0;
    FUN_0021f618(auStack_30,param_2,&local_14);
    uVar1 = (local_14 & 0xff00ff00) >> 8 | (local_14 & 0xff00ff) << 8;
    *(uint *)(param_1 + 2) = uVar1 >> 0x10 | uVar1 << 0x10;
    *param_1 = 0x210;
    param_1[1] = *(ushort *)(param_2 + 0x18) >> 8 | *(ushort *)(param_2 + 0x18) << 8;
  }
  return;
}

