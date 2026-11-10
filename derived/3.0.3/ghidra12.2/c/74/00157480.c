
undefined4 FUN_00157480(undefined8 *param_1,undefined8 *param_2)

{
  char *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  
  iVar3 = FUN_00143a68(param_1[0xaa]);
  if ((param_2 == (undefined8 *)0x0) || (iVar3 == 0)) {
    uVar4 = 0;
    uVar5 = 0;
    *(byte *)(param_1 + 0xab) = *(byte *)(param_1 + 0xab) | 1;
    if (param_2 == (undefined8 *)0x0) goto LAB_001574f8;
  }
  else {
    lVar6 = param_1[0xaa];
    uVar4 = FUN_00157a78(param_1,*(undefined4 *)(lVar6 + 0x34),*(undefined8 *)(lVar6 + 0x38));
    *(undefined8 *)(lVar6 + 0x38) = 0;
    *(byte *)(param_1 + 0xab) = *(byte *)(param_1 + 0xab) | 1;
  }
  *param_2 = param_1[0xa8];
  uVar5 = uVar4;
LAB_001574f8:
  if (param_1[0xa8] == 0) {
    bVar2 = (*(uint *)((long)param_1 + 0x41c) & 0x20) != 0;
    pcVar1 = "host";
    if (bVar2) {
      pcVar1 = "proxy";
    }
    uVar5 = 5;
    if (!bVar2) {
      uVar5 = 6;
    }
    FUN_0014d5f8(*param_1,"Could not resolve %s: %s",pcVar1,param_1[0xa6]);
  }
  FUN_001573a4(param_1 + 0xa6);
  if (param_1[0xa8] == 0) {
    FUN_00158f30(param_1,1);
  }
  return uVar5;
}

