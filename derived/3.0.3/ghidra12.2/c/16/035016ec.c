
int FUN_035016ec(long param_1,long param_2,uint param_3)

{
  long lVar1;
  byte bVar2;
  int iVar3;
  ulong uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  undefined8 uVar8;
  undefined *local_40;
  undefined4 local_38;
  int local_14;
  
  plVar7 = *(long **)(*(long *)(param_2 + 0x2f0) + (ulong)(1 < *(uint *)(param_2 + 0x2e8)) * 8);
  if (plVar7 == (long *)0x0) goto LAB_035018ac;
  if ((int)param_3 < 0) goto LAB_0350186c;
  iVar3 = *(int *)(param_1 + 0x1ce20);
  if (iVar3 - 3U < 2) {
    uVar5 = 10;
    goto LAB_035017bc;
  }
  local_40 = (undefined *)CONCAT44(local_40._4_4_,iVar3);
  uVar5 = 0;
  if (DAT_0538adc8 == 0) goto LAB_035017bc;
  if (*(long *)(DAT_0538adc8 + 0x68) == 0) {
switchD_03501778_default:
    uVar5 = 0;
    goto LAB_035017bc;
  }
  switch(iVar3) {
  case 0:
    uVar5 = *(uint *)(DAT_0538adc8 + 0x170);
    break;
  case 1:
    uVar5 = *(uint *)(DAT_0538adc8 + 0x180);
    break;
  case 2:
    lVar6 = *(long *)(DAT_0538adc8 + 0x1b8);
    uVar5 = *(uint *)(DAT_0538adc8 + 0x1b0);
    goto LAB_035017b4;
  case 3:
    uVar5 = *(uint *)(DAT_0538adc8 + 0x610) &
            ((int)*(uint *)(DAT_0538adc8 + 0x610) >> 0x1f ^ 0xffffffffU);
    break;
  case 4:
    lVar6 = *(long *)(DAT_0538adc8 + 0x1e0);
    uVar5 = *(uint *)(DAT_0538adc8 + 0x1d8);
LAB_035017b4:
    if (lVar6 == 0) {
      uVar5 = 0xffffffff;
    }
    break;
  default:
    goto switchD_03501778_default;
  }
LAB_035017bc:
  if ((int)param_3 < (int)uVar5) {
    lVar6 = param_1 + 0x1ce28 + (ulong)param_3 * 0x18;
    if (0x20 < param_3) {
      lVar6 = param_1 + 0x1ce28;
    }
    lVar1 = lVar6 + 8;
    uVar4 = FUN_01d77c78(lVar1);
    if ((uVar4 & 1) == 0) {
      local_40 = PTR_DAT_04bc4f00 + 0x10;
      local_38 = 0x14;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_40);
      (**(code **)(plVar7[3] + 0x158))(0x3f800000,plVar7[1]);
      iVar3 = 2;
    }
    else {
      uVar4 = FUN_01d77c78(lVar1);
      if (((uVar4 & 1) != 0) && (*(char *)(lVar6 + 0x14) == '\0')) {
        bVar2 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,lVar6 + 0x15,lVar1);
        *(byte *)(lVar6 + 0x14) = bVar2 & 1;
        if ((bVar2 & 1) == 0) {
          iVar3 = FUN_01d77efc(lVar1);
          if ((iVar3 == 0) || (iVar3 == 3)) {
            local_14 = -1;
            iVar3 = FUN_034e7e80(lVar6,&local_14);
            if ((iVar3 == 0) && (local_14 != -1)) {
              local_40 = PTR_DAT_04bc4f00 + 0x10;
              local_38 = 0x14;
              (**(code **)(*plVar7 + 0x18))(plVar7,&local_40);
              uVar8 = 0;
            }
            else {
              local_40 = PTR_DAT_04bc4f00 + 0x10;
              local_38 = 0x14;
              (**(code **)(*plVar7 + 0x18))(plVar7,&local_40);
              uVar8 = 0x3f800000;
            }
            lVar6 = plVar7[3];
          }
          else {
            local_40 = PTR_DAT_04bc4f00 + 0x10;
            local_38 = 0x14;
            (**(code **)(*plVar7 + 0x18))(plVar7,&local_40);
            lVar6 = plVar7[3];
            uVar8 = 0;
          }
          (**(code **)(lVar6 + 0x158))(uVar8,plVar7[1]);
          return iVar3;
        }
      }
      local_40 = PTR_DAT_04bc4f00 + 0x10;
      local_38 = 0x14;
      (**(code **)(*plVar7 + 0x18))(plVar7,&local_40);
      (**(code **)(plVar7[3] + 0x158))(0x3f800000,plVar7[1]);
      iVar3 = 3;
    }
  }
  else {
LAB_0350186c:
    local_40 = PTR_DAT_04bc4f00 + 0x10;
    local_38 = 0x14;
    (**(code **)(*plVar7 + 0x18))(plVar7,&local_40);
    (**(code **)(plVar7[3] + 0x158))(0x3f800000,plVar7[1]);
LAB_035018ac:
    iVar3 = 4;
  }
  return iVar3;
}

