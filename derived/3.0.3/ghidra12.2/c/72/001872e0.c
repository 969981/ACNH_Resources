
int FUN_001872e0(uint *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = *param_1;
  if (-1 < (int)uVar1) {
    return 0;
  }
  iVar2 = -1;
  iVar3 = 0x7ffeffff;
  iVar4 = 2;
  iVar5 = 100;
  switch(uVar1 >> 0x10 & 0x7ff) {
  case 1:
    break;
  case 2:
    iVar4 = 1;
    iVar5 = 200;
    iVar3 = 0x7ffdffff;
    break;
  case 3:
    if (uVar1 < 0x80030064) {
      iVar3 = 0x7ffcffff;
    }
    else {
      iVar3 = 0x7ffcff9e;
      if (0x800300c7 < uVar1) {
        iVar3 = 0x7ffcff4d;
      }
    }
    iVar4 = 1;
    iVar5 = 300;
    break;
  case 4:
    iVar5 = 400;
    iVar3 = 0x7ffbffff;
    iVar4 = 1;
    break;
  case 5:
    iVar4 = 1;
    iVar5 = 500;
    iVar3 = 0x7ffaffff;
    break;
  case 6:
    iVar5 = 600;
    iVar3 = 0x7ff9ffff;
    break;
  default:
    goto switchD_00187328_caseD_7;
  case 0x65:
    iVar5 = 700;
    iVar3 = 0x7f9b0000;
    break;
  case 0x67:
    iVar4 = 1;
    iVar5 = 0x44c;
    iVar3 = 0x7f98ffff;
    break;
  case 0x68:
    iVar4 = 1;
    iVar5 = 800;
    iVar3 = 0x7f97ffff;
    break;
  case 0x69:
    iVar4 = 1;
    iVar5 = 0x4b0;
    iVar3 = 0x7f96ffff;
    break;
  case 0x6f:
    iVar4 = 1;
    iVar5 = 0x708;
    iVar3 = 0x7f90ffff;
    break;
  case 0x70:
    iVar5 = 0x76c;
    iVar3 = 0x7f8fffff;
    iVar4 = 1;
    break;
  case 0x71:
    iVar4 = 1;
    iVar5 = 2000;
    iVar3 = 0x7f8effff;
    break;
  case 0x72:
    iVar4 = 1;
    iVar5 = 0x834;
    iVar3 = 0x7f8dffff;
    break;
  case 0x73:
    iVar4 = 1;
    iVar5 = 0x898;
    iVar3 = 0x7f8cffff;
    break;
  case 0x74:
    iVar4 = 1;
    iVar5 = 8000;
    iVar3 = 0x7f8bffff;
    break;
  case 0x75:
    iVar4 = 1;
    iVar5 = 0x8fc;
    iVar3 = 0x7f8affff;
  }
  iVar2 = uVar1 + iVar3 + iVar5 + iVar4;
switchD_00187328_caseD_7:
  return iVar2;
}

