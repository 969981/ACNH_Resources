
void FUN_03025360(long param_1,long param_2)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  undefined8 uVar4;
  undefined *local_40;
  undefined4 local_38;
  
  if ((param_1 != 0) && (plVar3 = *(long **)(param_1 + 0x630), plVar3 != (long *)0x0)) {
    plVar1 = (long *)(param_2 + 0x998) + *(uint *)(param_2 + 0x8f8);
    if (0x12 < *(uint *)(param_2 + 0x8f8)) {
      plVar1 = (long *)(param_2 + 0x998);
    }
    lVar2 = *plVar1;
    FUN_03d5d0e0(plVar3,0,lVar2 != 0);
    (**(code **)(*plVar3 + 0x140))(plVar3,lVar2 != 0,0);
    plVar3 = *(long **)(plVar3[0x5e] + (ulong)(1 < *(uint *)(plVar3 + 0x5d)) * 8);
    if (plVar3 != (long *)0x0) {
      switch(*(undefined4 *)(param_2 + 0x8f8)) {
      case 0:
      case 1:
      case 2:
        local_40 = PTR_DAT_04bc4f00 + 0x10;
        local_38 = 0x14;
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
        uVar4 = 0;
        break;
      default:
        goto switchD_0302540c_caseD_3;
      case 6:
      case 7:
      case 8:
        local_40 = PTR_DAT_04bc4f00 + 0x10;
        local_38 = 0x14;
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
        uVar4 = 0x3f800000;
        break;
      case 9:
      case 10:
      case 0xb:
        local_40 = PTR_DAT_04bc4f00 + 0x10;
        local_38 = 0x14;
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
        uVar4 = 0x40400000;
        break;
      case 0xc:
      case 0xd:
      case 0xe:
        local_40 = PTR_DAT_04bc4f00 + 0x10;
        local_38 = 0x14;
        (**(code **)(*plVar3 + 0x18))(plVar3,&local_40);
        uVar4 = 0x40000000;
      }
      (**(code **)(plVar3[3] + 0x158))(uVar4,plVar3[1]);
    }
  }
switchD_0302540c_caseD_3:
  return;
}

