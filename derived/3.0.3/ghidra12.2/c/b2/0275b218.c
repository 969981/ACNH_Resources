
undefined4 FUN_0275b218(undefined8 param_1,uint param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 unaff_x29;
  undefined8 unaff_x30;
  undefined4 local_30 [8];
  undefined8 local_10;
  undefined8 uStack_8;
  
  local_10 = unaff_x29;
  uStack_8 = unaff_x30;
  while( true ) {
    if (((DAT_0557ee20 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0557ee20), iVar1 != 0)) {
      DAT_0557ede0 = 0x9a;
      DAT_0557ede4 = 0x81f;
      DAT_0557ede8 = 0x98;
      DAT_0557edec = 0xe;
      DAT_0557edf0 = 0x9b;
      DAT_0557edf4 = 0x3c;
      DAT_0557edf8 = 0x99;
      DAT_0557edfc = 0xe70;
      DAT_0557ee00 = 0x97;
      DAT_0557ee04 = 0x7c0;
      DAT_0557ee08 = 0x96;
      DAT_0557ee0c = 0x1e0;
      DAT_0557ee10 = 0x94;
      DAT_0557ee14 = 0xf81;
      DAT_0557ee18 = 0x9c;
      DAT_0557ee1c = 0xc0f;
      __cxa_guard_release(&DAT_0557ee20);
    }
    if (param_2 - 0xd < 0xfffffff4) {
      uVar3 = 0;
    }
    else {
      iVar1 = 6;
      if (6 < param_2) {
        iVar1 = -6;
      }
      if (*(int *)(*(long *)PTR_DAT_04bb30a0 + 0x65204) != 1) {
        iVar1 = 0;
      }
      uVar3 = (param_2 + iVar1) - 1;
    }
    uVar2 = 0;
    uVar3 = 1 << (ulong)(uVar3 & 0x1f);
    if ((((param_5 != 0) && (param_4 != 0)) && (param_3 != 0)) && ((uVar3 & DAT_0557ede4) != 0)) {
      uVar2 = 1;
      local_30[0] = 0;
    }
    if (((param_5 != 1) && (param_4 != 1)) && ((param_3 != 1 && ((uVar3 & DAT_0557edec) != 0)))) {
      local_30[uVar2] = 1;
      uVar2 = (ulong)((int)uVar2 + 1);
    }
    if (((param_5 != 2) && (param_4 != 2)) && ((param_3 != 2 && ((uVar3 & DAT_0557edf4) != 0)))) {
      local_30[uVar2] = 2;
      uVar2 = (ulong)((int)uVar2 + 1);
    }
    if ((((param_5 != 3) && (param_4 != 3)) && (param_3 != 3)) && ((uVar3 & DAT_0557edfc) != 0)) {
      local_30[uVar2] = 3;
      uVar2 = (ulong)((int)uVar2 + 1);
    }
    if (((param_5 != 4) && (param_4 != 4)) && ((param_3 != 4 && ((uVar3 & DAT_0557ee04) != 0)))) {
      local_30[uVar2] = 4;
      uVar2 = (ulong)((int)uVar2 + 1);
    }
    if (((param_5 != 5) && (param_4 != 5)) && ((param_3 != 5 && ((uVar3 & DAT_0557ee0c) != 0)))) {
      local_30[uVar2] = 5;
      uVar2 = (ulong)((int)uVar2 + 1);
    }
    if ((((param_5 != 6) && (param_4 != 6)) && (param_3 != 6)) && ((uVar3 & DAT_0557ee14) != 0)) {
      local_30[uVar2] = 6;
      uVar2 = (ulong)((int)uVar2 + 1);
    }
    if (((param_5 != 7) && (param_4 != 7)) && ((param_3 != 7 && ((uVar3 & DAT_0557ee1c) != 0))))
    break;
    if ((int)uVar2 != 0) goto LAB_0275b43c;
    if (param_5 == -1) {
      if (param_4 == -1) {
        if (param_3 == -1) {
          return 3;
        }
        param_3 = -1;
        param_4 = -1;
      }
      else {
        param_4 = -1;
      }
    }
    param_5 = -1;
  }
  local_30[uVar2] = 7;
  uVar2 = (ulong)((int)uVar2 + 1);
LAB_0275b43c:
  uVar3 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
  uVar3 = uVar3 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar3 ^ DAT_05582b7c;
  DAT_05582b70 = DAT_05582b74;
  DAT_05582b74 = DAT_05582b78;
  DAT_05582b78 = DAT_05582b7c;
  DAT_05582b7c = uVar3;
  return *(undefined4 *)((long)local_30 + (uVar3 * uVar2 >> 0x1e & 0x3fc));
}

