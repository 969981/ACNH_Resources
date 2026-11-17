
void FUN_03149a50(uint param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  ulong uVar4;
  ulong uVar5;
  byte local_3c [12];
  
  FUN_02507c6c(local_3c,1,1,0,0);
  puVar1 = PTR_DAT_04bb2230;
  if (local_3c[0] < 8) {
    uVar3 = FUN_0339be20(*(undefined8 *)(*(long *)PTR_DAT_04bb2230 + 0x10),2,local_3c);
    FUN_03152cc0(uVar3,param_1 & 1);
    while (local_3c[0] < 8) {
      uVar2 = (ulong)local_3c[0];
      do {
        uVar5 = uVar2;
        if (uVar5 == 7) goto LAB_03149b24;
        uVar4 = FUN_02507924(local_3c,&DAT_0548e169 + uVar5);
        uVar2 = uVar5 + 1;
      } while ((uVar4 & 1) == 0);
      if (7 < (byte)(&DAT_0548e169)[uVar5]) break;
      local_3c[0] = (&DAT_0548e169)[uVar5];
      uVar3 = FUN_0339be20(*(undefined8 *)(*(long *)puVar1 + 0x10),2,local_3c);
      FUN_03152cc0(uVar3,param_1 & 1);
    }
  }
LAB_03149b24:
  FUN_03152bc0(*(undefined8 *)(*(long *)puVar1 + 0xd0),param_1 & 1);
  return;
}

