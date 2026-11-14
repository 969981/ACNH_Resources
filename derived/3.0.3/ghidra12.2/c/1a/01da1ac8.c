
void FUN_01da1ac8(long param_1,byte *param_2,byte param_3,undefined8 *param_4)

{
  ulong uVar1;
  byte bVar2;
  long *plVar3;
  long lVar4;
  
  if (*(char *)(param_1 + 0x40) == '\0') {
    lVar4 = *(long *)PTR_DAT_04bb49f0;
    *(undefined1 *)(lVar4 + 0xb0) = 0;
    uVar1 = FUN_01d7c528(lVar4);
    if ((uVar1 & 1) == 0) {
      bVar2 = *param_2;
      if (7 < bVar2) {
        bVar2 = 0xff;
      }
      *(byte *)(lVar4 + 0xb1) = bVar2;
      *(undefined1 *)(lVar4 + 0xb0) = 1;
    }
    lVar4 = *(long *)PTR_DAT_04bb49e8;
    uVar1 = nn::pctl::CheckFreeCommunicationPermission(false);
    if ((uVar1 & 1) != 0) {
      if ((param_3 & 1) == 0) {
        plVar3 = (long *)(lVar4 + 0x38);
        lVar4 = *plVar3;
        *(undefined4 *)(lVar4 + 0x80) = 0;
        *(undefined1 *)(lVar4 + 0xa9) = 0;
      }
      else {
        plVar3 = (long *)(lVar4 + 0x30);
      }
      *(undefined1 *)(*plVar3 + 0xa8) = 1;
    }
    bVar2 = *param_2;
    *(long *)(param_1 + 0x28) = param_1;
    *(undefined1 **)(param_1 + 0x30) = &LAB_01da1bec;
    *(undefined8 *)(param_1 + 0x18) = 0;
    *(long *)(param_1 + 8) = param_1;
    *(undefined1 **)(param_1 + 0x10) = &LAB_01da1c78;
    if (7 < bVar2) {
      bVar2 = 0xff;
    }
    *(undefined8 *)(param_1 + 0x38) = 0;
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
    *(byte *)(param_1 + 0x60) = param_3 & 1;
  }
  else if (param_4 != (undefined8 *)0x0) {
    param_4[1] = 0x2cffffffff;
    param_4[2] = 0;
  }
  return;
}

