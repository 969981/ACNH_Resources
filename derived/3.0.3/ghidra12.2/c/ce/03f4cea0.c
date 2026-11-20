
void FUN_03f4cea0(long *param_1,undefined1 *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  
  *(int *)(*param_1 + 0x34e0bc) =
       *(int *)(*param_1 + 0x34e0bc) + *(int *)((long)param_1 + 0x24) * 0x800;
  bVar2 = *(byte *)(param_1 + 4);
  uVar3 = bVar2 | 0x2100;
  if (uVar3 == 0x2122 && (int)param_1[5] != 0) {
    FUN_03fc0df0(*param_1 + 0x34780,param_2,*(undefined4 *)((long)param_1 + 0x24));
    *(undefined4 *)((long)param_1 + 0x24) = 0;
  }
  else if (*(byte *)((long)param_1 + 0x2f) < 8) {
    uVar6 = (uint)bVar2;
    switch(*(byte *)((long)param_1 + 0x2f)) {
    default:
      do {
        FUN_03f4d1a0(*param_1,0,uVar3,*param_2);
        iVar1 = *(int *)((long)param_1 + 0x24);
        param_2 = param_2 + (int)param_1[5];
        iVar4 = iVar1 + -1;
        *(int *)((long)param_1 + 0x24) = iVar4;
      } while (iVar4 != 0 && 0 < iVar1);
      break;
    case 1:
    case 5:
      do {
        FUN_03f4d1a0(*param_1,0,uVar3,*param_2);
        iVar1 = *(int *)((long)param_1 + 0x24);
        *(int *)((long)param_1 + 0x24) = iVar1 + -1;
        if (iVar1 < 2) {
          return;
        }
        lVar5 = param_1[5];
        FUN_03f4d1a0(*param_1,0,uVar6 + 0x2101,param_2[(int)lVar5]);
        iVar1 = *(int *)((long)param_1 + 0x24);
        param_2 = param_2 + (int)lVar5 + (int)param_1[5];
        iVar4 = iVar1 + -1;
        *(int *)((long)param_1 + 0x24) = iVar4;
      } while (iVar4 != 0 && 0 < iVar1);
      break;
    case 3:
    case 7:
      do {
        FUN_03f4d1a0(*param_1,0,uVar3,*param_2);
        iVar1 = *(int *)((long)param_1 + 0x24);
        *(int *)((long)param_1 + 0x24) = iVar1 + -1;
        if (iVar1 < 2) {
          return;
        }
        param_2 = param_2 + (int)param_1[5];
        FUN_03f4d1a0(*param_1,0,uVar3,*param_2);
        iVar1 = *(int *)((long)param_1 + 0x24);
        *(int *)((long)param_1 + 0x24) = iVar1 + -1;
        if (iVar1 < 2) {
          return;
        }
        param_2 = param_2 + (int)param_1[5];
        FUN_03f4d1a0(*param_1,0,uVar6 + 0x2101,*param_2);
        iVar1 = *(int *)((long)param_1 + 0x24);
        *(int *)((long)param_1 + 0x24) = iVar1 + -1;
        if (iVar1 < 2) {
          return;
        }
        lVar5 = param_1[5];
        FUN_03f4d1a0(*param_1,0,uVar6 + 0x2101,param_2[(int)lVar5]);
        iVar1 = *(int *)((long)param_1 + 0x24);
        param_2 = param_2 + (int)lVar5 + (int)param_1[5];
        iVar4 = iVar1 + -1;
        *(int *)((long)param_1 + 0x24) = iVar4;
      } while (iVar4 != 0 && 0 < iVar1);
      break;
    case 4:
      do {
        FUN_03f4d1a0(*param_1,0,uVar3,*param_2);
        iVar1 = *(int *)((long)param_1 + 0x24);
        *(int *)((long)param_1 + 0x24) = iVar1 + -1;
        if (iVar1 < 2) {
          return;
        }
        param_2 = param_2 + (int)param_1[5];
        FUN_03f4d1a0(*param_1,0,bVar2 + 0x2101,*param_2);
        iVar1 = *(int *)((long)param_1 + 0x24);
        *(int *)((long)param_1 + 0x24) = iVar1 + -1;
        if (iVar1 < 2) {
          return;
        }
        param_2 = param_2 + (int)param_1[5];
        FUN_03f4d1a0(*param_1,0,uVar6 + 0x2102,*param_2);
        iVar1 = *(int *)((long)param_1 + 0x24);
        *(int *)((long)param_1 + 0x24) = iVar1 + -1;
        if (iVar1 < 2) {
          return;
        }
        lVar5 = param_1[5];
        FUN_03f4d1a0(*param_1,0,uVar6 + 0x2103,param_2[(int)lVar5]);
        iVar1 = *(int *)((long)param_1 + 0x24);
        param_2 = param_2 + (int)lVar5 + (int)param_1[5];
        iVar4 = iVar1 + -1;
        *(int *)((long)param_1 + 0x24) = iVar4;
      } while (iVar4 != 0 && 0 < iVar1);
    }
  }
  return;
}

