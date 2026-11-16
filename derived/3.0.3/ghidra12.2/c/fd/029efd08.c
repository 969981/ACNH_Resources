
void FUN_029efd08(long param_1)

{
  int iVar1;
  short sVar2;
  undefined *puVar3;
  undefined2 uVar4;
  long lVar5;
  int local_2c;
  undefined1 auStack_28 [4];
  int local_24;
  
  sVar2 = *(short *)(param_1 + 0x137c);
  if (sVar2 == 0x40) {
    uVar4 = 0x9ab;
    if (1 < *(byte *)(param_1 + 0x139d)) {
      uVar4 = 0xa6e;
    }
  }
  else {
    if (-1 < sVar2) {
      local_24 = -1;
      local_2c = (int)sVar2;
      FUN_029efe90(&local_2c,auStack_28);
      if (-1 < local_24) {
        iVar1 = local_24 + 300;
        if (*(byte *)(param_1 + 0x139d) < 2) {
          iVar1 = local_24;
        }
        uVar4 = (undefined2)iVar1;
        goto LAB_029efd84;
      }
    }
    uVar4 = 0xa6e;
  }
LAB_029efd84:
  puVar3 = PTR_DAT_04bb26a8;
  *(undefined2 *)(param_1 + 0x138a) = uVar4;
  lVar5 = *(long *)puVar3;
  *(int *)(lVar5 + 0xa7684) = (int)sVar2;
  *(undefined1 *)(lVar5 + 0xa7680) = 1;
  FUN_02a0d600(lVar5 + 0xa7660,0xbd0309d1,0x100);
  *(undefined2 *)(param_1 + 5000) = 0;
  *(short *)(param_1 + 0x1378) = sVar2;
  return;
}

