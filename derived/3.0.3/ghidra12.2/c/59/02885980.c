
void FUN_02885980(undefined8 param_1,undefined8 param_2,undefined4 param_3,long param_4,
                 undefined8 param_5,undefined8 param_6,undefined4 *param_7)

{
  float *pfVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  float *pfVar7;
  undefined8 *puVar8;
  uint local_68c;
  float local_688 [2];
  float local_680 [382];
  undefined *local_88;
  undefined4 local_80;
  undefined4 local_7c;
  byte local_78;
  undefined *local_70;
  int local_68;
  int iStack_64;
  
  iVar2 = *(int *)(param_4 + 8);
  iVar3 = *(int *)(param_4 + 0xc);
  local_80 = 0;
  local_70 = PTR_DAT_04bb2010 + 0x10;
  local_68 = iVar2;
  iStack_64 = iVar3;
  if (DAT_05aed670 == 0) {
    puVar8 = &DAT_055c04a0;
  }
  else {
    puVar8 = &DAT_055c04a0;
    if (*(long *)(DAT_05aed670 + 0x330) != 0) {
      puVar8 = (undefined8 *)
               (**(code **)(*DAT_05aed668 + 0x18))
                         (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
      iVar5 = FUN_006bd550(*puVar8,0);
      puVar8 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar5 != 0x758f7eaf) {
        puVar8 = &DAT_055c04a0;
      }
    }
  }
  local_7c = *(undefined4 *)(puVar8 + 7);
  local_78 = FUN_017baf44();
  local_78 = local_78 & 1;
  local_68c = 0;
  local_88 = PTR_DAT_04bb6268 + 0x10;
  uVar6 = FUN_0291e130(local_688,&local_68c,0);
  if (((uVar6 & 1) != 0) && (local_68c != 0)) {
    uVar6 = 0;
    pfVar7 = local_688;
    do {
      pfVar1 = pfVar7;
      if (0x7f < uVar6) {
        pfVar1 = local_688;
      }
      iVar5 = (int)((float)(int)*pfVar1 / 5.0) - (uint)(*pfVar1 < 0.0);
      if (iVar5 + -2 <= iVar2 && iVar2 <= iVar5 + 1) {
        pfVar1 = pfVar7 + 2;
        if (0x7f < uVar6) {
          pfVar1 = local_680;
        }
        iVar4 = (int)((float)(int)*pfVar1 / 5.0) - (uint)(*pfVar1 < 0.0);
        if (iVar4 + -2 <= iVar3 && iVar3 <= iVar4 + 1) {
          if (param_7 != (undefined4 *)0x0) {
            *param_7 = (int)uVar6;
          }
          local_68 = iVar5;
          iStack_64 = iVar4;
          break;
        }
      }
      uVar6 = uVar6 + 1;
      pfVar7 = pfVar7 + 3;
    } while (local_68c != uVar6);
  }
  FUN_01a50448(param_1,&local_88,param_3,&local_70,param_5,param_6);
  return;
}

