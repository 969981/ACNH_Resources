
void FUN_037aa24c(long *param_1,undefined8 *param_2)

{
  long lVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  lVar1 = *param_1;
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x20) == (int)param_1[1])) {
    uVar3 = *param_2;
    *(undefined8 *)(lVar1 + 200) = param_2[1];
    *(undefined8 *)(lVar1 + 0xc0) = uVar3;
    uVar3 = param_2[2];
    *(undefined8 *)(lVar1 + 0xd8) = param_2[3];
    *(undefined8 *)(lVar1 + 0xd0) = uVar3;
    uVar4 = param_2[5];
    uVar3 = param_2[4];
    *(undefined1 **)(lVar1 + 0xb4) = &DAT_3f8000003f800000;
    *(undefined4 *)(lVar1 + 0xbc) = 0x3f800000;
    *(uint *)(lVar1 + 0x184) = *(uint *)(lVar1 + 0x184) | 8;
    *(undefined8 *)(lVar1 + 0xe8) = uVar4;
    *(undefined8 *)(lVar1 + 0xe0) = uVar3;
  }
  lVar1 = param_1[2];
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x20) == (int)param_1[3])) {
    uVar2 = *(undefined4 *)((long)param_2 + 0xc);
    uVar5 = *(undefined4 *)((long)param_2 + 0x1c);
    uVar6 = *(undefined4 *)((long)param_2 + 0x2c);
    *(ushort *)(lVar1 + 0x98) = *(ushort *)(lVar1 + 0x98) | 0x200;
    *(undefined4 *)(lVar1 + 0xc0) = uVar2;
    *(undefined4 *)(lVar1 + 0xc4) = uVar5;
    *(undefined4 *)(lVar1 + 200) = uVar6;
    *(ushort *)(lVar1 + 0x9a) = *(ushort *)(lVar1 + 0x9a) | 0x200;
  }
  return;
}

