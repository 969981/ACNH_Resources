
/* WARNING: Removing unreachable block (ram,0x01f10200) */

void FUN_01f1011c(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  int iVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined4 uVar5;
  float fVar6;
  undefined *local_58;
  undefined8 *puStack_50;
  undefined4 local_48;
  undefined8 local_44;
  undefined1 local_3c;
  undefined1 local_35;
  
  uVar5 = 1;
  if (*(int *)(param_2 + 0x50c) == 0x10) {
    uVar5 = 2;
  }
  FUN_01e9dbb0();
  *(undefined4 *)(param_1 + 0x15f0) = uVar5;
  *(undefined2 *)((long)param_1 + 0xaf84) = 0;
  *(undefined2 *)((long)param_1 + 0xaf64) = 0;
  param_1[0x15ef] = 0;
  *(undefined8 *)((long)param_1 + 0xaf54) = 0;
  *(undefined8 *)((long)param_1 + 0xaf5c) = 0;
  *(undefined8 *)((long)param_1 + 0xaf44) = 0;
  *(undefined8 *)((long)param_1 + 0xaf4c) = 0;
  *(undefined8 *)((long)param_1 + 0xaf34) = 0;
  *(undefined8 *)((long)param_1 + 0xaf3c) = 0;
  param_1[0x15ed] = 0;
  param_1[0x15ee] = 0;
  param_1[0x15f1] = 0;
  param_1[0x15f2] = 0;
  puVar1 = PTR_DAT_04bc2208;
  *(undefined8 *)((long)param_1 + 0xaf95) = 0;
  param_1[0x15f8] = puVar1 + 0x10;
  param_1[0x15fb] = 0;
  param_1[0x15f9] = 0;
  param_1[0x15fa] = 0;
  param_1[0x15ff] = 0;
  param_1[0x15fd] = 0;
  param_1[0x15fe] = 0;
  param_1[0x15fc] = PTR_DAT_04bc2210 + 0x10;
  param_1[0x15f4] = puVar1 + 0x10;
  param_1[0x15f5] = param_1;
  param_1[0x15f6] = PTR_LAB_04bc21f8;
  param_1[0x15f7] = 0;
  param_1[0x1597] = param_1 + 0x15f4;
  puVar1 = PTR_DAT_04bb2010;
  *param_1 = &PTR_LAB_04a63e30;
  param_1[0x1602] = 0;
  param_1[0x1603] = 0;
  local_35 = 0;
  local_3c = 0;
  local_48 = 0x10;
  param_1[0x1600] = puVar1 + 0x10;
  param_1[0x1601] = 0;
  param_1[0x1604] = 0xffffffff00000000;
  local_44 = 0x65636e6172746e45;
  puStack_50 = &local_44;
  local_58 = PTR_DAT_04bb2ab0 + 0x10;
  lVar3 = FUN_02917a1c(&local_58);
  puVar1 = PTR_DAT_04bb2720;
  if (lVar3 == 0) {
    lVar3 = *(long *)PTR_DAT_04bb2720;
    if ((lVar3 == 0) || (*(long *)(lVar3 + 0x330) == 0)) goto LAB_01f102b8;
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar3 + 0x338));
    iVar2 = FUN_006bd550(*puVar4,0);
    if (((iVar2 != 0x758f7eaf) ||
        (((*(long *)puVar1 == 0 || (lVar3 = *(long *)(*(long *)puVar1 + 0x330), lVar3 == 0)) ||
         (*(int *)(lVar3 + 0x260) == 0)))) ||
       ((*(long *)(lVar3 + 600) == 0 || (lVar3 = *(long *)(lVar3 + 600) + -0x40, lVar3 == 0))))
    goto LAB_01f102b8;
  }
  fVar6 = *(float *)(lVar3 + 0x14);
  *(uint *)(param_1 + 0x1601) =
       (int)((float)(int)*(float *)(lVar3 + 0xc) / 5.0) - (uint)(*(float *)(lVar3 + 0xc) < 0.0);
  *(uint *)((long)param_1 + 0xb00c) = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
LAB_01f102b8:
  lVar3 = param_1[1];
  *(undefined4 *)(param_1 + 0x1602) = *(undefined4 *)(lVar3 + 0x6a8);
  *(undefined4 *)((long)param_1 + 0xb014) = *(undefined4 *)(lVar3 + 0x6ac);
  *(undefined4 *)(param_1 + 0x1603) = *(undefined4 *)(lVar3 + 0x6b0);
  *(undefined4 *)((long)param_1 + 0xb01c) = *(undefined4 *)(lVar3 + 0x6b4);
  return;
}

