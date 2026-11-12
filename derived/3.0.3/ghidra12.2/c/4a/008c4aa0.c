
void FUN_008c4aa0(undefined1 param_1 [16],float param_2,float param_3,long param_4,uint param_5,
                 undefined4 param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined8 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  
  if (*(char *)(param_4 + 0x37fac) == '\0') {
    *(undefined1 *)(param_4 + 0x37fad) = 0;
  }
  fVar12 = (float)FUN_008c4e0c(param_4);
  *(uint *)(param_4 + 0x307e8) = param_5;
  *(undefined4 *)(param_4 + 0x307f0) = param_6;
  if (param_5 == 0x62) {
    (**(code **)(*(long *)(param_4 + 0x30708) + 0x18))((long *)(param_4 + 0x30708));
    uVar5 = FUN_006bd550(*(undefined8 *)(param_4 + 0x30710),0);
    iVar1 = *(int *)(param_4 + 0x305b0);
    if (iVar1 == 0) goto LAB_008c4bb8;
    uVar6 = 0;
    iVar11 = iVar1 + -1;
    if (iVar11 == 0 || iVar1 < 1) {
      lVar8 = *(long *)(param_4 + 0x305b8);
    }
    else {
      lVar8 = *(long *)(param_4 + 0x305b8);
      do {
        iVar1 = iVar11 + uVar6;
        if (iVar1 < 0 != SCARRY4(iVar11,uVar6)) {
          iVar1 = iVar1 + 1;
        }
        uVar10 = iVar1 >> 1;
        uVar2 = *(uint *)(*(long *)(lVar8 + (long)(int)uVar10 * 8) + 0x18);
        if (uVar2 == uVar5) goto joined_r0x008c4ba8;
        if (uVar2 < uVar5) {
          uVar6 = uVar10 + 1;
        }
        else {
          iVar11 = uVar10 - 1;
        }
      } while ((int)uVar6 < iVar11);
    }
    uVar10 = uVar6;
    if (*(uint *)(*(long *)(lVar8 + (long)(int)uVar6 * 8) + 0x18) != uVar5) goto LAB_008c4bb8;
joined_r0x008c4ba8:
    if (((int)uVar10 < 0) || (lVar8 = **(long **)(lVar8 + (ulong)uVar10 * 8), lVar8 == 0))
    goto LAB_008c4bb8;
  }
  else {
LAB_008c4bb8:
    local_a0 = CONCAT44(local_a0._4_4_,param_5);
    if (param_5 < *(uint *)(param_4 + 0x548)) {
      lVar8 = *(long *)(*(long *)(param_4 + 0x550) + (long)(int)param_5 * 8);
    }
    else {
      lVar8 = 0;
    }
  }
  uVar5 = *(uint *)(param_4 + 0x307f0);
  if (uVar5 == 0x2a) {
    (**(code **)(*(long *)(param_4 + 0x30740) + 0x18))((long *)(param_4 + 0x30740));
    uVar6 = FUN_006bd550(*(undefined8 *)(param_4 + 0x30748),0);
    iVar1 = *(int *)(param_4 + 0x305f0);
    if (iVar1 != 0) {
      uVar10 = 0;
      iVar11 = iVar1 + -1;
      if (iVar11 == 0 || iVar1 < 1) {
        lVar9 = *(long *)(param_4 + 0x305f8);
      }
      else {
        lVar9 = *(long *)(param_4 + 0x305f8);
        do {
          iVar1 = iVar11 + uVar10;
          if (iVar1 < 0 != SCARRY4(iVar11,uVar10)) {
            iVar1 = iVar1 + 1;
          }
          uVar2 = iVar1 >> 1;
          uVar3 = *(uint *)(*(long *)(lVar9 + (long)(int)uVar2 * 8) + 0x18);
          if (uVar3 == uVar6) goto joined_r0x008c4c78;
          if (uVar3 < uVar6) {
            uVar10 = uVar2 + 1;
          }
          else {
            iVar11 = uVar2 - 1;
          }
        } while ((int)uVar10 < iVar11);
      }
      uVar2 = uVar10;
      if (*(uint *)(*(long *)(lVar9 + (long)(int)uVar10 * 8) + 0x18) == uVar6) {
joined_r0x008c4c78:
        if ((-1 < (int)uVar2) && (lVar9 = **(long **)(lVar9 + (ulong)uVar2 * 8), lVar9 != 0))
        goto LAB_008c4cb0;
      }
    }
  }
  local_a0 = CONCAT44(local_a0._4_4_,uVar5);
  if (uVar5 < *(uint *)(param_4 + 0x23028)) {
    lVar9 = *(long *)(*(long *)(param_4 + 0x23030) + (long)(int)uVar5 * 8);
  }
  else {
    lVar9 = 0;
  }
LAB_008c4cb0:
  FUN_008c0a74(&local_a0,lVar8);
  puVar7 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0xf8) + 0xf0))((long *)(lVar9 + 0xf8));
  uVar4 = *puVar7;
  *(undefined4 *)(param_4 + 0x30950) = 0;
  *(undefined4 *)(param_4 + 0x30954) = uVar4;
  *(undefined8 *)(param_4 + 0x308d0) = *(undefined8 *)(param_4 + 0x30890);
  *(undefined4 *)(param_4 + 0x308dc) = *(undefined4 *)(param_4 + 0x3089c);
  *(undefined4 *)(param_4 + 0x308e0) = *(undefined4 *)(param_4 + 0x308a0);
  *(undefined4 *)(param_4 + 0x308d8) = *(undefined4 *)(param_4 + 0x30898);
  *(undefined4 *)(param_4 + 0x308ec) = *(undefined4 *)(param_4 + 0x308ac);
  *(undefined4 *)(param_4 + 0x308f0) = *(undefined4 *)(param_4 + 0x308b0);
  *(undefined8 *)(param_4 + 0x308e4) = *(undefined8 *)(param_4 + 0x308a4);
  *(undefined4 *)(param_4 + 0x308f4) = *(undefined4 *)(param_4 + 0x308b4);
  *(undefined8 *)(param_4 + 0x308f8) = *(undefined8 *)(param_4 + 0x308b8);
  *(undefined4 *)(param_4 + 0x30900) = *(undefined4 *)(param_4 + 0x308c0);
  *(undefined8 *)(param_4 + 0x30904) = *(undefined8 *)(param_4 + 0x308c4);
  *(undefined8 *)(param_4 + 0x30910) = local_a0;
  *(undefined4 *)(param_4 + 0x3090c) = *(undefined4 *)(param_4 + 0x308cc);
  *(undefined4 *)(param_4 + 0x30918) = local_98;
  *(undefined4 *)(param_4 + 0x3091c) = local_94;
  *(undefined4 *)(param_4 + 0x30920) = uStack_90;
  *(undefined8 *)(param_4 + 0x30854) = *(undefined8 *)(param_4 + 0x2a8);
  local_a0 = *(undefined8 *)(param_4 + 0x2a8);
  *(undefined4 *)(param_4 + 0x30924) = local_8c;
  *(undefined4 *)(param_4 + 0x30928) = uStack_88;
  local_98 = *(undefined4 *)(param_4 + 0x2b0);
  *(undefined4 *)(param_4 + 0x3092c) = local_84;
  *(undefined4 *)(param_4 + 0x30930) = uStack_80;
  *(undefined4 *)(param_4 + 0x30934) = local_7c;
  *(undefined4 *)(param_4 + 0x30938) = uStack_78;
  *(undefined4 *)(param_4 + 0x3093c) = local_74;
  *(undefined4 *)(param_4 + 0x30940) = uStack_70;
  *(undefined4 *)(param_4 + 0x30944) = local_6c;
  *(undefined4 *)(param_4 + 0x30948) = uStack_68;
  *(undefined4 *)(param_4 + 0x3094c) = local_64;
  *(undefined4 *)(param_4 + 0x3085c) = *(undefined4 *)(param_4 + 0x2b0);
  fVar13 = *(float *)(param_4 + 0x30884);
  if (((!NAN(fVar13)) && (!NAN(*(float *)(param_4 + 0x30888)))) &&
     (fVar14 = *(float *)(param_4 + 0x3088c), !NAN(fVar14))) {
    *(undefined8 *)(param_4 + 0x30884) = 0x7fc000007fc00000;
    *(undefined4 *)(param_4 + 0x3088c) = 0x7fc00000;
    fVar12 = fVar13;
    param_2 = *(float *)(param_4 + 0x30888);
    param_3 = fVar14;
  }
  FUN_008c50d0(fVar12,param_2,param_3,param_4,&local_a0);
  *(undefined4 *)(param_4 + 0x30968) = 2;
  return;
}

