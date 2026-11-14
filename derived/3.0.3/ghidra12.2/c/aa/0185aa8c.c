
/* WARNING: Removing unreachable block (ram,0x0185aacc) */
/* WARNING: Removing unreachable block (ram,0x0185aadc) */
/* WARNING: Removing unreachable block (ram,0x0185aae8) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint FUN_0185aa8c(float param_1,int param_2,int param_3,undefined8 param_4)

{
  int iVar1;
  uint uVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  float fVar6;
  undefined **local_78;
  undefined4 local_70;
  undefined4 local_6c;
  byte local_68;
  undefined8 local_60;
  undefined4 local_58;
  undefined8 *local_50;
  int local_48;
  int iStack_44;
  
  local_78 = (undefined **)((ulong)local_78 & 0xffffffff00000000);
  lVar4 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar4 != 0) {
    local_48 = param_2;
    iStack_44 = param_3;
    local_50 = &DAT_048f9750;
    if (((*(int *)(lVar4 + 0x20) <= param_2 && param_2 <= *(int *)(lVar4 + 0x30)) &&
        (*(int *)(lVar4 + 0x24) <= param_3)) && (param_3 <= *(int *)(lVar4 + 0x34))) {
      if ((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) {
        if (-500.0 <= param_1) goto LAB_0185ab74;
      }
      else {
        fVar6 = (float)FUN_00963acc(*(long *)(DAT_04cfae30 + 0xa8),&local_50);
        if (fVar6 <= param_1) {
LAB_0185ab74:
          local_58 = 0;
          local_60 = 0;
          local_78 = (undefined **)CONCAT44(local_78._4_4_,1);
          local_60 = 0x20001032;
          local_58 = 0;
          if (((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0xa8) != 0)) &&
             (uVar3 = FUN_00949898(DAT_04cfae30 + 0x28,&local_50,&local_60), (uVar3 & 1) != 0)) {
            local_70 = 0;
            local_78 = &PTR_LAB_049ffa38;
            if (DAT_05aed670 == 0) {
              puVar5 = &DAT_055c04a0;
            }
            else {
              puVar5 = &DAT_055c04a0;
              if (*(long *)(DAT_05aed670 + 0x330) != 0) {
                puVar5 = (undefined8 *)
                         (**(code **)(*DAT_05aed668 + 0x18))
                                   (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
                iVar1 = FUN_006bd550(*puVar5,0);
                puVar5 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar1 != 0x758f7eaf) {
                  puVar5 = &DAT_055c04a0;
                }
              }
            }
            local_6c = *(undefined4 *)(puVar5 + 7);
            local_68 = FUN_017baf44();
            local_68 = local_68 & 1;
            FUN_01a5190c(&local_78,0,&local_50,0);
            uVar2 = FUN_01a1a2a0(param_1,param_2,param_3,param_4);
            goto LAB_0185ad5c;
          }
        }
      }
    }
  }
  uVar2 = 0;
LAB_0185ad5c:
  return uVar2 & 1;
}

