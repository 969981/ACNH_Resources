
void FUN_0329e56c(float param_1,float param_2,long *param_3,undefined4 *param_4,float *param_5,
                 long param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ulong uVar4;
  long *plVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *local_70;
  char *pcStack_68;
  undefined1 auStack_58 [8];
  
  uVar4 = (**(code **)(*param_3 + 0x98))();
  puVar2 = PTR_DAT_04bc8e68;
  puVar1 = PTR_PTR_04bb2238;
  if ((uVar4 & 1) == 0) {
    *param_4 = (undefined4)DAT_0572c8c8;
    param_4[1] = DAT_0572c8c8._4_4_;
    param_4[2] = (undefined4)DAT_0572c8d0;
    param_4[3] = DAT_0572c8d0._4_4_;
    fVar8 = 0.0;
  }
  else {
    param_2 = *(float *)(param_6 + 0xc) - param_2;
    if (param_2 <= *(float *)(param_6 + 4)) {
      param_2 = *(float *)(param_6 + 4);
    }
    if (**(char **)(PTR_PTR_04bb2238 + 8) == '\0') {
      plVar5 = *(long **)(*(long *)(param_3[3] + 0xf0) + 0x18);
    }
    else {
      local_70 = PTR_DAT_04bc8e68 + 0x10;
      pcStack_68 = *(char **)(PTR_PTR_04bb2238 + 8);
      plVar5 = (long *)FUN_032cb8e0(auStack_58,&local_70,*(undefined8 *)(param_3[3] + 0xf0));
    }
    lVar6 = (**(code **)(*plVar5 + 0x60))(plVar5,"N_Top",1);
    if (lVar6 == 0) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = *(float *)(lVar6 + 0x54);
    }
    if (**(char **)(puVar1 + 8) == '\0') {
      plVar5 = *(long **)(*(long *)(param_3[3] + 0xf0) + 0x18);
    }
    else {
      local_70 = puVar2 + 0x10;
      pcStack_68 = *(char **)(puVar1 + 8);
      plVar5 = (long *)FUN_032cb8e0(auStack_58,&local_70,*(undefined8 *)(param_3[3] + 0xf0));
    }
    lVar6 = (**(code **)(*plVar5 + 0x60))(plVar5,"N_Btm",1);
    uVar3 = (undefined4)DAT_0572c8d0;
    if (lVar6 == 0) {
      fVar7 = 0.0;
    }
    else {
      fVar7 = *(float *)(lVar6 + 0x54);
    }
    fVar9 = *(float *)(param_6 + 0xc);
    fVar8 = fVar10 + fVar7;
    *param_4 = (undefined4)DAT_0572c8c8;
    param_4[2] = uVar3;
    param_4[1] = param_2 + param_1 + fVar7;
    param_4[3] = (fVar9 + param_1) - fVar10;
  }
  *param_5 = fVar8;
  return;
}

