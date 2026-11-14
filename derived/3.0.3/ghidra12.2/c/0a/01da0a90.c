
void FUN_01da0a90(long param_1)

{
  int iVar1;
  undefined8 *puVar2;
  uint uVar3;
  char cVar4;
  undefined *puVar5;
  uint uVar6;
  undefined8 *puVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  undefined1 auStack_3a8 [8];
  long local_3a0;
  undefined *local_390;
  undefined8 local_388;
  int local_380;
  undefined1 auStack_378 [800];
  undefined1 auStack_58 [24];
  
  puVar5 = PTR_DAT_04bb49f8;
  lVar9 = *(long *)PTR_DAT_04bb49f8;
  uVar3 = *(uint *)(lVar9 + 0x28);
  uVar6 = 0;
  if (uVar3 != 0xffffffff) {
    uVar6 = uVar3;
  }
  if (*(uint *)(lVar9 + 8) <= uVar6) {
    uVar6 = 0;
  }
  lVar9 = *(long *)(lVar9 + 0x10) + (long)(int)uVar6 * 0x40;
  cVar4 = *(char *)(lVar9 + 0x3a);
  if ((uVar3 != 0xffffffff) &&
     ((*(char *)(lVar9 + 0x39) != '\0' || ((*(byte *)(lVar9 + 0x31) >> 1 & 1) != 0)))) {
    lVar9 = param_1 + 0x50;
    FUN_02645730(auStack_58,lVar9);
    lVar10 = *(long *)puVar5;
    uVar3 = *(uint *)(lVar10 + 0x28);
    uVar6 = 0;
    if (uVar3 != 0xffffffff) {
      uVar6 = uVar3;
    }
    if (*(uint *)(lVar10 + 8) <= uVar6) {
      uVar6 = 0;
    }
    lVar10 = *(long *)(lVar10 + 0x10) + (long)(int)uVar6 * 0x40;
    if ((*(byte *)(lVar10 + 0x30) & 0xe) == 0) {
      if ((uVar3 != 0xffffffff) && (*(char *)(lVar10 + 0x39) != '\0')) {
        FUN_02646860(auStack_58,0);
      }
    }
    else {
      FUN_02646860(auStack_58,1);
      local_390 = PTR_DAT_04bb2020 + 0x10;
      local_388 = "FriendListNotifyUpdate";
      FUN_0274bfe8(lVar9,&local_390,0);
    }
    FUN_01d4e63c(*(undefined8 *)(*(long *)PTR_DAT_04bb27d0 + 0x10));
    if (cVar4 != '\0') {
      local_380 = 0;
      local_390 = auStack_378;
      local_388 = (char *)0x64;
      FUN_02645730(auStack_3a8,lVar9);
      if ((*(long **)(local_3a0 + 0x28) == (long *)0x0) ||
         (puVar7 = (undefined8 *)**(long **)(local_3a0 + 0x28), puVar7 == (undefined8 *)0x0)) {
        uVar6 = 1;
      }
      else {
        uVar6 = (**(code **)*puVar7)();
        uVar6 = uVar6 ^ 1;
      }
      lVar9 = 0;
      puVar7 = (undefined8 *)(*(long *)(local_3a0 + 0x10) + *(long *)(local_3a0 + 8));
      do {
        uVar3 = *(uint *)((long)puVar7 + lVar9 + 0xaf00);
        puVar2 = puVar7 + (ulong)uVar3 * 0xe;
        if (399 < uVar3) {
          puVar2 = puVar7;
        }
        if (((*(byte *)((long)puVar2 + 0x6e) >> 3 & 1) != 0) && (local_380 < (int)local_388)) {
          iVar1 = 0;
          if ((int)local_388 <= local_388._4_4_ + local_380) {
            iVar1 = (int)local_388;
          }
          *(undefined8 *)(local_390 + (long)((local_388._4_4_ + local_380) - iVar1) * 8) = *puVar2;
          local_380 = local_380 + 1;
        }
        lVar9 = lVar9 + 4;
      } while (lVar9 != 0x640);
      if ((((uVar6 & 1) == 0) && (*(long *)(local_3a0 + 0x28) != 0)) &&
         (puVar7 = *(undefined8 **)(*(long *)(local_3a0 + 0x28) + 8), puVar7 != (undefined8 *)0x0))
      {
        (**(code **)*puVar7)();
      }
      if ((local_380 != 0) &&
         (uVar8 = FUN_01da51e0(*(undefined8 *)puVar5,&local_390,0), (uVar8 & 1) != 0)) {
        *(long *)(param_1 + 8) = param_1;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined1 **)(param_1 + 0x10) = &LAB_01da1c54;
        *(undefined8 *)(param_1 + 0x18) = 0;
        *(undefined1 *)(param_1 + 0x40) = 1;
        *(long *)(param_1 + 0x28) = param_1;
        *(code **)(param_1 + 0x30) = FUN_01da0d1c;
        return;
      }
    }
  }
  lVar9 = *(long *)(param_1 + 0x48);
  if (cVar4 == '\0' && *(char *)(param_1 + 0x60) != '\0') {
    if (lVar9 == 0) {
      return;
    }
    uVar11 = 0x3ffffffff;
  }
  else {
    if (lVar9 == 0) {
      return;
    }
    uVar11 = 1;
  }
  *(undefined8 *)(lVar9 + 8) = uVar11;
  *(undefined8 *)(lVar9 + 0x10) = 0;
  return;
}

