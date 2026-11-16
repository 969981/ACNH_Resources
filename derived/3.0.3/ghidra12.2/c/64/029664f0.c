
undefined4 FUN_029664f0(long param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  uint uVar12;
  long *plVar13;
  ulong uVar14;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined4 local_c0;
  undefined *local_b8;
  undefined1 *local_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  puVar6 = PTR_DAT_04bb4058;
  puVar5 = PTR_DAT_04bb3350;
  puVar4 = PTR_DAT_04bb27c0;
  uVar14 = 0;
  uVar2 = *(undefined4 *)PTR_DAT_04bb3238;
  puVar1 = PTR_DAT_04bb2e50 + 0x10;
  do {
    uVar11 = *(ulong *)(param_1 + 0xa68 + (-(uVar14 >> 0x1f) & 0xfffffff800000000 | uVar14 << 3));
    iVar7 = (int)uVar11;
    if ((iVar7 != 0) && (lVar10 = *(long *)puVar4, lVar10 != 0)) {
      if ((iVar7 == 0) ||
         (((plVar13 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                                (uVar11 >> 0x14 & 0xfff) * 8), plVar13 == (long *)0x0 ||
           ((*(uint *)(plVar13 + 0x49) >> 1 & 1) != 0)) || ((int)plVar13[0x46] != iVar7)))) {
        plVar13 = (long *)0x0;
      }
      if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
        plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar5 + 0x68));
        lVar10 = *(long *)puVar4;
        iVar7 = (**(code **)(*plVar9 + 0x60))();
        if (iVar7 < 0x11) {
          uVar12 = 1;
        }
        else {
          uVar12 = *(uint *)(lVar10 + 0x5e8);
          if (4 < uVar12) goto LAB_02966608;
          uVar12 = 0x1aU >> (ulong)(uVar12 & 0x1f) & 1;
        }
      }
      else {
LAB_02966608:
        uVar12 = 0;
      }
      if (plVar13 != (long *)0x0) {
        lVar10 = plVar13[0x2a];
        uVar3 = *(uint *)(plVar13 + 0x49);
        if (((*PTR_DAT_04bb4060 & 1) == 0) &&
           (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb4060), iVar7 != 0)) {
          *(undefined **)puVar6 = puVar1;
          __cxa_guard_release(PTR_DAT_04bb4060);
        }
        uVar8 = (**(code **)(*plVar13 + 0x20))(plVar13,puVar6);
        if ((((int)lVar10 == 1) && ((uVar8 & uVar12) != 0)) && ((uVar3 >> 4 & 1) != 0)) {
          local_d8 = *(undefined8 *)((long)plVar13 + 0x274);
          uVar11 = FUN_0277d7b4(&local_d8,param_2);
          if ((uVar11 & 1) != 0) {
            if (param_3 != 0) {
              local_c8 = 0xffffffffffffffff;
              local_a8 = 0x40;
              local_b0 = local_a4;
              local_d8 = 0;
              uStack_d0 = 0;
              local_c0 = 0;
              local_b8 = PTR_DAT_04bb2bc0 + 0x10;
              local_65 = 0;
              local_a4[0] = 0;
              FUN_02938f10(param_1 + 0xd90,&local_d8,*(undefined4 *)((long)plVar13 + 0x33c));
              (**(code **)(local_b8 + 0x18))(&local_b8);
              FUN_038d1270(param_3,local_b0);
            }
            return (int)plVar13[0x46];
          }
        }
      }
    }
    uVar12 = (int)uVar14 + 1;
    uVar14 = (ulong)uVar12;
    if (uVar12 == 100) {
      return uVar2;
    }
  } while( true );
}

