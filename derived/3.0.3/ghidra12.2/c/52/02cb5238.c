
void FUN_02cb5238(float param_1,float param_2,float param_3,float param_4,long param_5,long *param_6
                 ,long param_7,float *param_8)

{
  undefined *puVar1;
  ulong uVar2;
  float *pfVar3;
  long lVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float unaff_s12;
  float fVar9;
  float fVar10;
  float local_7c;
  float fStack_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  
  fVar6 = param_1;
  if (*(long *)PTR_DAT_04bb2200 != 0) {
    FUN_01664580(*(long *)PTR_DAT_04bb2200,&local_70,&local_7c,param_7,0);
    fVar6 = -((local_70._4_4_ / 360.0) * 540.0);
    unaff_s12 = -(((float)local_70 / 640.0) * 960.0);
    if (0.0 <= local_7c) {
      fVar6 = (local_70._4_4_ / 360.0) * 540.0;
      unaff_s12 = ((float)local_70 / 640.0) * 960.0;
    }
  }
  local_70 = (undefined *)((ulong)local_70 & 0xffffffff00000000);
  fVar7 = fVar6;
  if (fVar6 <= param_4) {
    fVar7 = param_4;
  }
  if (param_3 <= *(float *)(param_7 + 8)) {
    fVar7 = fVar6;
  }
  uVar2 = (**(code **)(*(long *)(*(long *)(param_5 + 0x210) + 0x478) + 0x118))
                    (*(long *)(param_5 + 0x210) + 0x478,&local_70);
  if ((uVar2 & 1) == 0) {
    pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_5 + 0x210) + 0x628) + 0xf0))
                                (*(long *)(param_5 + 0x210) + 0x628);
    lVar4 = *(long *)(param_5 + 0x210);
    if (*pfVar3 <= param_2) {
      pfVar3 = (float *)(**(code **)(*(long *)(lVar4 + 0x658) + 0xf0))(lVar4 + 0x658);
      lVar4 = *(long *)(param_5 + 0x210);
      if (param_2 < *pfVar3) {
        pfVar3 = (float *)(**(code **)(*(long *)(lVar4 + 0x5c8) + 0xf0))(lVar4 + 0x5c8);
        fVar6 = *pfVar3;
        pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_5 + 0x210) + 0x5f8) + 0xf0))
                                    (*(long *)(param_5 + 0x210) + 0x5f8);
        fVar8 = *pfVar3;
        pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_5 + 0x210) + 0x628) + 0xf0))
                                    (*(long *)(param_5 + 0x210) + 0x628);
        param_2 = param_2 - *pfVar3;
        pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_5 + 0x210) + 0x658) + 0xf0))
                                    (*(long *)(param_5 + 0x210) + 0x658);
        fVar9 = *pfVar3;
        lVar4 = *(long *)(param_5 + 0x210) + 0x628;
        lVar5 = *(long *)(*(long *)(param_5 + 0x210) + 0x628);
LAB_02cb55cc:
        pfVar3 = (float *)(**(code **)(lVar5 + 0xf0))(lVar4);
        fVar6 = fVar6 + (param_2 / (fVar9 - *pfVar3)) * (fVar8 - fVar6);
        goto LAB_02cb5498;
      }
      lVar5 = lVar4 + 0x5f8;
      lVar4 = *(long *)(lVar4 + 0x5f8);
    }
    else {
      lVar5 = lVar4 + 0x5c8;
      lVar4 = *(long *)(lVar4 + 0x5c8);
    }
  }
  else {
    fVar6 = -param_1;
    if (0.0 <= param_1) {
      fVar6 = param_1;
    }
    pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_5 + 0x210) + 0x538) + 0xf0))
                                (*(long *)(param_5 + 0x210) + 0x538);
    if (*pfVar3 <= fVar6) {
      lVar4 = *(long *)(param_5 + 0x210);
      if (0.0 <= param_1) {
        pfVar3 = (float *)(**(code **)(*(long *)(lVar4 + 0x568) + 0xf0))(lVar4 + 0x568);
        lVar4 = *(long *)(param_5 + 0x210);
        if (param_1 <= *pfVar3) {
          pfVar3 = (float *)(**(code **)(*(long *)(lVar4 + 0x4a8) + 0xf0))(lVar4 + 0x4a8);
          fVar6 = *pfVar3;
          pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_5 + 0x210) + 0x4d8) + 0xf0))
                                      (*(long *)(param_5 + 0x210) + 0x4d8);
          fVar9 = *pfVar3;
          pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_5 + 0x210) + 0x538) + 0xf0))
                                      (*(long *)(param_5 + 0x210) + 0x538);
          fVar8 = *pfVar3;
          pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_5 + 0x210) + 0x568) + 0xf0))
                                      (*(long *)(param_5 + 0x210) + 0x568);
          fVar10 = *pfVar3;
          pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_5 + 0x210) + 0x538) + 0xf0))
                                      (*(long *)(param_5 + 0x210) + 0x538);
          fVar6 = fVar6 + ((param_1 - fVar8) / (fVar10 - *pfVar3)) * (fVar9 - fVar6);
          goto LAB_02cb5498;
        }
        lVar5 = lVar4 + 0x4d8;
        lVar4 = *(long *)(lVar4 + 0x4d8);
      }
      else {
        pfVar3 = (float *)(**(code **)(*(long *)(lVar4 + 0x598) + 0xf0))(lVar4 + 0x598);
        lVar4 = *(long *)(param_5 + 0x210);
        if (-*pfVar3 <= param_1) {
          pfVar3 = (float *)(**(code **)(*(long *)(lVar4 + 0x4a8) + 0xf0))(lVar4 + 0x4a8);
          fVar6 = *pfVar3;
          pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_5 + 0x210) + 0x508) + 0xf0))
                                      (*(long *)(param_5 + 0x210) + 0x508);
          fVar8 = *pfVar3;
          pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_5 + 0x210) + 0x538) + 0xf0))
                                      (*(long *)(param_5 + 0x210) + 0x538);
          param_2 = -param_1 - *pfVar3;
          pfVar3 = (float *)(**(code **)(*(long *)(*(long *)(param_5 + 0x210) + 0x598) + 0xf0))
                                      (*(long *)(param_5 + 0x210) + 0x598);
          fVar9 = *pfVar3;
          lVar4 = *(long *)(param_5 + 0x210) + 0x538;
          lVar5 = *(long *)(*(long *)(param_5 + 0x210) + 0x538);
          goto LAB_02cb55cc;
        }
        lVar5 = lVar4 + 0x508;
        lVar4 = *(long *)(lVar4 + 0x508);
      }
    }
    else {
      lVar5 = *(long *)(param_5 + 0x210) + 0x4a8;
      lVar4 = *(long *)(*(long *)(param_5 + 0x210) + 0x4a8);
    }
  }
  pfVar3 = (float *)(**(code **)(lVar4 + 0xf0))(lVar5);
  fVar6 = *pfVar3;
LAB_02cb5498:
  if (param_8 != (float *)0x0) {
    fVar7 = fVar7 + param_8[1];
    unaff_s12 = unaff_s12 + *param_8;
  }
  local_74 = 0;
  fVar8 = fVar6;
  if (DAT_056659a0 <= fVar6) {
    fVar8 = DAT_056659a0;
  }
  puVar1 = PTR_DAT_04bc0cb8 + 0x10;
  local_68 = 8;
  if (NAN(DAT_056659a0)) {
    fVar8 = fVar6;
  }
  local_7c = unaff_s12;
  fStack_78 = fVar7;
  local_70 = puVar1;
  (**(code **)(*param_6 + 0x18))(param_6,&local_70);
  (**(code **)(param_6[3] + 0x98))(param_6[1],&local_7c);
  local_68 = 10;
  local_7c = fVar8;
  fStack_78 = fVar8;
  local_70 = puVar1;
  (**(code **)(*param_6 + 0x18))(param_6,&local_70);
  (**(code **)(param_6[3] + 0xb8))(param_6[1],&local_7c);
  return;
}

