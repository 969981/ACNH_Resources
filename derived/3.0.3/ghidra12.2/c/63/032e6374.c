
void FUN_032e6374(long param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  
  puVar1 = PTR_DAT_04bc92f0;
  uVar2 = (**(code **)(**(long **)PTR_DAT_04bc92f0 + 0x18))();
  lVar6 = *(long *)(DAT_05355a60 + 0x20);
  if (*(long *)(lVar6 + 0x6e0) == 0) {
    plVar7 = (long *)0x0;
  }
  else {
    plVar7 = *(long **)(*(long *)(lVar6 + 0x6e0) + 8);
  }
  switch(uVar2) {
  case 0:
    uVar2 = 0x4110411;
    break;
  default:
    uVar2 = 0x4090409;
    break;
  case 2:
    uVar2 = 0x8090809;
    break;
  case 3:
    uVar2 = 0xf0200c0c;
    break;
  case 4:
    uVar2 = 0x40c040c;
    break;
  case 5:
    uVar2 = 0x80a580a;
    break;
  case 6:
    uVar2 = 0x40a0c0a;
    break;
  case 7:
    uVar2 = 0x4070407;
    break;
  case 8:
    uVar2 = 0x4100410;
    break;
  case 9:
    uVar2 = 0xf0010409;
    break;
  case 10:
    iVar4 = FUN_033011a4(lVar6);
    if (iVar4 == 0xb) {
LAB_032e647c:
      uVar2 = 0x4190419;
    }
    else {
      iVar4 = FUN_033011a4(lVar6);
      if (iVar4 != 0xc) {
        switch(*(undefined4 *)(lVar6 + 0x1050)) {
        case 0:
        case 4:
        case 8:
          iVar4 = (**(code **)(**(long **)puVar1 + 0x18))();
          iVar3 = (**(code **)(**(long **)puVar1 + 0x18))();
          if (iVar4 == iVar3) goto LAB_032e647c;
        }
      }
      uVar2 = 0x4190409;
    }
    break;
  case 0xb:
    uVar2 = 0x8160816;
    break;
  case 0xc:
    uVar2 = 0x8040804;
    break;
  case 0xd:
    if ((plVar7 == (long *)0x0) || (uVar5 = (**(code **)(*plVar7 + 0xe8))(plVar7), (uVar5 & 1) == 0)
       ) {
      uVar2 = 0x4120409;
    }
    else {
      uVar2 = 0x4120412;
    }
    break;
  case 0xe:
    if (plVar7 != (long *)0x0) {
      uVar5 = (**(code **)(*plVar7 + 0xd0))(plVar7);
      if ((uVar5 & 1) != 0) {
        uVar2 = 0x4040404;
        break;
      }
      uVar5 = (**(code **)(*plVar7 + 0xd8))(plVar7);
      if ((uVar5 & 1) != 0) {
        uVar2 = 0x4040c04;
        break;
      }
    }
    uVar2 = 0x4040409;
  }
  *(undefined4 *)(param_1 + 0x16d4) = uVar2;
  iVar4 = FUN_033011a4(*(undefined8 *)(DAT_05355a60 + 0x20));
  if (iVar4 == 0xb) {
    *(undefined4 *)(param_1 + 0x16d4) = 0x4190419;
  }
  return;
}

