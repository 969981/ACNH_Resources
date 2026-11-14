
undefined8 FUN_0173654c(float param_1,float *param_2)

{
  undefined *puVar1;
  ulong uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 local_48;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  
  puVar1 = PTR_DAT_04bb4848;
  if (*(long *)PTR_DAT_04bb4848 == 0) {
    return 0;
  }
  local_48 = 0;
  local_40 = 0x40a0000000000000;
  local_38 = DAT_04c9a0c8;
  uStack_34 = DAT_04c9a0c8;
  uVar2 = FUN_022924b4(*(long *)PTR_DAT_04bb4848,&local_48,0);
  if (param_1 <= 0.0) {
    if ((uVar2 & 1) != 0) {
      fVar3 = *param_2;
      fVar5 = param_2[2];
      if (fVar3 <= fVar5) {
        fVar4 = param_2[1];
        fVar6 = param_2[3];
        if (fVar4 <= fVar6) {
          if ((((fVar3 <= (float)local_48) && ((float)local_48 <= fVar5)) &&
              (fVar4 <= (float)local_40)) && ((float)local_40 <= fVar6)) {
            return 1;
          }
          if ((float)local_48 <= fVar5) {
            fVar5 = (float)local_48;
          }
          if (fVar3 <= (float)local_48) {
            fVar3 = fVar5;
          }
          if ((float)local_40 <= fVar6) {
            fVar6 = (float)local_40;
          }
          fVar5 = local_40._4_4_ * 0.999 * 0.98;
          if (fVar4 <= (float)local_40) {
            fVar4 = fVar6;
          }
          if (((float)local_40 - fVar4) * ((float)local_40 - fVar4) +
              ((float)local_48 - fVar3) * ((float)local_48 - fVar3) <= fVar5 * fVar5) {
            return 1;
          }
        }
      }
    }
    uVar2 = FUN_022924b4(*(undefined8 *)puVar1,&local_48,1);
    if ((uVar2 & 1) != 0) {
      fVar3 = *param_2;
      fVar5 = param_2[2];
      if (fVar3 <= fVar5) {
        fVar4 = param_2[1];
        fVar6 = param_2[3];
        if (fVar4 <= fVar6) {
          if (((fVar3 <= (float)local_48) && ((float)local_48 <= fVar5)) &&
             ((fVar4 <= (float)local_40 && ((float)local_40 <= fVar6)))) {
            return 1;
          }
          if ((float)local_48 <= fVar5) {
            fVar5 = (float)local_48;
          }
          if (fVar3 <= (float)local_48) {
            fVar3 = fVar5;
          }
          if ((float)local_40 <= fVar6) {
            fVar6 = (float)local_40;
          }
          fVar5 = local_40._4_4_ * 0.999 * 0.98;
          if (fVar4 <= (float)local_40) {
            fVar4 = fVar6;
          }
          if (((float)local_40 - fVar4) * ((float)local_40 - fVar4) +
              ((float)local_48 - fVar3) * ((float)local_48 - fVar3) <= fVar5 * fVar5) {
            return 1;
          }
        }
      }
    }
    uVar2 = FUN_022924b4(*(undefined8 *)puVar1,&local_48,2);
    if ((uVar2 & 1) != 0) {
      fVar3 = *param_2;
      fVar5 = param_2[2];
      if (fVar3 <= fVar5) {
        fVar4 = param_2[1];
        fVar6 = param_2[3];
        if (fVar4 <= fVar6) {
          if (((fVar3 <= (float)local_48) && ((float)local_48 <= fVar5)) &&
             ((fVar4 <= (float)local_40 && ((float)local_40 <= fVar6)))) {
            return 1;
          }
          if ((float)local_48 <= fVar5) {
            fVar5 = (float)local_48;
          }
          if (fVar3 <= (float)local_48) {
            fVar3 = fVar5;
          }
          if ((float)local_40 <= fVar6) {
            fVar6 = (float)local_40;
          }
          fVar5 = local_40._4_4_ * 0.999 * 0.98;
          if (fVar4 <= (float)local_40) {
            fVar4 = fVar6;
          }
          if (((float)local_40 - fVar4) * ((float)local_40 - fVar4) +
              ((float)local_48 - fVar3) * ((float)local_48 - fVar3) <= fVar5 * fVar5) {
            return 1;
          }
        }
      }
    }
    uVar2 = FUN_022924b4(*(undefined8 *)puVar1,&local_48,3);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    fVar3 = *param_2;
    fVar5 = param_2[2];
    if (fVar5 < fVar3) {
      return 0;
    }
    fVar4 = param_2[1];
    fVar6 = param_2[3];
    if (fVar6 < fVar4) {
      return 0;
    }
    fVar7 = local_40._4_4_;
  }
  else {
    if ((uVar2 & 1) != 0) {
      fVar3 = *param_2;
      fVar5 = param_2[2];
      if (fVar3 <= fVar5) {
        fVar4 = param_2[1];
        fVar6 = param_2[3];
        if (fVar4 <= fVar6) {
          fVar7 = param_1;
          if (local_40._4_4_ <= param_1) {
            fVar7 = local_40._4_4_;
          }
          if ((((fVar3 <= (float)local_48) && ((float)local_48 <= fVar5)) &&
              (fVar4 <= (float)local_40)) && ((float)local_40 <= fVar6)) {
            return 1;
          }
          if ((float)local_48 <= fVar5) {
            fVar5 = (float)local_48;
          }
          if (fVar3 <= (float)local_48) {
            fVar3 = fVar5;
          }
          if ((float)local_40 <= fVar6) {
            fVar6 = (float)local_40;
          }
          fVar5 = fVar7 * 0.999 * 0.98;
          if (fVar4 <= (float)local_40) {
            fVar4 = fVar6;
          }
          if (((float)local_40 - fVar4) * ((float)local_40 - fVar4) +
              ((float)local_48 - fVar3) * ((float)local_48 - fVar3) <= fVar5 * fVar5) {
            return 1;
          }
        }
      }
    }
    uVar2 = FUN_022924b4(*(undefined8 *)puVar1,&local_48,1);
    if ((uVar2 & 1) != 0) {
      fVar3 = *param_2;
      fVar5 = param_2[2];
      if (fVar3 <= fVar5) {
        fVar4 = param_2[1];
        fVar6 = param_2[3];
        if (fVar4 <= fVar6) {
          fVar7 = param_1;
          if (local_40._4_4_ <= param_1) {
            fVar7 = local_40._4_4_;
          }
          if (((fVar3 <= (float)local_48) && ((float)local_48 <= fVar5)) &&
             ((fVar4 <= (float)local_40 && ((float)local_40 <= fVar6)))) {
            return 1;
          }
          if ((float)local_48 <= fVar5) {
            fVar5 = (float)local_48;
          }
          if (fVar3 <= (float)local_48) {
            fVar3 = fVar5;
          }
          if ((float)local_40 <= fVar6) {
            fVar6 = (float)local_40;
          }
          fVar5 = fVar7 * 0.999 * 0.98;
          if (fVar4 <= (float)local_40) {
            fVar4 = fVar6;
          }
          if (((float)local_40 - fVar4) * ((float)local_40 - fVar4) +
              ((float)local_48 - fVar3) * ((float)local_48 - fVar3) <= fVar5 * fVar5) {
            return 1;
          }
        }
      }
    }
    uVar2 = FUN_022924b4(*(undefined8 *)puVar1,&local_48,2);
    if ((uVar2 & 1) != 0) {
      fVar3 = *param_2;
      fVar5 = param_2[2];
      if (fVar3 <= fVar5) {
        fVar4 = param_2[1];
        fVar6 = param_2[3];
        if (fVar4 <= fVar6) {
          fVar7 = param_1;
          if (local_40._4_4_ <= param_1) {
            fVar7 = local_40._4_4_;
          }
          if (((fVar3 <= (float)local_48) && ((float)local_48 <= fVar5)) &&
             ((fVar4 <= (float)local_40 && ((float)local_40 <= fVar6)))) {
            return 1;
          }
          if ((float)local_48 <= fVar5) {
            fVar5 = (float)local_48;
          }
          if (fVar3 <= (float)local_48) {
            fVar3 = fVar5;
          }
          if ((float)local_40 <= fVar6) {
            fVar6 = (float)local_40;
          }
          fVar5 = fVar7 * 0.999 * 0.98;
          if (fVar4 <= (float)local_40) {
            fVar4 = fVar6;
          }
          if (((float)local_40 - fVar4) * ((float)local_40 - fVar4) +
              ((float)local_48 - fVar3) * ((float)local_48 - fVar3) <= fVar5 * fVar5) {
            return 1;
          }
        }
      }
    }
    uVar2 = FUN_022924b4(*(undefined8 *)puVar1,&local_48,3);
    if ((uVar2 & 1) == 0) {
      return 0;
    }
    fVar3 = *param_2;
    fVar5 = param_2[2];
    if (fVar5 < fVar3) {
      return 0;
    }
    fVar4 = param_2[1];
    fVar6 = param_2[3];
    if (fVar6 < fVar4) {
      return 0;
    }
    fVar7 = param_1;
    if (local_40._4_4_ <= param_1) {
      fVar7 = local_40._4_4_;
    }
  }
  if (((((float)local_48 < fVar3) || (fVar5 < (float)local_48)) || ((float)local_40 < fVar4)) ||
     (fVar6 < (float)local_40)) {
    if ((float)local_48 <= fVar5) {
      fVar5 = (float)local_48;
    }
    if (fVar3 <= (float)local_48) {
      fVar3 = fVar5;
    }
    if ((float)local_40 <= fVar6) {
      fVar6 = (float)local_40;
    }
    fVar5 = fVar7 * 0.999 * 0.98;
    if (fVar4 <= (float)local_40) {
      fVar4 = fVar6;
    }
    if (fVar5 * fVar5 <
        ((float)local_40 - fVar4) * ((float)local_40 - fVar4) +
        ((float)local_48 - fVar3) * ((float)local_48 - fVar3)) {
      return 0;
    }
  }
  return 1;
}

