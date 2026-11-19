
void FUN_0394fbd0(long *param_1,long param_2)

{
  long lVar1;
  size_t __n;
  uint uVar2;
  uint uVar3;
  int iVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 uVar7;
  void *__dest;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined *local_40;
  long lStack_38;
  
  iVar4 = (**(code **)(*param_1 + 0x38))();
  if (iVar4 == 0) {
    iVar4 = *(int *)(param_2 + ((ulong)*(uint *)(param_2 + 4) & 0xffffff) * 4);
    uVar7 = (**(code **)(*param_1 + 0x48))(param_1);
    *(bool *)uVar7 = iVar4 != 0;
  }
  else {
    uVar5 = (**(code **)(*param_1 + 0x88))(param_1);
    if ((uVar5 & 1) != 0) {
      iVar4 = (**(code **)(*param_1 + 0x38))(param_1);
      if (iVar4 == 0x14) {
        lStack_38 = param_2 + ((ulong)*(uint *)(param_2 + 4) & 0xffffff) * 4;
        local_40 = PTR_DAT_04bb2020 + 0x10;
        plVar6 = (long *)(**(code **)(*param_1 + 0x58))(param_1);
        (**(code **)(*plVar6 + 0x10))(plVar6,&local_40);
      }
      else {
        __dest = (void *)(**(code **)(*param_1 + 0x48))(param_1);
        uVar2 = *(uint *)(param_2 + 4);
        uVar5 = (**(code **)(*param_1 + 0x60))(param_1);
        uVar3 = *(uint *)(param_2 + 4);
        uVar9 = 4;
        switch(uVar3 >> 0x18) {
        case 0:
        case 1:
        case 2:
        case 0x11:
          break;
        case 3:
          uVar9 = 8;
          break;
        case 4:
          uVar9 = 0xc;
          break;
        case 5:
        case 6:
        case 0x10:
          uVar9 = 0x10;
          break;
        case 7:
        case 8:
        case 0xf:
        case 0x14:
          lVar10 = 0;
          lVar8 = param_2 + ((ulong)uVar3 & 0xffffff) * 4;
          uVar9 = 1;
          do {
            if (*(char *)(lVar8 + lVar10) == '\0') {
LAB_0394fdac:
              uVar9 = (ulong)((int)lVar10 + 1);
              break;
            }
            lVar1 = lVar8 + lVar10;
            if (*(char *)(lVar1 + 1) == '\0') {
              lVar10 = lVar10 + 1;
              goto LAB_0394fdac;
            }
            if (*(char *)(lVar1 + 2) == '\0') {
              lVar10 = lVar10 + 2;
              goto LAB_0394fdac;
            }
            lVar10 = lVar10 + 3;
          } while (lVar10 != 0x80001);
          break;
        case 9:
          uVar9 = 0x80;
          break;
        case 10:
          uVar9 = 0x100;
          break;
        case 0xb:
          uVar9 = 0x180;
          break;
        case 0xc:
          uVar9 = 0x200;
          break;
        case 0xd:
        case 0xe:
        case 0x12:
          uVar9 = (ulong)*(uint *)(param_2 + ((ulong)uVar3 & 0xffffff) * 4 + -4) << 2;
          break;
        case 0x13:
          uVar9 = (ulong)*(uint *)(param_2 + (ulong)((uVar3 & 0xffffff) << 2) + -4);
          break;
        default:
          uVar9 = 0;
        }
        __n = uVar5 & 0xffffffff;
        if (uVar9 <= (uVar5 & 0xffffffff)) {
          __n = uVar9;
        }
        memcpy(__dest,(void *)(param_2 + ((ulong)uVar2 & 0xffffff) * 4),__n);
      }
    }
  }
  lVar10 = param_2 + ((ulong)*(uint *)(param_2 + 4) & 0xffffff) * 4;
  uVar5 = 4;
  switch(*(uint *)(param_2 + 4) >> 0x18) {
  case 0:
  case 1:
  case 2:
  case 0x11:
    break;
  case 3:
    uVar5 = 8;
    break;
  case 4:
    uVar5 = 0xc;
    break;
  case 5:
  case 6:
  case 0x10:
    uVar5 = 0x10;
    break;
  case 7:
  case 8:
  case 0xf:
  case 0x14:
    lVar8 = 0;
    uVar5 = 1;
    do {
      if (*(char *)(lVar10 + lVar8) == '\0') {
LAB_0394fe9c:
        uVar5 = (ulong)((int)lVar8 + 1);
        break;
      }
      if (*(char *)(lVar10 + lVar8 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_0394fe9c;
      }
      if (*(char *)(lVar10 + lVar8 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_0394fe9c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    break;
  case 9:
    uVar5 = 0x80;
    break;
  case 10:
    uVar5 = 0x100;
    break;
  case 0xb:
    uVar5 = 0x180;
    break;
  case 0xc:
    uVar5 = 0x200;
    break;
  case 0xd:
  case 0xe:
  case 0x12:
    uVar5 = (ulong)*(uint *)(lVar10 + -4) << 2;
    break;
  case 0x13:
    uVar5 = (ulong)*(uint *)(lVar10 + -4);
    break;
  default:
    uVar5 = 0;
  }
  (**(code **)(*param_1 + 0x78))(param_1,lVar10,uVar5);
  return;
}

