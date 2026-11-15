
void FUN_01fca288(float *param_1,uint *param_2)

{
  float *pfVar1;
  int iVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_50 [4];
  undefined8 local_4c;
  undefined8 local_44;
  float local_3c;
  float fStack_38;
  float local_34;
  
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (DAT_05aed670 != 0)) &&
     (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar3 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar2 = FUN_006bd550(*puVar3,0);
    if (((iVar2 == 0x758f7eaf) && (DAT_05aed670 != 0)) &&
       ((*(long *)(DAT_05aed670 + 0x330) != 0 &&
        (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0)))) {
      local_44 = 0;
      local_4c = 0;
      FUN_016e70c0(auStack_50);
      uVar5 = local_44._4_4_;
      pfVar1 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(local_44._4_4_ >> 0x14) & 0xff0));
      fVar6 = (float)(local_44._4_4_ & 0xffffff) * 5.9604645e-08;
      fVar7 = *pfVar1 + fVar6 * pfVar1[1];
      fVar6 = pfVar1[2] + fVar6 * pfVar1[3];
      fVar8 = fVar7 * 0.0;
      local_3c = (float)local_4c + fVar8 * 0.0 + fVar6 * 0.0 + (fVar7 + 0.0) * -2.55;
      fStack_38 = local_4c._4_4_ + (fVar8 * 0.0 + 1.0) * 0.0 + fVar6 * 0.0 * 0.0 + fVar8 * -2.55;
      local_34 = (float)local_44 + (fVar6 * 0.0 * 0.0 - fVar7 * 0.0) + fVar6 * -2.55;
      fVar6 = (float)FUN_016e026c(0,&local_3c,0,0);
      goto LAB_01fca448;
    }
  }
  uVar5 = 0x80000000;
  lVar4 = *(long *)PTR_DAT_04bb59d8;
  local_3c = ((float)*(int *)(lVar4 + 0x50) * 5.0 + (float)*(int *)(lVar4 + 0x60) * 5.0 + 5.0) * 0.5
  ;
  local_34 = ((float)*(int *)(lVar4 + 0x54) * 5.0 + (float)*(int *)(lVar4 + 100) * 5.0 + 5.0) * 0.5;
  fVar6 = 0.0;
LAB_01fca448:
  *param_1 = local_3c;
  param_1[1] = fVar6;
  param_1[2] = local_34;
  *param_2 = uVar5;
  return;
}

