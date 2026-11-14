
bool FUN_016ebc50(float param_1,float *param_2)

{
  float *pfVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  char *pcVar7;
  bool bVar8;
  uint uVar9;
  float fVar10;
  float local_88;
  float fStack_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  
  puVar3 = PTR_DAT_04bb27c8;
  local_74 = 0.0;
  local_78 = 0.0;
  FUN_0093b024(*(long *)PTR_DAT_04bb27c8 + 0x28,param_2,&local_74);
  FUN_0093a950(*(long *)puVar3 + 0x28,param_2,&local_78);
  local_88 = local_74;
  lVar6 = FUN_009807cc(DAT_04cfab78 + 8,local_74);
  puVar5 = PTR_DAT_04bb5d10;
  if ((((lVar6 == 0) ||
       (pcVar7 = (char *)FUN_009823a0(lVar6,0xd,0x58da05ed,*(undefined8 *)PTR_DAT_04bb5d10),
       puVar4 = PTR_DAT_04bb2d00, pcVar7 == (char *)0x0)) || (*pcVar7 == '\0')) ||
     (local_74 != local_78)) {
    bVar8 = false;
  }
  else {
    fVar10 = -param_1;
    if (0.0 <= param_1) {
      fVar10 = param_1;
    }
    if (1.1920929e-07 <= fVar10) {
      bVar8 = false;
      uVar9 = 0;
      do {
        local_7c = 0.0;
        local_78 = 0.0;
        pfVar1 = (float *)(puVar4 + (ulong)(DAT_05240230 * uVar9 >> 0x18) * 0x10);
        fVar10 = (float)(DAT_05240230 * uVar9 & 0xffffff) * 5.9604645e-08;
        fStack_84 = param_1 * 0.0 + param_2[1];
        local_88 = (*pfVar1 + fVar10 * pfVar1[1]) * param_1 + *param_2;
        local_80 = (pfVar1[2] + fVar10 * pfVar1[3]) * param_1 + param_2[2];
        FUN_0093b024(*(long *)puVar3 + 0x28,&local_88,&local_78);
        FUN_0093a950(*(long *)puVar3 + 0x28,&local_88,&local_7c);
        local_74 = local_78;
        lVar6 = FUN_009807cc(DAT_04cfab78 + 8,local_78);
        if (lVar6 == 0) {
          return bVar8;
        }
        pcVar7 = (char *)FUN_009823a0(lVar6,0xd,0x58da05ed,*(undefined8 *)puVar5);
        if (pcVar7 == (char *)0x0) {
          return bVar8;
        }
        if (*pcVar7 == '\0') {
          return bVar8;
        }
        if (local_78 != local_7c) {
          return bVar8;
        }
        uVar2 = uVar9 + 1;
        bVar8 = 6 < uVar9;
        uVar9 = uVar2;
      } while (uVar2 != 8);
    }
    else {
      bVar8 = true;
    }
  }
  return bVar8;
}

