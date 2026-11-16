
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0289b680(undefined4 *param_1,undefined1 param_2 [16],undefined4 param_3,undefined4 param_4,
                 long param_5,undefined4 *param_6,uint param_7)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  int *piVar7;
  long lVar8;
  undefined4 *puVar9;
  long lVar10;
  undefined4 uVar11;
  long local_670 [192];
  undefined8 local_70;
  
  if (param_6 != (undefined4 *)0x0) {
    local_70 = local_70 & 0xffffffff00000000;
    FUN_0291e130(local_670,&local_70,0);
    if (param_7 < (uint)local_70) {
      piVar7 = (int *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*(short *)piVar7 == 0) {
        local_70 = *(undefined8 *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)(local_70 >> 0x20) < '\x05') {
          local_670[0] = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          local_670[0] = local_670[0] + -0x15180;
          local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)local_670);
        }
        piVar7 = (int *)&local_70;
        uVar5 = local_70 >> 0x30;
        local_70._0_6_ = CONCAT24(5,(uint)local_70);
        local_70 = CONCAT26((short)uVar5,(undefined6)local_70) & 0xff00ffffffffffff;
      }
      iVar1 = *piVar7;
      nn::time::GetDayOfWeek((int)(short)iVar1,(iVar1 << 8) >> 0x18,iVar1 >> 0x18);
      puVar2 = PTR_DAT_04bb43c0;
      uVar4 = 0;
      lVar10 = 4;
      lVar8 = *(long *)PTR_DAT_04bb43c0;
      do {
        puVar9 = (undefined4 *)(param_5 + lVar10);
        uVar3 = FUN_0277d6c4(puVar9);
        lVar6 = *(long *)puVar2;
        if (lVar6 == 0) {
          lVar6 = 0;
        }
        else {
          lVar8 = *(long *)(lVar8 + 0x57e58);
          uVar3 = (uVar3 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
          if ((uVar3 < *(uint *)(lVar8 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar3 * 8) != 0)) {
            uVar5 = FUN_0289aff0(param_5,puVar9,uVar4);
            lVar6 = *(long *)puVar2;
            if (((uVar5 & 1) != 0) && (uVar4 = uVar4 + 1, param_7 < uVar4)) goto LAB_0289b824;
          }
        }
        lVar10 = lVar10 + 8;
        lVar8 = lVar6;
      } while (lVar10 != 0x404);
      puVar9 = (undefined4 *)&DAT_05586008;
LAB_0289b824:
      uVar11 = puVar9[1];
      *param_1 = *puVar9;
      param_1[1] = uVar11;
      uVar4 = FUN_0277d6c4(param_1);
      if (*(long *)puVar2 == 0) {
        return;
      }
      lVar10 = *(long *)(lVar6 + 0x57e58);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
      if (*(uint *)(lVar10 + 0x1d8) <= uVar4) {
        return;
      }
      if (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
        return;
      }
      uVar11 = FUN_0289b890(param_5,param_1);
      *param_6 = uVar11;
      param_6[1] = param_3;
      param_6[2] = param_4;
      return;
    }
  }
  uVar11 = DAT_0558600c;
  *param_1 = _DAT_05586008;
  param_1[1] = uVar11;
  return;
}

