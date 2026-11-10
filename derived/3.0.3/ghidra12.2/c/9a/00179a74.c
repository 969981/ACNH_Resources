
undefined8 FUN_00179a74(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *param_4 = 1;
  memset((long *)(lVar3 + 0x1f0),0,0x470);
  *(undefined8 *)(lVar3 + 0x650) = param_2;
  *(undefined4 *)(lVar3 + 0x658) = param_3;
  lVar2 = FUN_0014e05c(0,"Content-Type: application/dns-message");
  *(long *)(lVar3 + 0x1f0) = lVar2;
  if (lVar2 != 0) {
    if (param_1[0x8a] != 2) {
      iVar1 = FUN_00179b90(lVar3,lVar3 + 0x1f8,1,param_2,*(undefined8 *)(lVar3 + 0xe78),
                           *(undefined8 *)(lVar3 + 0xd8),lVar2);
      if (iVar1 != 0) goto LAB_00179b34;
      *(int *)(lVar3 + 0x648) = *(int *)(lVar3 + 0x648) + 1;
      if (param_1[0x8a] == 1) {
        return 0;
      }
      lVar2 = *(long *)(lVar3 + 0x1f0);
    }
    iVar1 = FUN_00179b90(lVar3,lVar3 + 0x420,0x1c,param_2,*(undefined8 *)(lVar3 + 0xe78),
                         *(undefined8 *)(lVar3 + 0xd8),lVar2);
    if (iVar1 == 0) {
      *(int *)(lVar3 + 0x648) = *(int *)(lVar3 + 0x648) + 1;
      return 0;
    }
  }
LAB_00179b34:
  FUN_0014e11c(*(undefined8 *)(lVar3 + 0x1f0));
  *(undefined8 *)(lVar3 + 0x1f0) = 0;
  FUN_00142be4(*(undefined8 *)(lVar3 + 0x1f8));
  *(undefined8 *)(lVar3 + 0x1f8) = 0;
  FUN_00142be4(*(undefined8 *)(lVar3 + 0x420));
  *(undefined8 *)(lVar3 + 0x420) = 0;
  return 0;
}

