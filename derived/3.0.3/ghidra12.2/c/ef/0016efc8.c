
undefined8 FUN_0016efc8(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if (*(int *)(param_2 + 8) != 0) {
    uVar2 = FUN_0016e544(param_1,param_2,0xfffffe07,"PING: stream_id != 0");
    return uVar2;
  }
  if (((((*(byte *)(param_1 + 0x99c) >> 3 & 1) != 0) || ((*(byte *)(param_2 + 0xd) & 1) != 0)) ||
      (iVar1 = FUN_0016cfc4(param_1), iVar1 != 0)) ||
     (uVar2 = FUN_0016f068(param_1,1,param_2 + 0x10), (int)uVar2 == 0)) {
    if ((*(code **)(param_1 + 0x7e8) == (code *)0x0) ||
       (iVar1 = (**(code **)(param_1 + 0x7e8))(param_1,param_2,*(undefined8 *)(param_1 + 0x8b8)),
       iVar1 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0xfffffc7a;
    }
  }
  return uVar2;
}

