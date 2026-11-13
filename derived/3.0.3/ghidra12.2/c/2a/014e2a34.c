
uint FUN_014e2a34(long *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined8 local_38;
  
  lVar5 = param_1[1];
  if ((*(long *)PTR_DAT_04bbbc38 == 0) ||
     (uVar4 = *(ulong *)(*(long *)PTR_DAT_04bbbc38 + 0xc), (int)uVar4 != 3)) {
    uVar3 = 0x10;
  }
  else {
    uVar3 = 0xf;
    if (uVar4 >> 0x20 != 2) {
      uVar3 = 0x10;
    }
  }
  if (param_2 == 4) {
    uVar3 = 0x11;
  }
  else if (param_2 != 2) {
    if (param_2 == 1) {
      iVar1 = FUN_014eb660(*param_1);
      if (iVar1 - 2U < 4) {
        uVar3 = 0xd;
      }
      else {
        uVar3 = 0xc;
        if (*(int *)(*param_1 + 0x18) == 6) {
          FUN_0124c030(auStack_48,*param_1 + 0x60);
          iVar1 = FUN_0123db50(auStack_40,local_38);
          uVar3 = 0xc;
          if (iVar1 != 0x2e) {
            uVar3 = 0xe;
          }
        }
      }
    }
    else {
      uVar3 = 0xc;
    }
  }
  uVar2 = FUN_014c9540(lVar5,uVar3);
  return uVar2 & 1;
}

