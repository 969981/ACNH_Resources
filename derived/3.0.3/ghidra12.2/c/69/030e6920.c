
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_030e6920(long param_1,undefined8 param_2,undefined8 param_3)

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
  
  if (((DAT_056ee840 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_056ee840), iVar4 != 0)) {
    DAT_056ee7e0 = PTR_DAT_04bb2020 + 0x10;
    DAT_056ee7e8 = "TextOut";
    DAT_056ee7f8 = &DAT_0407ebb1;
    DAT_056ee818 = &DAT_0407ebb1;
    DAT_056ee808 = "TextIn";
    DAT_056ee828 = &DAT_040fe5ab;
    DAT_056ee838 = &DAT_0407ebb1;
    DAT_056ee7f0 = DAT_056ee7e0;
    DAT_056ee800 = DAT_056ee7e0;
    DAT_056ee810 = DAT_056ee7e0;
    DAT_056ee820 = DAT_056ee7e0;
    DAT_056ee830 = DAT_056ee7e0;
    __cxa_guard_release(&DAT_056ee840);
  }
  if (((DAT_056ee858 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_056ee858), iVar4 != 0)) {
    _DAT_056ee848 = 0x300000002;
    DAT_056ee850 = &DAT_056ee7e0;
    __cxa_guard_release(&DAT_056ee858);
  }
  uVar2 = DAT_056ee84c;
  uVar11 = (ulong)DAT_056ee84c;
  if (0 < (int)DAT_056ee84c) {
    uVar5 = FUN_03c68d44(param_2,DAT_056ee850,DAT_056ee850 + (ulong)(1 < DAT_056ee848) * 2);
    *(undefined8 *)(param_1 + 0x288) = uVar5;
    if (uVar2 != 1) {
      uVar7 = (ulong)(int)DAT_056ee848;
      uVar8 = uVar7;
      if (uVar7 == 0 || DAT_056ee84c < 2) {
        uVar8 = 0;
      }
      lVar10 = 0;
      if (1 < uVar7 && DAT_056ee84c >= 2) {
        lVar10 = uVar7 + 1;
      }
      uVar5 = FUN_03c68d44(param_2,DAT_056ee850 + uVar8 * 2,DAT_056ee850 + lVar10 * 2);
      *(undefined8 *)(param_1 + 0x290) = uVar5;
      if (uVar2 != 2) {
        uVar8 = (ulong)(int)DAT_056ee848;
        lVar10 = uVar8 << 1;
        if (uVar8 == 0 || DAT_056ee84c < 3) {
          lVar10 = 0;
        }
        lVar9 = (long)(int)((uint)(uVar8 << 1) | 1);
        if (uVar8 < 2 || DAT_056ee84c < 3) {
          lVar9 = 0;
        }
        uVar5 = FUN_03c68d44(param_2,DAT_056ee850 + lVar10 * 2,DAT_056ee850 + lVar9 * 2);
        *(undefined8 *)(param_1 + 0x298) = uVar5;
        if (uVar2 != 3) {
          uVar8 = 3;
          do {
            iVar4 = DAT_056ee848 * (int)uVar8;
            bVar3 = _DAT_056ee848 >> 0x20 <= uVar8;
            lVar10 = (long)iVar4;
            if (DAT_056ee848 == 0 || bVar3) {
              lVar10 = 0;
            }
            lVar9 = (long)(iVar4 + 1);
            if (DAT_056ee848 < 2 || bVar3) {
              lVar9 = 0;
            }
            uVar5 = FUN_03c68d44(param_2,DAT_056ee850 + lVar10 * 2,DAT_056ee850 + lVar9 * 2);
            uVar8 = uVar8 + 1;
            *(undefined8 *)(param_1 + 0x288) = uVar5;
          } while (uVar11 != uVar8);
        }
      }
    }
  }
  if (((DAT_056ee870 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_056ee870), iVar4 != 0)) {
    DAT_056ee860 = PTR_DAT_04bb2020 + 0x10;
    DAT_056ee868 = "@T_Tips_00";
    __cxa_guard_release(&DAT_056ee870);
  }
  uVar5 = FUN_03462740(param_1,param_2,&DAT_056ee860);
  *(undefined8 *)(param_1 + 0x2a0) = uVar5;
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

