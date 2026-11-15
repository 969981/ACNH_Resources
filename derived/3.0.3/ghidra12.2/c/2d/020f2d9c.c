
void FUN_020f2d9c(char *param_1,undefined1 param_2,undefined2 param_3,undefined2 param_4,
                 undefined2 param_5,undefined1 param_6)

{
  uint *puVar1;
  byte bVar2;
  char *pcVar3;
  long lVar4;
  char local_28 [4];
  undefined1 local_24 [2];
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined1 local_1c;
  undefined4 local_18;
  undefined1 local_14;
  char local_13;
  undefined1 local_12;
  
  lVar4 = **(long **)PTR_DAT_04bb27d0;
  bVar2 = *(byte *)(lVar4 + 0x473);
  pcVar3 = PTR_DAT_04bc1220;
  if ((long)(char)bVar2 != 0xffffffffffffffff) {
    puVar1 = (uint *)(lVar4 + 0x48) + ((long)(char)bVar2 & 0xffffffffU) * 0x20;
    if (7 < bVar2) {
      puVar1 = (uint *)(lVar4 + 0x48);
    }
    if ((*puVar1 & 8) != 0) {
      pcVar3 = (char *)(lVar4 + 0x473);
    }
  }
  local_28[0] = *pcVar3;
  local_13 = *param_1;
  local_24[0] = param_2;
  local_22 = param_3;
  local_20 = param_4;
  local_1e = param_5;
  local_1c = param_6;
  if (local_28[0] == local_13) {
    FUN_020f28c4(local_24,local_28);
  }
  else {
    local_18 = 0;
    local_12 = 0;
    local_14 = 4;
    if (-1 < DAT_053d16a0) {
      FUN_01db1df0(**(long **)PTR_DAT_04bb27d0 + 0x480,DAT_053d16a0,&local_18,local_24,10,0);
    }
  }
  return;
}

