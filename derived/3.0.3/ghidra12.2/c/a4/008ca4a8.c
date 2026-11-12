
undefined8 FUN_008ca4a8(long param_1,byte *param_2,uint param_3)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  
  *(undefined8 *)(param_1 + 0x307c0) = *(undefined8 *)(param_1 + 0x2a8);
  *(undefined4 *)(param_1 + 0x307c8) = *(undefined4 *)(param_1 + 0x2b0);
  FUN_008c3440(param_1,*(undefined4 *)(param_1 + 0x410));
  iVar1 = *(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c);
  bVar3 = *param_2;
  if (7 < bVar3) {
    bVar3 = 0xff;
  }
  *(byte *)(param_1 + 0x309b8) = bVar3;
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x307e4) = 0xc;
    uVar2 = 3;
  }
  else {
    uVar2 = 8;
    *(undefined4 *)(param_1 + 0x307e4) = *(undefined4 *)(param_1 + 0x307e8);
  }
  *(undefined4 *)(param_1 + 0x307ec) = 8;
  FUN_03ebb160(param_1 + 0x408,uVar2);
  if ((param_3 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x30950) = *(undefined4 *)(param_1 + 0x30954);
    *(undefined4 *)(param_1 + 0x3089c) = *(undefined4 *)(param_1 + 0x3091c);
    *(undefined4 *)(param_1 + 0x308a0) = *(undefined4 *)(param_1 + 0x30920);
    *(undefined8 *)(param_1 + 0x30890) = *(undefined8 *)(param_1 + 0x30910);
    *(undefined4 *)(param_1 + 0x308b4) = *(undefined4 *)(param_1 + 0x30934);
    *(undefined4 *)(param_1 + 0x308b8) = *(undefined4 *)(param_1 + 0x30938);
    *(undefined4 *)(param_1 + 0x30898) = *(undefined4 *)(param_1 + 0x30918);
    *(undefined4 *)(param_1 + 0x308bc) = *(undefined4 *)(param_1 + 0x3093c);
    *(undefined4 *)(param_1 + 0x308c0) = *(undefined4 *)(param_1 + 0x30940);
    *(undefined8 *)(param_1 + 0x308a4) = *(undefined8 *)(param_1 + 0x30924);
    *(undefined8 *)(param_1 + 0x308ac) = *(undefined8 *)(param_1 + 0x3092c);
    *(undefined8 *)(param_1 + 0x308c4) = *(undefined8 *)(param_1 + 0x30944);
    *(undefined4 *)(param_1 + 0x308cc) = *(undefined4 *)(param_1 + 0x3094c);
  }
  return 1;
}

