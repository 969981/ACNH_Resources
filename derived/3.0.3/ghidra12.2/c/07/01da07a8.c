
void FUN_01da07a8(long param_1,byte *param_2,undefined8 *param_3)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  undefined1 local_34 [4];
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0) {
      lVar4 = *(long *)PTR_DAT_04bb49f0;
      *(undefined1 *)(lVar4 + 0xb0) = 0;
      uVar1 = FUN_01d7c528(lVar4,param_2);
      if ((uVar1 & 1) == 0) {
        bVar3 = *param_2;
        if (7 < bVar3) {
          bVar3 = 0xff;
        }
        *(byte *)(lVar4 + 0xb1) = bVar3;
        *(undefined1 *)(lVar4 + 0xb0) = 1;
      }
    }
    if (*(int *)(DAT_05379880 + 0x68) == 0 && *(int *)(DAT_05379880 + 0xb0) == 0) {
      local_34[0] = 1;
      uVar1 = FUN_01da4dbc(DAT_05379880,local_34,1);
      if ((uVar1 & 1) != 0) {
        bVar3 = *param_2;
        *(long *)(param_1 + 8) = param_1;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined1 **)(param_1 + 0x10) = &LAB_01da1c54;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined1 *)(param_1 + 0x40) = 1;
        if (7 < bVar3) {
          bVar3 = 0xff;
        }
        *(byte *)(param_1 + 0x50) = bVar3;
        *(long *)(param_1 + 0x28) = param_1;
        *(code **)(param_1 + 0x30) = FUN_01da08d4;
        if (param_3 != (undefined8 *)0x0) {
          plVar2 = (long *)(param_1 + 0x48);
          *plVar2 = (long)param_3;
          *param_3 = plVar2;
          lVar4 = *plVar2;
          *(undefined8 *)(lVar4 + 8) = 0;
          *(undefined8 *)(lVar4 + 0x10) = 0;
        }
        *(undefined1 *)(param_1 + 0x60) = 1;
        return;
      }
    }
  }
  if (param_3 != (undefined8 *)0x0) {
    param_3[1] = 0x2cffffffff;
    param_3[2] = 0;
  }
  return;
}

