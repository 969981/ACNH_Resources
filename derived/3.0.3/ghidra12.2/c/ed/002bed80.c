
void FUN_002bed80(undefined8 param_1)

{
  undefined4 *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  uVar2 = FUN_002bd330();
  if ((uVar2 & 1) == 0) {
    local_34 = 0x10c0c;
  }
  else {
    uVar2 = FUN_002bd3e0();
    if ((uVar2 & 1) == 0) {
      local_34 = 0x10c08;
    }
    else if (DAT_04c611a0 == 0) {
      uVar3 = FUN_0021f454();
      lVar4 = FUN_00285d60(0x240,uVar3,8);
      if (lVar4 == 0) {
        local_34 = 0x10c01;
        DAT_04c611a8 = 0;
      }
      else {
        lVar5 = 0;
        do {
          puVar1 = (undefined4 *)(lVar4 + lVar5);
          lVar5 = lVar5 + 6;
          *puVar1 = 0;
          *(undefined2 *)(puVar1 + 1) = 0;
        } while (lVar5 != 0x240);
        *(long *)PTR_DAT_04bce348 = lVar4;
        FUN_002bf578(lVar4);
        DAT_04c611a0 = lVar4;
        FUN_002beea0(&local_34,lVar4);
        local_34 = 0;
      }
    }
    else {
      local_34 = 0x10c0f;
    }
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

