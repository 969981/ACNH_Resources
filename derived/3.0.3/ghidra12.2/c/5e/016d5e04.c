
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_016d5e04(undefined2 *param_1,uint param_2,int param_3)

{
  undefined2 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined4 uVar4;
  undefined8 local_28;
  
  uVar4 = DAT_0558600c;
  if (param_1 != (undefined2 *)0x0) {
    uVar1 = DAT_05586008;
    uVar2 = DAT_0558600a;
    uVar3 = DAT_0558600b;
    *param_1 = DAT_05586008;
    *(undefined1 *)(param_1 + 1) = uVar2;
    *(undefined1 *)((long)param_1 + 3) = uVar3;
    *(undefined4 *)(param_1 + 2) = uVar4;
    param_1[0xc] = uVar1;
    param_1[0x10] = uVar1;
    param_1[0x14] = uVar1;
    param_1[0x18] = uVar1;
    param_1[0x1c] = uVar1;
    param_1[0x20] = uVar1;
    uVar1 = DAT_05586008;
    *(undefined1 *)(param_1 + 0xd) = uVar2;
    *(undefined1 *)((long)param_1 + 0x1b) = uVar3;
    *(undefined4 *)(param_1 + 0xe) = uVar4;
    *(undefined1 *)(param_1 + 0x11) = uVar2;
    *(undefined1 *)((long)param_1 + 0x23) = uVar3;
    *(undefined4 *)(param_1 + 0x12) = uVar4;
    *(undefined1 *)(param_1 + 0x15) = uVar2;
    *(undefined1 *)((long)param_1 + 0x2b) = uVar3;
    *(undefined4 *)(param_1 + 0x16) = uVar4;
    *(undefined1 *)(param_1 + 0x19) = uVar2;
    *(undefined1 *)((long)param_1 + 0x33) = uVar3;
    *(undefined4 *)(param_1 + 0x1a) = uVar4;
    *(undefined1 *)(param_1 + 0x1d) = uVar2;
    *(undefined1 *)((long)param_1 + 0x3b) = uVar3;
    *(undefined4 *)(param_1 + 0x1e) = uVar4;
    *(undefined1 *)(param_1 + 0x21) = uVar2;
    *(undefined1 *)((long)param_1 + 0x43) = uVar3;
    *(undefined4 *)(param_1 + 0x22) = uVar4;
    *param_1 = uVar1;
    uVar1 = DAT_05586008;
    *(undefined1 *)(param_1 + 1) = DAT_0558600a;
    uVar3 = DAT_0558600b;
    uVar2 = DAT_0558600a;
    param_1[4] = uVar1;
    param_1[8] = uVar1;
    *(undefined1 *)((long)param_1 + 3) = uVar3;
    uVar4 = DAT_0558600c;
    uVar3 = DAT_0558600b;
    *(undefined1 *)(param_1 + 5) = uVar2;
    *(undefined1 *)(param_1 + 9) = uVar2;
    *(undefined4 *)(param_1 + 2) = uVar4;
    uVar4 = DAT_0558600c;
    *(undefined1 *)((long)param_1 + 0xb) = uVar3;
    *(undefined1 *)((long)param_1 + 0x13) = uVar3;
    *(undefined4 *)(param_1 + 6) = uVar4;
    *(undefined4 *)(param_1 + 10) = uVar4;
    if ((param_2 & 1) == 0) {
      if (param_3 == 0) {
        local_28 = 0x507;
      }
      else {
        local_28 = 0x517;
      }
      FUN_0277d4ac(&local_28);
      *(undefined4 *)(param_1 + 0xc) = (undefined4)local_28;
      *(undefined4 *)(param_1 + 0xe) = local_28._4_4_;
      local_28 = 0x10e6;
      FUN_0277d4ac(&local_28);
      *(undefined4 *)(param_1 + 0x10) = (undefined4)local_28;
      *(undefined4 *)(param_1 + 0x12) = local_28._4_4_;
      local_28 = 0x2736;
      FUN_0277d4ac(&local_28);
      *(undefined4 *)(param_1 + 0x14) = (undefined4)local_28;
      *(undefined4 *)(param_1 + 0x16) = local_28._4_4_;
      local_28 = 0x2cc1;
    }
    else {
      if (param_3 == 0) {
        local_28 = 0x4f8;
      }
      else {
        local_28 = 0x516;
      }
      FUN_0277d4ac(&local_28);
      *(undefined4 *)(param_1 + 0xc) = (undefined4)local_28;
      *(undefined4 *)(param_1 + 0xe) = local_28._4_4_;
      local_28 = 0x238a;
      FUN_0277d4ac(&local_28);
      *(undefined4 *)(param_1 + 0x10) = (undefined4)local_28;
      *(undefined4 *)(param_1 + 0x12) = local_28._4_4_;
      uVar4 = DAT_0558600c;
      *(undefined4 *)(param_1 + 0x14) = _DAT_05586008;
      *(undefined4 *)(param_1 + 0x16) = uVar4;
      local_28 = 0x29cc;
    }
    FUN_0277d4ac(&local_28);
    *(undefined4 *)(param_1 + 0x18) = (undefined4)local_28;
    *(undefined4 *)(param_1 + 0x1a) = local_28._4_4_;
    uVar4 = DAT_0558600c;
    uVar1 = DAT_05586008;
    uVar2 = DAT_0558600a;
    uVar3 = DAT_0558600b;
    *(undefined1 *)((long)param_1 + 0x3b) = DAT_0558600b;
    *(undefined4 *)(param_1 + 0x1e) = uVar4;
    *(undefined1 *)((long)param_1 + 0x43) = uVar3;
    *(undefined4 *)(param_1 + 0x22) = uVar4;
    param_1[0x1c] = uVar1;
    *(undefined1 *)(param_1 + 0x1d) = uVar2;
    param_1[0x20] = uVar1;
    *(undefined1 *)(param_1 + 0x21) = uVar2;
  }
  return param_1 != (undefined2 *)0x0;
}

