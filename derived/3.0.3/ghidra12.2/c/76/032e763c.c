
void FUN_032e763c(long param_1,int param_2,uint *param_3,ulong param_4,uint param_5,uint param_6)

{
  long *plVar1;
  code *UNRECOVERED_JUMPTABLE;
  long lVar2;
  
  lVar2 = *(long *)(*(long *)(DAT_05355a60 + 0x20) + 0x6e0);
  if (lVar2 == 0) {
    return;
  }
  plVar1 = *(long **)(lVar2 + 8);
  if (plVar1 == (long *)0x0) {
    return;
  }
  switch(param_2) {
  case 0x28:
  case 0x58:
    if ((*param_3 & 0xf) == 0) {
      if ((plVar1[0x67] != 0) && ((*(ushort *)(plVar1[0x67] + 0x578) >> 5 & 1) != 0)) {
        (**(code **)(*plVar1 + 0x58))(plVar1,param_5 & 1,param_6 & 1);
        *(undefined1 *)(param_1 + 0x16ec) = 1;
      }
    }
    else if ((((param_4 & 1) != 0) && (plVar1[0x67] != 0)) &&
            ((*(ushort *)(plVar1[0x67] + 0x578) >> 5 & 1) != 0)) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x60);
      goto LAB_032e7758;
    }
    break;
  case 0x29:
  case 0x2d:
  case 0x2e:
  case 0x2f:
  case 0x30:
  case 0x31:
  case 0x32:
  case 0x33:
  case 0x34:
  case 0x35:
  case 0x36:
  case 0x37:
  case 0x38:
  case 0x39:
  case 0x3a:
  case 0x3b:
  case 0x3c:
  case 0x3d:
  case 0x3e:
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
  case 0x43:
  case 0x44:
  case 0x45:
  case 0x46:
  case 0x47:
  case 0x48:
  case 0x49:
  case 0x4a:
  case 0x4b:
  case 0x4d:
  case 0x4e:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
    break;
  case 0x2a:
                    /* WARNING: Could not recover jumptable at 0x032e76f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x30))(plVar1,1);
    return;
  case 0x2b:
                    /* WARNING: Could not recover jumptable at 0x032e77bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0xb0))(plVar1,((byte)*param_3 >> 1 & 1) != 0);
    return;
  case 0x2c:
    if ((*param_3 & 0xc) == 0) {
                    /* WARNING: Could not recover jumptable at 0x032e7734. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x48))(plVar1,*param_3 >> 1 & 1,1);
      return;
    }
    break;
  case 0x4c:
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x40);
    goto LAB_032e7758;
  case 0x4f:
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x78);
    goto LAB_032e7758;
  case 0x50:
    UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0x70);
LAB_032e7758:
                    /* WARNING: Could not recover jumptable at 0x032e7760. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)();
    return;
  default:
    if (param_2 == 0x8a) {
      UNRECOVERED_JUMPTABLE = *(code **)(*plVar1 + 0xb8);
      goto LAB_032e7758;
    }
  }
  return;
}

