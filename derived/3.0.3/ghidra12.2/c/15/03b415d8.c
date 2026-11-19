
/* WARNING: Removing unreachable block (ram,0x03b416f0) */

void FUN_03b415d8(undefined4 *param_1)

{
  long lVar1;
  long *plVar2;
  undefined8 uVar3;
  
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined8 *)(param_1 + 0x22) = 0;
  *(undefined8 *)(param_1 + 6) = 0x3c8888893f800000;
  *(undefined1 **)(param_1 + 8) = &DAT_3f8000003f800000;
  *(undefined8 *)(param_1 + 10) = 0x40b5555543aa0000;
  *(undefined8 *)(param_1 + 0xc) = 0x408000003e800000;
  *(undefined8 *)(param_1 + 0xe) = 0x3f80000000000000;
  *(undefined8 *)(param_1 + 0x10) = 0x4000000040000000;
  param_1[0x20] = 6;
  *(undefined1 *)(param_1 + 100) = 1;
  *(undefined2 *)((long)param_1 + 0x192) = 0xffff;
  *(undefined4 **)(param_1 + 0x12) = param_1 + 0xf;
  param_1[0x67] = 0;
  *param_1 = 2;
  *(undefined8 *)(param_1 + 2) = 0;
  *(undefined8 *)(param_1 + 4) = 0x427000003f800000;
  lVar1 = DAT_05aebb78;
  *(undefined8 *)(param_1 + 0x65) = 0;
  if (*(long *)(lVar1 + 0x140) != 0) {
    plVar2 = *(long **)(*(long *)(lVar1 + 0x140) + 8);
                    /* WARNING: Could not recover jumptable at 0x03b41708. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar2 + 0x30))(plVar2,DAT_041e0218);
    return;
  }
  if (DAT_05aebc00 == '\0') {
    uVar3 = FUN_03b38a74();
    FUN_003b6380(uVar3,2,0);
  }
  return;
}

