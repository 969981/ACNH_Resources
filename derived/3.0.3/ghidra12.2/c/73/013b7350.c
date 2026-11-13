
undefined1 FUN_013b7350(float param_1,undefined4 param_2,float param_3,float param_4)

{
  long lVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  float fVar10;
  float local_a4;
  undefined4 uStack_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float fStack_8c;
  float local_88;
  float fStack_84;
  int local_34;
  
  local_34 = 0;
  if ((int)(param_4 / 5.0) != 0) {
    uVar8 = 0;
    fVar10 = 0.0;
    iVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    iVar9 = 0;
    lVar1 = DAT_04cfae30 + 0x28;
    do {
      fVar10 = fVar10 + 5.0;
      fStack_8c = param_1 - fVar10;
      local_98 = param_1 + fVar10;
      local_9c = param_3 - fVar10;
      local_a4 = param_1;
      uStack_a0 = param_2;
      local_94 = (float)param_2;
      local_90 = param_3;
      local_88 = (float)param_2;
      fStack_84 = param_3;
      local_94 = (float)FUN_0093a950(lVar1,&local_98,&local_34);
      local_94 = local_94 + -1.5;
      if ((local_34 < 5) && (1 < local_34)) {
        iVar9 = iVar9 + 1;
        uVar7 = uVar7 + 1;
      }
      local_88 = (float)FUN_0093a950(lVar1,&fStack_8c,&local_34);
      local_88 = local_88 + -1.5;
      if ((local_34 < 5) && (1 < local_34)) {
        iVar9 = iVar9 + 1;
        uVar6 = uVar6 + 1;
      }
      FUN_0093a950(lVar1,&local_a4,&local_34);
      if ((local_34 < 5) && (1 < local_34)) {
        iVar9 = iVar9 + 1;
        iVar5 = iVar5 + 1;
      }
      fVar10 = fVar10 + 5.0;
      uVar8 = uVar8 + 1;
    } while ((uVar8 & 0xff) < (uint)(int)(param_4 / 5.0));
    if (iVar9 != 0) {
      uVar8 = uVar7 & ((int)uVar7 >> 0x1f ^ 0xffffffffU);
      uVar4 = uVar8;
      if ((int)uVar8 <= (int)uVar6) {
        uVar4 = uVar6;
      }
      uVar2 = 2;
      if ((int)uVar6 <= (int)uVar8) {
        uVar2 = 0 < (int)uVar7;
      }
      uVar3 = 4;
      if (iVar5 <= (int)uVar4) {
        uVar3 = uVar2;
      }
      return uVar3;
    }
  }
  return 0;
}

