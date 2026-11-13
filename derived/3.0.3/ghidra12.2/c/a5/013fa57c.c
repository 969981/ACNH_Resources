
uint FUN_013fa57c(long param_1,undefined4 *param_2,undefined8 param_3,uint param_4)

{
  undefined *puVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  ulong uVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [16];
  int local_44;
  int local_24;
  
  uVar3 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
  if (1 < uVar3) {
    uVar3 = 0;
  }
  puVar7 = param_2;
  if ((param_4 & 1) == 0) {
    if (DAT_04c487d4 == -1) {
LAB_013fa640:
      lVar5 = *(long *)PTR_DAT_04bb32e8 + 0x4060;
    }
    else {
      local_24 = 0x20;
      puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8;
      if (0xff < (uint)(int)DAT_04c487d4) {
        puVar1 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar1 + 4) & 1) == 0) goto LAB_013fa640;
      auVar9 = FUN_00a8c18c();
      lVar5 = auVar9._0_8_;
      puVar7 = auVar9._8_8_;
    }
    local_24 = *(byte *)(lVar5 + 2) - 1;
    bVar2 = *(byte *)(lVar5 + 4);
    iVar4 = 1;
    if (6 < bVar2 - 9) {
      iVar4 = (uint)(4 < bVar2 - 0x10) << 1;
    }
    local_44 = 0;
    if (4 < bVar2 - 4) {
      local_44 = iVar4;
    }
  }
  else {
    local_24 = *(int *)(DAT_0534d2f0 + 0x210);
    local_44 = *(int *)(DAT_0534d2f0 + 0x214);
  }
  if (uVar3 == 1) {
    puVar8 = (undefined8 *)0x0;
    if ((*(long *)(param_1 + 0x20) != 0) && (3 < *(uint *)(param_1 + 0x18))) {
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x18);
      if (((DAT_051b72f0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&DAT_051b72f0,puVar7,0), iVar4 != 0)) {
        DAT_051b72e8 = &PTR_LAB_04997628;
        __cxa_guard_release(&DAT_051b72f0);
      }
      if (puVar8 != (undefined8 *)0x0) goto LAB_013fa6d4;
LAB_013fa728:
      puVar8 = (undefined8 *)0x0;
    }
  }
  else {
    if (uVar3 != 0) {
      uVar3 = 0;
      *param_2 = 0xfffe;
      goto LAB_013fa758;
    }
    puVar8 = (undefined8 *)0x0;
    if ((*(long *)(param_1 + 0x20) != 0) && (2 < *(uint *)(param_1 + 0x18))) {
      puVar8 = *(undefined8 **)(*(long *)(param_1 + 0x20) + 0x10);
      if (((DAT_051b72f0 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(&DAT_051b72f0,puVar7,0), iVar4 != 0)) {
        DAT_051b72e8 = &PTR_LAB_04997628;
        __cxa_guard_release(&DAT_051b72f0);
      }
      if (puVar8 == (undefined8 *)0x0) goto LAB_013fa728;
LAB_013fa6d4:
      uVar6 = (**(code **)*puVar8)(puVar8,&DAT_051b72e8);
      if ((uVar6 & 1) == 0) {
        puVar8 = (undefined8 *)0x0;
      }
    }
  }
  uVar3 = FUN_013fa7e0(param_1,param_2,puVar8,&local_24,&local_44,param_3,param_4 & 1);
LAB_013fa758:
  return uVar3 & 1;
}

