
uint FUN_018d2af4(float *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  undefined *local_50;
  int local_48;
  int iStack_44;
  undefined4 local_3c;
  undefined1 auStack_38 [24];
  
  local_50 = PTR_DAT_04bb2010 + 0x10;
  local_60 = 0;
  local_68 = PTR_DAT_04bbfe68 + 0x10;
  local_48 = (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0);
  iStack_44 = (int)((float)(int)param_1[2] / 5.0) - (uint)(param_1[2] < 0.0);
  lVar7 = *(long *)PTR_DAT_04bb2720;
  local_3c = param_2;
  if (lVar7 == 0) {
    puVar8 = &DAT_055c04a0;
  }
  else {
    puVar8 = &DAT_055c04a0;
    if (*(long *)(lVar7 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar7 + 0x338));
      iVar3 = FUN_006bd550(*puVar8,0);
      puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar8 = &DAT_055c04a0;
      }
    }
  }
  local_5c = *(undefined4 *)(puVar8 + 7);
  local_58 = FUN_017baf44();
  local_58 = local_58 & 1;
  if (*(long *)(PTR_DAT_04bbec30 + 8) != 0) {
    uVar4 = 0;
    iVar3 = (int)((float)(int)*param_1 / 10.0) - (uint)(*param_1 < 0.0);
    uVar1 = iVar3 - *(int *)(PTR_DAT_04bbec38 + 0x10);
    if ((iVar3 < *(int *)(PTR_DAT_04bbec38 + 0x10)) || (*(int *)(PTR_DAT_04bbec38 + 0x20) < iVar3))
    goto LAB_018d2cf8;
    iVar3 = (int)((float)(int)param_1[2] / 10.0) - (uint)(param_1[2] < 0.0);
    uVar2 = iVar3 - *(int *)(PTR_DAT_04bbec38 + 0x14);
    if ((iVar3 < *(int *)(PTR_DAT_04bbec38 + 0x14)) || (*(int *)(PTR_DAT_04bbec38 + 0x24) < iVar3))
    goto LAB_018d2cf8;
    lVar7 = (long)(int)(uVar1 + *(uint *)PTR_DAT_04bbec30 * uVar2);
    if (*(uint *)(PTR_DAT_04bbec30 + 4) <= uVar2 || *(uint *)PTR_DAT_04bbec30 <= uVar1) {
      lVar7 = 0;
    }
    if (*(char *)(*(long *)(PTR_DAT_04bbec30 + 8) + lVar7 * 8 + 4) == '\0') {
      uVar5 = FUN_01a5190c(&local_68,0,&local_50,0);
      uVar6 = FUN_018bbb18(uVar5,&local_50,&local_3c);
      if ((uVar6 & 1) != 0) {
        FUN_0124c030(auStack_38,uVar5);
        uVar4 = FUN_01250da8(auStack_38,2);
        uVar4 = uVar4 ^ 1;
        goto LAB_018d2cf8;
      }
    }
  }
  uVar4 = 0;
LAB_018d2cf8:
  return uVar4 & 1;
}

