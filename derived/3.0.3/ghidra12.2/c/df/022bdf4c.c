
uint FUN_022bdf4c(long param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  float fVar8;
  undefined *local_68;
  float local_60;
  undefined4 local_5c;
  byte local_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined *local_38;
  undefined8 uStack_30;
  byte local_24 [4];
  
  local_40 = 0;
  local_50 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_48 = PTR_DAT_04bb2010 + 0x10;
  uStack_30 = 0;
  local_38 = puStack_48;
  uVar5 = FUN_022ba528(param_1,&local_50,0,param_2,param_3);
  if ((uVar5 & 1) != 0) {
    local_24[0] = *(byte *)(param_1 + 0x10);
    if (7 < local_24[0]) {
      local_24[0] = 0xff;
    }
    local_60 = (float)local_40._4_4_ * 5.0 + 5.0;
    local_68 = (undefined *)CONCAT44(local_68._4_4_,(float)(int)local_40 * 5.0 + 5.0);
    lVar6 = FUN_0251b3b0(local_24,0);
    if ((lVar6 != 0) && (*(long *)PTR_DAT_04bb27c8 != 0)) {
      fVar8 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_68,0);
      fVar8 = fVar8 - *(float *)(lVar6 + 4);
      bVar1 = true;
      bVar2 = false;
      if (fVar8 <= 5.0) {
        bVar1 = false;
        bVar2 = true;
        if (!NAN(fVar8)) {
          bVar1 = fVar8 < -5.0;
          bVar2 = false;
        }
      }
      if (bVar1 == bVar2) {
        local_60 = 0.0;
        lVar6 = *(long *)PTR_DAT_04bb2720;
        if (lVar6 == 0) {
          puVar7 = &DAT_055c04a0;
        }
        else {
          puVar7 = &DAT_055c04a0;
          if (*(long *)(lVar6 + 0x330) != 0) {
            puVar7 = (undefined8 *)
                     (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                               (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar6 + 0x338));
            iVar3 = FUN_006bd550(*puVar7,0);
            puVar7 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar3 != 0x758f7eaf) {
              puVar7 = &DAT_055c04a0;
            }
          }
        }
        local_5c = *(undefined4 *)(puVar7 + 7);
        local_58 = FUN_017baf44();
        local_58 = local_58 & 1;
        local_68 = PTR_DAT_04bb6268 + 0x10;
        uVar4 = FUN_011f3270(&local_68,0,&local_50);
        goto LAB_022be02c;
      }
    }
  }
  uVar4 = 0;
LAB_022be02c:
  return uVar4 & 1;
}

