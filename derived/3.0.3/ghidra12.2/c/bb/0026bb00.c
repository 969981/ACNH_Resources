
void FUN_0026bb00(undefined8 param_1,long param_2,ulong param_3)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  bVar1 = *(byte *)(param_2 + 0x9c);
  if (bVar1 == 0xfd || bVar1 != *(byte *)(param_2 + 0x9b)) {
    local_24 = 0x10c08;
  }
  else {
    uVar2 = (uint)param_3;
    if (((uVar2 & 0xff) < 0x20) && ((uint)bVar1 != (uVar2 & 0xff))) {
      if ((param_3 & 0xff) == 0) {
        uVar3 = 1;
      }
      else {
        if ((uVar2 & 0xff) < 4) {
          uVar3 = 1;
        }
        else {
          uVar4 = 0;
          uVar3 = 1;
          do {
            uVar4 = uVar4 + 4;
            uVar3 = uVar3 << 4;
          } while ((uVar2 & 0xfc) != (uVar4 & 0xffff));
        }
        if ((param_3 & 3) != 0) {
          uVar4 = 0;
          do {
            uVar4 = uVar4 + 1;
            uVar3 = uVar3 << 1;
          } while ((uVar2 & 3) != (uVar4 & 0xffff));
        }
      }
      if ((*(uint *)(param_2 + 0xb8) & uVar3) != 0) {
        FUN_002672e4(param_1,*(undefined8 *)(param_2 + 0x50),param_3,2);
        return;
      }
    }
    local_24 = 0x10c07;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

