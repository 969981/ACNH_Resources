
void FUN_023e6658(long param_1)

{
  char cVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_e0;
  char *pcStack_d8;
  undefined4 local_d0;
  char local_cc [8];
  char local_c4 [8];
  undefined1 local_bc;
  undefined1 local_8d;
  undefined *local_88;
  char *pcStack_80;
  undefined4 local_78;
  char local_74 [8];
  char local_6c [7];
  char cStack_65;
  char acStack_64 [7];
  undefined1 local_5d;
  undefined1 local_35;
  
  puVar5 = *(undefined8 **)(param_1 + 0x60);
  cVar1 = *(char *)(param_1 + 0x191d);
  if (puVar5 == (undefined8 *)0x0) {
    if ((DAT_052461c0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(&DAT_052461c0);
      puVar5 = &DAT_05240280;
      if (iVar2 != 0) {
        FUN_016fcf10(&DAT_05240280);
        FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
        __cxa_guard_release(&DAT_052461c0);
      }
    }
    else {
      puVar5 = &DAT_05240280;
    }
  }
  if (((puVar5[0x227] != 0) && (lVar4 = *(long *)(puVar5[0x227] + 0x78), lVar4 != 0)) &&
     (plVar3 = *(long **)(lVar4 + 0x48), plVar3 != (long *)0x0)) {
    (**(code **)(*plVar3 + 0x28))(plVar3,&DAT_054b2340,cVar1 != '\0');
  }
  local_8d = 0;
  local_35 = 0;
  local_d0 = 0x40;
  local_78 = 0x40;
  pcStack_d8 = local_cc;
  pcStack_80 = local_74;
  local_bc = 0;
  local_e0 = PTR_DAT_04bb2bc0 + 0x10;
  local_5d = 0;
  local_cc[0] = s_FtrRotateDisable_04082667[0];
  local_cc[1] = s_FtrRotateDisable_04082667[1];
  local_cc[2] = s_FtrRotateDisable_04082667[2];
  local_cc[3] = s_FtrRotateDisable_04082667[3];
  local_cc[4] = s_FtrRotateDisable_04082667[4];
  local_cc[5] = s_FtrRotateDisable_04082667[5];
  local_cc[6] = s_FtrRotateDisable_04082667[6];
  local_cc[7] = s_FtrRotateDisable_04082667[7];
  local_c4[0] = s_FtrRotateDisable_04082667[8];
  local_c4[1] = s_FtrRotateDisable_04082667[9];
  local_c4[2] = s_FtrRotateDisable_04082667[10];
  local_c4[3] = s_FtrRotateDisable_04082667[0xb];
  local_c4[4] = s_FtrRotateDisable_04082667[0xc];
  local_c4[5] = s_FtrRotateDisable_04082667[0xd];
  local_c4[6] = s_FtrRotateDisable_04082667[0xe];
  local_c4[7] = s_FtrRotateDisable_04082667[0xf];
  local_74[0] = s_FtrRotateDisableNoSound_040c0e25[0];
  local_74[1] = s_FtrRotateDisableNoSound_040c0e25[1];
  local_74[2] = s_FtrRotateDisableNoSound_040c0e25[2];
  local_74[3] = s_FtrRotateDisableNoSound_040c0e25[3];
  local_74[4] = s_FtrRotateDisableNoSound_040c0e25[4];
  local_74[5] = s_FtrRotateDisableNoSound_040c0e25[5];
  local_74[6] = s_FtrRotateDisableNoSound_040c0e25[6];
  local_74[7] = s_FtrRotateDisableNoSound_040c0e25[7];
  local_6c[0] = s_FtrRotateDisableNoSound_040c0e25[8];
  local_6c[1] = s_FtrRotateDisableNoSound_040c0e25[9];
  local_6c[2] = s_FtrRotateDisableNoSound_040c0e25[10];
  local_6c[3] = s_FtrRotateDisableNoSound_040c0e25[0xb];
  local_6c[4] = s_FtrRotateDisableNoSound_040c0e25[0xc];
  local_6c[5] = s_FtrRotateDisableNoSound_040c0e25[0xd];
  local_6c[6] = s_FtrRotateDisableNoSound_040c0e25[0xe];
  cStack_65 = s_FtrRotateDisableNoSound_040c0e25[0xf];
  acStack_64[0] = s_FtrRotateDisableNoSound_040c0e25[0x10];
  acStack_64[1] = s_FtrRotateDisableNoSound_040c0e25[0x11];
  acStack_64[2] = s_FtrRotateDisableNoSound_040c0e25[0x12];
  acStack_64[3] = s_FtrRotateDisableNoSound_040c0e25[0x13];
  acStack_64[4] = s_FtrRotateDisableNoSound_040c0e25[0x14];
  acStack_64[5] = s_FtrRotateDisableNoSound_040c0e25[0x15];
  acStack_64[6] = s_FtrRotateDisableNoSound_040c0e25[0x16];
  local_88 = local_e0;
  FUN_023deca8(param_1,&local_e0);
  return;
}

