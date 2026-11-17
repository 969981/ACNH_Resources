
void FUN_02ed6f4c(long param_1,int *param_2)

{
  undefined *puVar1;
  int iVar2;
  undefined *puVar3;
  undefined *puVar4;
  char cVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 uVar11;
  long *plVar12;
  long lVar13;
  float fVar14;
  float fVar15;
  undefined8 local_68;
  undefined *local_60;
  undefined4 local_58;
  
  lVar13 = *(long *)(param_1 + 0x238);
  if (lVar13 != 0) {
    if ((short)param_2[1] == *(short *)PTR_DAT_04bb3170) {
      uVar7 = FUN_03782c70();
      puVar4 = PTR_DAT_04bc4f00;
      if (((uVar7 & 1) == 0) || (*param_2 != 0)) {
        fVar14 = (float)*param_2;
      }
      else {
        fVar14 = 14.0;
      }
      plVar12 = *(long **)(*(long *)(param_1 + 0x238) + 600);
      local_58 = 0x14;
      puVar1 = PTR_DAT_04bc4f00 + 0x10;
      local_60 = puVar1;
      (**(code **)(*plVar12 + 0x18))(plVar12,&local_60);
      (**(code **)(plVar12[3] + 0x158))(fVar14,plVar12[1]);
      puVar3 = PTR_DAT_04bb30a0;
      lVar13 = *(long *)(param_1 + 0x238);
      uVar7 = FUN_00a8c31c(*(undefined8 *)PTR_DAT_04bb30a0);
      iVar2 = *(int *)(*(long *)puVar3 + 0x65204);
      iVar6 = FUN_00a82f40(uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
      fVar14 = (float)(iVar6 + -1) / 365.0;
      if (iVar2 == 1) {
        fVar15 = 0.5;
        if (0.5 <= fVar14) {
          fVar15 = -0.5;
        }
        fVar14 = fVar14 + fVar15;
      }
      plVar12 = *(long **)(lVar13 + 0x260);
      local_58 = 0x14;
      local_60 = puVar1;
      (**(code **)(*plVar12 + 0x18))(plVar12,&local_60);
      (**(code **)(plVar12[3] + 0x158))(fVar14 * 100.0,plVar12[1]);
      lVar13 = *(long *)(param_1 + 0x238);
      uVar11 = *(undefined8 *)puVar3;
      local_68 = FUN_00a8c31c(uVar11);
      if ((char)(local_68 >> 0x20) < '\x05') {
        lVar8 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_68);
        local_60 = (undefined *)(lVar8 + -0x15180);
        local_68 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_60);
      }
      uVar9 = local_68 >> 0x10;
      uVar7 = local_68 >> 0x30;
      uVar10 = local_68 >> 0x18;
      local_68._0_6_ = CONCAT24(5,(undefined4)local_68);
      local_68 = CONCAT26((short)uVar7,(undefined6)local_68) & 0xff00ffffffffffff;
      cVar5 = FUN_00a8ae20(uVar11,uVar9,uVar10,4);
      plVar12 = *(long **)(lVar13 + 0x268);
      if (cVar5 == '\x02') {
        local_60 = puVar4 + 0x10;
        local_58 = 0x14;
        (**(code **)(*plVar12 + 0x18))(plVar12,&local_60);
        uVar11 = 0x3f800000;
      }
      else {
        local_60 = puVar4 + 0x10;
        local_58 = 0x14;
        (**(code **)(*plVar12 + 0x18))(plVar12,&local_60);
        uVar11 = 0;
      }
      (**(code **)(plVar12[3] + 0x158))(uVar11,plVar12[1]);
    }
    else {
      uVar7 = FUN_01596728(lVar13 + 0x280);
      if (((uVar7 & 1) == 0) && (lVar8 = *(long *)(DAT_05231900 + 0x100), lVar8 != 0)) {
        plVar12 = *(long **)(lVar13 + 600);
        local_60 = PTR_DAT_04bc4f00 + 0x10;
        local_58 = 0x14;
        (**(code **)(*plVar12 + 0x18))(plVar12,&local_60);
        (**(code **)(plVar12[3] + 0x158))(0x41400000,plVar12[1]);
        FUN_015a2df4(lVar8,lVar13 + 0x280,param_2 + 1,&DAT_04183fa8,0,0);
        *(undefined4 *)(lVar13 + 0x278) = 0;
      }
    }
  }
  return;
}

