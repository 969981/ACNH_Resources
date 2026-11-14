
uint FUN_0181fbb4(long param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  float fVar7;
  float fVar8;
  undefined *local_68;
  undefined8 uStack_60;
  undefined *local_58;
  uint local_50;
  uint uStack_4c;
  undefined **local_48;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  undefined8 local_28;
  
  puVar2 = PTR_DAT_04bb2010;
  local_58 = PTR_DAT_04bb2010 + 0x10;
  local_50 = (int)((float)(int)*(float *)(param_1 + 0x334) / 5.0) -
             (uint)(*(float *)(param_1 + 0x334) < 0.0);
  uStack_4c = (int)((float)(int)*(float *)(param_1 + 0x33c) / 5.0) -
              (uint)(*(float *)(param_1 + 0x33c) < 0.0);
  uVar5 = FUN_01a1ab90(&local_58);
  if (((uVar5 & 1) == 0) ||
     (iVar3 = uStack_4c - ((uStack_4c & 0x80000001) == 1),
     iVar1 = local_50 - ((local_50 & 0x80000001) == 1),
     fVar7 = *(float *)(param_1 + 0x334) -
             ((float)iVar1 * 5.0 + (float)(iVar1 + 1) * 5.0 + 5.0) * 0.5,
     fVar8 = *(float *)(param_1 + 0x33c) -
             ((float)iVar3 * 5.0 + (float)(iVar3 + 1) * 5.0 + 5.0) * 0.5,
     9.765625 <= fVar8 * fVar8 + fVar7 * fVar7)) {
    local_48 = (undefined **)
               (CONCAT44(*(undefined4 *)(param_1 + 0x4a8),
                         (int)CONCAT71(local_48._1_7_,*(undefined1 *)(param_1 + 0x494))) ^ 1);
    uVar4 = FUN_01820f40(&local_58,&local_58,&local_48);
    uVar4 = uVar4 ^ 1;
  }
  else {
    local_28 = 0xfffe;
    FUN_0277d4ac(&local_28);
    local_68 = puVar2 + 0x10;
    uStack_60 = 0;
    local_40 = 0;
    local_48 = &PTR_LAB_049ffa38;
    if (DAT_05aed670 == 0) {
      puVar6 = &DAT_055c04a0;
    }
    else {
      puVar6 = &DAT_055c04a0;
      if (*(long *)(DAT_05aed670 + 0x330) != 0) {
        puVar6 = (undefined8 *)
                 (**(code **)(*DAT_05aed668 + 0x18))
                           (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
        iVar3 = FUN_006bd550(*puVar6,0);
        puVar6 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar3 != 0x758f7eaf) {
          puVar6 = &DAT_055c04a0;
        }
      }
    }
    local_3c = *(undefined4 *)(puVar6 + 7);
    local_38 = FUN_017baf44();
    local_38 = local_38 & 1;
    puVar6 = (undefined8 *)FUN_01a5190c(&local_48,0,&local_58,&local_68);
    local_28 = *puVar6;
    iVar3 = FUN_0277ebd0(&local_28);
    if (((iVar3 == 3) && (uVar5 = FUN_0277e294(&local_28), (uVar5 & 1) != 0)) &&
       (uVar5 = FUN_0097b580(&local_28,&local_68,&local_58,1), (uVar5 & 1) == 0)) {
      uVar4 = 0;
    }
    else {
      uVar4 = 1;
    }
  }
  return uVar4 & 1;
}

