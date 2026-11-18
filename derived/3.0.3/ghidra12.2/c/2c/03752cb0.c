
void FUN_03752cb0(short *param_1,int *param_2,uint param_3,uint param_4)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  
  lVar3 = DAT_05ab5ea8;
  if (*param_1 != -2) {
    if ((param_4 & 1) != 0) {
      if (DAT_05ab5ea8 != 0) {
        lVar1 = DAT_05ab5ea8 + 0xb20;
        FUN_0277dedc(param_1);
        lVar3 = (**(code **)(*(long *)(lVar3 + 0xb20) + 0x18))(lVar1);
        uVar2 = FUN_0277d6c4(param_1);
        if ((uVar2 >> 3 & 0x1fff) < 0x753) {
          lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
          *(uint *)(lVar3 + lVar1) = *(uint *)(lVar3 + lVar1) | 1 << (ulong)(uVar2 & 0x1f);
        }
      }
    }
    uVar4 = FUN_02686510(param_1);
    if ((uVar4 & 1) == 0) {
      if (*param_2 != 0) {
        lVar3 = *(long *)PTR_DAT_04bb27f8;
        FUN_0277dedc(param_1);
        lVar3 = (**(code **)(*(long *)(lVar3 + 0x3b0) + 0x18))(lVar3 + 0x3b0);
        uVar2 = FUN_0277d6c4(param_1);
        if ((uVar2 >> 3 & 0x1fff) < 0x753) {
          lVar1 = (ulong)((uVar2 & 0xffff) >> 5) * 4;
          *(uint *)(lVar3 + lVar1) = *(uint *)(lVar3 + lVar1) | 1 << (ulong)(uVar2 & 0x1f);
        }
      }
      if (*param_2 != 1) {
        FUN_02686340(param_1);
      }
    }
    if (((param_3 & 1) != 0) && (uVar4 = FUN_026871c0(param_1), (uVar4 & 1) == 0)) {
      FUN_02686ff0(param_1);
      FUN_02687440(param_1);
      return;
    }
  }
  return;
}

