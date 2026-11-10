
void FUN_00222ebc(undefined8 param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
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
      if (DAT_04c5fb98 == (undefined8 *)0x0) {
        uVar2 = FUN_0021f454();
        puVar3 = (undefined8 *)FUN_00285d60(0xc,uVar2,8);
        if (puVar3 == (undefined8 *)0x0) {
          local_34 = 0x10c01;
          DAT_04c5fba0 = 0;
        }
        else {
          *puVar3 = 0;
          *(undefined4 *)(puVar3 + 1) = 0;
          *(undefined8 **)PTR_DAT_04bccfd0 = puVar3;
          FUN_00222fa8();
          local_34 = 0;
          DAT_04c5fb98 = puVar3;
        }
        goto LAB_00222f1c;
      }
      local_34 = 0x10c0f;
    }
  }
LAB_00222f1c:
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_30,(Result *)&local_24);
  FUN_002296c4(param_1,&local_34);
  return;
}

