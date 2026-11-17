
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_031c80f0(uint *param_1,uint *param_2,byte *param_3,uint param_4)

{
  undefined1 *puVar1;
  long lVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined *puVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 *puVar10;
  uint *puVar11;
  long lVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  byte local_70 [4];
  uint local_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  
  puVar5 = PTR_DAT_04bb27c0;
  local_6c = *param_2;
  uVar15 = *param_1;
  if (local_6c == DAT_05717400 || uVar15 == 0) {
    return 0;
  }
  lVar12 = *(long *)PTR_DAT_04bb27c0;
  if (lVar12 == 0) {
    return 0;
  }
  plVar14 = *(long **)(*(long *)(*(long *)(lVar12 + 0x1c0) + 8) + ((ulong)(uVar15 >> 0x11) & 0x7ff8)
                      );
  if (((plVar14 == (long *)0x0) || ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar14 + 0x46) != uVar15)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar12 + 0x288) == 1 || *(int *)(lVar12 + 0x288) == -1) {
    plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar12 = *(long *)puVar5;
    iVar6 = (**(code **)(*plVar8 + 0x60))();
    if (iVar6 < 0x11) {
      uVar15 = 1;
    }
    else {
      if (4 < *(uint *)(lVar12 + 0x5e8)) goto LAB_031c81d8;
      uVar15 = 0x1aU >> (ulong)(*(uint *)(lVar12 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_031c81d8:
    uVar15 = 0;
  }
  if (plVar14 != (long *)0x0) {
    lVar12 = plVar14[0x2a];
    uVar4 = *(uint *)(plVar14 + 0x49);
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb37d0);
    if ((int)lVar12 != 1) {
      return 0;
    }
    if ((uVar7 & uVar15) == 0) {
      return 0;
    }
    if ((uVar4 >> 4 & 1) == 0) {
      return 0;
    }
    plVar14 = (long *)plVar14[0x77];
    if (((*PTR_DAT_04bc2280 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bc2280), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bc2278 = PTR_DAT_04bb6718 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2280);
    }
    if (plVar14 != (long *)0x0) {
      uVar9 = (**(code **)*plVar14)(plVar14,PTR_DAT_04bc2278);
      if ((uVar9 & 1) == 0) {
        return 0;
      }
      if (*(int *)((long)plVar14 + 0x77f4) == 0x3c) {
        return 0;
      }
      if (*(int *)((long)plVar14 + 0x77f4) == 0x3f) {
        return 0;
      }
      if ((int)plVar14[0xef6] == 0x3c) {
        return 0;
      }
      if ((int)plVar14[0xef6] == 0x3f) {
        return 0;
      }
      if ((*(int *)(plVar14[1] + 0x750) == 0) || (*(int *)(plVar14[1] + 0x750) == 1)) {
        if ((param_4 & 1) == 0) {
          (**(code **)(*plVar14 + 0x510))(plVar14,param_2);
          puVar11 = (uint *)(plVar14 + 0x15f0);
        }
        else {
          puVar11 = param_2;
        }
        FUN_01f72938(plVar14,puVar11);
        local_70[0] = *param_3;
        if (7 < local_70[0]) {
          local_70[0] = 0xff;
        }
        lVar12 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_70,1);
        if (lVar12 == 0) {
          return 1;
        }
        lVar13 = lVar12 + 0x194b0;
        if (*(long *)(lVar12 + 0x194b8) == 0) {
          lVar13 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
        }
        lVar12 = *(long *)(lVar13 + 0x1170);
        if (lVar12 == 0) {
          uVar9 = 0;
        }
        else {
          if (*(undefined8 **)(lVar12 + 0x10) == (undefined8 *)0x0) {
            uVar9 = 0;
          }
          else {
            uVar9 = (**(code **)**(undefined8 **)(lVar12 + 0x10))();
            lVar12 = *(long *)(lVar13 + 0x1170);
            uVar9 = uVar9 & 0xffffffff;
            if (lVar12 == 0) goto LAB_031c83c8;
          }
          plVar14 = *(long **)(lVar12 + 0x20);
          if (plVar14 != (long *)0x0) {
            local_68 = *(undefined8 *)(lVar13 + 0x1150);
            uStack_60 = *(undefined8 *)(lVar13 + 0x1158);
            local_58 = 0x208;
            (**(code **)(*plVar14 + 0x20))(plVar14,&local_68);
          }
        }
LAB_031c83c8:
        uVar15 = *param_2;
        local_68 = CONCAT44(local_68._4_4_,uVar15);
        if ((-1 < (int)uVar15) && ((int)uVar15 < 0x79)) {
          lVar12 = 0;
          iVar6 = 0;
          lVar2 = *(long *)(lVar13 + 0x1158) + *(long *)(lVar13 + 0x1150);
          do {
            if (uVar15 == *(byte *)(lVar2 + iVar6)) {
              puVar1 = (undefined1 *)(lVar2 + 0x108);
              puVar3 = puVar1 + lVar12;
              if (0xff < (uint)lVar12) {
                puVar3 = puVar1;
              }
              *puVar3 = 0;
              break;
            }
            iVar6 = iVar6 + 1;
            lVar12 = lVar12 + 1;
          } while (iVar6 != 0x100);
        }
        if ((((uVar9 & 1) != 0) && (*(long *)(lVar13 + 0x1170) != 0)) &&
           (puVar10 = *(undefined8 **)(*(long *)(lVar13 + 0x1170) + 0x18),
           puVar10 != (undefined8 *)0x0)) {
          (**(code **)*puVar10)();
        }
        return 1;
      }
    }
  }
  return 0;
}

