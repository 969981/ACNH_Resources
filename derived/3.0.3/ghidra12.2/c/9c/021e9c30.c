
void FUN_021e9c30(undefined8 *param_1,long param_2,ulong param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined1 *__src;
  undefined *local_60;
  undefined1 *puStack_58;
  int local_50;
  undefined1 auStack_4c [7];
  undefined1 local_45;
  undefined4 local_24;
  
  if ((param_3 & 1) == 0) {
    if ((param_2 == 0) || (uVar3 = *(uint *)(param_2 + 0x508), uVar3 == 0xffffffff)) {
      *param_1 = 0x1c91;
      FUN_0277d4ac(param_1);
      return;
    }
    puVar6 = &DAT_053fe348 + (ulong)uVar3 * 0xba0;
    if (9 < uVar3) {
      puVar6 = &DAT_053fe348;
    }
    local_24 = *(undefined4 *)(puVar6 + 0x524);
  }
  else {
    local_50 = 8;
    local_45 = 0;
    local_60 = PTR_DAT_04bb6a30 + 0x10;
    puStack_58 = auStack_4c;
    (**(code **)(*(long *)(param_2 + 0x3e0) + 0x18))(param_2 + 0x3e0);
    __src = *(undefined1 **)(param_2 + 1000);
    if (auStack_4c != __src) {
      (**(code **)(*(long *)(param_2 + 0x3e0) + 0x18))(param_2 + 0x3e0);
      lVar4 = 0;
      do {
        if (*(char *)(*(long *)(param_2 + 1000) + lVar4) == '\0') goto LAB_021e9d54;
        lVar1 = *(long *)(param_2 + 1000) + lVar4;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar4 = lVar4 + 1;
          goto LAB_021e9d54;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar4 = lVar4 + 2;
          goto LAB_021e9d54;
        }
        lVar4 = lVar4 + 3;
      } while (lVar4 != 0x80001);
      lVar4 = 0;
LAB_021e9d54:
      iVar2 = (int)lVar4;
      if (local_50 <= (int)lVar4) {
        iVar2 = local_50 + -1;
      }
      memcpy(auStack_4c,__src,(long)iVar2);
      auStack_4c[iVar2] = 0;
    }
    local_60 = PTR_DAT_04bb3768 + 0x10;
    local_24 = FUN_021dd320(&local_60);
  }
  switch(local_24) {
  case 0:
    uVar5 = 0x1bd3;
    break;
  case 1:
    uVar5 = 0x1c93;
    break;
  case 2:
    uVar5 = 0x1c94;
    break;
  case 3:
    uVar5 = 0x1c92;
    break;
  default:
    uVar5 = 0x1c91;
    break;
  case 5:
    uVar5 = 0xc8d;
  }
  *param_1 = uVar5;
  FUN_0277d4ac(param_1);
  return;
}

