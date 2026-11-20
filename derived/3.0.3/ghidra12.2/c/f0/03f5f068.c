
uint FUN_03f5f068(long *param_1,ulong param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  byte *pbVar5;
  long lVar6;
  code *pcVar7;
  ulong uVar8;
  
  uVar8 = param_2 >> 0x10;
  uVar2 = (uint)param_2;
  if (((uVar2 ^ 0xffffffff) & 0xfff) == 0) {
    uVar1 = FUN_03f5f2f4(param_1,uVar8 & 0xffffffff,param_2 & 0xffffffff);
    if (((uVar2 ^ 0xffffffff) & 0xffff) != 0) {
      uVar2 = FUN_03f5f2f4(param_1,uVar8 & 0xffffffff,uVar2 + 1);
      goto LAB_03f5f2d8;
    }
    uVar8 = (ulong)((int)(param_2 >> 0x10) + 1);
    pbVar5 = (byte *)param_1[(uVar8 & 0xff) * 0x10 + 4];
    if ((byte *)0x63 < pbVar5) {
      uVar2 = (uint)*pbVar5;
      goto LAB_03f5f2d8;
    }
    switch(pbVar5) {
    case (byte *)0x1:
      uVar2 = (uint)*(byte *)((long)param_1 + 0xc);
      break;
    default:
      *(int *)param_1[0x280f] = *(int *)param_1[0x280f] + 1;
      uVar2 = (uint)*(byte *)((long)param_1 + 0xc);
      break;
    case (byte *)0x7:
      uVar2 = (uint)*(byte *)param_1[3];
      break;
    case (byte *)0x8:
      uVar2 = (uint)*(byte *)(param_1[0x2809] +
                             ((ulong)*(uint *)(param_1 + 0x280c) & (uVar8 & 3) << 0x10));
      break;
    case (byte *)0x9:
      lVar6 = *param_1;
      iVar3 = 0;
      goto LAB_03f5f2b8;
    case (byte *)0xa:
      iVar3 = 0;
      pcVar7 = *(code **)*param_1;
      goto LAB_03f5f2d4;
    }
    goto LAB_03f5f2d8;
  }
  uVar4 = param_1[(param_2 >> 0x10 & 0xff) * 0x10 + (param_2 >> 0xc & 0xf) + 4];
  if (99 < uVar4) {
    pbVar5 = (byte *)(uVar4 + (param_2 & 0xfff));
LAB_03f5f14c:
    uVar1 = (uint)*pbVar5;
    uVar2 = (uint)pbVar5[1];
    goto LAB_03f5f2d8;
  }
  switch(uVar4) {
  case 1:
    if ((uVar2 >> 9 & 0x7f) < 0x11) goto switchD_03f5f10c_caseD_2;
    uVar1 = (**(code **)(*param_1 + 0x20))(param_1,param_2 & 0xffffffff);
    pcVar7 = *(code **)(*param_1 + 0x20);
    break;
  default:
    goto switchD_03f5f10c_caseD_2;
  case 7:
    if (((uVar2 & 0xffff) < 0x800) || ((uVar2 & 0xf800) == 0x3000)) {
      uVar1 = (uint)*(byte *)(param_1[3] + (param_2 & 0xfff));
      pbVar5 = (byte *)(param_1[3] + (ulong)((uVar2 & 0xfff) + 1));
      if (0x7fe < (uVar2 & 0xfff)) {
        pbVar5 = (byte *)((long)param_1 + 0xc);
      }
      uVar2 = (uint)*pbVar5;
      goto LAB_03f5f2d8;
    }
    goto switchD_03f5f10c_caseD_2;
  case 8:
    pbVar5 = (byte *)(param_1[0x2809] +
                     ((ulong)*(uint *)(param_1 + 0x280c) & (param_2 & 0xffff | (uVar8 & 3) << 0x10))
                     );
    goto LAB_03f5f14c;
  case 9:
    uVar1 = (**(code **)(*param_1 + 8))(param_1,uVar8 & 0xffffffff,param_2 & 0xffffffff);
    lVar6 = *param_1;
    iVar3 = uVar2 + 1;
    uVar8 = param_2 >> 0x10 & 0xffffffff;
LAB_03f5f2b8:
    uVar2 = (**(code **)(lVar6 + 8))(param_1,uVar8,iVar3);
    goto LAB_03f5f2d8;
  case 10:
    uVar1 = (**(code **)*param_1)(param_1,param_2 & 0xffffffff);
    pcVar7 = *(code **)*param_1;
  }
  iVar3 = uVar2 + 1;
LAB_03f5f2d4:
  uVar2 = (*pcVar7)(param_1,iVar3);
LAB_03f5f2d8:
  return uVar1 & 0xff | uVar2 << 8;
switchD_03f5f10c_caseD_2:
  uVar2 = (uint)*(byte *)((long)param_1 + 0xc);
  uVar1 = uVar2;
  goto LAB_03f5f2d8;
}

