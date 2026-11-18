
undefined8 FUN_032f9770(undefined8 param_1,long param_2,ushort *param_3,ushort *param_4)

{
  short sVar1;
  ushort uVar2;
  ushort uVar3;
  undefined8 uVar4;
  undefined4 local_1b4 [2];
  short local_1ac;
  short local_1aa;
  undefined1 auStack_194 [112];
  undefined1 auStack_124 [228];
  
  if (param_2 == 0) {
    return 0x8001;
  }
  if ((param_3 == (ushort *)0x0) || (param_4 == (ushort *)0x0)) {
    return 0x800d;
  }
  memset(local_1b4,0,0x174);
  FUN_00100350(auStack_194,param_3);
  FUN_00100350(auStack_124,param_4);
  local_1ac = 0;
  do {
    uVar2 = *param_3;
    if (uVar2 == 0xe) {
      uVar3 = param_3[3] >> 1;
      param_3 = param_3 + 3 + uVar3;
      local_1ac = local_1ac + uVar3 + 3;
    }
    else if (uVar2 == 0) {
      local_1aa = 0;
      do {
        uVar2 = *param_4;
        if (uVar2 == 0xe) {
          uVar3 = param_4[3] >> 1;
          param_4 = param_4 + 3 + uVar3;
          local_1aa = local_1aa + uVar3 + 3;
        }
        else if (uVar2 == 0) {
          local_1b4[0] = 0;
          uVar4 = thunk_FUN_0010c520(param_2 + 8,local_1b4,0,0);
          return uVar4;
        }
        sVar1 = local_1aa + 2;
        if (uVar2 != 0xf) {
          sVar1 = local_1aa;
        }
        local_1aa = sVar1 + 1;
        param_4 = param_4 + (ulong)(uVar2 == 0xf) * 2 + 1;
      } while( true );
    }
    sVar1 = local_1ac + 2;
    if (uVar2 != 0xf) {
      sVar1 = local_1ac;
    }
    local_1ac = sVar1 + 1;
    param_3 = param_3 + (ulong)(uVar2 == 0xf) * 2 + 1;
  } while( true );
}

