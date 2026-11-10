
undefined8
FUN_00144cf8(undefined8 param_1,byte *param_2,ulong param_3,long *param_4,long *param_5,uint param_6
            )

{
  ulong uVar1;
  byte bVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  byte *pbVar7;
  char *local_70;
  undefined2 local_64;
  undefined1 local_62;
  
  if (param_3 == 0) {
    param_3 = strlen((char *)param_2);
  }
  lVar4 = FUN_001432f0(param_3 + 1);
  if (lVar4 == 0) {
    uVar5 = 0x1b;
  }
  else {
    lVar6 = 0;
    uVar1 = param_3 + 1;
    for (; param_3 != 0; param_3 = param_3 - 1) {
      bVar2 = *param_2;
      pbVar7 = param_2;
      if ((param_3 < 3) || (bVar2 != 0x25)) {
LAB_00144dc0:
        param_2 = pbVar7;
        if (((param_6 & 1) != 0) && (bVar2 < 0x20)) {
          FUN_00143300(lVar4);
          return 3;
        }
      }
      else {
        iVar3 = FUN_00146594(param_2[1]);
        if (iVar3 != 0) {
          pbVar7 = param_2 + 2;
          iVar3 = FUN_00146594(*pbVar7);
          if (iVar3 != 0) {
            local_70 = (char *)0x0;
            local_64 = *(undefined2 *)(param_2 + 1);
            local_62 = 0;
            strtoul((char *)&local_64,&local_70,0x10);
            bVar2 = FUN_00146658();
            param_3 = uVar1 - 3;
            goto LAB_00144dc0;
          }
        }
        bVar2 = 0x25;
      }
      *(byte *)(lVar4 + lVar6) = bVar2;
      lVar6 = lVar6 + 1;
      param_2 = param_2 + 1;
      uVar1 = param_3;
    }
    *(undefined1 *)(lVar4 + lVar6) = 0;
    if (param_5 != (long *)0x0) {
      *param_5 = lVar6;
    }
    uVar5 = 0;
    *param_4 = lVar4;
  }
  return uVar5;
}

