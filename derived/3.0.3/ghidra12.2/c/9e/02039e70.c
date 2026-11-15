
void FUN_02039e70(undefined8 param_1,undefined8 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 *__src;
  undefined1 *__dest;
  int iVar5;
  uint *puVar6;
  undefined4 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long *plVar10;
  long *plVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int local_1d0;
  undefined4 uStack_1cc;
  undefined1 *local_1c8;
  undefined8 local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined *local_108;
  undefined1 *local_100;
  int local_f8;
  undefined1 local_f4 [127];
  undefined1 local_75;
  undefined4 local_70;
  undefined2 local_6c;
  undefined8 local_68;
  
  puVar7 = (undefined4 *)param_2[1];
  uVar15 = *puVar7;
  uVar13 = puVar7[1];
  uVar14 = puVar7[2];
  puVar6 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar2 = puVar6[3];
  uVar1 = *puVar6 ^ *puVar6 << 0xb;
  *puVar6 = puVar6[1];
  puVar6[1] = puVar6[2];
  local_100 = local_f4;
  uVar1 = uVar1 >> 8 ^ uVar2 >> 0x13 ^ uVar1 ^ uVar2;
  puVar6[2] = uVar2;
  puVar6[3] = uVar1;
  puVar3 = PTR_DAT_04bc20e0;
  local_138 = 0xa00000000;
  local_130 = 0;
  local_128 = 0x3f80000000000000;
  local_120 = 0;
  local_f8 = 0x80;
  local_75 = 0;
  local_f4[0] = 0;
  local_68 = 0;
  local_6c = 0;
  local_11c = 0;
  local_108 = PTR_DAT_04bb2d88 + 0x10;
  local_70 = 7;
  local_114 = 0;
  if (*(int *)PTR_DAT_04bc20e0 == 4) {
    lVar8 = *(long *)PTR_DAT_04bb2720;
    if (lVar8 == 0) {
      puVar9 = &DAT_055c04a0;
    }
    else {
      puVar9 = &DAT_055c04a0;
      if (*(long *)(lVar8 + 0x330) != 0) {
        puVar9 = (undefined8 *)
                 (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                           (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
        iVar5 = FUN_006bd550(*puVar9,0);
        puVar9 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar5 != 0x758f7eaf) {
          puVar9 = &DAT_055c04a0;
        }
      }
    }
    puVar4 = PTR_DAT_04bc39e0;
    *(undefined4 *)(PTR_DAT_04bc39e0 + 0x3c) = *(undefined4 *)(puVar9 + 7);
    FUN_0292e870(&local_1d0,0);
    uVar15 = 0x441a6000;
    uVar14 = 0x43750000;
    uVar13 = 0;
    local_120 = 0;
    puVar4[0x54] = 0;
    puVar4[0x56] = 0;
    *(undefined8 *)(puVar4 + 0x40) = 0x441a6000;
    *(undefined8 *)(puVar4 + 0x48) = 0x43750000;
    *(int *)(puVar4 + 0x50) = local_1d0;
  }
  else {
    local_120 = (undefined4)(long)(((float)(uVar1 >> 9 | 0x3f800000) + -1.0) * 360.0 * 11930465.0);
  }
  plVar10 = (long *)*param_2;
  local_130 = CONCAT44(uVar13,uVar15);
  local_128 = CONCAT44(local_128._4_4_,uVar14);
  (**(code **)(*plVar10 + 0x18))(plVar10);
  plVar11 = (long *)param_2[2];
  lVar8 = plVar10[1];
  (**(code **)(*plVar11 + 0x18))(plVar11);
  plVar10 = (long *)param_2[3];
  lVar12 = plVar11[1];
  (**(code **)(*plVar10 + 0x18))(plVar10);
  FUN_0074fda4(&local_1d0,"%s/AIC:%s/AIF:%s",lVar8,lVar12,plVar10[1]);
  __dest = local_100;
  (**(code **)(CONCAT44(uStack_1cc,local_1d0) + 0x18))(&local_1d0);
  __src = local_1c8;
  if (__dest != local_1c8) {
    (**(code **)(CONCAT44(uStack_1cc,local_1d0) + 0x18))(&local_1d0);
    lVar8 = 0;
    do {
      if (local_1c8[lVar8] == '\0') goto LAB_0203a11c;
      if (local_1c8[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0203a11c;
      }
      if (local_1c8[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0203a11c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_0203a11c:
    iVar5 = (int)lVar8;
    if (local_f8 <= (int)lVar8) {
      iVar5 = local_f8 + -1;
    }
    memcpy(__dest,__src,(long)iVar5);
    __dest[iVar5] = 0;
  }
  local_114 = CONCAT44(local_114._4_4_,*(undefined4 *)(param_2 + 4));
  local_1d0 = *(int *)puVar3;
  if (local_1d0 == 10) {
    FUN_02030e80(param_1,&local_138);
  }
  else {
    FUN_0204b180(*(long *)PTR_DAT_04bb3968 + 0x3cc0,&local_138);
  }
  return;
}

