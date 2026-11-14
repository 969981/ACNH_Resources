
void FUN_0155adbc(long *param_1,long *param_2)

{
  uint uVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04bb2698;
  if (*param_1 != 0) {
    return;
  }
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    puVar4 = malloc(0x28);
  }
  else {
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    puVar4 = (undefined8 *)(lVar7 + 8);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar3 + 0xa8);
    }
    puVar4 = (undefined8 *)(**(code **)(*(long *)*puVar4 + 0x30))((long *)*puVar4,0x28,8);
  }
  puVar4[4] = 0;
  *puVar4 = 0;
  puVar4[1] = 0;
  puVar4[2] = PTR_DAT_04bcb468 + 0x10;
  puVar4[3] = 0;
  *(undefined4 *)((long)puVar4 + 0x1c) = 0x80000000;
  *(undefined4 *)(puVar4 + 4) = 0x7fffffff;
  *param_1 = (long)puVar4;
  lVar7 = *(long *)puVar2;
  if (lVar7 == 0) {
    puVar5 = malloc(0x1088);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar5 = (undefined8 *)(lVar7 + 8);
      if (lVar3 != 0) {
        puVar5 = (undefined8 *)(lVar3 + 0xa8);
      }
      param_2 = (long *)*puVar5;
      if (param_2 == (long *)0x0) goto LAB_0155af90;
    }
    puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0x1088,8);
  }
  if (puVar5 != (undefined8 *)0x0) {
    puVar5[0xad] = 0;
    *puVar5 = 3;
    puVar5[1] = &PTR_LAB_049a8b50;
    puVar5[0xb0] = 0;
    *(undefined4 *)(puVar5 + 0xaa) = 0xffffffff;
    puVar5[0xac] = &PTR_FUN_048fc9b0;
    puVar5[0xaf] = &PTR_FUN_048fc9b0;
    memset(puVar5 + 2,0,0x540);
    *(undefined1 *)(puVar5 + 0xab) = 0;
    *(undefined1 *)(puVar5 + 0xae) = 0;
    puVar5[0xb1] = &PTR_LAB_049a8b50;
    puVar5[0x15c] = &PTR_FUN_048fc9b0;
    puVar5[0x15d] = 0;
    puVar5[0x15f] = &PTR_FUN_048fc9b0;
    puVar5[0x160] = 0;
    *(undefined4 *)(puVar5 + 0x15a) = 0xffffffff;
    memset(puVar5 + 0xb2,0,0x540);
    *(undefined1 *)(puVar5 + 0x15b) = 0;
    *(undefined1 *)(puVar5 + 0x15e) = 0;
    puVar5[0x161] = &PTR_LAB_049a8b50;
    puVar5[0x20c] = &PTR_FUN_048fc9b0;
    puVar5[0x20d] = 0;
    puVar5[0x20f] = &PTR_FUN_048fc9b0;
    puVar5[0x210] = 0;
    *(undefined4 *)(puVar5 + 0x20a) = 0xffffffff;
    memset(puVar5 + 0x162,0,0x540);
    *(undefined1 *)(puVar5 + 0x20b) = 0;
    *(undefined1 *)(puVar5 + 0x20e) = 0;
    *(undefined4 *)puVar4 = 3;
    puVar4[1] = puVar5 + 1;
  }
LAB_0155af90:
  piVar6 = (int *)*param_1;
  piVar6[6] = 0;
  uVar1 = *piVar6 - 1;
  *(bool *)(piVar6 + 9) = uVar1 != 0 && 0 < *piVar6;
  piVar6[7] = uVar1 & (int)uVar1 >> 0x1f;
  piVar6[8] = uVar1 & ((int)uVar1 >> 0x1f ^ 0xffffffffU);
  return;
}

