
undefined8 FUN_018d2d0c(undefined8 param_1,undefined4 *param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined2 *puVar6;
  long lVar7;
  undefined8 *puVar8;
  undefined4 uVar9;
  undefined *local_68;
  int local_60;
  int iStack_5c;
  undefined2 local_50;
  undefined1 local_4e;
  undefined1 local_4d;
  undefined4 local_4c;
  undefined **local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  undefined8 local_30;
  float local_28;
  
  if (1 < *(byte *)(*DAT_0537d558 + 0x476)) {
    return 0;
  }
  local_28 = 0.0;
  local_30 = 0;
  uVar5 = FUN_01a12b00(*(undefined8 *)PTR_DAT_04bb4008,*param_2);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  uVar5 = FUN_01a1c7b0(&local_30,*param_2,0);
  if ((uVar5 & 1) == 0) {
    return 0;
  }
  uVar9 = FUN_015cb8d4(&local_30,1);
  local_30 = CONCAT44(uVar9,(float)local_30);
  if (DAT_052ae7b0 != 0) {
    iVar3 = (int)((float)(int)(float)local_30 / 10.0) - (uint)((float)local_30 < 0.0);
    iVar1 = (int)((float)(int)local_28 / 10.0) - (uint)(local_28 < 0.0);
    uVar4 = iVar3 - *(int *)(PTR_DAT_04bbec38 + 0x10);
    if (((*(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar3 && iVar3 <= *(int *)(PTR_DAT_04bbec38 + 0x20))
        && *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar1) && iVar1 <= *(int *)(PTR_DAT_04bbec38 + 0x24)
       ) {
      uVar2 = iVar1 - *(int *)(PTR_DAT_04bbec38 + 0x14);
      lVar7 = (long)(int)(uVar4 + DAT_052ae7a8 * uVar2);
      if (DAT_052ae7ac <= uVar2 || DAT_052ae7a8 <= uVar4) {
        lVar7 = 0;
      }
      if (*(char *)(DAT_052ae7b0 + lVar7 * 8 + 4) == '\0') {
        local_40 = 0;
        local_48 = &PTR_LAB_049ffa38;
        if (DAT_05aed670 == 0) {
          puVar8 = &DAT_055c04a0;
        }
        else {
          puVar8 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar8 = (undefined8 *)
                     (**(code **)(*DAT_05aed668 + 0x18))
                               (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar3 = FUN_006bd550(*puVar8,0);
            puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar3 != 0x758f7eaf) {
              puVar8 = &DAT_055c04a0;
            }
          }
        }
        local_3c = *(undefined4 *)(puVar8 + 7);
        local_38 = FUN_017baf44();
        local_38 = local_38 & 1;
        local_68 = PTR_DAT_04bb2010 + 0x10;
        local_60 = (int)((float)(int)(float)local_30 / 5.0) - (uint)((float)local_30 < 0.0);
        iStack_5c = (int)((float)(int)local_28 / 5.0) - (uint)(local_28 < 0.0);
        puVar6 = (undefined2 *)FUN_01a5190c(&local_48,0,&local_68,0);
        lVar7 = DAT_05150358;
        local_50 = *puVar6;
        local_4e = *(undefined1 *)(puVar6 + 1);
        local_4d = *(undefined1 *)((long)puVar6 + 3);
        local_4c = *(undefined4 *)(puVar6 + 2);
        if (((((DAT_05150358 != 0) && (*(long *)(DAT_05150358 + 0xb0) != 0)) &&
             (*(long *)(*(long *)(DAT_05150358 + 0xb0) + 8) != 0)) &&
            ((*(long *)(DAT_05150358 + 0x488) != 0 &&
             (*(long *)(*(long *)(DAT_05150358 + 0x488) + 8) != 0)))) &&
           ((*(long *)(DAT_05150358 + 0x2b0) != 0 &&
            (*(long *)(*(long *)(DAT_05150358 + 0x2b0) + 8) != 0)))) {
          uVar4 = FUN_0277d6c4(&local_50);
          uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
          if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
            FUN_0124c030(&local_68,&local_50);
            uVar5 = FUN_01250da8(&local_68,2);
            if ((uVar5 & 1) != 0) {
              return 0;
            }
          }
        }
        *(undefined4 *)(param_3 + 0x18) = 0;
        *(undefined8 *)(param_3 + 8) = local_30;
        *(float *)(param_3 + 0x10) = local_28;
        return 1;
      }
    }
  }
  return 0;
}

