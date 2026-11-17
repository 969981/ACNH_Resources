
void FUN_02d53758(long param_1,int *param_2)

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
  long *plVar11;
  undefined8 uVar12;
  long *plVar13;
  long lVar14;
  float fVar15;
  float fVar16;
  undefined8 local_68;
  undefined *local_60;
  undefined4 local_58;
  
  puVar4 = PTR_DAT_04bc4f00;
  plVar13 = (long *)(param_1 + 0x1c188);
  lVar14 = *plVar13;
  if (lVar14 != 0) {
    if ((short)param_2[1] == *(short *)PTR_DAT_04bb3170) {
      iVar2 = *param_2;
      plVar11 = *(long **)(lVar14 + 600);
      local_58 = 0x14;
      puVar1 = PTR_DAT_04bc4f00 + 0x10;
      local_60 = puVar1;
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_60);
      (**(code **)(plVar11[3] + 0x158))((float)iVar2,plVar11[1]);
      puVar3 = PTR_DAT_04bb30a0;
      lVar14 = *plVar13;
      uVar7 = FUN_00a8c31c(*(undefined8 *)PTR_DAT_04bb30a0);
      iVar2 = *(int *)(*(long *)puVar3 + 0x65204);
      iVar6 = FUN_00a82f40(uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
      fVar15 = (float)(iVar6 + -1) / 365.0;
      if (iVar2 == 1) {
        fVar16 = 0.5;
        if (0.5 <= fVar15) {
          fVar16 = -0.5;
        }
        fVar15 = fVar15 + fVar16;
      }
      plVar11 = *(long **)(lVar14 + 0x260);
      local_58 = 0x14;
      local_60 = puVar1;
      (**(code **)(*plVar11 + 0x18))(plVar11,&local_60);
      (**(code **)(plVar11[3] + 0x158))(fVar15 * 100.0,plVar11[1]);
      uVar12 = *(undefined8 *)puVar3;
      lVar14 = *plVar13;
      local_68 = FUN_00a8c31c(uVar12);
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
      cVar5 = FUN_00a8ae20(uVar12,uVar9,uVar10,4);
      plVar13 = *(long **)(lVar14 + 0x268);
      if (cVar5 == '\x02') {
        local_60 = puVar4 + 0x10;
        local_58 = 0x14;
        (**(code **)(*plVar13 + 0x18))(plVar13,&local_60);
        uVar12 = 0x3f800000;
      }
      else {
        local_60 = puVar4 + 0x10;
        local_58 = 0x14;
        (**(code **)(*plVar13 + 0x18))(plVar13,&local_60);
        uVar12 = 0;
      }
      (**(code **)(plVar13[3] + 0x158))(uVar12,plVar13[1]);
    }
    else {
      uVar7 = FUN_01596728(lVar14 + 0x280);
      if (((uVar7 & 1) == 0) && (lVar8 = *(long *)(DAT_05231900 + 0x100), lVar8 != 0)) {
        plVar13 = *(long **)(lVar14 + 600);
        local_60 = PTR_DAT_04bc4f00 + 0x10;
        local_58 = 0x14;
        (**(code **)(*plVar13 + 0x18))(plVar13,&local_60);
        (**(code **)(plVar13[3] + 0x158))(0x41400000,plVar13[1]);
        FUN_015a2df4(lVar8,lVar14 + 0x280,param_2 + 1,&DAT_04183fa8,0,0);
        *(undefined4 *)(lVar14 + 0x278) = 0;
      }
    }
  }
  return;
}

