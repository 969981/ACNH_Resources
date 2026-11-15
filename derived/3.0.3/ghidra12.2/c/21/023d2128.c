
void FUN_023d2128(long param_1)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  char *pcVar4;
  undefined8 uVar5;
  long lVar6;
  int iVar7;
  float fVar8;
  undefined4 uVar9;
  undefined *local_c8;
  char *pcStack_c0;
  undefined4 local_b8;
  char local_b4 [7];
  char cStack_ad;
  char acStack_ac [5];
  char local_a7;
  char cStack_a6;
  char cStack_a5;
  char acStack_a4 [5];
  char cStack_9f;
  undefined1 uStack_9e;
  undefined1 uStack_9d;
  undefined1 uStack_9c;
  undefined1 uStack_9b;
  undefined1 uStack_9a;
  undefined1 local_99;
  undefined1 local_35;
  
  local_b8 = 0x80;
  local_35 = 0;
  cStack_a5 = '\0';
  pcStack_c0 = local_b4;
  local_b4 = (char  [7])s_PlayerMegaphone_040b1865._0_7_;
  cStack_ad = s_PlayerMegaphone_040b1865[7];
  acStack_ac = s_PlayerMegaphone_040b1865._8_5_;
  local_a7 = s_PlayerMegaphone_040b1865[0xd];
  cStack_a6 = s_PlayerMegaphone_040b1865[0xe];
  local_c8 = PTR_DAT_04bb2d88 + 0x10;
  switch(*(undefined4 *)(param_1 + 0x1900)) {
  case 0x32:
    uStack_9e = 0;
    local_b4 = s_PlayerKKFesRhythmUpper_040bb798._0_7_;
    cStack_ad = s_PlayerKKFesRhythmUpper_040bb798[7];
    acStack_ac = s_PlayerKKFesRhythmUpper_040bb798._8_5_;
    local_a7 = s_PlayerKKFesRhythmUpper_040bb798[0xd];
    cStack_a6 = s_PlayerKKFesRhythmUpper_040bb798[0xe];
    cStack_a5 = s_PlayerKKFesRhythmUpper_040bb798[0xf];
    acStack_a4 = s_PlayerKKFesRhythmUpper_040bb798._16_5_;
    cStack_9f = s_PlayerKKFesRhythmUpper_040bb798[0x15];
    if (*(char *)(param_1 + 0x1904) == '\0') break;
    pcVar4 = "PlayerKKFesRhythmUpperFirst";
    goto LAB_023d220c;
  case 0x33:
    uStack_9e = 0;
    local_b4 = s_PlayerKKFesRhythmLower_04062acd._0_7_;
    cStack_ad = s_PlayerKKFesRhythmLower_04062acd[7];
    acStack_ac = s_PlayerKKFesRhythmLower_04062acd._8_5_;
    local_a7 = s_PlayerKKFesRhythmLower_04062acd[0xd];
    cStack_a6 = s_PlayerKKFesRhythmLower_04062acd[0xe];
    cStack_a5 = s_PlayerKKFesRhythmLower_04062acd[0xf];
    acStack_a4 = s_PlayerKKFesRhythmLower_04062acd._16_5_;
    cStack_9f = s_PlayerKKFesRhythmLower_04062acd[0x15];
    if (*(char *)(param_1 + 0x1904) == '\0') break;
    pcVar4 = "PlayerKKFesRhythmLowerFirst";
LAB_023d220c:
    local_99 = 0;
    uStack_9c = 0x72;
    uStack_9b = 0x73;
    uStack_9a = 0x74;
    uVar1 = *(undefined8 *)(pcVar4 + 8);
    uVar5 = *(undefined8 *)(pcVar4 + 0x10);
    local_b4 = SUB87(*(undefined8 *)pcVar4,0);
    cStack_ad = (char)((ulong)*(undefined8 *)pcVar4 >> 0x38);
    acStack_ac = SUB85(uVar1,0);
    local_a7 = (char)((ulong)uVar1 >> 0x28);
    cStack_a6 = (char)((ulong)uVar1 >> 0x30);
    cStack_a5 = (char)((ulong)uVar1 >> 0x38);
    acStack_a4 = SUB85(uVar5,0);
    cStack_9f = (char)((ulong)uVar5 >> 0x28);
    uStack_9e = (undefined1)((ulong)uVar5 >> 0x30);
    uStack_9d = (undefined1)((ulong)uVar5 >> 0x38);
    break;
  case 0x34:
    cStack_9f = '\0';
    local_b4 = s_PlayerKKFesRhythmLeft_04062ae4._0_7_;
    cStack_ad = s_PlayerKKFesRhythmLeft_04062ae4[7];
    acStack_ac = (char  [5])s_PlayerKKFesRhythmLeft_04062ae4._8_5_;
    local_a7 = s_PlayerKKFesRhythmLeft_04062ae4[0xd];
    cStack_a6 = s_PlayerKKFesRhythmLeft_04062ae4[0xe];
    cStack_a5 = s_PlayerKKFesRhythmLeft_04062ae4[0xf];
    acStack_a4 = (char  [5])s_PlayerKKFesRhythmLeft_04062ae4._16_5_;
    break;
  case 0x35:
    uStack_9e = 0;
    local_b4 = s_PlayerKKFesRhythmRight_040efacf._0_7_;
    cStack_ad = s_PlayerKKFesRhythmRight_040efacf[7];
    acStack_ac = s_PlayerKKFesRhythmRight_040efacf._8_5_;
    local_a7 = s_PlayerKKFesRhythmRight_040efacf[0xd];
    cStack_a6 = s_PlayerKKFesRhythmRight_040efacf[0xe];
    cStack_a5 = s_PlayerKKFesRhythmRight_040efacf[0xf];
    acStack_a4 = s_PlayerKKFesRhythmRight_040efacf._16_5_;
    cStack_9f = s_PlayerKKFesRhythmRight_040efacf[0x15];
    break;
  case 0x36:
    switch(*(undefined4 *)(param_1 + 0x2268)) {
    default:
      pcVar4 = "PlayerKKFesRhythmPosing00";
      uStack_9c = 0x30;
      break;
    case 1:
      pcVar4 = "PlayerKKFesRhythmPosing01";
      uStack_9c = 0x31;
      break;
    case 2:
      pcVar4 = "PlayerKKFesRhythmPosing02";
      uStack_9c = 0x32;
      break;
    case 3:
      pcVar4 = "PlayerKKFesRhythmPosing03";
      uStack_9c = 0x33;
      break;
    case 4:
      pcVar4 = "PlayerKKFesRhythmPosing04";
      uStack_9c = 0x34;
      break;
    case 5:
      pcVar4 = "PlayerKKFesRhythmPosing05";
      uStack_9c = 0x35;
      break;
    case 6:
      pcVar4 = "PlayerKKFesRhythmPosing06";
      uStack_9c = 0x36;
    }
    uVar1 = *(undefined8 *)(pcVar4 + 8);
    uVar5 = *(undefined8 *)(pcVar4 + 0x10);
    uStack_9b = 0;
    acStack_a4 = SUB85(uVar5,0);
    cStack_9f = (char)((ulong)uVar5 >> 0x28);
    uStack_9e = (undefined1)((ulong)uVar5 >> 0x30);
    uStack_9d = (undefined1)((ulong)uVar5 >> 0x38);
    local_b4 = SUB87(*(undefined8 *)pcVar4,0);
    cStack_ad = (char)((ulong)*(undefined8 *)pcVar4 >> 0x38);
    acStack_ac = SUB85(uVar1,0);
    local_a7 = (char)((ulong)uVar1 >> 0x28);
    cStack_a6 = (char)((ulong)uVar1 >> 0x30);
    cStack_a5 = (char)((ulong)uVar1 >> 0x38);
    uVar3 = 0;
    if (*(int *)(param_1 + 0x2268) < 6) {
      uVar3 = *(int *)(param_1 + 0x2268) + 1;
    }
    if (uVar3 < 7) {
      *(uint *)(param_1 + 0x2268) = uVar3;
    }
  }
  puVar2 = *(undefined8 **)(param_1 + 0x60);
  if (puVar2 == (undefined8 *)0x0) {
    if (((DAT_052461c0 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_052461c0), iVar7 != 0)) {
      FUN_016fcf10(&DAT_05240280);
      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_052461c0);
      puVar2 = &DAT_05240280;
    }
    else {
      puVar2 = &DAT_05240280;
    }
  }
  FUN_017081d0(puVar2,&local_c8,6,1,0);
  FUN_020b7a90(*(undefined8 *)PTR_DAT_04bb3968);
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) {
    uVar3 = *(uint *)(param_1 + 0x17cc) & 0xffffffef | 0x100;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x68);
    *(int *)(param_1 + 0x18e5) = (int)(*(float *)(lVar6 + 0x278) * 999.99994);
    iVar7 = (int)(*(float *)(lVar6 + 0x27c) * 4.0);
    if (0x7ffe < iVar7) {
      iVar7 = 0x7fff;
    }
    if (iVar7 < -0x7fff) {
      iVar7 = -0x8000;
    }
    *(short *)(param_1 + 0x18e9) = (short)iVar7;
    fVar8 = *(float *)(lVar6 + 0x280);
    *(undefined4 *)(param_1 + 0x1830) = 0;
    *(undefined4 *)(param_1 + 0x1828) = 0;
    *(int *)(param_1 + 0x18eb) = (int)(fVar8 * 999.99994);
    uVar3 = *(uint *)(param_1 + 0x17cc) & 0xfffffeef;
  }
  *(uint *)(param_1 + 0x17cc) = uVar3;
  if (*(uint *)(param_1 + 0x1810) - 2 < 3) {
    puVar2 = &DAT_054e9a58;
    if (*(undefined8 **)(param_1 + 0x4c8) != (undefined8 *)0x0) {
      puVar2 = *(undefined8 **)(param_1 + 0x4c8);
    }
    uVar9 = FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    *(undefined4 *)((long)puVar2 + 0x2ec) = uVar9;
    *(undefined1 *)((long)puVar2 + 0x2e5) = 1;
  }
  return;
}

