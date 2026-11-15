
void FUN_020f27f0(undefined1 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined1 param_5)

{
  uint *puVar1;
  byte bVar2;
  undefined1 *puVar3;
  long lVar4;
  undefined1 local_28 [4];
  undefined1 local_24 [2];
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined1 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  lVar4 = **(long **)PTR_DAT_04bb27d0;
  bVar2 = *(byte *)(lVar4 + 0x473);
  puVar3 = PTR_DAT_04bc1220;
  local_24[0] = param_1;
  local_22 = param_2;
  local_20 = param_3;
  local_1e = param_4;
  local_1c = param_5;
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
    if (7 < bVar2) {
      puVar1 = (uint *)(lVar4 + 0x48);
    }
    if (((*puVar1 >> 3 & 1) != 0) && (*(byte *)(lVar4 + 0x472) != bVar2)) {
      local_18 = 0;
      local_12 = 0;
      local_14 = 0xff01;
      if (DAT_053d16a0 < 0) {
        return;
      }
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d16a0,&local_18,local_24,10,0);
      return;
    }
    if ((*puVar1 & 8) != 0) {
      puVar3 = (undefined1 *)(lVar4 + 0x473);
    }
  }
  local_28[0] = *puVar3;
  FUN_020f28c4(local_24,local_28);
  return;
}

