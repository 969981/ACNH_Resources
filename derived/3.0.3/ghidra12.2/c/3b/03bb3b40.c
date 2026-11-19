
void FUN_03bb3b40(long param_1,long param_2)

{
  undefined8 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  undefined8 local_90;
  long local_88;
  float fStack_80;
  float local_7c;
  undefined4 local_78;
  float local_74;
  float fStack_70;
  float local_6c;
  undefined8 local_68;
  float local_58;
  float fStack_54;
  undefined4 local_50;
  float local_4c;
  float fStack_48;
  undefined4 local_44;
  
  if (*(char *)(param_1 + 0x184) != '\0') {
    return;
  }
  fVar2 = *(float *)(param_1 + 0x114);
  fVar4 = 0.0;
  fVar3 = *(float *)(param_1 + 0x11c);
  local_74 = *(float *)(param_1 + 0x118);
  local_78 = 0;
  local_68 = 0;
  local_7c = *(float *)(param_1 + 0x120);
  uVar1 = *(undefined8 *)(param_2 + 8);
  *(undefined8 **)(param_2 + 8) = &local_90;
  local_74 = -(local_7c * 0.5) - local_74;
  fStack_80 = fVar3 * 0.0;
  local_88 = (ulong)(uint)(fVar2 + fVar3 * 0.5) << 0x20;
  local_6c = local_7c * 0.0;
  local_90 = CONCAT44(local_6c,fVar3);
  fStack_70 = fStack_80;
  (**(code **)(**(long **)PTR_DAT_04bd0c50 + 0x20))
            (*(long **)PTR_DAT_04bd0c50,*(undefined8 *)(param_2 + 0x20),&local_90,param_1 + 0x164,
             param_1 + 0x164);
  *(undefined8 *)(param_2 + 8) = uVar1;
  local_58 = *(float *)(param_1 + 0x11c);
  local_90 = 0x3f19999a3f19999a;
  local_88 = 0x3f8000003f19999a;
  if (0.0 < local_58) {
    fVar2 = (*(float *)(param_1 + 0x124) / *(float *)(param_1 + 0x110)) * local_58;
    do {
      local_44 = 0;
      local_50 = 0;
      fStack_48 = -*(float *)(param_1 + 0x118);
      local_58 = fVar4 + *(float *)(param_1 + 0x114);
      fStack_54 = -(*(float *)(param_1 + 0x118) + *(float *)(param_1 + 0x120));
      local_4c = local_58;
      FUN_038c5944(param_2,&local_4c,&local_58,&local_90,&local_90);
      fVar4 = fVar2 + fVar4;
      local_58 = *(float *)(param_1 + 0x11c);
    } while (fVar4 < local_58);
  }
  local_44 = 0;
  local_50 = 0;
  local_58 = local_58 + *(float *)(param_1 + 0x114);
  fStack_48 = -*(float *)(param_1 + 0x118);
  fStack_54 = -(*(float *)(param_1 + 0x118) + *(float *)(param_1 + 0x120));
  local_4c = local_58;
  FUN_038c5944(param_2,&local_4c,&local_58,&local_90,&local_90);
  fVar2 = *(float *)(param_1 + 0x120);
  if (0.0 < fVar2) {
    fVar4 = 0.0;
    fVar3 = *(float *)(param_1 + 0x128) * fVar2;
    do {
      local_4c = *(float *)(param_1 + 0x114);
      local_44 = 0;
      local_50 = 0;
      fStack_54 = -(fVar4 + *(float *)(param_1 + 0x118));
      local_58 = local_4c + *(float *)(param_1 + 0x11c);
      fStack_48 = fStack_54;
      FUN_038c5944(param_2,&local_4c,&local_58,&local_90,&local_90);
      fVar4 = fVar3 + fVar4;
      fVar2 = *(float *)(param_1 + 0x120);
    } while (fVar4 < fVar2);
  }
  local_4c = *(float *)(param_1 + 0x114);
  local_44 = 0;
  local_50 = 0;
  local_58 = local_4c + *(float *)(param_1 + 0x11c);
  fStack_54 = -(fVar2 + *(float *)(param_1 + 0x118));
  fStack_48 = fStack_54;
  FUN_038c5944(param_2,&local_4c,&local_58,&local_90,&local_90);
  *(undefined1 *)(param_1 + 0x184) = 1;
  return;
}

