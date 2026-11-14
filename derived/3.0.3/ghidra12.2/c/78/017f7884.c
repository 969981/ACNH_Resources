
undefined8 FUN_017f7884(int param_1,long param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (0x25b43b88 < param_1) {
    if (param_1 < 0x340da5a5) {
      if (param_1 < 0x2aefed47) {
        if (param_1 != 0x25b43b89) {
          iVar2 = 0x2633946a;
          goto LAB_017f79d0;
        }
      }
      else if (param_1 != 0x2aefed47) {
        iVar2 = 0x302056e3;
        goto LAB_017f79d0;
      }
    }
    else if (param_1 < 0x6043fd87) {
      if (param_1 != 0x340da5a5) {
        iVar2 = 0x356323a8;
        goto LAB_017f79d0;
      }
    }
    else if (param_1 != 0x7dfa9ed2) {
      iVar2 = 0x6043fd87;
      goto LAB_017f79d0;
    }
    goto LAB_017f79d8;
  }
  if (param_1 < -0x63176d3) {
    if (param_1 < -0x214773f9) {
      if (param_1 != -0x7a4d7ddc) {
        iVar2 = -0x3e25491c;
        goto LAB_017f79d0;
      }
    }
    else if (param_1 != -0x214773f9) {
      iVar2 = -0xe5efd5a;
      goto LAB_017f79d0;
    }
  }
  else if (param_1 < 0x91dc718) {
    if (param_1 != -0x63176d3) {
      iVar2 = 0x68001ae;
      goto LAB_017f79d0;
    }
  }
  else if (param_1 != 0x91dc718) {
    iVar2 = 0x1a13a2ea;
LAB_017f79d0:
    if (param_1 != iVar2) {
      iVar2 = 0x1a;
      iVar3 = 0x25;
      *(undefined4 *)(param_2 + 0x10) = 0x1a;
      *(undefined4 *)(param_2 + 0x20) = 0x25;
      goto LAB_017f7a2c;
    }
  }
LAB_017f79d8:
  if (DAT_05292338 == 0) {
    iVar2 = 0;
    iVar3 = 0;
    iVar4 = 0x10;
    iVar5 = 0x10;
  }
  else {
    iVar2 = *(int *)(DAT_05292338 + 0xd88);
    iVar3 = *(int *)(DAT_05292338 + 0xd8c);
    iVar5 = *(int *)(DAT_05292338 + 0xd98);
    iVar4 = *(int *)(DAT_05292338 + 0xd9c);
  }
  iVar1 = iVar2;
  if (iVar5 <= iVar2) {
    iVar1 = iVar5;
  }
  if (iVar2 <= iVar5) {
    iVar2 = iVar5;
  }
  *(int *)(param_2 + 0x10) = iVar1;
  *(int *)(param_2 + 0x20) = iVar2;
  iVar2 = iVar3;
  if (iVar4 <= iVar3) {
    iVar2 = iVar4;
  }
  if (iVar3 <= iVar4) {
    iVar3 = iVar4;
  }
LAB_017f7a2c:
  *(int *)(param_2 + 0x14) = iVar2;
  *(int *)(param_2 + 0x24) = iVar3;
  return 1;
}

