
void FUN_011f0810(long param_1,undefined2 *param_2,float *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined8 local_b0;
  undefined *puStack_a8;
  uint local_a0;
  uint uStack_9c;
  undefined *local_98;
  uint local_90;
  uint uStack_8c;
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined8 local_78;
  undefined **local_70;
  undefined **local_68;
  undefined *local_60;
  uint local_58;
  uint local_54;
  undefined1 local_44 [4];
  
  lVar6 = *(long *)PTR_DAT_04bbbc68;
  if (((((lVar6 != 0) && (*(long *)(lVar6 + 0xb0) != 0)) &&
       (*(long *)(*(long *)(lVar6 + 0xb0) + 8) != 0)) &&
      ((*(long *)(lVar6 + 0x488) != 0 && (*(long *)(*(long *)(lVar6 + 0x488) + 8) != 0)))) &&
     ((*(long *)(lVar6 + 0x2b0) != 0 && (*(long *)(*(long *)(lVar6 + 0x2b0) + 8) != 0)))) {
    uVar4 = FUN_0277d6c4(param_2);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar6 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar6 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar6 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      *(undefined2 *)(param_1 + 0xc) = *param_2;
      *(undefined1 *)(param_1 + 0xe) = *(undefined1 *)(param_2 + 1);
      *(undefined1 *)(param_1 + 0xf) = *(undefined1 *)((long)param_2 + 3);
      *(undefined4 *)(param_1 + 0x10) = *(undefined4 *)(param_2 + 2);
      goto LAB_011f08e0;
    }
  }
  local_b0 = (undefined *)0xea60;
  FUN_0277d4ac(&local_b0);
  *(undefined4 *)(param_1 + 0xc) = (undefined4)local_b0;
  *(undefined4 *)(param_1 + 0x10) = local_b0._4_4_;
LAB_011f08e0:
  *(float *)(param_1 + 0x14) = *param_3;
  *(float *)(param_1 + 0x18) = param_3[1];
  *(float *)(param_1 + 0x1c) = param_3[2];
  uVar2 = (int)((float)(int)*param_3 / 5.0) - (uint)(*param_3 < 0.0);
  uVar4 = uVar2 & 0xfffffffe;
  uVar3 = (int)((float)(int)param_3[2] / 5.0) - (uint)(param_3[2] < 0.0);
  uVar1 = uVar3 & 0xfffffffe;
  FUN_0124c030(auStack_88,param_1 + 0xc);
  iVar5 = FUN_0123db50(auStack_80,local_78);
  if (iVar5 == 0x21) {
    local_44[0] = true;
  }
  else {
    iVar5 = FUN_0123db50(auStack_80,local_78);
    local_44[0] = iVar5 == 0x22;
  }
  uStack_8c = uVar3 | 1;
  local_90 = uVar2 | 1;
  uVar2 = uStack_8c + 1;
  local_b0 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_a8 = PTR_DAT_04bb2010 + 0x10;
  local_70 = &puStack_a8;
  local_68 = &local_98;
  if (uVar2 == uVar1) {
    fVar8 = -500.0;
  }
  else {
    fVar8 = -500.0;
    local_a0 = uVar4;
    uStack_9c = uVar1;
    local_98 = puStack_a8;
    local_60 = puStack_a8;
    local_58 = uVar4;
    local_54 = uVar1;
    do {
      fVar7 = (float)FUN_013866c0(&local_60,local_44);
      if (fVar7 <= fVar8) {
        fVar7 = fVar8;
      }
      fVar8 = fVar7;
      if ((int)local_58 < *(int *)(local_68 + 1)) {
        local_58 = local_58 + 1;
      }
      else {
        local_54 = local_54 + 1;
        local_58 = *(uint *)(local_70 + 1);
      }
    } while (uVar4 != local_58 || uVar2 != local_54);
  }
  *(float *)(param_1 + 0x18) = fVar8;
  return;
}

