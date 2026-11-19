
void FUN_03846170(float *param_1,float *param_2,long param_3)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  long lVar4;
  float *pfVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  undefined **local_88;
  undefined8 uStack_80;
  float local_78 [2];
  undefined8 local_68;
  
  lVar6 = *(long *)PTR_DAT_04bb2230;
  lVar4 = nn::os::GetTlsValue(DAT_05ae7898);
  if (lVar4 == 0) {
    iVar2 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar2 = (int)lVar4 + -1;
  }
  fVar7 = 1.4013e-45;
  if (iVar2 != 1) {
    fVar7 = 2.8026e-45;
  }
  local_78[0] = 0.0;
  if (iVar2 != 0) {
    local_78[0] = fVar7;
  }
  lVar4 = lVar6 + 0x288 + (ulong)(uint)local_78[0] * 0x44;
  if (2 < (uint)local_78[0]) {
    lVar4 = lVar6 + 0x288;
  }
  bVar1 = *(byte *)(lVar4 + 4);
  fVar8 = *(float *)(lVar4 + 8);
  fVar7 = *(float *)(lVar4 + 0x10);
  fVar9 = *(float *)(lVar4 + 0x18);
  fVar10 = *(float *)(lVar4 + 0x20);
  fVar11 = *(float *)(lVar4 + 0x28);
  fVar12 = *(float *)(lVar4 + 0x30);
  fVar13 = *(float *)(lVar4 + 0x38);
  uStack_80 = *(undefined8 *)(param_3 + 8);
  local_88 = &PTR_LAB_048f9770;
  uVar3 = FUN_033d6f80(&local_88);
  switch(uVar3) {
  case 0:
    if ((bVar1 & 1) != 0) {
      fVar7 = fVar8;
    }
    break;
  case 1:
    if ((bVar1 & 2) != 0) {
      fVar7 = fVar9;
    }
    break;
  case 2:
    if ((bVar1 & 4) != 0) {
      fVar7 = fVar10;
    }
    break;
  case 3:
    if ((bVar1 & 8) != 0) {
      fVar7 = fVar11;
    }
    break;
  case 4:
    if ((bVar1 & 0x10) != 0) {
      fVar7 = fVar12;
    }
    break;
  case 5:
    if ((bVar1 & 0x20) != 0) {
      fVar7 = fVar13;
    }
  }
  pfVar5 = (float *)&DAT_04199340;
  if ((DAT_05ae6330 != 0) &&
     (pfVar5 = (float *)&DAT_04199348, *(char *)(DAT_05ae6330 + 0x78) != '\0')) {
    pfVar5 = (float *)&DAT_04199340;
  }
  local_68 = 0;
  local_78[1] = -1.0;
  fVar8 = (fVar7 / (*pfVar5 * 0.5)) * 0.8;
  fVar7 = 1.0;
  if (fVar8 <= 1.0) {
    fVar7 = fVar8;
  }
  fVar9 = -1.0;
  if (-1.0 <= fVar8) {
    fVar9 = fVar7;
  }
  local_78[0] = fVar9;
  FUN_03b4e9c8((long)&local_68 + 4,&local_68,local_78,0,0);
  if (param_1 != (float *)0x0) {
    *param_1 = (float)(local_68 >> 0x20) * 1.4629181e-09;
  }
  if (param_2 != (float *)0x0) {
    *param_2 = fVar9 * fVar9 * -0.453 + 1.0;
  }
  return;
}

