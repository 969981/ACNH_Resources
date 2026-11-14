
void FUN_016bdc00(long param_1)

{
  int iVar1;
  undefined1 *puVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  undefined1 *puVar6;
  undefined1 local_a0 [4];
  undefined4 local_9c;
  undefined *local_88;
  undefined1 *local_80;
  undefined4 local_78;
  undefined1 local_74 [7];
  undefined1 local_6d;
  undefined *local_68;
  undefined1 *local_60;
  undefined4 local_58;
  undefined1 local_54 [7];
  undefined1 local_4d;
  undefined2 local_48;
  undefined4 local_46;
  undefined1 local_42;
  
  local_a0[0] = 0;
  local_6d = 0;
  local_74[0] = 0;
  local_60 = local_54;
  local_9c = 0xffffffff;
  local_80 = local_74;
  local_88 = PTR_DAT_04bb3768 + 0x10;
  local_78 = 8;
  local_58 = 8;
  local_4d = 0;
  local_54[0] = 0;
  local_48 = 0;
  local_42 = 0;
  local_46 = 0x101;
  if ((*(int *)(param_1 + 0xc) != -1) && (DAT_05574040 != 0)) {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    local_68 = local_88;
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar3 == 0) {
        return;
      }
      lVar3 = lVar3 + 0x70;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar5[0x26] == (long *)0x0) {
        return;
      }
      lVar3 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      if (lVar3 == 0) {
        return;
      }
    }
    puVar2 = &LAB_002057b0 + lVar3;
    if (*(char *)(param_1 + 8) != '\0') {
      puVar2 = (undefined1 *)(lVar3 + 0x20b9e8);
    }
    uVar4 = FUN_016d4af0(local_a0,param_1 + 8,puVar2 + (long)*(int *)(param_1 + 0xc) * 0xc40);
    if ((uVar4 & 1) != 0) {
      puVar6 = *(undefined1 **)(param_1 + 0x60);
      (**(code **)(local_88 + 0x18))(&local_88);
      puVar2 = local_80;
      if (puVar6 != local_80) {
        (**(code **)(local_88 + 0x18))(&local_88);
        lVar3 = 0;
        do {
          if (local_80[lVar3] == '\0') goto LAB_016bdd90;
          if (local_80[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_016bdd90;
          }
          if (local_80[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_016bdd90;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_016bdd90:
        iVar1 = (int)lVar3;
        if (*(int *)(param_1 + 0x68) <= (int)lVar3) {
          iVar1 = *(int *)(param_1 + 0x68) + -1;
        }
        memcpy(puVar6,puVar2,(long)iVar1);
        puVar6[iVar1] = 0;
      }
      puVar6 = *(undefined1 **)(param_1 + 0x80);
      (**(code **)(local_68 + 0x18))(&local_68);
      puVar2 = local_60;
      if (puVar6 != local_60) {
        (**(code **)(local_68 + 0x18))(&local_68);
        lVar3 = 0;
        do {
          if (local_60[lVar3] == '\0') goto LAB_016bde2c;
          if (local_60[lVar3 + 1] == '\0') {
            lVar3 = lVar3 + 1;
            goto LAB_016bde2c;
          }
          if (local_60[lVar3 + 2] == '\0') {
            lVar3 = lVar3 + 2;
            goto LAB_016bde2c;
          }
          lVar3 = lVar3 + 3;
        } while (lVar3 != 0x80001);
        lVar3 = 0;
LAB_016bde2c:
        iVar1 = (int)lVar3;
        if (*(int *)(param_1 + 0x88) <= (int)lVar3) {
          iVar1 = *(int *)(param_1 + 0x88) + -1;
        }
        memcpy(puVar6,puVar2,(long)iVar1);
        puVar6[iVar1] = 0;
      }
    }
  }
  return;
}

