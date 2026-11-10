
void FUN_0021ca90(long *param_1)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 local_3c;
  undefined4 local_34;
  
  *(undefined4 *)((long)param_1 + 0x7c) = 1;
  if (1 < *(ushort *)(param_1 + 0xc)) {
    lVar3 = 0;
    do {
      uVar1 = (**(code **)(*param_1 + 0x68))(param_1,param_1[10] + lVar3 * 0x30);
      if ((uVar1 & 1) != 0) {
        lVar2 = param_1[10];
        if (lVar2 == 0) {
          local_3c = 0x800000000000000;
          local_34 = 0;
          (**(code **)(*param_1 + 0x10))(param_1,&local_3c);
          lVar2 = param_1[10];
        }
        lVar2 = lVar2 + lVar3 * 0x30;
        *(undefined1 *)(lVar2 + 2) = 0;
        memset((void *)(lVar2 + 8),0xff,4);
      }
      lVar3 = lVar3 + 1;
    } while ((int)((uint)lVar3 & 0xffff) < (int)(*(ushort *)(param_1 + 0xc) - 1));
  }
  return;
}

