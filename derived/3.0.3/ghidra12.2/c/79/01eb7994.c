
/* WARNING: Removing unreachable block (ram,0x01eb7a28) */

void FUN_01eb7994(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  float fVar5;
  undefined **local_48;
  undefined8 *puStack_40;
  undefined4 local_38;
  undefined8 local_34;
  undefined1 local_2c;
  undefined1 local_25;
  
  FUN_01f9b60c();
  *(undefined1 *)(param_1 + 0x247c) = 0;
  puVar1 = PTR_DAT_04bb2010;
  *(undefined1 *)(param_1 + 0x2480) = 1;
  *(undefined8 *)((long)param_1 + 0x12404) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x1240c) = 1;
  *param_1 = &PTR_LAB_04a60010;
  *(undefined8 *)((long)param_1 + 0x123e4) = 0;
  param_1[0x247e] = puVar1 + 0x10;
  param_1[0x247f] = 0;
  *(undefined1 *)(param_1 + 0x2482) = 0;
  param_1[0x2478] = &PTR_LAB_04a60688;
  param_1[0x2479] = param_1;
  param_1[0x247a] = FUN_01ee4ad0;
  param_1[0x247b] = 0;
  puStack_40 = &local_34;
  local_38 = 0x10;
  local_25 = 0;
  local_2c = 0;
  param_1[0x158e] = param_1 + 0x2478;
  local_34 = 0x65636e6172746e45;
  local_48 = &PTR_LAB_048fb098;
  lVar3 = FUN_02917a1c(&local_48);
  if (lVar3 == 0) {
    if (DAT_05aed670 == 0) {
      return;
    }
    if (*(long *)(DAT_05aed670 + 0x330) == 0) {
      return;
    }
    puVar4 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar2 = FUN_006bd550(*puVar4,0);
    if (iVar2 != 0x758f7eaf) {
      return;
    }
    if (DAT_05aed670 == 0) {
      return;
    }
    lVar3 = *(long *)(DAT_05aed670 + 0x330);
    if (lVar3 == 0) {
      return;
    }
    if (*(int *)(lVar3 + 0x260) == 0) {
      return;
    }
    if (*(long *)(lVar3 + 600) == 0) {
      return;
    }
    lVar3 = *(long *)(lVar3 + 600) + -0x40;
    if (lVar3 == 0) {
      return;
    }
  }
  fVar5 = *(float *)(lVar3 + 0x14);
  *(uint *)(param_1 + 0x247f) =
       (int)((float)(int)*(float *)(lVar3 + 0xc) / 5.0) - (uint)(*(float *)(lVar3 + 0xc) < 0.0);
  *(uint *)((long)param_1 + 0x123fc) = (int)((float)(int)fVar5 / 5.0) - (uint)(fVar5 < 0.0);
  return;
}

