
void FUN_036db4a0(long param_1,int *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 *__src;
  long *plVar4;
  undefined *local_80;
  undefined1 *puStack_78;
  int local_70;
  undefined1 local_6c [7];
  undefined1 local_65;
  undefined8 local_60;
  int local_58;
  undefined *local_50;
  undefined2 local_48;
  
  local_80 = (undefined *)CONCAT44(local_80._4_4_,1);
  FUN_036db078(param_1,&local_80);
  local_65 = 0;
  local_70 = 8;
  local_6c[0] = 0;
  local_80 = PTR_DAT_04bb3768 + 0x10;
  local_58 = 0;
  local_60 = 0x100000000;
  plVar4 = (long *)(param_2 + 2);
  puStack_78 = local_6c;
  (**(code **)(*plVar4 + 0x18))(plVar4);
  __src = *(undefined1 **)(param_2 + 4);
  if (local_6c != __src) {
    (**(code **)(*(long *)(param_2 + 2) + 0x18))(plVar4);
    lVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 4) + lVar3) == '\0') goto LAB_036db580;
      lVar1 = *(long *)(param_2 + 4) + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_036db580;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_036db580;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_036db580:
    iVar2 = (int)lVar3;
    if (local_70 <= (int)lVar3) {
      iVar2 = local_70 + -1;
    }
    memcpy(local_6c,__src,(long)iVar2);
    local_6c[iVar2] = 0;
  }
  local_58 = *param_2;
  local_48 = FUN_0376baa0(&local_80);
  local_50 = PTR_DAT_04bb7648 + 0x10;
  FUN_037476e0(param_1 + 0x20,&local_50);
  *(undefined2 *)(param_1 + 0xc0) = 4;
  *(ushort *)(param_1 + 0xc0) = (ushort)(local_58 << 4) | 4;
  *(undefined4 *)(param_1 + 8) = 1;
  return;
}

