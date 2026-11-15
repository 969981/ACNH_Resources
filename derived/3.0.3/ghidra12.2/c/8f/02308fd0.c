
void FUN_02308fd0(long param_1)

{
  uint *puVar1;
  short sVar2;
  long lVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long lVar6;
  float fVar7;
  undefined **local_50;
  undefined1 *puStack_48;
  undefined1 local_14 [4];
  
  lVar6 = *(long *)PTR_DAT_04bb3968;
  lVar3 = FUN_0251bdc4(param_1 + 1,0);
  if ((lVar6 == 0 || lVar3 == 0) || *(char *)(param_1 + 2) == '\0') {
    return;
  }
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    local_50 = (undefined **)CONCAT44(local_50._4_4_,0x1a);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x1a & 1) != 0) goto LAB_02309070;
  }
  uVar4 = FUN_0180c600();
  if ((uVar4 & 1) == 0) {
    return;
  }
LAB_02309070:
  puStack_48 = local_14;
  fVar7 = (float)NEON_ucvtf(*(undefined4 *)(lVar3 + 4));
  local_50 = &PTR_FUN_04a7f4f8;
  local_14[0] = 180.0 <= fVar7 * 8.381903e-08;
  if (*(int *)(lVar6 + 0xb88) != 0) {
    lVar3 = (long)*(int *)(lVar6 + 0xb88) << 3;
    puVar5 = *(undefined8 **)(lVar6 + 0xb90);
    do {
      (*(code *)*local_50)(&local_50,*puVar5);
      lVar3 = lVar3 + -8;
      puVar5 = puVar5 + 1;
    } while (lVar3 != 0);
  }
  return;
}

