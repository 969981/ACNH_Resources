
void FUN_034e85e0(int *param_1,int param_2)

{
  long *plVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  
  *param_1 = param_2;
  puVar2 = PTR_DAT_04bb7bc0;
  if (param_2 - 1U < 4) {
    uVar4 = *(undefined4 *)(&DAT_04102740 + (long)(int)(param_2 - 1U) * 4);
  }
  else {
    uVar4 = 0;
  }
  uVar8 = 0;
  *(undefined4 *)PTR_DAT_04bc1520 = uVar4;
  plVar9 = (long *)(param_1 + 2);
  iVar3 = param_2;
  do {
    uVar5 = 10;
    if (iVar3 - 3U < 2) goto LAB_034e86e0;
    lVar6 = *(long *)puVar2;
    uVar5 = 0;
    if (lVar6 == 0) goto LAB_034e86e0;
    if (*(long *)(lVar6 + 0x68) == 0) {
switchD_034e869c_default:
      uVar5 = 0;
      goto LAB_034e86e0;
    }
    switch(iVar3) {
    case 0:
      uVar5 = *(uint *)(lVar6 + 0x170);
      break;
    case 1:
      uVar5 = *(uint *)(lVar6 + 0x180);
      break;
    case 2:
      lVar7 = *(long *)(lVar6 + 0x1b8);
      uVar5 = *(uint *)(lVar6 + 0x1b0);
      goto LAB_034e86d8;
    case 3:
      uVar5 = *(uint *)(lVar6 + 0x610) & ((int)*(uint *)(lVar6 + 0x610) >> 0x1f ^ 0xffffffffU);
      break;
    case 4:
      lVar7 = *(long *)(lVar6 + 0x1e0);
      uVar5 = *(uint *)(lVar6 + 0x1d8);
LAB_034e86d8:
      if (lVar7 == 0) {
        uVar5 = 0xffffffff;
      }
      break;
    default:
      goto switchD_034e869c_default;
    }
LAB_034e86e0:
    if ((long)(int)uVar5 <= (long)uVar8) {
      return;
    }
    plVar1 = plVar9;
    if (0x20 < uVar8) {
      plVar1 = (long *)(param_1 + 2);
    }
    (**(code **)(*plVar1 + 8))(plVar1,uVar8 & 0xffffffff,param_2);
    iVar3 = *param_1;
    uVar8 = uVar8 + 1;
    plVar9 = plVar9 + 3;
  } while( true );
}

