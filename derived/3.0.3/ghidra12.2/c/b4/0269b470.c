
void FUN_0269b470(ushort *param_1)

{
  ulong uVar1;
  ulong uVar2;
  int iVar3;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined4 local_68;
  undefined8 local_60;
  undefined8 local_58;
  ushort local_34;
  undefined1 local_32;
  
  local_34 = 0x23;
  local_32 = 8;
  FUN_020fd218(&local_34,0x10,2);
  if ((ushort)(local_34 >> 8 | local_34 << 8) == (ushort)(*param_1 >> 8 | *param_1 << 8)) {
    local_58 = 0x2913;
    FUN_0277d4ac(&local_58);
    local_60 = 0x2912;
    FUN_0277d4ac(&local_60);
    uVar2 = 0;
    uVar1 = 0;
    iVar3 = 0;
    do {
      if ((uVar2 & 1) == 0) {
        uVar2 = FUN_0277d7b4(param_1 + (long)iVar3 * 0x16 + 0x86b6,&local_58);
        uVar2 = uVar2 & 0xffffffff;
        if ((uVar1 & 1) != 0) goto LAB_0269b548;
LAB_0269b504:
        uVar1 = FUN_0277d7b4(param_1 + (long)iVar3 * 0x16 + 0x86b6,&local_60);
        uVar1 = uVar1 & 0xffffffff;
      }
      else {
        uVar2 = 1;
        if ((uVar1 & 1) == 0) goto LAB_0269b504;
LAB_0269b548:
        uVar1 = 1;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 != 0x20);
    local_68 = 0;
    local_80 = 0;
    local_78 = 0;
    uStack_70 = 0;
    if ((uVar2 & 1) == 0) {
      FUN_0268f390(param_1,&local_58,&local_80,7,1,0,0);
    }
    if ((uVar1 & 1) == 0) {
      FUN_0268f390(param_1,&local_60,&local_80,7,1,0,0);
    }
  }
  return;
}

