
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_03138570(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  long *plVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  
  if (((DAT_056f7240 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_056f7240), iVar4 != 0)) {
    DAT_056f71e0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f71e8 = &DAT_040dee79;
    DAT_056f71f8 = &DAT_0407ebb1;
    DAT_056f7218 = &DAT_0407ebb1;
    DAT_056f7208 = &DAT_04088cfe;
    DAT_056f7228 = &DAT_0407906d;
    DAT_056f7238 = &DAT_0407ebb1;
    DAT_056f71f0 = DAT_056f71e0;
    DAT_056f7200 = DAT_056f71e0;
    DAT_056f7210 = DAT_056f71e0;
    DAT_056f7220 = DAT_056f71e0;
    DAT_056f7230 = DAT_056f71e0;
    __cxa_guard_release(&DAT_056f7240);
  }
  if (((DAT_056f7258 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_056f7258), iVar4 != 0)) {
    _DAT_056f7248 = 0x300000002;
    DAT_056f7250 = &DAT_056f71e0;
    __cxa_guard_release(&DAT_056f7258);
  }
  uVar2 = DAT_056f724c;
  uVar11 = (ulong)DAT_056f724c;
  if (0 < (int)DAT_056f724c) {
    uVar5 = FUN_03c68d44(param_2,DAT_056f7250,DAT_056f7250 + (ulong)(1 < DAT_056f7248) * 2);
    *(undefined8 *)(param_1 + 0x288) = uVar5;
    if (uVar2 != 1) {
      uVar7 = (ulong)(int)DAT_056f7248;
      uVar8 = uVar7;
      if (uVar7 == 0 || DAT_056f724c < 2) {
        uVar8 = 0;
      }
      lVar10 = 0;
      if (1 < uVar7 && DAT_056f724c >= 2) {
        lVar10 = uVar7 + 1;
      }
      uVar5 = FUN_03c68d44(param_2,DAT_056f7250 + uVar8 * 2,DAT_056f7250 + lVar10 * 2);
      *(undefined8 *)(param_1 + 0x290) = uVar5;
      if (uVar2 != 2) {
        uVar8 = (ulong)(int)DAT_056f7248;
        lVar10 = uVar8 << 1;
        if (uVar8 == 0 || DAT_056f724c < 3) {
          lVar10 = 0;
        }
        lVar9 = (long)(int)((uint)(uVar8 << 1) | 1);
        if (uVar8 < 2 || DAT_056f724c < 3) {
          lVar9 = 0;
        }
        uVar5 = FUN_03c68d44(param_2,DAT_056f7250 + lVar10 * 2,DAT_056f7250 + lVar9 * 2);
        *(undefined8 *)(param_1 + 0x298) = uVar5;
        if (uVar2 != 3) {
          uVar8 = 3;
          do {
            iVar4 = DAT_056f7248 * (int)uVar8;
            bVar3 = _DAT_056f7248 >> 0x20 <= uVar8;
            lVar10 = (long)iVar4;
            if (DAT_056f7248 == 0 || bVar3) {
              lVar10 = 0;
            }
            lVar9 = (long)(iVar4 + 1);
            if (DAT_056f7248 < 2 || bVar3) {
              lVar9 = 0;
            }
            uVar5 = FUN_03c68d44(param_2,DAT_056f7250 + lVar10 * 2,DAT_056f7250 + lVar9 * 2);
            uVar8 = uVar8 + 1;
            *(undefined8 *)(param_1 + 0x288) = uVar5;
          } while (uVar11 != uVar8);
        }
      }
    }
  }
  if (((DAT_056f72f0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_056f72f0), iVar4 != 0)) {
    DAT_056f7260 = PTR_DAT_04bb2020 + 0x10;
    DAT_056f7268 = "@T_Hold_00";
    DAT_056f7288 = "@T_IconSingle_00";
    DAT_056f7278 = "@T_FSingle_00";
    DAT_056f72b8 = "@T_GDouble_00";
    DAT_056f7298 = "@T_IconDouble_00";
    DAT_056f72a8 = "@T_FDouble_00";
    DAT_056f72c8 = "@T_GSingle_00";
    DAT_056f72d8 = "@T_SSingle_00";
    DAT_056f72e8 = "@T_SDouble_00";
    DAT_056f7270 = DAT_056f7260;
    DAT_056f7280 = DAT_056f7260;
    DAT_056f7290 = DAT_056f7260;
    DAT_056f72a0 = DAT_056f7260;
    DAT_056f72b0 = DAT_056f7260;
    DAT_056f72c0 = DAT_056f7260;
    DAT_056f72d0 = DAT_056f7260;
    DAT_056f72e0 = DAT_056f7260;
    __cxa_guard_release(&DAT_056f72f0);
  }
  uVar5 = FUN_03462740(param_1,param_2,&DAT_056f7260);
  *(undefined8 *)(param_1 + 0x2a0) = uVar5;
  uVar5 = FUN_03462740(param_1,param_2,&DAT_056f7270);
  *(undefined8 *)(param_1 + 0x2a8) = uVar5;
  uVar5 = FUN_03462740(param_1,param_2,&DAT_056f7280);
  *(undefined8 *)(param_1 + 0x2b0) = uVar5;
  uVar5 = FUN_03462740(param_1,param_2,&DAT_056f7290);
  *(undefined8 *)(param_1 + 0x2b8) = uVar5;
  uVar5 = FUN_03462740(param_1,param_2,&DAT_056f72a0);
  *(undefined8 *)(param_1 + 0x2c0) = uVar5;
  uVar5 = FUN_03462740(param_1,param_2,&DAT_056f72b0);
  *(undefined8 *)(param_1 + 0x2c8) = uVar5;
  uVar5 = FUN_03462740(param_1,param_2,&DAT_056f72c0);
  *(undefined8 *)(param_1 + 0x2d0) = uVar5;
  uVar5 = FUN_03462740(param_1,param_2,&DAT_056f72d0);
  *(undefined8 *)(param_1 + 0x2d8) = uVar5;
  uVar5 = FUN_03462740(param_1,param_2,&DAT_056f72e0);
  *(undefined8 *)(param_1 + 0x2e0) = uVar5;
  if (*(long *)(param_1 + 0x250) == 0) {
    lVar10 = *(long *)PTR_DAT_04bb2698;
    if (lVar10 == 0) {
      plVar6 = malloc(0x20);
    }
    else {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      puVar1 = (undefined8 *)(lVar10 + 8);
      if (lVar9 != 0) {
        puVar1 = (undefined8 *)(lVar9 + 0xa8);
      }
      plVar6 = (long *)(**(code **)(*(long *)*puVar1 + 0x30))((long *)*puVar1,0x20,8);
    }
    plVar6[2] = (long)(plVar6 + 1);
    plVar6[3] = 0x20800000000;
    *plVar6 = (long)(PTR_DAT_04bc9cb0 + 0x10);
    plVar6[1] = (long)(plVar6 + 1);
    *(long **)(param_1 + 0x250) = plVar6;
  }
  FUN_030bc030(param_1,param_2,param_3);
  return;
}

