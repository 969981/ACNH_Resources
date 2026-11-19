
void FUN_03c10410(void)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 uVar8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined *local_b8;
  undefined1 *puStack_b0;
  undefined4 local_a8;
  undefined1 local_a4 [63];
  undefined1 local_65;
  
  puVar3 = PTR_DAT_04bb2bc0;
  local_a8 = 0x40;
  local_65 = 0;
  local_a4[0] = 0;
  uVar8 = *(undefined8 *)PTR_DAT_04bb2620;
  puStack_b0 = local_a4;
  local_b8 = PTR_DAT_04bb2bc0 + 0x10;
  lVar5 = nn::os::GetSystemTick();
  puVar4 = PTR_DAT_04bd2db8;
  puVar2 = PTR_DAT_04bb29d0;
  lVar5 = lVar5 - *(long *)PTR_DAT_04bd2db8;
  if (lVar5 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
    lVar6 = 0;
    if (*(long *)PTR_DAT_04bb29d0 != 0) {
      lVar6 = (lVar5 * 1000) / *(long *)PTR_DAT_04bb29d0;
    }
  }
  else {
    lVar6 = 0;
    if (*(long *)PTR_DAT_04bb29d0 != 0) {
      lVar6 = lVar5 / *(long *)PTR_DAT_04bb29d0;
    }
    lVar6 = lVar6 * 1000;
  }
  lVar5 = lVar6 / 1000;
  auVar1 = SEXT816(lVar6 / 60000) * ZEXT816(0x8888888888888889);
  FUN_038d13f0(&local_b8,"[time: %3d:%02d:%02d.%02d]",
               (int)(SUB168(SEXT816(lVar6) * SEXT816(0x4a90be587de6e565),8) >> 0x14) -
               (SUB164(SEXT816(lVar6) * SEXT816(0x4a90be587de6e565),0xc) >> 0x1f),
               (int)(lVar6 / 60000) + ((int)(auVar1._8_8_ >> 5) - (auVar1._12_4_ >> 0x1f)) * -0x3c,
               (int)lVar5 +
               ((int)(SUB168(SEXT816(lVar5) * ZEXT816(0x8888888888888889),8) >> 5) -
               (SUB164(SEXT816(lVar5) * ZEXT816(0x8888888888888889),0xc) >> 0x1f)) * -0x3c,
               (int)(short)((short)lVar6 + (short)lVar5 * -1000) / 10);
  local_d0 = 0;
  local_c8 = 0;
  uStack_c0 = 0;
  FUN_03c125c0(uVar8,&uStack_c0,&local_c8,&local_d0);
  FUN_03c12ce0(uVar8,uStack_c0,local_c8,local_d0);
  puStack_b0 = local_a4;
  local_65 = 0;
  local_a8 = 0x40;
  local_b8 = puVar3 + 0x10;
  local_a4[0] = 0;
  lVar5 = nn::os::GetSystemTick();
  lVar5 = lVar5 - *(long *)puVar4;
  if (lVar5 + 0x20c49ba5e353f7U < 0x4189374bc6a7ee) {
    lVar7 = *(long *)puVar2;
    lVar6 = 0;
    if (lVar7 != 0) {
      lVar6 = (lVar5 * 1000) / lVar7;
    }
  }
  else {
    lVar7 = *(long *)puVar2;
    lVar6 = 0;
    if (lVar7 != 0) {
      lVar6 = lVar5 / lVar7;
    }
    lVar6 = lVar6 * 1000;
  }
  lVar5 = lVar6 / 1000;
  auVar1 = SEXT816(lVar6 / 60000) * ZEXT816(0x8888888888888889);
  FUN_038d13f0(&local_b8,"[time: %3d:%02d:%02d.%02d]",lVar6 / 3600000,
               (int)(lVar6 / 60000) + ((int)(auVar1._8_8_ >> 5) - (auVar1._12_4_ >> 0x1f)) * -0x3c,
               (int)lVar5 +
               ((int)(SUB168(SEXT816(lVar5) * ZEXT816(0x8888888888888889),8) >> 5) -
               (SUB164(SEXT816(lVar5) * ZEXT816(0x8888888888888889),0xc) >> 0x1f)) * -0x3c,
               (int)(short)((short)lVar6 + (short)lVar5 * -1000) / 10);
  return;
}

