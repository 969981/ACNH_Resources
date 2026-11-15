
void FUN_02017350(long param_1,undefined2 *param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 *__src;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined4 local_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined1 *local_f8;
  undefined1 *puStack_f0;
  int local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  undefined4 local_60;
  undefined2 local_5c;
  undefined8 local_58;
  
  local_114 = 0x3f800000;
  local_118 = 0;
  local_65 = 0;
  local_e8 = 0x80;
  *(undefined2 *)(param_1 + 0x60dc) = *param_2;
  local_e4[0] = 0;
  local_128 = 0xffffffff00000000;
  uStack_120 = 0;
  *(undefined1 *)(param_1 + 0x60de) = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x60df) = *(undefined1 *)((long)param_2 + 3);
  *(undefined4 *)(param_1 + 0x60e0) = *(undefined4 *)(param_2 + 2);
  local_58 = 0;
  local_5c = 0;
  local_10c = 0;
  local_104 = 0;
  local_f8 = &DAT_048fc708;
  local_60 = 7;
  puStack_f0 = local_e4;
  (**(code **)(*(long *)(param_1 + 0x5f48) + 0x18))(param_1 + 0x5f48);
  __src = *(undefined1 **)(param_1 + 0x5f50);
  if (local_e4 != __src) {
    (**(code **)(*(long *)(param_1 + 0x5f48) + 0x18))(param_1 + 0x5f48);
    lVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_1 + 0x5f50) + lVar3) == '\0') goto LAB_0201747c;
      lVar1 = *(long *)(param_1 + 0x5f50) + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0201747c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0201747c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0201747c:
    iVar2 = (int)lVar3;
    if (local_e8 <= (int)lVar3) {
      iVar2 = local_e8 + -1;
    }
    memcpy(local_e4,__src,(long)iVar2);
    local_e4[iVar2] = 0;
  }
  local_5c = CONCAT11(local_5c._1_1_,*(undefined1 *)(*(long *)(param_1 + 0x48) + 0x224));
  FUN_017327f0(*(undefined8 *)(param_1 + 0x60b0),param_2,param_3,&local_128,0xffffffff);
  return;
}

