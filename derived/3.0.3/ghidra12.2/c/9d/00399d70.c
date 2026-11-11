
void FUN_00399d70(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  ulong uVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long local_60;
  long lStack_58;
  
  lVar5 = *(long *)(*(long *)(param_1 + 0x110) + 8);
  if ((*(byte *)(lVar5 + 0x14) & 3) != 0) {
    uVar2 = FUN_0036515c(param_2,*(undefined8 *)(lVar5 + 0x20),*(undefined2 *)(lVar5 + 0x4a));
    if ((uVar2 & 1) != 0) {
      FUN_0037bb40(lVar5,param_3);
    }
    FUN_00365144(param_2,param_3);
    FUN_0037b814(lVar5,param_3,param_2);
    FUN_0037ba78(lVar5,param_3);
    if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) {
      FUN_0037ec68(param_1,param_3,param_2);
    }
    if (*(int *)(param_1 + 0x128) == 0) {
      cVar3 = *(char *)(param_1 + 0x109);
      if ('\0' < cVar3) {
        lVar5 = 0;
        lVar4 = 8;
        do {
          lVar6 = *(long *)(param_1 + 0x110);
          if ((*(byte *)(*(long *)(lVar6 + lVar4) + 0x14) & 3) != 0) {
            FUN_0037a00c(*(long *)(lVar6 + lVar4),param_2,param_3);
            FUN_0037b730(*(undefined8 *)(lVar6 + lVar4),param_3,param_2);
            FUN_0037b7a4(*(undefined8 *)(lVar6 + lVar4),param_3,param_2);
            FUN_00364c60(param_3,param_2);
            cVar3 = *(char *)(param_1 + 0x109);
          }
          lVar5 = lVar5 + 1;
          lVar4 = lVar4 + 0x10;
        } while (lVar5 < cVar3);
      }
    }
    else {
      FUN_0037a00c(lVar5,param_2,param_3);
      FUN_0037b730(lVar5,param_3,param_2);
      FUN_0037b7a4(lVar5,param_3,param_2);
      FUN_00364c60(param_3,param_2);
      if (*(int *)(param_1 + 0x128) != 0) {
        lVar4 = *(long *)(param_2 + 0xb8);
        uVar2 = 0;
        do {
          plVar1 = (long *)(*(long *)(*(long *)(param_2 + 200) + 0x10) +
                           (long)*(int *)(*(long *)(param_2 + 200) + 0x30) * 0x10);
          lStack_58 = plVar1[1];
          local_60 = *plVar1 + (ulong)*(uint *)(*(long *)(param_1 + 0x120) + uVar2 * 4);
          FUN_00348cdc(param_3,*(undefined4 *)
                                (*(long *)(*(long *)(lVar5 + 0x20) + 0x18) +
                                (ulong)*(ushort *)(lVar5 + 0x4a) * 4),0,&local_60,0x230);
          FUN_00347e74(param_3,3,1,lVar4 + 0x248,6,0);
          uVar2 = uVar2 + 1;
        } while (uVar2 < *(uint *)(param_1 + 0x128));
      }
    }
  }
  if ((*(byte *)(param_1 + 0x10a) >> 2 & 1) == 0) {
    if (*(char *)(param_1 + 0x108) == '\x01') {
      FUN_0037a00c(*(undefined8 *)(param_1 + 0x118),param_2,param_3);
      FUN_0037b730(*(undefined8 *)(param_1 + 0x118),param_3,param_2);
      FUN_0037b7a4(*(undefined8 *)(param_1 + 0x118),param_3,param_2);
    }
    else {
      if (*(char *)(param_1 + 0x108) != '\0') {
        return;
      }
      FUN_0037a00c(*(undefined8 *)(param_1 + 0x118),param_2,param_3);
      FUN_00364bf0(param_3,param_2,*(undefined8 *)(param_1 + 0x118));
      if ((*(byte *)(param_1 + 0x62) >> 1 & 1) != 0) {
        FUN_0037ec68(param_1,param_3,param_2);
      }
    }
    FUN_00364c60(param_3,param_2);
  }
  return;
}

