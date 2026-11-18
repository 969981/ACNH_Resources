
void FUN_033bb5d0(long param_1,byte param_2)

{
  int iVar1;
  undefined **ppuVar2;
  undefined1 *__src;
  long lVar3;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined4 local_118;
  undefined *local_110;
  undefined1 *puStack_108;
  int local_100;
  undefined1 auStack_fc [63];
  undefined1 local_bd;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  if ((*(int *)(param_1 + 0x50) != -1) && (*(byte *)(param_1 + 0x68) != (param_2 & 1))) {
    *(byte *)(param_1 + 0x68) = param_2 & 1;
    local_130 = 0;
    uStack_128 = 0x3f800000;
    local_118 = 0x40a00000;
    local_100 = 0x40;
    local_bd = 0;
    local_110 = PTR_DAT_04bb2f70 + 0x10;
    local_120 = 0;
    puStack_108 = auStack_fc;
    (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
    __src = DAT_05743420;
    if (auStack_fc != DAT_05743420) {
      (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
      lVar3 = 0;
      do {
        if (DAT_05743420[lVar3] == '\0') goto LAB_033bb6d0;
        if (DAT_05743420[lVar3 + 1] == '\0') {
          lVar3 = lVar3 + 1;
          goto LAB_033bb6d0;
        }
        if (DAT_05743420[lVar3 + 2] == '\0') {
          lVar3 = lVar3 + 2;
          goto LAB_033bb6d0;
        }
        lVar3 = lVar3 + 3;
      } while (lVar3 != 0x80001);
      lVar3 = 0;
LAB_033bb6d0:
      iVar1 = (int)lVar3;
      if (local_100 <= (int)lVar3) {
        iVar1 = local_100 + -1;
      }
      memcpy(auStack_fc,__src,(long)iVar1);
      auStack_fc[iVar1] = 0;
    }
    local_b0 = local_a4;
    local_a8 = 0x40;
    local_65 = 0;
    local_a4[0] = 0;
    local_110 = PTR_DAT_04bb2bc0 + 0x10;
    local_b8 = local_110;
    FUN_033bb4ec(param_1,&local_130,*(undefined4 *)(param_1 + 0xb0));
    if (DAT_05231900 != 0) {
      ppuVar2 = &local_110;
      if (*(char *)(param_1 + 0x68) != '\0') {
        ppuVar2 = &local_b8;
      }
      FUN_01640a40(*(undefined8 *)(DAT_05231900 + 0x70),ppuVar2);
    }
  }
  return;
}

