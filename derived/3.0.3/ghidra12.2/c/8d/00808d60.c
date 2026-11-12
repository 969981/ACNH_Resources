
void FUN_00808d60(undefined8 *param_1,long param_2)

{
  char cVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined *local_80;
  long lStack_78;
  undefined4 local_70;
  undefined *local_68;
  long lStack_60;
  undefined4 local_58;
  undefined4 local_50 [2];
  undefined8 *local_48;
  
  *(undefined4 *)param_1 = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  lVar2 = 0;
  puVar4 = (undefined8 *)((long)param_1 + 4);
  *puVar4 = 0;
  lStack_60 = param_2 + 0x2c;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  lStack_78 = param_2 + 0x42;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  do {
    lVar3 = param_2 + lVar2 * 2;
    if (*(short *)(lVar3 + 0x2c) == 0) goto LAB_00808dfc;
    if (*(short *)(lVar3 + 0x2e) == 0) {
      lVar2 = lVar2 + 1;
      goto LAB_00808dfc;
    }
    if (*(short *)(lVar3 + 0x30) == 0) {
      lVar2 = lVar2 + 2;
      goto LAB_00808dfc;
    }
    lVar2 = lVar2 + 3;
  } while (lVar2 != 0x80001);
  lVar2 = 0;
LAB_00808dfc:
  lVar3 = 0;
  local_58 = (undefined4)lVar2;
  local_68 = PTR_DAT_04bb2de8 + 0x10;
  do {
    lVar2 = param_2 + lVar3 * 2;
    if (*(short *)(lVar2 + 0x42) == 0) goto LAB_00808e50;
    if (*(short *)(lVar2 + 0x44) == 0) {
      lVar3 = lVar3 + 1;
      goto LAB_00808e50;
    }
    if (*(short *)(lVar2 + 0x46) == 0) {
      lVar3 = lVar3 + 2;
      goto LAB_00808e50;
    }
    lVar3 = lVar3 + 3;
  } while (lVar3 != 0x80001);
  lVar3 = 0;
LAB_00808e50:
  local_48 = param_1 + 4;
  local_80 = PTR_DAT_04bb2de8 + 0x10;
  local_70 = (undefined4)lVar3;
  *(undefined4 *)((long)param_1 + 0x1c) = 0xffffffff;
  local_50[0] = 10;
  FUN_02906c90(local_50,&local_68);
  *(undefined4 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 3) = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 2;
  local_50[0] = 10;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined4 *)((long)param_1 + 0x14) = 0;
  *puVar4 = 0;
  *(undefined8 *)((long)param_1 + 0xc) = 0;
  local_48 = puVar4;
  FUN_02906c90(local_50,&local_80);
  cVar1 = *(char *)(param_2 + 0x3e);
  *(undefined4 *)param_1 = 0xffffffff;
  *(uint *)((long)param_1 + 0x34) = (uint)(cVar1 != '\0');
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

