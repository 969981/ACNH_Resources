
uint FUN_020b5220(ulong param_1,int *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  long *plVar11;
  undefined8 *puVar12;
  long lVar13;
  
  puVar5 = PTR_DAT_04bb37d8;
  puVar4 = PTR_DAT_04bb37d0;
  puVar3 = PTR_DAT_04bb3350;
  puVar2 = PTR_DAT_04bb27c0;
  if (*(int *)(param_1 + 0xb88) == 0) {
    return 0;
  }
  lVar13 = (long)*(int *)(param_1 + 0xb88) << 3;
  puVar12 = *(undefined8 **)(param_1 + 0xb90);
  puVar1 = PTR_DAT_04bb3750 + 0x10;
  do {
    uVar7 = *(uint *)*puVar12;
    if ((uVar7 != 0) && (lVar10 = *(long *)puVar2, lVar10 != 0)) {
      plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                          ((ulong)(uVar7 >> 0x11) & 0x7ff8));
      if ((plVar11 == (long *)0x0) ||
         (((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0 || (*(uint *)(plVar11 + 0x46) != uVar7)))) {
        plVar11 = (long *)0x0;
      }
      if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
        plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar3 + 0x68));
        lVar10 = *(long *)puVar2;
        param_1 = (**(code **)(*plVar8 + 0x60))();
        if ((int)param_1 < 0x11) {
          uVar7 = 0;
        }
        else {
          uVar7 = *(uint *)(lVar10 + 0x5e8);
          if (4 < uVar7) goto LAB_020b5338;
          uVar7 = 5U >> (ulong)(uVar7 & 0x1f) & 1;
        }
      }
      else {
LAB_020b5338:
        uVar7 = 1;
      }
      if (plVar11 != (long *)0x0) {
        lVar10 = plVar11[0x2a];
        if (((*puVar5 & 1) == 0) && (iVar6 = __cxa_guard_acquire(puVar5), iVar6 != 0)) {
          *(undefined **)puVar4 = puVar1;
          __cxa_guard_release(puVar5);
        }
        param_1 = (**(code **)(*plVar11 + 0x20))(plVar11,puVar4);
        if (((((param_1 & 1) != 0) && ((int)lVar10 == 1)) && (uVar7 == 0)) &&
           ((int)plVar11[0xd3] == *param_2)) {
          uVar7 = (**(code **)*param_3)(param_3,plVar11);
          uVar9 = 1;
          goto LAB_020b53c0;
        }
      }
    }
    uVar7 = (uint)param_1;
    puVar12 = puVar12 + 1;
    lVar13 = lVar13 + -8;
    if (lVar13 == 0) {
      uVar9 = 0;
LAB_020b53c0:
      return uVar9 & uVar7;
    }
  } while( true );
}

