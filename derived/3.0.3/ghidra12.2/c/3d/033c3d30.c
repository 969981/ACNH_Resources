
void FUN_033c3d30(undefined8 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 *__src;
  long lVar2;
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
  
  local_120 = 0;
  local_130 = 0;
  uStack_128 = 0x3f800000;
  local_118 = 0x40a00000;
  local_100 = 0x40;
  local_bd = 0;
  local_110 = PTR_DAT_04bb2f70 + 0x10;
  puStack_108 = auStack_fc;
  (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
  __src = DAT_05743420;
  if (auStack_fc != DAT_05743420) {
    (**(code **)(DAT_05743418 + 0x18))(&DAT_05743418);
    lVar2 = 0;
    do {
      if (DAT_05743420[lVar2] == '\0') goto LAB_033c3e0c;
      if (DAT_05743420[lVar2 + 1] == '\0') {
        lVar2 = lVar2 + 1;
        goto LAB_033c3e0c;
      }
      if (DAT_05743420[lVar2 + 2] == '\0') {
        lVar2 = lVar2 + 2;
        goto LAB_033c3e0c;
      }
      lVar2 = lVar2 + 3;
    } while (lVar2 != 0x80001);
    lVar2 = 0;
LAB_033c3e0c:
    iVar1 = (int)lVar2;
    if (local_100 <= (int)lVar2) {
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
  FUN_033bb4ec(param_1,&local_130,param_2);
  if ((DAT_05231900 != 0) && (*(long *)(DAT_05231900 + 0x58) != 0)) {
    FUN_01613a48(local_118,0x44200000,*(long *)(DAT_05231900 + 0x58),2);
  }
  return;
}

