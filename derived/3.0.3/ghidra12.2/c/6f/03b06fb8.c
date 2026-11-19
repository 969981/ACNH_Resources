
void FUN_03b06fb8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = DAT_05ae9110;
  lVar6 = *(long *)(*(long *)(param_3 + 200) + 0x18);
  if ((lVar6 == 0) || (lVar7 = *(long *)(*(long *)(param_3 + 200) + 0x10), lVar7 == 0))
  goto LAB_03b070a0;
  if (((*(ushort *)(lVar7 + 0x1a34) & 1) == 0) ||
     (*(char *)(*(long *)(lVar7 + 0x1600) + 0x510) == '\0')) {
    uVar1 = *(undefined8 *)(param_3 + 0xa8);
    uVar2 = *(undefined8 *)(DAT_05ae9110 + 0x40);
  }
  else {
    uVar1 = *(undefined8 *)(param_3 + 0xa8);
    uVar2 = *(undefined8 *)(lVar6 + 0x40);
  }
  uVar1 = FUN_03b0ad00(param_1,uVar1,0xd,uVar2);
  if ((*(int *)(lVar7 + 0x2bc8) == 0) || (*(char *)(*(long *)(lVar7 + 0x2bd0) + 0x5a8) == '\0')) {
    uVar2 = *(undefined8 *)(param_3 + 0xa8);
    uVar3 = *(undefined8 *)(lVar5 + 0x40);
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 0xa8);
    uVar3 = *(undefined8 *)(lVar6 + 0x50);
  }
  uVar1 = FUN_03b0ad00(uVar1,uVar2,0xe,uVar3);
  lVar4 = *(long *)(lVar7 + 0x1600);
  if ((*(char *)(lVar4 + 0xa10) == '\0') || (*(char *)(lVar4 + 0x4d0) == '\0')) {
    uVar2 = *(undefined8 *)(param_3 + 0xa8);
LAB_03b07094:
    uVar3 = *(undefined8 *)(lVar5 + 0x20);
  }
  else {
    uVar2 = *(undefined8 *)(param_3 + 0xa8);
    if ((*(char *)(lVar4 + 0x1660) != '\0') ||
       ((*(uint *)(lVar7 + 0x1b48) & 1 << (ulong)(*(uint *)(param_3 + 0xb0) & 0x1f)) == 0))
    goto LAB_03b07094;
    uVar3 = *(undefined8 *)(lVar6 + 0x28);
  }
  param_1 = FUN_03b0ad00(uVar1,uVar2,0xc,uVar3);
LAB_03b070a0:
  lVar5 = *(long *)(*(long *)(param_3 + 200) + 0x18);
  if (lVar5 == 0) {
    return;
  }
  FUN_03b0ad00(param_1,*(undefined8 *)(param_3 + 0xa8),0xf,*(undefined8 *)(lVar5 + 0xb0));
  return;
}

