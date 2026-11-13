
float FUN_013866c0(long param_1,char *param_2)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  ulong uVar4;
  char *pcVar5;
  uint uVar6;
  uint uVar7;
  long lVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  int local_68;
  float local_64 [3];
  undefined *local_58;
  undefined8 local_50;
  int local_48;
  int iStack_44;
  undefined *local_40;
  int local_38;
  int iStack_34;
  
  puVar3 = PTR_DAT_04bb27c8;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    local_58 = (undefined *)((ulong)local_58 & 0xffffffff00000000);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 & 1) != 0) {
      return 0.0;
    }
  }
  local_48 = *(int *)(param_1 + 8);
  iStack_44 = *(int *)(param_1 + 0xc);
  local_64[1] = 0.0;
  local_68 = 0;
  local_64[0] = (float)local_48 * 5.0 + 2.5;
  local_64[2] = (float)iStack_44 * 5.0 + 2.5;
  lVar8 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar8 == 0) || (*(long *)(lVar8 + 0xa8) == 0)) || (*(char *)(lVar8 + 0x11c8) != '\0')) {
    fVar9 = -500.0;
  }
  else {
    fVar9 = (float)FUN_0093a950(lVar8 + 0x28,local_64,&local_68);
    local_48 = *(int *)(param_1 + 8);
    iStack_44 = *(int *)(param_1 + 0xc);
    lVar8 = *(long *)puVar3;
  }
  local_58 = PTR_DAT_04bbc1a0 + 0x10;
  local_50 = PTR_DAT_04bb2010 + 0x10;
  local_40 = local_50;
  local_38 = local_48;
  iStack_34 = iStack_44;
  if (((lVar8 != 0) && (*(long *)(lVar8 + 0xa8) != 0)) &&
     (uVar4 = FUN_009721a0(*(long *)(lVar8 + 0xa8),&local_58,1), (uVar4 & 1) != 0)) {
    lVar8 = *(long *)puVar3;
    if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0xa8), lVar8 == 0)) {
      fVar9 = -500.0;
    }
    else {
      fVar9 = (float)FUN_00963acc(lVar8,param_1);
    }
  }
  if ((param_2 != (char *)0x0) && (*param_2 != '\0')) {
    local_58 = PTR_DAT_04bb2018 + 0x10;
    fVar10 = (float)*(int *)(param_1 + 8) * 0.5;
    uVar6 = 0;
    if (fVar10 != (float)(int)fVar10) {
      uVar6 = (uint)(fVar10 < 0.0);
    }
    fVar11 = (float)*(int *)(param_1 + 0xc) * 0.5;
    uVar7 = 0;
    if (fVar11 != (float)(int)fVar11) {
      uVar7 = (uint)(fVar11 < 0.0);
    }
    local_50 = (undefined *)CONCAT44((int)fVar11 - uVar7,(int)fVar10 - uVar6);
    uVar4 = FUN_01318310(&local_58);
    if ((uVar4 & 1) != 0) {
      fVar9 = (float)FUN_01317ef0(&local_58);
      fVar9 = fVar9 + -15.0;
    }
  }
  if (local_68 == 1) {
    fVar10 = (float)FUN_01317db0(local_64);
  }
  else {
    local_58 = (undefined *)CONCAT44(local_58._4_4_,local_68);
    lVar8 = FUN_009807cc(*(long *)PTR_DAT_04bb46c8 + 8,local_68);
    if (((lVar8 == 0) ||
        (pcVar5 = (char *)FUN_009823a0(lVar8,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
        pcVar5 == (char *)0x0)) || (*pcVar5 == '\0')) {
      fVar10 = -500.0;
    }
    else {
      fVar10 = (float)FUN_015cb8d4(local_64,0);
    }
  }
  if (fVar9 < fVar10) {
    fVar9 = fVar10;
  }
  return fVar9;
}

