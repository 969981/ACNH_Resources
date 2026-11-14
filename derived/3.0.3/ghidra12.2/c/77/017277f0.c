
void FUN_017277f0(char *param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  long lVar9;
  undefined8 local_98;
  undefined4 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined *local_78;
  long local_70;
  undefined1 local_68;
  
  puVar3 = PTR_DAT_04bcadf8;
  puVar2 = PTR_s_PickUp_04bb4a48;
  if (*param_1 != '\0') {
    lVar9 = 0;
    puVar1 = PTR_DAT_04bcadf8 + 0x10;
    do {
      uVar8 = (uint)lVar9;
      lVar6 = *(long *)(puVar2 + lVar9 * 8 + 0x50);
      if (uVar8 < 8) {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar8);
        if ((uVar8 + 7 < 0xf) &&
           (local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar8),
           ((byte)param_1[1] >> (ulong)(uVar8 & 7) & 1) != 0)) {
          lVar7 = *(long *)(param_2 + 0x10);
          if (lVar7 == 0) {
            local_88 = 0;
            local_80 = 0;
          }
          else {
            local_88 = 0;
            local_80 = 0;
            lVar4 = (**(code **)(**(long **)(*(long *)(lVar7 + 0x30) + 0x18) + 0x20))();
            if (((lVar6 != 0) && (*(char *)(lVar4 + 0x78) != '\0')) &&
               (uVar5 = FUN_03bf46a8(lVar7,"searchAndEmit(%s)",lVar6), (uVar5 & 1) != 0)) {
              local_68 = 0;
              local_78 = puVar1;
              local_70 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar7 + 0x30) + 0x18),lVar6);
              if (local_70 != 0) {
                FUN_03bf47b0(lVar7,&local_78,&local_88);
              }
            }
          }
        }
      }
      if (uVar8 < 8) {
        local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar8);
        if ((uVar8 + 7 < 0xf) &&
           (local_78 = (undefined *)CONCAT44(local_78._4_4_,uVar8),
           ((byte)param_1[2] >> (ulong)(uVar8 & 7) & 1) != 0)) {
          lVar7 = *(long *)(param_2 + 8);
          if (lVar7 == 0) {
            local_98 = 0;
            local_90 = 0;
          }
          else {
            local_98 = 0;
            local_90 = 0;
            lVar4 = (**(code **)(**(long **)(*(long *)(lVar7 + 0x30) + 0x18) + 0x20))();
            if (((lVar6 != 0) && (*(char *)(lVar4 + 0x78) != '\0')) &&
               (uVar5 = FUN_03bf46a8(lVar7,"searchAndEmit(%s)",lVar6), (uVar5 & 1) != 0)) {
              local_78 = puVar3 + 0x10;
              local_68 = 0;
              local_70 = FUN_03bf5ec0(*(undefined8 *)(*(long *)(lVar7 + 0x30) + 0x18),lVar6);
              if (local_70 != 0) {
                FUN_03bf47b0(lVar7,&local_78,&local_98);
              }
            }
          }
        }
      }
      lVar9 = lVar9 + 1;
    } while (lVar9 != 8);
  }
  return;
}

