
uint FUN_018bbb18(undefined8 param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined *puVar3;
  int iVar4;
  short *psVar5;
  ulong uVar6;
  long lVar7;
  undefined8 *puVar8;
  float fVar9;
  float fVar10;
  undefined8 local_78;
  int local_70;
  int iStack_6c;
  undefined *local_68;
  undefined4 local_60;
  undefined4 local_5c;
  byte local_58;
  uint local_48;
  uint local_44;
  
  if (DAT_052ae7b0 == 0) {
    return 0;
  }
  fVar10 = (float)*(int *)(param_2 + 0xc) * 5.0 + 2.5;
  fVar9 = (float)*(int *)(param_2 + 8) * 5.0 + 2.5;
  iVar4 = (int)((float)(int)fVar9 / 10.0) - (uint)(fVar9 < 0.0);
  iVar2 = (int)((float)(int)fVar10 / 10.0) - (uint)(fVar10 < 0.0);
  if (((DAT_052ae7c8 <= iVar4 && iVar4 <= DAT_052ae7d8) && DAT_052ae7cc <= iVar2) &&
      iVar2 <= DAT_052ae7dc) {
    lVar7 = (long)(int)((iVar4 - DAT_052ae7c8) + DAT_052ae7a8 * (iVar2 - DAT_052ae7cc));
    if (DAT_052ae7ac <= (uint)(iVar2 - DAT_052ae7cc) || DAT_052ae7a8 <= (uint)(iVar4 - DAT_052ae7c8)
       ) {
      lVar7 = 0;
    }
    if (*(char *)(DAT_052ae7b0 + lVar7 * 8 + 4) == '\0') {
      local_60 = 0;
      local_68 = PTR_DAT_04bbfe68 + 0x10;
      if (DAT_05aed670 == 0) {
        puVar8 = &DAT_055c04a0;
      }
      else {
        puVar8 = &DAT_055c04a0;
        if (*(long *)(DAT_05aed670 + 0x330) != 0) {
          puVar8 = (undefined8 *)
                   (**(code **)(*DAT_05aed668 + 0x18))
                             (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
          iVar4 = FUN_006bd550(*puVar8,0);
          puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar4 != 0x758f7eaf) {
            puVar8 = &DAT_055c04a0;
          }
        }
      }
      local_5c = *(undefined4 *)(puVar8 + 7);
      local_58 = FUN_017baf44();
      local_58 = local_58 & 1;
      local_78 = PTR_DAT_04bb2010 + 0x10;
      local_70 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
      iStack_6c = (int)((float)(int)fVar10 / 5.0) - (uint)(fVar10 < 0.0);
      psVar5 = (short *)FUN_01a5190c(&local_68,0,&local_78,0);
      puVar3 = PTR_DAT_04bb4008;
      uVar1 = *param_3;
      uVar6 = FUN_01a12b00(*(undefined8 *)PTR_DAT_04bb4008,uVar1);
      if ((uVar6 & 1) == 0) {
        return 1;
      }
      if (*psVar5 != -2) {
        local_78 = (undefined *)
                   CONCAT44(*(undefined4 *)(psVar5 + 2),
                            CONCAT13(*(undefined1 *)((long)psVar5 + 3),
                                     CONCAT12((char)psVar5[1],*psVar5)));
        local_44 = FUN_01241ca0(&local_78);
        if (local_44 != 0x13) {
          local_48 = 0;
          uVar6 = FUN_01a12d50(*(undefined8 *)puVar3,&local_48,uVar1);
          if ((uVar6 & 1) == 0) {
            return 0;
          }
          return local_48 >> (ulong)(local_44 & 0x1f) & 1;
        }
      }
    }
  }
  return 0;
}

