
void FUN_03aa4e80(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  undefined1 *local_60;
  undefined1 *puStack_58;
  
  if (*(char *)(param_1 + 0x3c0) != '\0') {
    if (param_3 == 0xffffffff) {
      uVar1 = *(uint *)(param_1 + 8);
    }
    else {
      uVar1 = *(uint *)(param_1 + 8) >> (ulong)(param_3 & 0x1f) & 1;
    }
    if (uVar1 != 0) {
      uVar1 = param_3;
      if (*(uint *)(param_1 + 0x1a8) <= param_3) {
        uVar1 = 0;
      }
      lVar6 = *(long *)(param_1 + 0x1b0) + (long)(int)uVar1 * 0x1330;
      FUN_03aa14d0(lVar6 + 0xc70,param_2,*(long *)(param_4 + 0x20) + 8);
      FUN_03aa4ff0(param_1,param_2,param_3,param_4);
      uVar3 = FUN_038e4d90(param_1 + 0x4cc,param_2);
      local_60 = &DAT_3f8000003f800000;
      puStack_58 = &DAT_3f8000003f800000;
      FUN_03aa6320(0x3f800000,uVar3,param_2,lVar6 + 0xc70,lVar6 + 0x5a0,0,1,&local_60,0);
      puVar2 = PTR_DAT_04bbd510;
      lVar5 = *(long *)(param_1 + 0x1b0);
      if (*(uint *)(param_1 + 0x1a8) <= param_3) {
        param_3 = 0;
      }
      lVar4 = lVar5 + (long)(int)param_3 * 0x1330;
      if (*(char *)(lVar4 + 0x8f8) != '\0') {
        FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,
                     *(undefined8 *)(lVar5 + (long)(int)param_3 * 0x1330 + 0x5a8));
      }
      *(undefined1 *)(lVar4 + 0x8f8) = 0;
      lVar5 = lVar5 + (long)(int)param_3 * 0x1330;
      *(undefined8 *)(lVar5 + 0x5a8) = 0;
      *(undefined1 *)(lVar5 + 0x8fa) = 0;
      if (*(char *)(lVar6 + 0xfc8) != '\0') {
        FUN_039499cc(*(undefined8 *)puVar2,*(undefined8 *)(lVar6 + 0xc78));
      }
      *(undefined8 *)(lVar6 + 0xc78) = 0;
      *(undefined1 *)(lVar6 + 0xfc8) = 0;
      *(undefined1 *)(lVar6 + 0xfca) = 0;
    }
  }
  return;
}

