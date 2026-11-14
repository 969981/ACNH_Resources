
bool FUN_018aa50c(uint *param_1,float *param_2)

{
  undefined *puVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined *local_68;
  int local_60;
  int iStack_5c;
  undefined *local_58;
  undefined4 local_50;
  undefined4 local_4c;
  byte local_48;
  undefined *local_40;
  undefined8 local_38;
  
  if (*(long *)(param_1 + 2) == 0) {
    return true;
  }
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_38 = 0;
  local_50 = 0;
  local_58 = PTR_DAT_04bbfe68 + 0x10;
  local_40 = puVar1;
  if (DAT_05aed670 == 0) {
    puVar5 = &DAT_055c04a0;
  }
  else {
    puVar5 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar5 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar3 = FUN_006bd550(*puVar5,0);
      puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar3 != 0x758f7eaf) {
        puVar5 = &DAT_055c04a0;
      }
    }
  }
  local_4c = *(undefined4 *)(puVar5 + 7);
  local_48 = FUN_017baf44();
  local_48 = local_48 & 1;
  local_60 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
  iStack_5c = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
  local_68 = puVar1;
  FUN_01a5190c(&local_58,0,&local_68,&local_40);
  bVar2 = true;
  if ((DAT_052ae820 <= (int)local_38) && ((int)local_38 <= DAT_052ae830)) {
    if ((DAT_052ae824 <= local_38._4_4_) && (local_38._4_4_ <= DAT_052ae834)) {
      lVar4 = (long)(int)(((int)local_38 - DAT_052ae820) +
                         *param_1 * (local_38._4_4_ - DAT_052ae824));
      if (param_1[1] <= (uint)(local_38._4_4_ - DAT_052ae824) ||
          *param_1 <= (uint)((int)local_38 - DAT_052ae820)) {
        lVar4 = 0;
      }
      bVar2 = *(char *)(*(long *)(param_1 + 2) + lVar4) != '\0';
    }
  }
  return bVar2;
}

