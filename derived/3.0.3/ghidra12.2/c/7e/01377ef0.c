
void FUN_01377ef0(undefined8 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  ulong uVar6;
  undefined8 uVar7;
  long lVar8;
  undefined2 *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined **local_98;
  undefined **local_90;
  undefined *local_88;
  int local_80;
  int local_7c;
  undefined *local_78;
  undefined *puStack_70;
  undefined8 local_68;
  undefined *local_60;
  undefined8 local_58;
  
  puVar5 = PTR_DAT_04bb2010;
  local_68 = 0;
  local_78 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_70 = PTR_DAT_04bb2010 + 0x10;
  iVar1 = param_2[1];
  local_58 = 0;
  local_60 = puStack_70;
  if (iVar1 < 0xa8) {
    iVar12 = DAT_051a36d0 + (iVar1 % 0xe) * 0x10;
    local_7c = DAT_051a36d4 + (iVar1 / 0xe) * 0x10;
    iVar1 = iVar12 + 0xf;
    iVar10 = local_7c + 0xf;
    local_68 = CONCAT44(local_7c,iVar12);
LAB_01378160:
    local_58 = CONCAT44(iVar10,iVar1);
  }
  else {
    uVar6 = FUN_013871c0(&local_98,0,0);
    if ((uVar6 & 1) != 0) {
      uVar7 = FUN_01260194(0xe7);
      lVar8 = FUN_02aea188(uVar7,(ulong)local_98 & 0xffff);
      if (lVar8 != 0) {
        plVar13 = (long *)(lVar8 + 0x68);
        (**(code **)(*plVar13 + 0xf0))(plVar13);
        lVar8 = (**(code **)(*plVar13 + 0xf0))(plVar13);
        puVar9 = &DAT_051565e8;
        if ((((DAT_051565e8 == (short)local_98) ||
             (puVar9 = &DAT_05156608, DAT_05156608 == (short)local_98)) ||
            (puVar9 = &DAT_05156628, DAT_05156628 == (short)local_98)) ||
           (puVar9 = &DAT_05156648, DAT_05156648 == (short)local_98)) {
          fVar14 = (float)*(int *)(lVar8 + 4) * 0.5;
          uVar11 = 0;
          if (fVar14 != (float)(int)fVar14) {
            uVar11 = (uint)(fVar14 < 0.0);
          }
          fVar16 = (float)((uint)(*(char *)(puVar9 + 0xc) == '\0') << 7) * 10.0 + 2.5;
          fVar17 = (float)(int)((int)fVar14 - uVar11) * 10.0 + 2.5;
          fVar15 = (float)((uint)(*(char *)(puVar9 + 0xc) == '\0') << 7 | 0xf) * 10.0 + 10.0 + -2.5;
          fVar14 = (float)(int)(((int)fVar14 - uVar11) + 0xf) * 10.0 + 10.0 + -2.5;
          iVar1 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
          iVar10 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
          iVar3 = (int)((float)(int)fVar15 / 5.0) - (uint)(fVar15 < 0.0);
          iVar4 = (int)((float)(int)fVar14 / 5.0) - (uint)(fVar14 < 0.0);
          iVar12 = iVar1;
          if (iVar3 <= iVar1) {
            iVar12 = iVar3;
          }
          if (iVar1 <= iVar3) {
            iVar1 = iVar3;
          }
          local_7c = iVar10;
          if (iVar4 <= iVar10) {
            local_7c = iVar4;
          }
          if (iVar10 <= iVar4) {
            iVar10 = iVar4;
          }
          local_68 = CONCAT44(local_7c,iVar12);
          goto LAB_01378160;
        }
      }
    }
    iVar10 = 0;
    local_7c = 0;
    iVar12 = 0;
  }
  uVar2 = *param_2;
  local_88 = puVar5 + 0x10;
  if (iVar10 + 1 != local_7c) {
    local_98 = &puStack_70;
    local_90 = &local_60;
    local_80 = iVar12;
    do {
      uVar6 = FUN_01376f10(uVar2,&local_88);
      if ((uVar6 & 1) != 0) {
        (**(code **)*param_1)(param_1,&local_88);
      }
      if (local_80 < *(int *)(local_90 + 1)) {
        local_80 = local_80 + 1;
      }
      else {
        local_7c = local_7c + 1;
        local_80 = *(int *)(local_98 + 1);
      }
    } while (iVar12 != local_80 || iVar10 + 1 != local_7c);
  }
  return;
}

