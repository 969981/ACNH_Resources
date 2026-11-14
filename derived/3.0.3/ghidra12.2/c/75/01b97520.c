
void FUN_01b97520(undefined8 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  switch(param_2) {
  default:
    *(undefined8 *)((long)param_1 + 0xe) = 0;
    *param_1 = 0;
    param_1[1] = 0;
    return;
  case 1:
    *param_1 = 0;
    param_1[1] = 0;
    goto LAB_01b9779c;
  case 2:
    uVar2 = 0x100000000;
    goto LAB_01b975f4;
  case 3:
    uVar2 = 0x100000000;
    break;
  case 4:
    uVar2 = 0x200000000;
    goto LAB_01b975f4;
  case 5:
    uVar2 = 0x200000000;
    break;
  case 6:
    *param_1 = 0;
    goto LAB_01b97624;
  case 7:
    *param_1 = 0;
    param_1[1] = 1;
    *(undefined4 *)(param_1 + 2) = 1;
    goto LAB_01b977a4;
  case 8:
    uVar2 = 0x100000001;
    goto LAB_01b975f4;
  case 9:
    uVar2 = 0x100000001;
    break;
  case 10:
    uVar2 = 0x200000001;
    goto LAB_01b975f4;
  case 0xb:
    uVar2 = 0x200000001;
    break;
  case 0xc:
    *param_1 = 0;
    uVar1 = 2;
    goto LAB_01b97628;
  case 0xd:
    uVar2 = 2;
    break;
  case 0xe:
    uVar2 = 0x100000002;
    goto LAB_01b975f4;
  case 0xf:
    uVar2 = 0x100000002;
    break;
  case 0x10:
    uVar2 = 0x200000002;
LAB_01b975f4:
    *param_1 = 0;
    param_1[1] = uVar2;
    *(undefined4 *)(param_1 + 2) = 0;
    goto LAB_01b977a4;
  case 0x11:
    uVar2 = 0x200000002;
    break;
  case 0x12:
    uVar2 = 0x200000000;
    goto LAB_01b97764;
  case 0x13:
    uVar2 = 0x100000000;
    goto LAB_01b97764;
  case 0x14:
    *param_1 = 0x100000000;
LAB_01b97624:
    uVar1 = 1;
LAB_01b97628:
    *(undefined4 *)(param_1 + 1) = uVar1;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    goto LAB_01b977a4;
  case 0x15:
    uVar2 = 0x500000000;
    goto LAB_01b97764;
  case 0x16:
    uVar2 = 0x600000000;
    goto LAB_01b97764;
  case 0x17:
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined4 *)param_1 = 2;
    goto LAB_01b97750;
  case 0x18:
    *(undefined4 *)(param_1 + 2) = 1;
    *param_1 = 2;
    param_1[1] = 0;
    goto LAB_01b97750;
  case 0x19:
    uVar2 = 2;
    goto LAB_01b97744;
  case 0x1a:
    uVar2 = 2;
    goto LAB_01b97728;
  case 0x1b:
    uVar2 = 2;
    uVar3 = 0x200000000;
    goto LAB_01b97748;
  case 0x1c:
    uVar2 = 2;
    uVar3 = 0x200000000;
    goto LAB_01b9772c;
  case 0x1d:
    uVar2 = 0x400000000;
    goto LAB_01b976a8;
  case 0x1e:
    uVar2 = 0x400000000;
    goto LAB_01b97794;
  case 0x1f:
    uVar2 = 0x300000000;
LAB_01b976a8:
    *param_1 = uVar2;
    param_1[1] = 0;
    goto LAB_01b9779c;
  case 0x20:
    uVar2 = 0x300000000;
    goto LAB_01b97794;
  case 0x21:
    *param_1 = 1;
    param_1[1] = 0;
    goto LAB_01b976dc;
  case 0x22:
    uVar2 = 0x100000000;
    goto LAB_01b976d8;
  case 0x23:
    uVar2 = 0x200000000;
LAB_01b976d8:
    *param_1 = 1;
    param_1[1] = uVar2;
LAB_01b976dc:
    *(undefined4 *)(param_1 + 2) = 1;
    goto LAB_01b97750;
  case 0x24:
    uVar2 = 0x200000001;
    goto LAB_01b97744;
  case 0x25:
    uVar2 = 0x200000001;
    goto LAB_01b97728;
  case 0x26:
    uVar2 = 0x400000001;
    goto LAB_01b97728;
  case 0x27:
    uVar2 = 0x300000001;
    goto LAB_01b97728;
  case 0x28:
    uVar2 = 0x500000001;
    goto LAB_01b97728;
  case 0x29:
    uVar2 = 0x600000001;
LAB_01b97728:
    uVar3 = 0x100000000;
LAB_01b9772c:
    *param_1 = uVar2;
    param_1[1] = uVar3;
    *(undefined4 *)(param_1 + 2) = 1;
LAB_01b97750:
    *(undefined2 *)((long)param_1 + 0x14) = 0x101;
    return;
  case 0x2a:
    uVar2 = 0x600000001;
LAB_01b97744:
    uVar3 = 0x100000000;
LAB_01b97748:
    *param_1 = uVar2;
    param_1[1] = uVar3;
    *(undefined4 *)(param_1 + 2) = 0;
    goto LAB_01b97750;
  case 0x2b:
    uVar2 = 0x700000000;
LAB_01b97764:
    *param_1 = uVar2;
    param_1[1] = 0;
    *(undefined8 *)((long)param_1 + 0xe) = 0;
    return;
  case 0x2c:
    uVar2 = 0x800000000;
    goto LAB_01b97780;
  case 0x2d:
    uVar2 = 0x900000000;
LAB_01b97780:
    *(undefined4 *)(param_1 + 2) = 0;
    *param_1 = uVar2;
    param_1[1] = 0x200000000;
    goto LAB_01b977a4;
  case 0x2e:
    uVar2 = 0xa00000000;
LAB_01b97794:
    *param_1 = uVar2;
    param_1[1] = 0x200000000;
    goto LAB_01b9779c;
  }
  *param_1 = 0;
  param_1[1] = uVar2;
LAB_01b9779c:
  *(undefined4 *)(param_1 + 2) = 1;
LAB_01b977a4:
  *(undefined2 *)((long)param_1 + 0x14) = 0;
  return;
}

