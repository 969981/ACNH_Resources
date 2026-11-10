
undefined8 FUN_0015dae4(long *param_1,undefined8 param_2,undefined8 param_3,byte param_4)

{
  byte *pbVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  lVar4 = *param_1;
  pbVar1 = (byte *)(lVar4 + 0x1280);
  if ((((*(uint *)((long)param_1 + 0x41c) ^ 0xffffffff) & 0x120) == 0 ||
       (*(uint *)((long)param_1 + 0x41c) & 0x80) != 0) || (param_1[0x45] != 0)) {
    lVar3 = *(long *)(lVar4 + 0x1268);
    if ((lVar3 != 0) && (*(long *)(lVar4 + 0x1270) == 0)) {
      *(long *)(lVar4 + 0x1270) = lVar3;
    }
    lVar3 = *(long *)(lVar4 + 0x1288);
    if ((lVar3 != 0) && (*(long *)(lVar4 + 0x1290) == 0)) {
      *(long *)(lVar4 + 0x1290) = lVar3;
    }
    if (((*(uint *)((long)param_1 + 0x41c) >> 5 & 1) == 0) ||
       (((*(uint *)((long)param_1 + 0x41c) & 0x4000) == 0) == (bool)(param_4 & 1))) {
      *(byte *)(lVar4 + 0x12a0) = *(byte *)(lVar4 + 0x12a0) | 1;
    }
    else {
      uVar2 = FUN_0015dc44(param_1,(long *)(lVar4 + 0x1288),param_2,param_3,1);
      if ((int)uVar2 != 0) {
        return uVar2;
      }
    }
    if (((((*(ushort *)(lVar4 + 0x15c4) >> 1 & 1) == 0) ||
         ((*(byte *)((long)param_1 + 0x41e) >> 4 & 1) != 0)) || (*(long *)(lVar4 + 0x1168) == 0)) ||
       (((*(byte *)(lVar4 + 0xf62) >> 4 & 1) != 0 ||
        (uVar2 = FUN_00144a90(*(long *)(lVar4 + 0x1168),param_1[0x1a]), (int)uVar2 != 0)))) {
      uVar2 = FUN_0015dc44(param_1,(long *)(lVar4 + 0x1268),param_2,param_3,0);
      return uVar2;
    }
    *pbVar1 = *pbVar1 | 1;
  }
  else {
    uVar2 = 0;
    *pbVar1 = *pbVar1 | 1;
    *(byte *)(lVar4 + 0x12a0) = *(byte *)(lVar4 + 0x12a0) | 1;
  }
  return uVar2;
}

