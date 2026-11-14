
void FUN_01da096c(long param_1,byte *param_2,byte param_3,undefined8 *param_4)

{
  ulong uVar1;
  long *plVar2;
  byte bVar3;
  long lVar4;
  undefined1 local_24 [4];
  
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
    local_24[0] = 0xf;
    uVar1 = FUN_01da4dbc(*(undefined8 *)PTR_DAT_04bb49f8,local_24,param_3 & 1);
    if ((uVar1 & 1) != 0) {
      bVar3 = *param_2;
      *(undefined1 **)(param_1 + 0x10) = &LAB_01da1c54;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(long *)(param_1 + 8) = param_1;
      *(long *)(param_1 + 0x28) = param_1;
      *(code **)(param_1 + 0x30) = FUN_01da0a90;
      if (7 < bVar3) {
        bVar3 = 0xff;
      }
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(byte *)(param_1 + 0x50) = bVar3;
      *(undefined1 *)(param_1 + 0x40) = 1;
      if (param_4 != (undefined8 *)0x0) {
        plVar2 = (long *)(param_1 + 0x48);
        *plVar2 = (long)param_4;
        *param_4 = plVar2;
        lVar4 = *plVar2;
        *(undefined8 *)(lVar4 + 8) = 0;
        *(undefined8 *)(lVar4 + 0x10) = 0;
      }
      *(byte *)(param_1 + 0x60) = param_3 & 1;
      return;
    }
  }
  if (param_4 != (undefined8 *)0x0) {
    param_4[1] = 0x2cffffffff;
    param_4[2] = 0;
  }
  return;
}

