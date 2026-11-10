
long FUN_0021c718(long *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  long lVar3;
  undefined8 local_2c;
  undefined4 local_24;
  
  if (*(ushort *)(param_1 + 0xc) == 0) {
    local_24 = 0;
    local_2c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_2c);
    if ((uint)*(byte *)(param_1 + 0xc) <= (param_2 & 0xff)) goto LAB_0021c85c;
LAB_0021c740:
    bVar1 = FUN_002aaa44(param_1);
    if (bVar1 < *(byte *)(param_1 + 0xc)) goto LAB_0021c754;
LAB_0021c890:
    local_24 = 0;
    local_2c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_2c);
    uVar2 = FUN_002aaa44(param_1);
    if ((uVar2 & 0xff) != (param_2 & 0xff)) goto LAB_0021c788;
  }
  else {
    if ((param_2 & 0xff) < (*(ushort *)(param_1 + 0xc) & 0xff)) goto LAB_0021c740;
LAB_0021c85c:
    local_24 = 0;
    local_2c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_2c);
    bVar1 = FUN_002aaa44(param_1);
    if (*(byte *)(param_1 + 0xc) <= bVar1) goto LAB_0021c890;
LAB_0021c754:
    uVar2 = FUN_002aaa44(param_1);
    if ((uVar2 & 0xff) != (param_2 & 0xff)) goto LAB_0021c788;
  }
  local_24 = 0;
  local_2c = 0x800000000000000;
  (**(code **)(*param_1 + 0x10))(param_1,&local_2c);
LAB_0021c788:
  uVar2 = FUN_002aaa44(param_1);
  uVar2 = (param_2 & 0xff) - (uint)((uVar2 & 0xff) <= (param_2 & 0xff));
  if ((int)(uVar2 & 0xffff) < (int)(*(ushort *)(param_1 + 0xc) - 1)) {
    lVar3 = param_1[0x13];
  }
  else {
    local_24 = 0;
    local_2c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_2c);
    lVar3 = param_1[0x13];
  }
  if (lVar3 == 0) {
    local_24 = 0;
    local_2c = 0x800000000000000;
    (**(code **)(*param_1 + 0x10))(param_1,&local_2c);
    return param_1[0x13] + (long)(int)uVar2 * 0x10;
  }
  return lVar3 + (long)(int)uVar2 * 0x10;
}

