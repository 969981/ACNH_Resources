
void FUN_030c03e0(long param_1,int param_2,undefined8 param_3)

{
  long lVar1;
  bool bVar2;
  bool bVar3;
  undefined4 uVar4;
  long *plVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_50;
  undefined4 local_48;
  
  lVar1 = DAT_05739190;
  if (param_2 != 0) goto LAB_030c057c;
  if ((DAT_05739190 != 0) && (*(char *)(DAT_05739190 + 0x429) != '\0')) {
    local_50 = (undefined *)((ulong)local_50 & 0xffffffff00000000);
    *(byte *)(param_1 + 0x2c4) = *(byte *)(param_1 + 0x2c4) | 1;
    if ((*(byte *)(lVar1 + 0x429) & 1) != 0) {
      *(byte *)(lVar1 + 0x429) = *(byte *)(lVar1 + 0x429) & 0xfe;
    }
  }
  if (*(char *)(param_1 + 0x317) == '\0') {
    plVar5 = *(long **)(param_1 + 0x1d0);
LAB_030c0474:
    local_50 = PTR_DAT_04bc0cb8 + 0x10;
    local_48 = 0x29;
    (**(code **)(*plVar5 + 0x20))(plVar5,&local_50);
    (**(code **)(plVar5[3] + 0x2b0))(&local_50,plVar5[1]);
  }
  else if (((*(long *)(param_1 + 0x218) != 0) &&
           (plVar5 = *(long **)(*(long *)(param_1 + 0x218) + 0x14c8), plVar5 != (long *)0x0)) &&
          (plVar5[1] != 0)) goto LAB_030c0474;
  if ((*(float *)(lVar1 + 0x39c) == 0.0) && (*(float *)(lVar1 + 0x3a0) == 0.0)) {
    if (*(long *)(param_1 + 0x3c8) != 0) {
      *(undefined4 *)(*(long *)(param_1 + 0x3c8) + 0x40) = 0;
    }
  }
  else {
    fVar8 = local_50._4_4_ - *(float *)(lVar1 + 0x3a0);
    fVar6 = (float)local_50 - *(float *)(lVar1 + 0x39c);
    fVar7 = -fVar6;
    if (0.0 <= fVar6) {
      fVar7 = fVar6;
    }
    fVar6 = -fVar8;
    if (0.0 <= fVar8) {
      fVar6 = fVar8;
    }
    if (fVar7 != fVar6) {
      if (*(char *)(param_1 + 0x316) == '\0') {
code_r0x030c0550:
        if (fVar7 <= fVar6) {
          uVar4 = 1;
        }
        else {
          uVar4 = 2;
        }
      }
      else {
        bVar2 = false;
        bVar3 = true;
        if (-1.1920929e-07 <= fVar7) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar7)) {
            bVar2 = fVar7 == 1.1920929e-07;
            bVar3 = 1.1920929e-07 <= fVar7;
          }
        }
        if (!bVar3 || bVar2) goto code_r0x030c0550;
        bVar2 = false;
        bVar3 = true;
        if (-1.1920929e-07 <= fVar6) {
          bVar2 = false;
          bVar3 = true;
          if (!NAN(fVar6)) {
            bVar2 = fVar6 == 1.1920929e-07;
            bVar3 = 1.1920929e-07 <= fVar6;
          }
        }
        if (!bVar3 || bVar2) goto code_r0x030c0550;
        uVar4 = 3;
      }
      if (*(long *)(param_1 + 0x3c8) != 0) {
        *(undefined4 *)(*(long *)(param_1 + 0x3c8) + 0x40) = uVar4;
      }
    }
  }
  *(float *)(lVar1 + 0x39c) = (float)local_50;
  *(float *)(lVar1 + 0x3a0) = local_50._4_4_;
LAB_030c057c:
  FUN_03d85790(param_1,param_2,param_3);
  if (param_2 == 1) {
    plVar5 = *(long **)(param_1 + 0x390);
    if (plVar5[1] != 0) {
      local_50 = PTR_DAT_04bc4e68 + 0x10;
      local_48 = 6;
      (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
      (**(code **)(plVar5[3] + 0x1b8))(plVar5[1]);
    }
  }
  else if ((param_2 == 0) && (plVar5 = *(long **)(param_1 + 0x390), plVar5[1] != 0)) {
    local_50 = PTR_DAT_04bc4f00 + 0x10;
    local_48 = 7;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
    (**(code **)(plVar5[3] + 0x88))(0,plVar5[1]);
    plVar5 = *(long **)(param_1 + 0x390);
    local_50 = PTR_DAT_04bc4e68 + 0x10;
    local_48 = 1;
    (**(code **)(*plVar5 + 0x18))(plVar5,&local_50);
    (**(code **)(plVar5[3] + 400))(0x3f800000,plVar5[1]);
  }
  return;
}

