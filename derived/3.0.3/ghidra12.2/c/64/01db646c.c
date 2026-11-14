
undefined8 FUN_01db646c(long *param_1,byte *param_2,long *param_3,uint param_4)

{
  undefined *puVar1;
  short sVar2;
  ulong uVar3;
  long lVar4;
  byte bVar5;
  
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 == -1) {
    if (DAT_055cdb30 == -0x3f5c743d) {
      return 0;
    }
  }
  else {
    puVar1 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8;
    if (0xff < (uint)(int)sVar2) {
      puVar1 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar1 + 4) & 1) != 0) {
      return 0;
    }
    if (DAT_055cdb30 == -0x3f5c743d) {
      return 0;
    }
  }
  uVar3 = FUN_01df8890(param_2);
  if (((uVar3 & 1) == 0) ||
     (uVar3 = FUN_01d9dd70(*(undefined8 *)(*(long *)PTR_DAT_04bb27d0 + 8),param_2,param_1 + 1,
                           param_4 & 1), (uVar3 & 1) == 0)) {
    return 0;
  }
  if (param_3 != (long *)0x0) {
    lVar4 = param_3[3];
    *param_1 = (long)param_3;
    *(char *)(param_1 + 4) = (char)lVar4;
    *param_3 = (long)param_1;
    lVar4 = *param_1;
    *(undefined8 *)(lVar4 + 8) = 0;
    *(undefined8 *)(lVar4 + 0x10) = 0;
  }
  param_1[7] = (long)FUN_01db65a8;
  param_1[8] = 0;
  bVar5 = *param_2;
  if (7 < bVar5) {
    bVar5 = 0xff;
  }
  *(byte *)(param_1 + 0x1082) = bVar5;
  return 1;
}

