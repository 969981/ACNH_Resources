
long FUN_00953b80(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  int iVar9;
  ulong uVar10;
  undefined8 *puVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  uint uVar15;
  undefined *local_78;
  long lStack_70;
  undefined8 local_68;
  
  puVar8 = PTR_DAT_04bb4be8;
  puVar7 = PTR_DAT_04bb4be0;
  puVar6 = PTR_DAT_04bb2868;
  puVar5 = PTR_DAT_04bb2860;
  uVar13 = *(uint *)(param_1 + 0xd78);
  if ((int)uVar13 < 1) {
    return 0;
  }
  uVar15 = 0;
  puVar1 = PTR_DAT_04bb4448 + 0x10;
  puVar2 = PTR_DAT_04bb2870 + 0x10;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  do {
    uVar4 = uVar15;
    if (uVar13 <= uVar15) {
      uVar4 = 0;
    }
    if ((*(byte *)(*(long *)(param_1 + 0xd80) + (ulong)uVar4 * 0x50 + 0x18) >> 1 & 1) != 0) {
      uVar10 = FUN_03f2d924(*(long *)(param_1 + 0xd80) + (ulong)uVar4 * 0x50 + 0x10);
      uVar13 = *(uint *)(param_1 + 0xd78);
      if ((uVar10 & 1) != 0) {
        uVar4 = uVar15;
        if (uVar13 <= uVar15) {
          uVar4 = 0;
        }
        lVar12 = *(long *)(param_1 + 0xd80) + (ulong)uVar4 * 0x50 + 0x10;
        FUN_03f2d924(lVar12);
        puVar11 = (undefined8 *)FUN_03f2d7f0(lVar12);
        if (((*puVar8 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar8), iVar9 != 0)) {
          *(undefined **)puVar7 = puVar1;
          __cxa_guard_release(puVar8);
        }
        (**(code **)*puVar11)(puVar11,puVar7);
        local_68 = 0;
        plVar14 = *(long **)puVar11[6];
        (**(code **)(*param_2 + 0x18))(param_2);
        lStack_70 = param_2[1];
        local_78 = puVar3;
        if (((*puVar6 & 1) == 0) && (iVar9 = __cxa_guard_acquire(puVar6), iVar9 != 0)) {
          *(undefined **)puVar5 = puVar2;
          __cxa_guard_release(puVar6);
        }
        uVar10 = (**(code **)*plVar14)(plVar14,puVar5);
        if ((uVar10 & 1) == 0) {
          plVar14 = (long *)0x0;
        }
        lVar12 = (**(code **)(*plVar14 + 0x30))(plVar14,&local_78,&local_68);
        if (lVar12 != 0) {
          return lVar12;
        }
        uVar13 = *(uint *)(param_1 + 0xd78);
      }
    }
    uVar15 = uVar15 + 1;
    if ((int)uVar13 <= (int)uVar15) {
      return 0;
    }
  } while( true );
}

