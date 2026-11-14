
void FUN_0186d57c(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  undefined4 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  undefined *local_78;
  undefined8 local_70;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  undefined *local_50;
  int local_48;
  int iStack_44;
  
  FUN_01813f50();
  lVar9 = *(long *)(param_1 + 0x4b8);
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x98) + 0xf0))();
  *(undefined4 *)(param_1 + 0x308) = *puVar6;
  lVar10 = *(long *)PTR_DAT_04bb2698;
  if (lVar10 == 0) {
    puVar8 = malloc(0x10);
  }
  else {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    puVar8 = (undefined8 *)(lVar10 + 8);
    if (lVar7 != 0) {
      puVar8 = (undefined8 *)(lVar7 + 0xa8);
    }
    puVar8 = (undefined8 *)(**(code **)(*(long *)*puVar8 + 0x30))((long *)*puVar8,0x10,8);
  }
  *puVar8 = 0;
  puVar8[1] = 0;
  *(undefined8 **)(param_1 + 0x4f0) = puVar8;
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0xf8) + 0xf0))((long *)(lVar9 + 0xf8));
  **(undefined4 **)(param_1 + 0x4f0) = *puVar6;
  puVar6 = (undefined4 *)(**(code **)(*(long *)(lVar9 + 0x128) + 0xf0))(lVar9 + 0x128);
  *(undefined4 *)(*(long *)(param_1 + 0x4f0) + 4) = *puVar6;
  *(undefined1 *)(param_1 + 0x3b4) = 0;
  puVar4 = PTR_DAT_04bbec50;
  if ((*(long *)(PTR_DAT_04bbec50 + 8) == 0) || (*(char *)(param_1 + 0x432) != '\0'))
  goto LAB_0186d8bc;
  local_60 = 0;
  local_68 = PTR_DAT_04bbfe68 + 0x10;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  if (lVar9 == 0) {
    puVar8 = &DAT_055c04a0;
  }
  else {
    puVar8 = &DAT_055c04a0;
    if (*(long *)(lVar9 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar5 = FUN_006bd550(*puVar8,0);
      puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar8 = &DAT_055c04a0;
      }
    }
  }
  local_5c = *(undefined4 *)(puVar8 + 7);
  local_58 = FUN_017baf44();
  puVar3 = PTR_DAT_04bb2010;
  local_58 = local_58 & 1;
  local_78 = PTR_DAT_04bb2010 + 0x10;
  local_70 = 0;
  local_48 = (int)((float)(int)*(float *)(param_2 + 8) / 5.0) -
             (uint)(*(float *)(param_2 + 8) < 0.0);
  iStack_44 = (int)((float)(int)*(float *)(param_2 + 0x10) / 5.0) -
              (uint)(*(float *)(param_2 + 0x10) < 0.0);
  local_50 = local_78;
  FUN_01a5190c(&local_68,0,&local_50,&local_78);
  if (*(long *)(puVar4 + 8) != 0) {
    uVar1 = (int)local_70 - *(int *)(PTR_DAT_04bbec58 + 0x10);
    if (((int)local_70 < *(int *)(PTR_DAT_04bbec58 + 0x10)) ||
       (*(int *)(PTR_DAT_04bbec58 + 0x20) < (int)local_70)) goto LAB_0186d8bc;
    uVar2 = local_70._4_4_ - *(int *)(PTR_DAT_04bbec58 + 0x14);
    if ((local_70._4_4_ < *(int *)(PTR_DAT_04bbec58 + 0x14)) ||
       (*(int *)(PTR_DAT_04bbec58 + 0x24) < local_70._4_4_)) goto LAB_0186d8bc;
    lVar9 = (long)(int)(uVar1 + *(uint *)puVar4 * uVar2);
    if (*(uint *)(puVar4 + 4) <= uVar2 || *(uint *)puVar4 <= uVar1) {
      lVar9 = 0;
    }
    if (*(char *)(*(long *)(puVar4 + 8) + lVar9) != '\0') goto LAB_0186d8bc;
  }
  lVar9 = *(long *)(param_1 + 0x48);
  if (lVar9 != 0) {
    local_50 = puVar3 + 0x10;
    local_48 = (int)((float)(int)*(float *)(lVar9 + 0x160) / 5.0) -
               (uint)(*(float *)(lVar9 + 0x160) < 0.0);
    iStack_44 = (int)((float)(int)*(float *)(lVar9 + 0x168) / 5.0) -
                (uint)(*(float *)(lVar9 + 0x168) < 0.0);
    FUN_01a5190c(&local_68,0,&local_50,param_1 + 0x530);
    lVar9 = *(long *)(puVar4 + 8);
    if (lVar9 != 0) {
      iVar5 = *(int *)(param_1 + 0x538);
      uVar1 = iVar5 - *(int *)(PTR_DAT_04bbec58 + 0x10);
      if ((*(int *)(PTR_DAT_04bbec58 + 0x10) <= iVar5) &&
         (iVar5 <= *(int *)(PTR_DAT_04bbec58 + 0x20))) {
        iVar5 = *(int *)(param_1 + 0x53c);
        uVar2 = iVar5 - *(int *)(PTR_DAT_04bbec58 + 0x14);
        if ((*(int *)(PTR_DAT_04bbec58 + 0x14) <= iVar5) &&
           (iVar5 <= *(int *)(PTR_DAT_04bbec58 + 0x24))) {
          lVar10 = (long)(int)(uVar1 + *(uint *)puVar4 * uVar2);
          if (*(uint *)(puVar4 + 4) <= uVar2 || *(uint *)puVar4 <= uVar1) {
            lVar10 = 0;
          }
          if (*(char *)(lVar9 + lVar10) == '\0') {
            *(undefined1 *)(lVar9 + lVar10) = 1;
          }
        }
      }
    }
    *(undefined1 *)(param_1 + 0x528) = 1;
  }
LAB_0186d8bc:
  puVar4 = PTR_DAT_04bbe6b0;
  *(undefined **)(param_1 + 0x478) = PTR_LAB_04bbe750;
  *(undefined **)(param_1 + 0x470) = puVar4 + 0x10;
  return;
}

