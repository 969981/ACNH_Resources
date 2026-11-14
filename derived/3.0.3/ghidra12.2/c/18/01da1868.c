
void FUN_01da1868(long param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  undefined4 uVar4;
  long lVar5;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0) {
      lVar5 = *(long *)PTR_DAT_04bb49f0;
      *(undefined1 *)(lVar5 + 0xb0) = 0;
      uVar1 = FUN_01d7c528(lVar5,param_2);
      if ((uVar1 & 1) == 0) {
        bVar3 = *param_2;
        if (7 < bVar3) {
          bVar3 = 0xff;
        }
        *(byte *)(lVar5 + 0xb1) = bVar3;
        *(undefined1 *)(lVar5 + 0xb0) = 1;
      }
    }
    lVar5 = DAT_05379880;
    if (*(int *)(DAT_05379880 + 0x68) == 0 && *(int *)(DAT_05379880 + 0xb0) == 0) {
      if ((*(int *)(DAT_05358908 + 0x78) == 0) || (1 < *(int *)(DAT_05358908 + 0xc4) - 1U)) {
        uVar4 = 0;
        if (**(long **)(DAT_053719b8 + 8) == 0 && (*(long **)(DAT_053719b8 + 8))[1] == 0) {
          uVar4 = 3;
        }
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 1;
    }
    *(undefined4 *)(DAT_05379880 + 0x168) = uVar4;
    if (*(int *)(lVar5 + 0x168) == 0) {
      **(undefined8 **)(lVar5 + 0x158) = *param_3;
      *(undefined1 *)(lVar5 + 0x1b1) = 1;
      *(undefined4 *)(lVar5 + 0x138) = 4;
      FUN_03ebb160(lVar5 + 0xa8,1);
      *(undefined8 *)(param_1 + 0x58) = *param_3;
      bVar3 = *param_2;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(long *)(param_1 + 8) = param_1;
      *(undefined1 **)(param_1 + 0x10) = &LAB_01da1c54;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined1 *)(param_1 + 0x40) = 1;
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      *(byte *)(param_1 + 0x50) = bVar3;
      *(long *)(param_1 + 0x28) = param_1;
      *(code **)(param_1 + 0x30) = FUN_01da1a10;
      if (param_4 != (undefined8 *)0x0) {
        plVar2 = (long *)(param_1 + 0x48);
        *plVar2 = (long)param_4;
        *param_4 = plVar2;
        lVar5 = *plVar2;
        *(undefined8 *)(lVar5 + 8) = 0;
        *(undefined8 *)(lVar5 + 0x10) = 0;
      }
      *(undefined1 *)(param_1 + 0x60) = 1;
      return;
    }
  }
  if (param_4 != (undefined8 *)0x0) {
    param_4[1] = 0x2cffffffff;
    param_4[2] = 0;
  }
  return;
}

