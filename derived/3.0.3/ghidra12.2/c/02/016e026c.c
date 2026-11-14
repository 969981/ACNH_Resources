
/* WARNING: Removing unreachable block (ram,0x016e0644) */

float FUN_016e026c(float param_1,float *param_2,int *param_3,ulong param_4)

{
  uint *puVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  float *pfVar9;
  char *pcVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  int local_6c;
  int local_68;
  int local_64;
  
  puVar6 = PTR_DAT_04bb27c8;
  puVar5 = PTR_DAT_04bb2200;
  if ((*(long *)PTR_DAT_04bb2200 != 0) && (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x50) != 0)) {
    local_64 = 0;
  }
  local_68 = 0;
  local_6c = 0;
  fVar11 = (float)FUN_0093b024(*(long *)PTR_DAT_04bb27c8 + 0x28,param_2,&local_68);
  fVar12 = (float)FUN_0093a950(*(long *)puVar6 + 0x28,param_2,&local_6c);
  lVar8 = FUN_0251e98c(1);
  pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x330) + 0xf0))(lVar8 + 0x330);
  puVar7 = PTR_DAT_04bb6298;
  fVar14 = *pfVar9;
  if (local_6c == 8) {
    local_64 = local_68;
    lVar8 = FUN_009807cc(DAT_04cfab78 + 8,local_68);
    puVar6 = PTR_DAT_04bb5d10;
    if (((lVar8 == 0) ||
        (pcVar10 = (char *)FUN_009823a0(lVar8,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
        pcVar10 == (char *)0x0)) || (*pcVar10 == '\0')) goto LAB_016e05c4;
    local_64 = local_6c;
    lVar8 = FUN_009807cc(DAT_04cfab78 + 8,local_6c);
    if (((lVar8 != 0) &&
        (pcVar10 = (char *)FUN_009823a0(lVar8,0xd,0x58da05ed,*(undefined8 *)puVar6),
        pcVar10 != (char *)0x0)) && (*pcVar10 != '\0')) goto LAB_016e05c4;
    fVar11 = fVar14;
    if (fVar12 <= fVar14) {
      fVar11 = fVar12;
    }
  }
  else {
    if ((param_4 & 1) != 0) {
      local_64 = local_68;
      lVar8 = FUN_009807cc(DAT_04cfab78 + 8,local_68);
      if ((((lVar8 != 0) &&
           (pcVar10 = (char *)FUN_009823a0(lVar8,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
           pcVar10 != (char *)0x0)) && (*pcVar10 != '\0')) && (local_68 == local_6c)) {
        return fVar12 + 12.0;
      }
    }
    fVar13 = param_2[2];
    lVar8 = *(long *)puVar6;
    if (((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 0xa8), lVar8 != 0)) &&
       ((uVar3 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0), -1 < (int)uVar3 &&
        ((uVar4 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0), -1 < (int)uVar4 &&
         (uVar3 < *(uint *)(lVar8 + 0x38) && uVar4 < *(uint *)(lVar8 + 0x3c))))))) {
      uVar3 = uVar3 + *(uint *)(lVar8 + 0x38) * uVar4;
      if ((uVar3 < *(uint *)(lVar8 + 0x68) && *(long *)(lVar8 + 0x70) != 0) &&
         (fVar11 = fVar12, (*(uint *)(*(long *)(lVar8 + 0x70) + (long)(int)uVar3 * 4) >> 3 & 1) != 0
         )) goto LAB_016e05c0;
    }
    sVar2 = *(short *)puVar7;
    fVar11 = fVar12;
    if (sVar2 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar1 >> 3 & 1) != 0) && (300.0 <= fVar13)) {
        local_64 = local_68;
        lVar8 = FUN_009807cc(DAT_04cfab78 + 8,local_68);
        puVar6 = PTR_DAT_04bb5d10;
        if ((lVar8 != 0) &&
           ((pcVar10 = (char *)FUN_009823a0(lVar8,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
            pcVar10 != (char *)0x0 && (*pcVar10 != '\0')))) {
          local_64 = local_6c;
          lVar8 = FUN_009807cc(DAT_04cfab78 + 8,local_6c);
          if (((lVar8 == 0) ||
              ((pcVar10 = (char *)FUN_009823a0(lVar8,0xd,0x58da05ed,*(undefined8 *)puVar6),
               pcVar10 == (char *)0x0 || (*pcVar10 == '\0')))) &&
             (fVar11 = fVar14, fVar12 <= fVar14)) {
            fVar11 = fVar12;
          }
        }
      }
    }
  }
LAB_016e05c0:
  local_68 = local_6c;
LAB_016e05c4:
  if (param_3 != (int *)0x0) {
    *param_3 = local_68;
  }
  sVar2 = *(short *)puVar7;
  if (sVar2 != -1) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 1 & 1) != 0) {
      fVar12 = -20.0;
      if ((*(long *)puVar5 != 0) && (lVar8 = *(long *)(*(long *)puVar5 + 0x50), lVar8 != 0)) {
        local_64 = 0;
        lVar8 = *(long *)(lVar8 + 0x118);
        if (lVar8 != 0) {
          lVar8 = *(long *)(lVar8 + 0x280);
          fVar12 = 0.0;
          if ((lVar8 != 0) && (lVar8 = *(long *)(lVar8 + 8), lVar8 != 0)) {
            pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x488) + 0xf0))(lVar8 + 0x488);
            fVar12 = *pfVar9;
          }
          lVar8 = FUN_0251e98c(1);
          pfVar9 = (float *)(**(code **)(*(long *)(lVar8 + 0x1560) + 0xf0))(lVar8 + 0x1560);
          fVar12 = fVar12 + *pfVar9;
        }
      }
      if (fVar12 <= fVar11) {
        fVar12 = fVar11;
      }
      fVar11 = fVar12 + param_1;
    }
  }
  return fVar11;
}

