
/* WARNING: Removing unreachable block (ram,0x01eb3d64) */

void FUN_01eb3cb8(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined8 *puVar3;
  float fVar4;
  undefined **local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined1 local_3c;
  undefined1 local_35;
  
  FUN_01e9dbb0();
  *(undefined2 *)((long)param_1 + 0xaf64) = 0;
  *(undefined8 *)((long)param_1 + 0xaf54) = 0;
  *(undefined8 *)((long)param_1 + 0xaf5c) = 0;
  param_1[0x15ef] = 0;
  *(undefined8 *)((long)param_1 + 0xaf44) = 0;
  *(undefined8 *)((long)param_1 + 0xaf4c) = 0;
  *(undefined8 *)((long)param_1 + 0xaf34) = 0;
  *(undefined8 *)((long)param_1 + 0xaf3c) = 0;
  *param_1 = &PTR_LAB_04a5f9f8;
  param_1[0x15ed] = 0;
  param_1[0x15ee] = 0;
  *(undefined8 *)((long)param_1 + 0xafbc) = 0;
  param_1[0x15f0] = &PTR_LAB_04a5ff48;
  param_1[0x15f1] = param_1;
  param_1[0x15f4] = &DAT_048f9750;
  param_1[0x15f5] = 0;
  *(undefined4 *)((long)param_1 + 0xafc4) = 0xffffffff;
  param_1[0x15f2] = PTR_FUN_04bc1df8;
  param_1[0x15f3] = 0;
  local_35 = 0;
  local_3c = 0;
  param_1[0x158e] = param_1 + 0x15f0;
  local_48 = 0x10;
  puStack_50 = &local_44;
  local_44 = 0x65636e6172746e45;
  local_58 = &PTR_LAB_048fb098;
  lVar2 = FUN_02917a1c(&local_58);
  if (lVar2 == 0) {
    if ((DAT_05aed670 == 0) || (*(long *)(DAT_05aed670 + 0x330) == 0)) goto LAB_01eb3df4;
    puVar3 = (undefined8 *)
             (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338))
    ;
    iVar1 = FUN_006bd550(*puVar3,0);
    if (((iVar1 != 0x758f7eaf) ||
        (((DAT_05aed670 == 0 || (lVar2 = *(long *)(DAT_05aed670 + 0x330), lVar2 == 0)) ||
         (*(int *)(lVar2 + 0x260) == 0)))) ||
       ((*(long *)(lVar2 + 600) == 0 || (lVar2 = *(long *)(lVar2 + 600) + -0x40, lVar2 == 0))))
    goto LAB_01eb3df4;
  }
  fVar4 = *(float *)(lVar2 + 0x14);
  *(uint *)(param_1 + 0x15f5) =
       (int)((float)(int)*(float *)(lVar2 + 0xc) / 5.0) - (uint)(*(float *)(lVar2 + 0xc) < 0.0);
  *(uint *)((long)param_1 + 0xafac) = (int)((float)(int)fVar4 / 5.0) - (uint)(fVar4 < 0.0);
LAB_01eb3df4:
  lVar2 = param_1[1];
  *(undefined4 *)(param_1 + 0x15f6) = *(undefined4 *)(lVar2 + 0x6a8);
  *(undefined4 *)((long)param_1 + 0xafb4) = *(undefined4 *)(lVar2 + 0x6ac);
  *(undefined4 *)(param_1 + 0x15f7) = *(undefined4 *)(lVar2 + 0x6b0);
  *(undefined4 *)((long)param_1 + 0xafbc) = *(undefined4 *)(lVar2 + 0x6b4);
  return;
}

