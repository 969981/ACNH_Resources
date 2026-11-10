
ulong FUN_002927c0(long param_1,int *param_2,uint param_3)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  int *piVar5;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == param_1 + 8) {
    uVar2 = 0;
  }
  else {
    uVar1 = 0;
    do {
      if ((uVar1 & 0xff) != 0) {
        uVar4 = uVar1 & 0xff;
        piVar5 = param_2;
        do {
          uVar2 = uVar1;
          if (*piVar5 == *(int *)(lVar3 + 0x28)) goto LAB_002927e0;
          uVar4 = uVar4 - 1;
          piVar5 = piVar5 + 1;
        } while (uVar4 != 0);
      }
      if (param_3 <= ((uint)uVar1 & 0xff)) {
        return uVar1;
      }
      uVar2 = (ulong)((uint)uVar1 + 1);
      param_2[uVar1 & 0xff] = *(int *)(lVar3 + 0x28);
LAB_002927e0:
      lVar3 = *(long *)(lVar3 + 8);
      uVar1 = uVar2;
    } while (lVar3 != param_1 + 8);
  }
  return uVar2;
}

