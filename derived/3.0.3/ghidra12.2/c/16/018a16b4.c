
uint FUN_018a16b4(undefined2 param_1)

{
  undefined *puVar1;
  long *plVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  undefined2 local_28;
  undefined2 local_26;
  undefined4 local_24;
  
  plVar2 = DAT_04cfba28;
  if (DAT_04c487d4 == -1) {
    return 1;
  }
  puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
  if (0xff < (uint)(int)DAT_04c487d4) {
    puVar1 = PTR_DAT_04bc39f8;
  }
  if ((*(uint *)(puVar1 + 4) & 1) == 0) {
    uVar4 = 1;
  }
  else {
    local_26 = 0;
    local_24 = 0;
    local_28 = param_1;
    FUN_0277d4ac(&local_28);
    lVar5 = (**(code **)(*plVar2 + 0x20))(plVar2);
    uVar3 = FUN_0277d6c4(&local_28);
    uVar4 = 0;
    if ((uVar3 >> 3 & 0x1fff) < 0x753) {
      uVar4 = *(uint *)(lVar5 + (ulong)((uVar3 & 0xffff) >> 5) * 4) >> (ulong)(uVar3 & 0x1f) & 1;
    }
  }
  return uVar4;
}

