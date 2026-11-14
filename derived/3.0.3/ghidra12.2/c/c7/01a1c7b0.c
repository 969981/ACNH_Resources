
byte FUN_01a1c7b0(float *param_1,undefined4 param_2,ulong param_3)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  ulong uVar6;
  uint uVar7;
  long lVar8;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_2c = 0;
  uVar6 = FUN_01a12d50(*(undefined8 *)PTR_DAT_04bb4008,&local_2c,param_2);
  bVar5 = 0;
  if ((uVar6 & 1) == 0) goto LAB_01a1c934;
  if (DAT_04c487d4 == -1) {
LAB_01a1c870:
    uVar7 = 0;
  }
  else {
    local_28 = 0x1a;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 8);
    if (0xff < (uint)(int)DAT_04c487d4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x1a & 1) == 0) goto LAB_01a1c870;
    local_24 = 1;
    uVar7 = *puVar1 >> 1 & 1;
  }
  bVar5 = FUN_011e1480(param_1,local_2c,1,uVar7);
  if (((bVar5 & 1) != 0) && ((param_3 & 1) != 0)) {
    if (DAT_052ae7b0 != 0) {
      iVar2 = (int)((float)(int)*param_1 / 10.0) - (uint)(*param_1 < 0.0);
      iVar3 = (int)((float)(int)param_1[2] / 10.0) - (uint)(param_1[2] < 0.0);
      uVar7 = iVar2 - *(int *)(PTR_DAT_04bbec38 + 0x10);
      if (((*(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar2 && iVar2 <= *(int *)(PTR_DAT_04bbec38 + 0x20)
           ) && *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar3) &&
          iVar3 <= *(int *)(PTR_DAT_04bbec38 + 0x24)) {
        uVar4 = iVar3 - *(int *)(PTR_DAT_04bbec38 + 0x14);
        lVar8 = (long)(int)(uVar7 + DAT_052ae7a8 * uVar4);
        if (DAT_052ae7ac <= uVar4 || DAT_052ae7a8 <= uVar7) {
          lVar8 = 0;
        }
        bVar5 = *(char *)(DAT_052ae7b0 + lVar8 * 8 + 4) == '\0';
        goto LAB_01a1c934;
      }
    }
    bVar5 = 0;
  }
LAB_01a1c934:
  return bVar5 & 1;
}

