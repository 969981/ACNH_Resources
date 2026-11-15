
uint FUN_01fc229c(long param_1)

{
  undefined *puVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long lVar6;
  float fVar7;
  float fVar8;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  undefined *local_40;
  int local_38;
  int iStack_34;
  
  puVar1 = PTR_DAT_04bb2640;
  if (DAT_05292338 == 0) {
    return 0;
  }
  if ((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) {
    puVar4 = (undefined8 *)
             (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                       (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(DAT_05aed670 + 0x338));
    iVar2 = FUN_006bd550(*puVar4,0);
    uVar3 = 0;
    if (iVar2 != 0x758f7eaf) goto LAB_01fc2344;
    if ((((DAT_05aed670 != 0) && (*(long *)(DAT_05aed670 + 0x330) != 0)) &&
        (*(int *)(*(long *)(DAT_05aed670 + 0x330) + 0x244) != 0)) &&
       (uVar5 = FUN_01fa3304(param_1), (uVar5 & 1) == 0)) {
      lVar6 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      fVar7 = *(float *)(lVar6 + 0x278);
      fVar8 = *(float *)(lVar6 + 0x280);
      local_50 = 0;
      local_40 = PTR_DAT_04bb2010 + 0x10;
      local_38 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
      iStack_34 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
      if (DAT_05aed670 == 0) {
        puVar4 = &DAT_055c04a0;
      }
      else {
        puVar4 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar4 = (undefined8 *)
                   (**(code **)(**(long **)puVar1 + 0x18))
                             (*(long **)puVar1,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar2 = FUN_006bd550(*puVar4,0);
          puVar4 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar2 != 0x758f7eaf) {
            puVar4 = &DAT_055c04a0;
          }
        }
      }
      local_4c = *(undefined4 *)(puVar4 + 7);
      local_48 = FUN_017baf44();
      local_48 = local_48 & 1;
      local_58 = PTR_DAT_04bb3140 + 0x10;
      uVar3 = FUN_01a4fd6c(&local_58,6,&local_40,1);
      goto LAB_01fc2344;
    }
  }
  uVar3 = 0;
LAB_01fc2344:
  return uVar3 & 1;
}

