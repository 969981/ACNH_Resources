
void FUN_002abd6c(undefined8 param_1,long param_2,long param_3)

{
  byte bVar1;
  ushort uVar2;
  undefined4 local_24;
  ErrorResultVariant aEStack_20 [12];
  undefined4 local_14;
  
  bVar1 = *(byte *)(param_2 + 8);
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_2 + 9) = *(undefined1 *)(param_3 + 9);
  }
  if (((bVar1 >> 1 & 1) == 0) &&
     (uVar2 = *(ushort *)(param_3 + 10), *(ushort *)(param_2 + 10) = uVar2, 0x5a0 < uVar2)) {
    *(undefined2 *)(param_2 + 10) = 0;
    local_24 = 0x10c07;
  }
  else {
    if ((bVar1 >> 2 & 1) == 0) {
      *(undefined4 *)(param_2 + 0xc) = *(undefined4 *)(param_3 + 0xc);
    }
    if ((bVar1 >> 3 & 1) == 0) {
      *(undefined8 *)(param_2 + 0x10) = *(undefined8 *)(param_3 + 0x10);
    }
    local_24 = 0;
  }
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_20,(Result *)&local_14);
  FUN_002296c4(param_1,&local_24);
  return;
}

