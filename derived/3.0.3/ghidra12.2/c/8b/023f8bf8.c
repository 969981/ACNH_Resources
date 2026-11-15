
undefined8 FUN_023f8bf8(long param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  int iVar6;
  float fVar7;
  undefined8 local_70;
  float local_68;
  undefined4 local_64;
  byte local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined2 local_50;
  undefined1 local_4e;
  undefined8 local_4c;
  
  *(undefined8 *)(param_1 + 0x1980) = 0;
  *(undefined8 *)(param_1 + 0x1988) = 0;
  *(undefined8 *)(param_1 + 0x1990) = 0;
  *(undefined8 *)(param_1 + 0x1998) = 0;
  *(undefined8 *)(param_1 + 0x19a0) = 0;
  *(undefined8 *)(param_1 + 0x19a8) = 0;
  *(undefined8 *)(param_1 + 0x19b0) = 0;
  *(undefined8 *)(param_1 + 0x19b8) = 0;
  *(undefined8 *)(param_1 + 0x19c0) = 0;
  *(undefined8 *)(param_1 + 0x19c8) = 0;
  *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
  *(undefined8 *)(param_1 + 0x19d0) = 0;
  *(undefined2 *)(param_1 + 0x19d8) = 0;
  *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
  *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
  *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
  local_70 = CONCAT44(local_70._4_4_,*param_2);
  *(char *)(param_1 + 0x1980) = (char)*param_2;
  lVar5 = *(long *)(param_1 + 0x68);
  *(undefined2 *)(param_1 + 0x198b) = *(undefined2 *)(lVar5 + 0x2b6);
  uVar1 = *(undefined1 *)(param_2 + 1);
  *(undefined1 *)(param_1 + 0x198e) = 0;
  *(undefined1 *)(param_1 + 0x198d) = uVar1;
  fVar7 = (float)param_2[2];
  if ((fVar7 == 0.0) && ((float)param_2[4] == 0.0)) {
    *(undefined4 *)(param_1 + 0x1981) = *(undefined4 *)(lVar5 + 0x278);
    iVar6 = (int)(*(float *)(lVar5 + 0x27c) * 4.0);
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    *(short *)(param_1 + 0x1985) = (short)iVar6;
    *(undefined4 *)(param_1 + 0x1987) = *(undefined4 *)(lVar5 + 0x280);
    if (((*(char *)(param_2 + 1) != '\0') && (*(int *)(param_1 + 0x178) != 1)) &&
       (*(byte *)(param_1 + 0x1ee8) < 8)) {
      uVar3 = FUN_02582d8c(param_1 + 0x1ee8,1);
      puVar2 = PTR_DAT_04bb4fb8;
      if ((((uVar3 < 8) &&
           (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')) &&
          ((*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar3 * 0x13f0 + 0x13d6) != '\0' &&
           ((uVar3 = FUN_02582d8c(param_1 + 0x1ee8,1), uVar3 < 8 &&
            (*(char *)(*(long *)puVar2 + (ulong)uVar3 * 0x13f0 + 0x13d4) != '\0')))))) &&
         (lVar5 = *(long *)puVar2 + (ulong)uVar3 * 0x13f0, *(int *)(lVar5 + 0x4f8) != 0)) {
        *(undefined4 *)(param_1 + 0x1981) = *(undefined4 *)(lVar5 + 0x50c);
        iVar6 = (int)(*(float *)(lVar5 + 0x510) * 4.0);
        if (0x7ffe < iVar6) {
          iVar6 = 0x7fff;
        }
        if (iVar6 < -0x7fff) {
          iVar6 = -0x8000;
        }
        *(short *)(param_1 + 0x1985) = (short)iVar6;
        *(undefined4 *)(param_1 + 0x1987) = *(undefined4 *)(lVar5 + 0x514);
        *(undefined2 *)(param_1 + 0x198b) = *(undefined2 *)(lVar5 + 0x51e);
      }
    }
  }
  else {
    if (((*(uint *)(param_1 + 0x1810) & 0xfffffff7) == 1) && (*(char *)(param_2 + 1) != '\0')) {
      local_50 = 0x101;
      local_4c = 0x1000100000000;
      local_60 = *(byte *)(param_1 + 0x1ee8);
      local_64 = 0x40880000;
      local_4e = 0;
      local_5c = *(undefined4 *)PTR_DAT_04bb3238;
      if (7 < local_60) {
        local_60 = 0xff;
      }
      local_70 = CONCAT44(param_2[3],fVar7);
      local_58 = 0xbf80000000000003;
      local_68 = (float)param_2[4];
      uVar4 = FUN_0251fad0(&local_70,0);
      if ((uVar4 & 1) != 0) {
        return 0;
      }
    }
    local_70 = *(undefined8 *)(param_2 + 2);
    local_68 = (float)param_2[4];
    fVar7 = (float)FUN_016e026c(0,&local_70,0,0);
    iVar6 = (int)(fVar7 * 4.0);
    *(undefined4 *)(param_1 + 0x1981) = (undefined4)local_70;
    *(float *)(param_1 + 0x1987) = local_68;
    if (0x7ffe < iVar6) {
      iVar6 = 0x7fff;
    }
    if (iVar6 < -0x7fff) {
      iVar6 = -0x8000;
    }
    *(short *)(param_1 + 0x1985) = (short)iVar6;
  }
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x68a9a319) {
    *(undefined2 *)(param_1 + 0x198b) = 0x8000;
  }
  local_70 = CONCAT44(local_70._4_4_,0x89);
  *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
  *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
  *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
  *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
  *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
  *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
  *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
  *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
  *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
  *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
  *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
  *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
  *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
  *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
  *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
  *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
  lVar5 = 0;
  if (*(long *)(param_1 + 0x70) != 0) {
    lVar5 = *(long *)(param_1 + 0x70) + 0x278;
  }
  FUN_03ebb160(lVar5,0x89);
  return 1;
}

