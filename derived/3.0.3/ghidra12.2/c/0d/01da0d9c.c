
void FUN_01da0d9c(long param_1,byte *param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0) {
      lVar4 = *(long *)PTR_DAT_04bb49f0;
      *(undefined1 *)(lVar4 + 0xb0) = 0;
      uVar1 = FUN_01d7c528(lVar4,param_2);
      if ((uVar1 & 1) == 0) {
        bVar2 = *param_2;
        if (7 < bVar2) {
          bVar2 = 0xff;
        }
        *(byte *)(lVar4 + 0xb1) = bVar2;
        *(undefined1 *)(lVar4 + 0xb0) = 1;
      }
    }
    uVar1 = FUN_01da4fd8(*(undefined8 *)PTR_DAT_04bb49f8,param_3);
    if ((uVar1 & 1) != 0) {
      *(undefined8 *)(param_1 + 0x58) = *param_3;
      bVar2 = *param_2;
      *(undefined8 *)(param_1 + 0x18) = 0;
      *(long *)(param_1 + 8) = param_1;
      *(undefined1 **)(param_1 + 0x10) = &LAB_01da1c54;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(long *)(param_1 + 0x28) = param_1;
      *(code **)(param_1 + 0x30) = FUN_01da0eb8;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      *(byte *)(param_1 + 0x50) = bVar2;
      *(undefined1 *)(param_1 + 0x40) = 1;
      if (param_4 != (undefined8 *)0x0) {
        plVar3 = (long *)(param_1 + 0x48);
        *plVar3 = (long)param_4;
        *param_4 = plVar3;
        lVar4 = *plVar3;
        *(undefined8 *)(lVar4 + 8) = 0;
        *(undefined8 *)(lVar4 + 0x10) = 0;
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

