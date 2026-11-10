
void FUN_00220240(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined4 local_34;
  ErrorResultVariant aEStack_30 [12];
  undefined4 local_24;
  
  uVar1 = FUN_0021ee90();
  if ((uVar1 & 1) == 0) {
    local_34 = 0x10c0c;
  }
  else {
    uVar1 = FUN_0021f1e0();
    if ((uVar1 & 1) == 0) {
      local_34 = 0x10c08;
    }
    else {
      if (DAT_04c5f0c0 == 0) {
        uVar2 = FUN_0021f454();
        lVar3 = FUN_00285d60(0x5a8,uVar2,8);
        if (lVar3 == 0) {
          local_34 = 0x10c01;
          DAT_04c5f0c8 = 0;
        }
        else {
          lVar4 = 0;
          do {
            *(undefined4 *)(lVar3 + lVar4) = 0;
            lVar4 = lVar4 + 4;
          } while (lVar4 != 0x5a8);
          *(long *)PTR_DAT_04bccfc0 = lVar3;
          FUN_00220140(lVar3);
          local_34 = 0;
          DAT_04c5f0c0 = lVar3;
        }
        goto LAB_002202a0;
      }
      local_34 = 0x10c0f;
    }
  }
LAB_002202a0:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

