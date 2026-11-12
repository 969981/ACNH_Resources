
undefined8 FUN_008dbef8(long param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  uint uVar5;
  undefined4 *puVar6;
  byte bVar7;
  float fVar8;
  undefined4 local_54;
  undefined **local_50;
  char *pcStack_48;
  undefined **local_40;
  char *pcStack_38;
  
  local_40 = &PTR_LAB_048f9770;
  pcStack_38 = s_cFacePanel_04922c2f;
  *(undefined4 *)(param_1 + 0x307d8) = 0;
  local_50 = &PTR_LAB_048f9770;
  pcStack_48 = s_cFacePanel_04926639;
  if (((ulong)*param_2 < 8) && (DAT_054f5738 != 0)) {
    puVar6 = (undefined4 *)(DAT_054f5738 + (ulong)*param_2 * 4 + 0xde8);
  }
  else {
    puVar6 = &DAT_04c9a0c8;
  }
  local_54 = *puVar6;
  FUN_008c3200(param_1,&local_40,&local_50,&local_54,0,1,1);
  uVar3 = FUN_0180ae80();
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_0251bdc4(param_2,0);
    if (lVar4 == 0) {
      uVar5 = 0;
    }
    else {
      uVar5 = *(uint *)(lVar4 + 4);
    }
    uVar2 = *(uint *)(param_1 + 0x30894);
    fVar8 = 0.0;
    if (uVar2 - uVar5 != 0) {
      uVar1 = uVar2 - uVar5;
      if (uVar2 <= uVar5) {
        uVar1 = uVar5 - uVar2;
      }
      uVar5 = -uVar1;
      if (uVar1 < 0x80000001) {
        uVar5 = uVar1;
      }
      fVar8 = (float)uVar5 * 8.381903e-08;
    }
    *(int *)(param_1 + 0x30954) = (int)((float)*(int *)(param_1 + 0x30954) + (fVar8 / 180.0) * 30.0)
    ;
  }
  bVar7 = *param_2;
  if (7 < bVar7) {
    bVar7 = 0xff;
  }
  *(byte *)(param_1 + 0x31858) = bVar7;
  uVar3 = FUN_0180ae80();
  if ((uVar3 & 1) != 0) {
    *(undefined8 *)(param_1 + 0x37f50) = 0;
    *(code **)(param_1 + 0x37f48) = FUN_008dc080;
    *(long *)(param_1 + 0x37f40) = param_1 + 0x31850;
    *(undefined ***)(param_1 + 0x37f38) = &PTR_LAB_04926080;
  }
  return 1;
}

