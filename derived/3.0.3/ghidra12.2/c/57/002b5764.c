
void FUN_002b5764(long param_1,int *param_2)

{
  int iVar1;
  char cVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  FUN_002a4d0c();
  plVar3 = (long *)FUN_002ba790(DAT_04c61168);
  lVar4 = (**(code **)(*plVar3 + 0x38))(plVar3,*(undefined8 *)(param_2 + 2));
  cVar2 = FUN_002aaa44(param_1);
  if ((cVar2 != -3) &&
     (lVar5 = FUN_002aaa28(param_1), lVar5 != *(long *)(lVar4 + 0x40) && *param_2 != 2)) {
    *(undefined1 *)(param_1 + (ulong)*(byte *)(lVar4 + 0x38) + 0x94) = 0xff;
    lVar5 = param_1 + (ulong)*(byte *)(lVar4 + 0x38);
    *(undefined1 *)(lVar5 + 0xd3) = 0;
    *(undefined1 *)(lVar5 + 0xf3) = 0;
    iVar1 = *(int *)(param_1 + 0x78);
    if ((iVar1 - 4U < 2) || (iVar1 == 10)) {
      if (*(long *)(param_1 + 200) != *(long *)(lVar4 + 0x40)) {
        return;
      }
      *(undefined4 *)(param_1 + 0x78) = 0;
      *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
      *(undefined8 *)(param_1 + 0x80) = 0;
      *(undefined8 *)(param_1 + 0x88) = 0;
      *(undefined4 *)(param_1 + 0x90) = 0;
      *(undefined2 *)(param_1 + 0xb8) = 0xffff;
      *(undefined8 *)(param_1 + 0xbc) = 0;
      *(undefined8 *)(param_1 + 200) = 0;
      *(undefined2 *)(param_1 + 0xd0) = 0;
      *(undefined1 *)(param_1 + 0xd2) = 0;
      memset((void *)(param_1 + 0x94),0xff,0x20);
    }
    else {
      if (iVar1 != 1) {
        return;
      }
      uVar6 = FUN_002b5888(param_1,*(undefined1 *)(param_1 + 0xb8));
      if ((uVar6 & 1) != 0) {
        return;
      }
      FUN_002b56b4(param_1);
    }
    *(undefined4 *)(param_1 + 0x78) = 0xc;
  }
  return;
}

