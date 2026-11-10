
void FUN_002b2e10(undefined8 param_1,long param_2,ushort param_3,undefined2 param_4)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined4 local_24;
  
  uVar4 = (ulong)(uint)param_3;
  if (param_3 - 0x21 < 0xffffffe0) {
    local_40 = 0x10c07;
  }
  else {
    *(ushort *)(param_2 + 0x4e) = param_3;
    *(undefined2 *)PTR_DAT_04bce120 = 500;
    FUN_002282f0(param_2 + 0x58);
    DAT_04be24de = param_4;
    uVar1 = FUN_0021f454();
    lVar2 = FUN_00285d10(uVar4 * 0x34,uVar1);
    if (lVar2 != 0) {
      lVar3 = lVar2 + 0x30;
      do {
        *(undefined8 *)(lVar3 + -4) = 0;
        uVar4 = uVar4 - 1;
        *(undefined8 *)(lVar3 + -0x30) = 0;
        lVar3 = lVar3 + 0x34;
      } while (uVar4 != 0);
    }
    *(long *)(param_2 + 0x50) = lVar2;
    local_40 = 0;
  }
  local_24 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_24);
  FUN_002296c4(param_1,&local_40);
  return;
}

