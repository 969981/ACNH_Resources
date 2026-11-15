
void FUN_020f2cb4(undefined1 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4,
                 undefined1 param_5)

{
  uint *puVar1;
  long lVar2;
  byte bVar3;
  long *plVar4;
  undefined1 *puVar5;
  long lVar6;
  ulong uVar7;
  undefined1 local_28 [4];
  undefined1 local_24 [2];
  undefined2 local_22;
  undefined2 local_20;
  undefined2 local_1e;
  undefined1 local_1c;
  undefined4 local_18;
  undefined2 local_14;
  undefined1 local_12;
  
  plVar4 = *(long **)PTR_DAT_04bb27d0;
  lVar6 = *plVar4;
  bVar3 = *(byte *)(lVar6 + 0x473);
  puVar5 = PTR_DAT_04bc1220;
  local_24[0] = param_1;
  local_22 = param_2;
  local_20 = param_3;
  local_1e = param_4;
  local_1c = param_5;
  if ((long)(char)bVar3 != 0xffffffffffffffff) {
    uVar7 = (long)(char)bVar3 & 0xffffffff;
    puVar1 = (uint *)(lVar6 + 0x48) + uVar7 * 0x20;
    if (7 < bVar3) {
      puVar1 = (uint *)(lVar6 + 0x48);
    }
    if ((*puVar1 >> 3 & 1) != 0) {
      lVar2 = plVar4[2] + 0x108 + uVar7 * 0xc;
      if (0xb < bVar3) {
        lVar2 = plVar4[2] + 0x108;
      }
      if (*(char *)(lVar2 + 10) == '\0') {
        local_18 = 0;
        local_12 = 0;
        local_14 = 0xff02;
        if (DAT_053d16a0 < 0) {
          return;
        }
        FUN_01db1df0(*plVar4 + 0x480,DAT_053d16a0,&local_18,local_24,10,0);
        return;
      }
    }
    if ((*puVar1 & 8) != 0) {
      puVar5 = (undefined1 *)(lVar6 + 0x473);
    }
  }
  local_28[0] = *puVar5;
  FUN_020f28c4(local_24,local_28);
  return;
}

