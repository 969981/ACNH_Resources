
long FUN_00958c50(long param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  int iVar8;
  ulong uVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  undefined *local_78;
  long lStack_70;
  undefined8 local_68;
  
  puVar7 = PTR_DAT_04bb4be8;
  puVar6 = PTR_DAT_04bb4be0;
  puVar5 = PTR_DAT_04bb2868;
  puVar4 = PTR_DAT_04bb2860;
  lVar13 = 0;
  puVar1 = PTR_DAT_04bb4448 + 0x10;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  puVar3 = PTR_DAT_04bb2870 + 0x10;
  do {
    if ((*(byte *)(param_1 + lVar13 + 0x560) >> 1 & 1) != 0) {
      lVar11 = param_1 + lVar13 + 0x558;
      uVar9 = FUN_03f2d924(lVar11);
      if ((uVar9 & 1) != 0) {
        FUN_03f2d924(lVar11);
        puVar10 = (undefined8 *)FUN_03f2d7f0(lVar11);
        if (((*puVar7 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar7), iVar8 != 0)) {
          *(undefined **)puVar6 = puVar1;
          __cxa_guard_release(puVar7);
        }
        (**(code **)*puVar10)(puVar10,puVar6);
        local_68 = 0;
        plVar12 = *(long **)puVar10[6];
        (**(code **)(*param_2 + 0x18))(param_2);
        lStack_70 = param_2[1];
        local_78 = puVar2;
        if (((*puVar5 & 1) == 0) && (iVar8 = __cxa_guard_acquire(puVar5), iVar8 != 0)) {
          *(undefined **)puVar4 = puVar3;
          __cxa_guard_release(puVar5);
        }
        uVar9 = (**(code **)*plVar12)(plVar12,puVar4);
        if ((uVar9 & 1) == 0) {
          plVar12 = (long *)0x0;
        }
        lVar11 = (**(code **)(*plVar12 + 0x30))(plVar12,&local_78,&local_68);
        if (lVar11 != 0) {
          return lVar11;
        }
      }
    }
    lVar13 = lVar13 + 0x50;
    if (lVar13 == 0x820) {
      return 0;
    }
  } while( true );
}

