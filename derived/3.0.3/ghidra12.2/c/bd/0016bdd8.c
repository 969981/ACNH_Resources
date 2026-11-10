
int FUN_0016bdd8(long *param_1,void *param_2,undefined8 param_3,int param_4,undefined8 *param_5,
                void *param_6)

{
  ulong uVar1;
  int iVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  long lVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  
  if (param_6 == (void *)0x0) {
    param_6 = (void *)FUN_001689dc();
  }
  lVar3 = FUN_00168a1c(param_6,1,0x9d0);
  *param_1 = lVar3;
  if (lVar3 == 0) {
    iVar2 = -0x385;
  }
  else {
    memcpy((void *)(lVar3 + 0x890),param_6,0x28);
    lVar3 = *param_1 + 0x890;
    FUN_001727a4(*param_1 + 0x20,0,0,5,0x10,0,0,0,lVar3);
    *(undefined4 *)(*param_1 + 0x94c) = 0xffff;
    *(undefined4 *)(*param_1 + 0x950) = 0;
    *(undefined4 *)(*param_1 + 0x954) = 0;
    *(undefined4 *)(*param_1 + 0x958) = 0;
    *(undefined4 *)(*param_1 + 0x95c) = 0xffff;
    *(undefined1 *)(*param_1 + 0x9ab) = 0;
    *(undefined4 *)(*param_1 + 0x944) = 0x7fffffff;
    *(undefined4 *)(*param_1 + 0x948) = 0x7fffffff;
    *(undefined4 *)(*param_1 + 0x9a0) = 0xffffffff;
    *(undefined1 *)(*param_1 + 0x9a8) = 1;
    if (param_4 != 0) {
      *(undefined1 *)(*param_1 + 0x9aa) = 1;
    }
    lVar6 = *param_1;
    *(undefined8 *)(lVar6 + 0x964) = 0x100001000;
    *(undefined8 *)(lVar6 + 0x96c) = 0xffffffffffff;
    *(undefined8 *)(lVar6 + 0x974) = 0xffffffff00004000;
    lVar6 = *param_1;
    *(undefined8 *)(lVar6 + 0x980) = 0x100001000;
    *(undefined8 *)(lVar6 + 0x988) = 0xffffffffffff;
    *(undefined8 *)(lVar6 + 0x990) = 0xffffffff00004000;
    *(undefined8 *)(*param_1 + 0x900) = 200;
    *(undefined4 *)(*param_1 + 0x96c) = 100;
    *(undefined8 *)(*param_1 + 0x928) = 0x10000;
    if (param_5 == (undefined8 *)0x0) {
      uVar4 = 0x1000;
    }
    else {
      uVar5 = *(uint *)(param_5 + 2);
      if (((uVar5 & 1) != 0) && (*(int *)(param_5 + 4) != 0)) {
        *(uint *)(*param_1 + 0x99c) = *(uint *)(*param_1 + 0x99c) | 1;
        uVar5 = *(uint *)(param_5 + 2);
      }
      if ((uVar5 >> 1 & 1) != 0) {
        *(undefined4 *)(*param_1 + 0x96c) = *(undefined4 *)((long)param_5 + 0x14);
        uVar5 = *(uint *)(param_5 + 2);
      }
      if ((uVar5 >> 4 & 1) != 0) {
        *(ulong *)(*param_1 + 0x900) = (ulong)*(uint *)(param_5 + 3);
        uVar5 = *(uint *)(param_5 + 2);
      }
      if (((uVar5 >> 2 & 1) != 0) && (*(int *)((long)param_5 + 0x24) != 0)) {
        *(uint *)(*param_1 + 0x99c) = *(uint *)(*param_1 + 0x99c) | 2;
        uVar5 = *(uint *)(param_5 + 2);
      }
      if (((uVar5 >> 3 & 1) != 0) && (*(int *)(param_5 + 5) != 0)) {
        *(uint *)(*param_1 + 0x99c) = *(uint *)(*param_1 + 0x99c) | 4;
        uVar5 = *(uint *)(param_5 + 2);
      }
      if ((uVar5 >> 5 & 1) != 0) {
        lVar6 = *param_1;
        uVar4 = *(undefined8 *)((long)param_5 + 0x34);
        uVar7 = *(undefined8 *)((long)param_5 + 0x3c);
        uVar9 = *(undefined8 *)((long)param_5 + 0x4c);
        *(undefined8 *)(lVar6 + 0x9bd) = *(undefined8 *)((long)param_5 + 0x44);
        *(undefined8 *)(lVar6 + 0x9c5) = uVar9;
        *(undefined8 *)(lVar6 + 0x9ad) = uVar4;
        *(undefined8 *)(lVar6 + 0x9b5) = uVar7;
        uVar5 = *(uint *)(param_5 + 2);
      }
      if ((uVar5 >> 7 & 1) != 0) {
        *(undefined4 *)(*param_1 + 0x9a4) = *(undefined4 *)((long)param_5 + 0x1c);
        uVar5 = *(uint *)(param_5 + 2);
      }
      if (((uVar5 >> 6 & 1) != 0) && (*(int *)((long)param_5 + 0x2c) != 0)) {
        *(uint *)(*param_1 + 0x99c) = *(uint *)(*param_1 + 0x99c) | 8;
        uVar5 = *(uint *)(param_5 + 2);
      }
      if ((uVar5 >> 8 & 1) != 0) {
        *(undefined8 *)(*param_1 + 0x928) = *param_5;
        uVar5 = *(uint *)(param_5 + 2);
      }
      if ((uVar5 >> 9 & 1) == 0) {
        uVar4 = 0x1000;
      }
      else {
        uVar4 = param_5[1];
      }
      if (((uVar5 >> 10 & 1) != 0) && (*(int *)(param_5 + 6) != 0)) {
        *(uint *)(*param_1 + 0x99c) = *(uint *)(*param_1 + 0x99c) | 0x10;
      }
    }
    iVar2 = FUN_00168ad4(*param_1 + 0x290,uVar4,lVar3);
    if (iVar2 == 0) {
      iVar2 = FUN_00168ba4(*param_1 + 0x6e8,lVar3);
      if (iVar2 == 0) {
        iVar2 = FUN_00172448(*param_1,lVar3);
        if (iVar2 == 0) {
          uVar1 = *(long *)(*param_1 + 0x928) + 0x4009;
          uVar8 = uVar1 / 0x400a;
          if (uVar1 < 0x400a) {
            uVar8 = 1;
          }
          iVar2 = FUN_0016b2c0(*param_1 + 0x158,0x400a,uVar8,1,10,lVar3);
          if (iVar2 == 0) {
            FUN_0016c3ec(*param_1 + 0x150,lVar3);
            memcpy((void *)(*param_1 + 0x7d8),param_2,0xb8);
            *(undefined8 *)(*param_1 + 0x8b8) = param_3;
            FUN_0016c430(*param_1);
            if (DAT_04be2060 != 0) {
              lVar3 = *param_1;
              if (param_4 != 0) {
                if ((*(byte *)(lVar3 + 0x99c) >> 1 & 1) == 0) {
                  *(undefined4 *)(lVar3 + 0x280) = 0;
                  *(undefined8 *)(lVar3 + 0x270) = 0x18;
                  return 0;
                }
                *(undefined4 *)(lVar3 + 0x280) = 1;
                return 0;
              }
              *(undefined4 *)(lVar3 + 0x280) = 1;
              *(undefined4 *)(*param_1 + 0x198) = 3;
              FUN_0016b500(*param_1 + 0x158,"PRI * HTTP/2.0\r\n\r\nSM\r\n\r\n",0x18);
            }
            return 0;
          }
          FUN_00172498();
        }
        FUN_00168c88(*param_1 + 0x6e8);
      }
      thunk_FUN_00168c10(*param_1 + 0x290);
    }
    FUN_001689f8(lVar3,*param_1);
  }
  return iVar2;
}

