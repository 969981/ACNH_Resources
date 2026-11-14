
byte FUN_01500808(undefined8 param_1,int param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  byte bVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined4 uVar8;
  float fVar9;
  float fVar10;
  float local_74;
  float local_70;
  float local_6c;
  undefined8 local_68;
  float local_60;
  undefined8 local_58;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  
  bVar3 = FUN_0180c170();
  lVar2 = DAT_05292338;
  puVar1 = PTR_DAT_04bb2720;
  if ((bVar3 & 1) == 0) {
    bVar3 = 1;
  }
  else {
    if (DAT_05292338 != 0) {
      local_48 = 0.0;
      local_70 = 0.0;
      fVar9 = (float)*(int *)(param_3 + 0x14) * 5.0 + 2.5;
      local_4c = (float)*(int *)(param_3 + 0x10) * 5.0 + 2.5;
      local_74 = (float)*(int *)(param_3 + 0x20) * 5.0 + 2.5;
      fVar10 = (float)*(int *)(param_3 + 0x24) * 5.0 + 2.5;
      local_68 = (ulong)(uint)local_4c;
      local_58 = (ulong)(uint)local_74;
      local_6c = fVar10;
      local_60 = fVar10;
      local_50 = fVar9;
      local_44 = fVar9;
      if (param_2 - 2U < 4) {
        lVar6 = *(long *)PTR_DAT_04bb2720;
        if (lVar6 == 0) {
          puVar7 = &DAT_055c04a0;
        }
        else {
          puVar7 = &DAT_055c04a0;
          if (*(long *)(lVar6 + 0x330) != 0) {
            puVar7 = (undefined8 *)
                     (**(code **)(*DAT_05aed668 + 0x18))
                               (DAT_05aed668,*(undefined4 *)(lVar6 + 0x338));
            iVar4 = FUN_006bd550(*puVar7,0);
            puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar4 != 0x758f7eaf) {
              puVar7 = &DAT_055c04a0;
            }
          }
        }
        local_4c = (float)FUN_0153e6b0(&local_4c,param_2,*(undefined4 *)(puVar7 + 7));
        lVar6 = *(long *)puVar1;
        local_48 = fVar9;
        local_44 = fVar10;
        if (lVar6 == 0) {
          puVar7 = &DAT_055c04a0;
        }
        else {
          puVar7 = &DAT_055c04a0;
          if (*(long *)(lVar6 + 0x330) != 0) {
            puVar7 = (undefined8 *)
                     (**(code **)(*DAT_05aed668 + 0x18))
                               (DAT_05aed668,*(undefined4 *)(lVar6 + 0x338));
            iVar4 = FUN_006bd550(*puVar7,0);
            puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar4 != 0x758f7eaf) {
              puVar7 = &DAT_055c04a0;
            }
          }
        }
        uVar8 = FUN_0153e6b0(&local_58,param_2,*(undefined4 *)(puVar7 + 7));
        lVar6 = *(long *)puVar1;
        local_58 = CONCAT44(fVar9,uVar8);
        local_50 = fVar10;
        if (lVar6 == 0) {
          puVar7 = &DAT_055c04a0;
        }
        else {
          puVar7 = &DAT_055c04a0;
          if (*(long *)(lVar6 + 0x330) != 0) {
            puVar7 = (undefined8 *)
                     (**(code **)(*DAT_05aed668 + 0x18))
                               (DAT_05aed668,*(undefined4 *)(lVar6 + 0x338));
            iVar4 = FUN_006bd550(*puVar7,0);
            puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar4 != 0x758f7eaf) {
              puVar7 = &DAT_055c04a0;
            }
          }
        }
        uVar8 = FUN_0153e6b0(&local_68,param_2,*(undefined4 *)(puVar7 + 7));
        lVar6 = *(long *)puVar1;
        local_68 = CONCAT44(fVar9,uVar8);
        local_60 = fVar10;
        if (lVar6 == 0) {
          puVar7 = &DAT_055c04a0;
        }
        else {
          puVar7 = &DAT_055c04a0;
          if (*(long *)(lVar6 + 0x330) != 0) {
            puVar7 = (undefined8 *)
                     (**(code **)(*DAT_05aed668 + 0x18))
                               (DAT_05aed668,*(undefined4 *)(lVar6 + 0x338));
            iVar4 = FUN_006bd550(*puVar7,0);
            puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar4 != 0x758f7eaf) {
              puVar7 = &DAT_055c04a0;
            }
          }
        }
        local_74 = (float)FUN_0153e6b0(&local_74,param_2,*(undefined4 *)(puVar7 + 7));
        local_70 = fVar9;
        local_6c = fVar10;
      }
      uVar5 = FUN_017ba18c(lVar2,param_2,&local_4c);
      if ((((uVar5 & 1) == 0) || (uVar5 = FUN_017ba18c(lVar2,param_2,&local_58), (uVar5 & 1) == 0))
         || (uVar5 = FUN_017ba18c(lVar2,param_2,&local_68), (uVar5 & 1) == 0)) {
        bVar3 = 0;
      }
      else {
        bVar3 = FUN_017ba18c(lVar2,param_2,&local_74);
      }
    }
    bVar3 = lVar2 != 0 & bVar3;
  }
  return bVar3;
}

